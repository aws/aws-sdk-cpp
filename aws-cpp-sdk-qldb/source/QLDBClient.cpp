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

#include <aws/qldb/QLDBClient.h>
#include <aws/qldb/QLDBErrorMarshaller.h>
#include <aws/qldb/QLDBEndpointProvider.h>
#include <aws/qldb/model/CancelJournalKinesisStreamRequest.h>
#include <aws/qldb/model/CreateLedgerRequest.h>
#include <aws/qldb/model/DeleteLedgerRequest.h>
#include <aws/qldb/model/DescribeJournalKinesisStreamRequest.h>
#include <aws/qldb/model/DescribeJournalS3ExportRequest.h>
#include <aws/qldb/model/DescribeLedgerRequest.h>
#include <aws/qldb/model/ExportJournalToS3Request.h>
#include <aws/qldb/model/GetBlockRequest.h>
#include <aws/qldb/model/GetDigestRequest.h>
#include <aws/qldb/model/GetRevisionRequest.h>
#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerRequest.h>
#include <aws/qldb/model/ListLedgersRequest.h>
#include <aws/qldb/model/ListTagsForResourceRequest.h>
#include <aws/qldb/model/StreamJournalToKinesisRequest.h>
#include <aws/qldb/model/TagResourceRequest.h>
#include <aws/qldb/model/UntagResourceRequest.h>
#include <aws/qldb/model/UpdateLedgerRequest.h>
#include <aws/qldb/model/UpdateLedgerPermissionsModeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QLDB;
using namespace Aws::QLDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* QLDBClient::SERVICE_NAME = "qldb";
const char* QLDBClient::ALLOCATION_TAG = "QLDBClient";

QLDBClient::QLDBClient(const QLDB::QLDBClientConfiguration& clientConfiguration,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const AWSCredentials& credentials,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider,
                       const QLDB::QLDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<QLDBEndpointProviderBase> endpointProvider,
                       const QLDB::QLDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QLDBClient::QLDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QLDBClient::QLDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QLDBClient::~QLDBClient()
{
}

std::shared_ptr<QLDBEndpointProviderBase>& QLDBClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QLDBClient::init(const QLDB::QLDBClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QLDB");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void QLDBClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJournalKinesisStreamOutcome QLDBClient::CancelJournalKinesisStream(const CancelJournalKinesisStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJournalKinesisStream", "Required field: LedgerName, is not set");
    return CancelJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJournalKinesisStream", "Required field: StreamId, is not set");
    return CancelJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  return CancelJournalKinesisStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelJournalKinesisStreamOutcomeCallable QLDBClient::CancelJournalKinesisStreamCallable(const CancelJournalKinesisStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJournalKinesisStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJournalKinesisStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::CancelJournalKinesisStreamAsync(const CancelJournalKinesisStreamRequest& request, const CancelJournalKinesisStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelJournalKinesisStream(request), context);
    } );
}

CreateLedgerOutcome QLDBClient::CreateLedger(const CreateLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers");
  return CreateLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLedgerOutcomeCallable QLDBClient::CreateLedgerCallable(const CreateLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::CreateLedgerAsync(const CreateLedgerRequest& request, const CreateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLedger(request), context);
    } );
}

DeleteLedgerOutcome QLDBClient::DeleteLedger(const DeleteLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLedger", "Required field: Name, is not set");
    return DeleteLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLedgerOutcomeCallable QLDBClient::DeleteLedgerCallable(const DeleteLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::DeleteLedgerAsync(const DeleteLedgerRequest& request, const DeleteLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLedger(request), context);
    } );
}

DescribeJournalKinesisStreamOutcome QLDBClient::DescribeJournalKinesisStream(const DescribeJournalKinesisStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalKinesisStream", "Required field: LedgerName, is not set");
    return DescribeJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalKinesisStream", "Required field: StreamId, is not set");
    return DescribeJournalKinesisStreamOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJournalKinesisStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  return DescribeJournalKinesisStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJournalKinesisStreamOutcomeCallable QLDBClient::DescribeJournalKinesisStreamCallable(const DescribeJournalKinesisStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJournalKinesisStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJournalKinesisStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::DescribeJournalKinesisStreamAsync(const DescribeJournalKinesisStreamRequest& request, const DescribeJournalKinesisStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJournalKinesisStream(request), context);
    } );
}

DescribeJournalS3ExportOutcome QLDBClient::DescribeJournalS3Export(const DescribeJournalS3ExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJournalS3Export, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalS3Export", "Required field: Name, is not set");
    return DescribeJournalS3ExportOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.ExportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJournalS3Export", "Required field: ExportId, is not set");
    return DescribeJournalS3ExportOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJournalS3Export, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportId());
  return DescribeJournalS3ExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJournalS3ExportOutcomeCallable QLDBClient::DescribeJournalS3ExportCallable(const DescribeJournalS3ExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJournalS3ExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJournalS3Export(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::DescribeJournalS3ExportAsync(const DescribeJournalS3ExportRequest& request, const DescribeJournalS3ExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJournalS3Export(request), context);
    } );
}

DescribeLedgerOutcome QLDBClient::DescribeLedger(const DescribeLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLedger", "Required field: Name, is not set");
    return DescribeLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLedgerOutcomeCallable QLDBClient::DescribeLedgerCallable(const DescribeLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::DescribeLedgerAsync(const DescribeLedgerRequest& request, const DescribeLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLedger(request), context);
    } );
}

ExportJournalToS3Outcome QLDBClient::ExportJournalToS3(const ExportJournalToS3Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportJournalToS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportJournalToS3", "Required field: Name, is not set");
    return ExportJournalToS3Outcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportJournalToS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ExportJournalToS3Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportJournalToS3OutcomeCallable QLDBClient::ExportJournalToS3Callable(const ExportJournalToS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportJournalToS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportJournalToS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ExportJournalToS3Async(const ExportJournalToS3Request& request, const ExportJournalToS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportJournalToS3(request), context);
    } );
}

GetBlockOutcome QLDBClient::GetBlock(const GetBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlock", "Required field: Name, is not set");
    return GetBlockOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/block");
  return GetBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlockOutcomeCallable QLDBClient::GetBlockCallable(const GetBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::GetBlockAsync(const GetBlockRequest& request, const GetBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBlock(request), context);
    } );
}

GetDigestOutcome QLDBClient::GetDigest(const GetDigestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDigest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDigest", "Required field: Name, is not set");
    return GetDigestOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDigest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/digest");
  return GetDigestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDigestOutcomeCallable QLDBClient::GetDigestCallable(const GetDigestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDigestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDigest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::GetDigestAsync(const GetDigestRequest& request, const GetDigestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDigest(request), context);
    } );
}

GetRevisionOutcome QLDBClient::GetRevision(const GetRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: Name, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revision");
  return GetRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRevisionOutcomeCallable QLDBClient::GetRevisionCallable(const GetRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::GetRevisionAsync(const GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRevision(request), context);
    } );
}

ListJournalKinesisStreamsForLedgerOutcome QLDBClient::ListJournalKinesisStreamsForLedger(const ListJournalKinesisStreamsForLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalKinesisStreamsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJournalKinesisStreamsForLedger", "Required field: LedgerName, is not set");
    return ListJournalKinesisStreamsForLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalKinesisStreamsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams");
  return ListJournalKinesisStreamsForLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJournalKinesisStreamsForLedgerOutcomeCallable QLDBClient::ListJournalKinesisStreamsForLedgerCallable(const ListJournalKinesisStreamsForLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJournalKinesisStreamsForLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJournalKinesisStreamsForLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ListJournalKinesisStreamsForLedgerAsync(const ListJournalKinesisStreamsForLedgerRequest& request, const ListJournalKinesisStreamsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJournalKinesisStreamsForLedger(request), context);
    } );
}

ListJournalS3ExportsOutcome QLDBClient::ListJournalS3Exports(const ListJournalS3ExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalS3Exports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalS3Exports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ListJournalS3ExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJournalS3ExportsOutcomeCallable QLDBClient::ListJournalS3ExportsCallable(const ListJournalS3ExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJournalS3ExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJournalS3Exports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ListJournalS3ExportsAsync(const ListJournalS3ExportsRequest& request, const ListJournalS3ExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJournalS3Exports(request), context);
    } );
}

ListJournalS3ExportsForLedgerOutcome QLDBClient::ListJournalS3ExportsForLedger(const ListJournalS3ExportsForLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJournalS3ExportsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJournalS3ExportsForLedger", "Required field: Name, is not set");
    return ListJournalS3ExportsForLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJournalS3ExportsForLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-s3-exports");
  return ListJournalS3ExportsForLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJournalS3ExportsForLedgerOutcomeCallable QLDBClient::ListJournalS3ExportsForLedgerCallable(const ListJournalS3ExportsForLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJournalS3ExportsForLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJournalS3ExportsForLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ListJournalS3ExportsForLedgerAsync(const ListJournalS3ExportsForLedgerRequest& request, const ListJournalS3ExportsForLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJournalS3ExportsForLedger(request), context);
    } );
}

ListLedgersOutcome QLDBClient::ListLedgers(const ListLedgersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLedgers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLedgers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers");
  return ListLedgersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLedgersOutcomeCallable QLDBClient::ListLedgersCallable(const ListLedgersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLedgersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLedgers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ListLedgersAsync(const ListLedgersRequest& request, const ListLedgersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLedgers(request), context);
    } );
}

ListTagsForResourceOutcome QLDBClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable QLDBClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StreamJournalToKinesisOutcome QLDBClient::StreamJournalToKinesis(const StreamJournalToKinesisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StreamJournalToKinesis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LedgerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StreamJournalToKinesis", "Required field: LedgerName, is not set");
    return StreamJournalToKinesisOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LedgerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StreamJournalToKinesis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLedgerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/journal-kinesis-streams");
  return StreamJournalToKinesisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StreamJournalToKinesisOutcomeCallable QLDBClient::StreamJournalToKinesisCallable(const StreamJournalToKinesisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StreamJournalToKinesisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StreamJournalToKinesis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::StreamJournalToKinesisAsync(const StreamJournalToKinesisRequest& request, const StreamJournalToKinesisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StreamJournalToKinesis(request), context);
    } );
}

TagResourceOutcome QLDBClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable QLDBClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome QLDBClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable QLDBClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLedgerOutcome QLDBClient::UpdateLedger(const UpdateLedgerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLedger", "Required field: Name, is not set");
    return UpdateLedgerOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLedger, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateLedgerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLedgerOutcomeCallable QLDBClient::UpdateLedgerCallable(const UpdateLedgerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLedgerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLedger(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::UpdateLedgerAsync(const UpdateLedgerRequest& request, const UpdateLedgerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLedger(request), context);
    } );
}

UpdateLedgerPermissionsModeOutcome QLDBClient::UpdateLedgerPermissionsMode(const UpdateLedgerPermissionsModeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLedgerPermissionsMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLedgerPermissionsMode", "Required field: Name, is not set");
    return UpdateLedgerPermissionsModeOutcome(Aws::Client::AWSError<QLDBErrors>(QLDBErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLedgerPermissionsMode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ledgers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions-mode");
  return UpdateLedgerPermissionsModeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLedgerPermissionsModeOutcomeCallable QLDBClient::UpdateLedgerPermissionsModeCallable(const UpdateLedgerPermissionsModeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLedgerPermissionsModeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLedgerPermissionsMode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBClient::UpdateLedgerPermissionsModeAsync(const UpdateLedgerPermissionsModeRequest& request, const UpdateLedgerPermissionsModeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLedgerPermissionsMode(request), context);
    } );
}

