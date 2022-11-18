/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/ebs/EBSClient.h>
#include <aws/ebs/EBSErrorMarshaller.h>
#include <aws/ebs/EBSEndpointProvider.h>
#include <aws/ebs/model/CompleteSnapshotRequest.h>
#include <aws/ebs/model/GetSnapshotBlockRequest.h>
#include <aws/ebs/model/ListChangedBlocksRequest.h>
#include <aws/ebs/model/ListSnapshotBlocksRequest.h>
#include <aws/ebs/model/PutSnapshotBlockRequest.h>
#include <aws/ebs/model/StartSnapshotRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EBS;
using namespace Aws::EBS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EBSClient::SERVICE_NAME = "ebs";
const char* EBSClient::ALLOCATION_TAG = "EBSClient";

EBSClient::EBSClient(const EBS::EBSClientConfiguration& clientConfiguration,
                     std::shared_ptr<EBSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const AWSCredentials& credentials,
                     std::shared_ptr<EBSEndpointProviderBase> endpointProvider,
                     const EBS::EBSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EBSEndpointProviderBase> endpointProvider,
                     const EBS::EBSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EBSClient::EBSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EBSClient::~EBSClient()
{
}

std::shared_ptr<EBSEndpointProviderBase>& EBSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EBSClient::init(const EBS::EBSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EBS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EBSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CompleteSnapshotOutcome EBSClient::CompleteSnapshot(const CompleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteSnapshot", "Required field: SnapshotId, is not set");
    return CompleteSnapshotOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.ChangedBlocksCountHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteSnapshot", "Required field: ChangedBlocksCount, is not set");
    return CompleteSnapshotOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangedBlocksCount]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/completion/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  return CompleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CompleteSnapshotOutcomeCallable EBSClient::CompleteSnapshotCallable(const CompleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::CompleteSnapshotAsync(const CompleteSnapshotRequest& request, const CompleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompleteSnapshot(request), context);
    } );
}

GetSnapshotBlockOutcome EBSClient::GetSnapshotBlock(const GetSnapshotBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: SnapshotId, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.BlockIndexHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockIndex, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockIndex]", false));
  }
  if (!request.BlockTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockToken, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/blocks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlockIndex());
  return GetSnapshotBlockOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetSnapshotBlockOutcomeCallable EBSClient::GetSnapshotBlockCallable(const GetSnapshotBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshotBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::GetSnapshotBlockAsync(const GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSnapshotBlock(request), context);
    } );
}

ListChangedBlocksOutcome EBSClient::ListChangedBlocks(const ListChangedBlocksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChangedBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SecondSnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChangedBlocks", "Required field: SecondSnapshotId, is not set");
    return ListChangedBlocksOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecondSnapshotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChangedBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecondSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/changedblocks");
  return ListChangedBlocksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChangedBlocksOutcomeCallable EBSClient::ListChangedBlocksCallable(const ListChangedBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangedBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangedBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::ListChangedBlocksAsync(const ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChangedBlocks(request), context);
    } );
}

ListSnapshotBlocksOutcome EBSClient::ListSnapshotBlocks(const ListSnapshotBlocksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSnapshotBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSnapshotBlocks", "Required field: SnapshotId, is not set");
    return ListSnapshotBlocksOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSnapshotBlocks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/blocks");
  return ListSnapshotBlocksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSnapshotBlocksOutcomeCallable EBSClient::ListSnapshotBlocksCallable(const ListSnapshotBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSnapshotBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSnapshotBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::ListSnapshotBlocksAsync(const ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSnapshotBlocks(request), context);
    } );
}

PutSnapshotBlockOutcome EBSClient::PutSnapshotBlock(const PutSnapshotBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: SnapshotId, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.BlockIndexHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: BlockIndex, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockIndex]", false));
  }
  if (!request.DataLengthHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: DataLength, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataLength]", false));
  }
  if (!request.ChecksumHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: Checksum, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Checksum]", false));
  }
  if (!request.ChecksumAlgorithmHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: ChecksumAlgorithm, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChecksumAlgorithm]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/blocks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlockIndex());
  return PutSnapshotBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSnapshotBlockOutcomeCallable EBSClient::PutSnapshotBlockCallable(const PutSnapshotBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSnapshotBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSnapshotBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::PutSnapshotBlockAsync(const PutSnapshotBlockRequest& request, const PutSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSnapshotBlock(request), context);
    } );
}

StartSnapshotOutcome EBSClient::StartSnapshot(const StartSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  return StartSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSnapshotOutcomeCallable EBSClient::StartSnapshotCallable(const StartSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::StartSnapshotAsync(const StartSnapshotRequest& request, const StartSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSnapshot(request), context);
    } );
}

