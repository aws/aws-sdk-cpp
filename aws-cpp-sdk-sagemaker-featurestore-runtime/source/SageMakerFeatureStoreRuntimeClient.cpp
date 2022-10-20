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

#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeClient.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpoint.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeErrorMarshaller.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeEndpointProvider.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/DeleteRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/GetRecordRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/PutRecordRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerFeatureStoreRuntime;
using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider::SageMakerFeatureStoreRuntimeResolveEndpointOutcome;


const char* SageMakerFeatureStoreRuntimeClient::SERVICE_NAME = "sagemaker";
const char* SageMakerFeatureStoreRuntimeClient::ALLOCATION_TAG = "SageMakerFeatureStoreRuntimeClient";

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const Client::ClientConfiguration& clientConfiguration,
                                                                       std::shared_ptr<Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                                                                       std::shared_ptr<Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider> endpointProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       std::shared_ptr<Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider> endpointProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const AWSCredentials& credentials,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

SageMakerFeatureStoreRuntimeClient::SageMakerFeatureStoreRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerFeatureStoreRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerFeatureStoreRuntime::Endpoint::SageMakerFeatureStoreRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SageMakerFeatureStoreRuntimeClient::~SageMakerFeatureStoreRuntimeClient()
{
}

void SageMakerFeatureStoreRuntimeClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker FeatureStore Runtime");
  AWS_UNREFERENCED_PARAM(config);
}

void SageMakerFeatureStoreRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

BatchGetRecordOutcome SageMakerFeatureStoreRuntimeClient::BatchGetRecord(const BatchGetRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRecordOutcomeCallable SageMakerFeatureStoreRuntimeClient::BatchGetRecordCallable(const BatchGetRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerFeatureStoreRuntimeClient::BatchGetRecordAsync(const BatchGetRecordRequest& request, const BatchGetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetRecord(request), context);
    } );
}

DeleteRecordOutcome SageMakerFeatureStoreRuntimeClient::DeleteRecord(const DeleteRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: FeatureGroupName, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordIdentifierValueAsString]", false));
  }
  if (!request.EventTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecord", "Required field: EventTime, is not set");
    return DeleteRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventTime]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecordOutcomeCallable SageMakerFeatureStoreRuntimeClient::DeleteRecordCallable(const DeleteRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerFeatureStoreRuntimeClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecord(request), context);
    } );
}

GetRecordOutcome SageMakerFeatureStoreRuntimeClient::GetRecord(const GetRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: FeatureGroupName, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  if (!request.RecordIdentifierValueAsStringHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecord", "Required field: RecordIdentifierValueAsString, is not set");
    return GetRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecordIdentifierValueAsString]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecordOutcomeCallable SageMakerFeatureStoreRuntimeClient::GetRecordCallable(const GetRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerFeatureStoreRuntimeClient::GetRecordAsync(const GetRecordRequest& request, const GetRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecord(request), context);
    } );
}

PutRecordOutcome SageMakerFeatureStoreRuntimeClient::PutRecord(const PutRecordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRecord", "Required field: FeatureGroupName, is not set");
    return PutRecordOutcome(Aws::Client::AWSError<SageMakerFeatureStoreRuntimeErrors>(SageMakerFeatureStoreRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecord, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutRecordOutcomeCallable SageMakerFeatureStoreRuntimeClient::PutRecordCallable(const PutRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerFeatureStoreRuntimeClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecord(request), context);
    } );
}

