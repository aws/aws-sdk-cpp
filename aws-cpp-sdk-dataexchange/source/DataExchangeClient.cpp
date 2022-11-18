/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

#include <aws/dataexchange/DataExchangeClient.h>
#include <aws/dataexchange/DataExchangeErrorMarshaller.h>
#include <aws/dataexchange/DataExchangeEndpointProvider.h>
#include <aws/dataexchange/model/CancelJobRequest.h>
#include <aws/dataexchange/model/CreateDataSetRequest.h>
#include <aws/dataexchange/model/CreateEventActionRequest.h>
#include <aws/dataexchange/model/CreateJobRequest.h>
#include <aws/dataexchange/model/CreateRevisionRequest.h>
#include <aws/dataexchange/model/DeleteAssetRequest.h>
#include <aws/dataexchange/model/DeleteDataSetRequest.h>
#include <aws/dataexchange/model/DeleteEventActionRequest.h>
#include <aws/dataexchange/model/DeleteRevisionRequest.h>
#include <aws/dataexchange/model/GetAssetRequest.h>
#include <aws/dataexchange/model/GetDataSetRequest.h>
#include <aws/dataexchange/model/GetEventActionRequest.h>
#include <aws/dataexchange/model/GetJobRequest.h>
#include <aws/dataexchange/model/GetRevisionRequest.h>
#include <aws/dataexchange/model/ListDataSetRevisionsRequest.h>
#include <aws/dataexchange/model/ListDataSetsRequest.h>
#include <aws/dataexchange/model/ListEventActionsRequest.h>
#include <aws/dataexchange/model/ListJobsRequest.h>
#include <aws/dataexchange/model/ListRevisionAssetsRequest.h>
#include <aws/dataexchange/model/ListTagsForResourceRequest.h>
#include <aws/dataexchange/model/RevokeRevisionRequest.h>
#include <aws/dataexchange/model/SendApiAssetRequest.h>
#include <aws/dataexchange/model/StartJobRequest.h>
#include <aws/dataexchange/model/TagResourceRequest.h>
#include <aws/dataexchange/model/UntagResourceRequest.h>
#include <aws/dataexchange/model/UpdateAssetRequest.h>
#include <aws/dataexchange/model/UpdateDataSetRequest.h>
#include <aws/dataexchange/model/UpdateEventActionRequest.h>
#include <aws/dataexchange/model/UpdateRevisionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataExchange;
using namespace Aws::DataExchange::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DataExchangeClient::SERVICE_NAME = "dataexchange";
const char* DataExchangeClient::ALLOCATION_TAG = "DataExchangeClient";

DataExchangeClient::DataExchangeClient(const DataExchange::DataExchangeClientConfiguration& clientConfiguration,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const AWSCredentials& credentials,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider,
                                       const DataExchange::DataExchangeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider,
                                       const DataExchange::DataExchangeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DataExchangeClient::DataExchangeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DataExchangeClient::~DataExchangeClient()
{
}

std::shared_ptr<DataExchangeEndpointProviderBase>& DataExchangeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DataExchangeClient::init(const DataExchange::DataExchangeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DataExchange");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DataExchangeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJobOutcome DataExchangeClient::CancelJob(const CancelJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: JobId, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return CancelJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable DataExchangeClient::CancelJobCallable(const CancelJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelJob, request, m_executor.get());
}

void DataExchangeClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelJob, request, handler, context, m_executor.get());
}

CreateDataSetOutcome DataExchangeClient::CreateDataSet(const CreateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  return CreateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSetOutcomeCallable DataExchangeClient::CreateDataSetCallable(const CreateDataSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDataSet, request, m_executor.get());
}

void DataExchangeClient::CreateDataSetAsync(const CreateDataSetRequest& request, const CreateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDataSet, request, handler, context, m_executor.get());
}

CreateEventActionOutcome DataExchangeClient::CreateEventAction(const CreateEventActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  return CreateEventActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventActionOutcomeCallable DataExchangeClient::CreateEventActionCallable(const CreateEventActionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateEventAction, request, m_executor.get());
}

void DataExchangeClient::CreateEventActionAsync(const CreateEventActionRequest& request, const CreateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateEventAction, request, handler, context, m_executor.get());
}

CreateJobOutcome DataExchangeClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable DataExchangeClient::CreateJobCallable(const CreateJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateJob, request, m_executor.get());
}

void DataExchangeClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateJob, request, handler, context, m_executor.get());
}

CreateRevisionOutcome DataExchangeClient::CreateRevision(const CreateRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRevision", "Required field: DataSetId, is not set");
    return CreateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  return CreateRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRevisionOutcomeCallable DataExchangeClient::CreateRevisionCallable(const CreateRevisionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateRevision, request, m_executor.get());
}

void DataExchangeClient::CreateRevisionAsync(const CreateRevisionRequest& request, const CreateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateRevision, request, handler, context, m_executor.get());
}

DeleteAssetOutcome DataExchangeClient::DeleteAsset(const DeleteAssetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: AssetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: DataSetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: RevisionId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  return DeleteAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssetOutcomeCallable DataExchangeClient::DeleteAssetCallable(const DeleteAssetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteAsset, request, m_executor.get());
}

void DataExchangeClient::DeleteAssetAsync(const DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteAsset, request, handler, context, m_executor.get());
}

DeleteDataSetOutcome DataExchangeClient::DeleteDataSet(const DeleteDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: DataSetId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return DeleteDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSetOutcomeCallable DataExchangeClient::DeleteDataSetCallable(const DeleteDataSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDataSet, request, m_executor.get());
}

void DataExchangeClient::DeleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDataSet, request, handler, context, m_executor.get());
}

DeleteEventActionOutcome DataExchangeClient::DeleteEventAction(const DeleteEventActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventActionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventAction", "Required field: EventActionId, is not set");
    return DeleteEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventActionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  return DeleteEventActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventActionOutcomeCallable DataExchangeClient::DeleteEventActionCallable(const DeleteEventActionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteEventAction, request, m_executor.get());
}

void DataExchangeClient::DeleteEventActionAsync(const DeleteEventActionRequest& request, const DeleteEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteEventAction, request, handler, context, m_executor.get());
}

DeleteRevisionOutcome DataExchangeClient::DeleteRevision(const DeleteRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRevision", "Required field: DataSetId, is not set");
    return DeleteRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRevision", "Required field: RevisionId, is not set");
    return DeleteRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  return DeleteRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRevisionOutcomeCallable DataExchangeClient::DeleteRevisionCallable(const DeleteRevisionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteRevision, request, m_executor.get());
}

void DataExchangeClient::DeleteRevisionAsync(const DeleteRevisionRequest& request, const DeleteRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteRevision, request, handler, context, m_executor.get());
}

GetAssetOutcome DataExchangeClient::GetAsset(const GetAssetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: AssetId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: DataSetId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: RevisionId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  return GetAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssetOutcomeCallable DataExchangeClient::GetAssetCallable(const GetAssetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetAsset, request, m_executor.get());
}

void DataExchangeClient::GetAssetAsync(const GetAssetRequest& request, const GetAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetAsset, request, handler, context, m_executor.get());
}

GetDataSetOutcome DataExchangeClient::GetDataSet(const GetDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSet", "Required field: DataSetId, is not set");
    return GetDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return GetDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataSetOutcomeCallable DataExchangeClient::GetDataSetCallable(const GetDataSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDataSet, request, m_executor.get());
}

void DataExchangeClient::GetDataSetAsync(const GetDataSetRequest& request, const GetDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDataSet, request, handler, context, m_executor.get());
}

GetEventActionOutcome DataExchangeClient::GetEventAction(const GetEventActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventActionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventAction", "Required field: EventActionId, is not set");
    return GetEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventActionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  return GetEventActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventActionOutcomeCallable DataExchangeClient::GetEventActionCallable(const GetEventActionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetEventAction, request, m_executor.get());
}

void DataExchangeClient::GetEventActionAsync(const GetEventActionRequest& request, const GetEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetEventAction, request, handler, context, m_executor.get());
}

GetJobOutcome DataExchangeClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable DataExchangeClient::GetJobCallable(const GetJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetJob, request, m_executor.get());
}

void DataExchangeClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetJob, request, handler, context, m_executor.get());
}

GetRevisionOutcome DataExchangeClient::GetRevision(const GetRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: DataSetId, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: RevisionId, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  return GetRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRevisionOutcomeCallable DataExchangeClient::GetRevisionCallable(const GetRevisionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetRevision, request, m_executor.get());
}

void DataExchangeClient::GetRevisionAsync(const GetRevisionRequest& request, const GetRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetRevision, request, handler, context, m_executor.get());
}

ListDataSetRevisionsOutcome DataExchangeClient::ListDataSetRevisions(const ListDataSetRevisionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSetRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSetRevisions", "Required field: DataSetId, is not set");
    return ListDataSetRevisionsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSetRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  return ListDataSetRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetRevisionsOutcomeCallable DataExchangeClient::ListDataSetRevisionsCallable(const ListDataSetRevisionsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDataSetRevisions, request, m_executor.get());
}

void DataExchangeClient::ListDataSetRevisionsAsync(const ListDataSetRevisionsRequest& request, const ListDataSetRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDataSetRevisions, request, handler, context, m_executor.get());
}

ListDataSetsOutcome DataExchangeClient::ListDataSets(const ListDataSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  return ListDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetsOutcomeCallable DataExchangeClient::ListDataSetsCallable(const ListDataSetsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDataSets, request, m_executor.get());
}

void DataExchangeClient::ListDataSetsAsync(const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDataSets, request, handler, context, m_executor.get());
}

ListEventActionsOutcome DataExchangeClient::ListEventActions(const ListEventActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  return ListEventActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventActionsOutcomeCallable DataExchangeClient::ListEventActionsCallable(const ListEventActionsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListEventActions, request, m_executor.get());
}

void DataExchangeClient::ListEventActionsAsync(const ListEventActionsRequest& request, const ListEventActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListEventActions, request, handler, context, m_executor.get());
}

ListJobsOutcome DataExchangeClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable DataExchangeClient::ListJobsCallable(const ListJobsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListJobs, request, m_executor.get());
}

void DataExchangeClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListJobs, request, handler, context, m_executor.get());
}

ListRevisionAssetsOutcome DataExchangeClient::ListRevisionAssets(const ListRevisionAssetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRevisionAssets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRevisionAssets", "Required field: DataSetId, is not set");
    return ListRevisionAssetsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRevisionAssets", "Required field: RevisionId, is not set");
    return ListRevisionAssetsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRevisionAssets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  return ListRevisionAssetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRevisionAssetsOutcomeCallable DataExchangeClient::ListRevisionAssetsCallable(const ListRevisionAssetsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListRevisionAssets, request, m_executor.get());
}

void DataExchangeClient::ListRevisionAssetsAsync(const ListRevisionAssetsRequest& request, const ListRevisionAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListRevisionAssets, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome DataExchangeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DataExchangeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void DataExchangeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

RevokeRevisionOutcome DataExchangeClient::RevokeRevision(const RevokeRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeRevision", "Required field: DataSetId, is not set");
    return RevokeRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeRevision", "Required field: RevisionId, is not set");
    return RevokeRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  return RevokeRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeRevisionOutcomeCallable DataExchangeClient::RevokeRevisionCallable(const RevokeRevisionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RevokeRevision, request, m_executor.get());
}

void DataExchangeClient::RevokeRevisionAsync(const RevokeRevisionRequest& request, const RevokeRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RevokeRevision, request, handler, context, m_executor.get());
}

SendApiAssetOutcome DataExchangeClient::SendApiAsset(const SendApiAssetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendApiAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: AssetId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: DataSetId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: RevisionId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendApiAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api-fulfill.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SendApiAssetOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1");
  return SendApiAssetOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SendApiAssetOutcomeCallable DataExchangeClient::SendApiAssetCallable(const SendApiAssetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SendApiAsset, request, m_executor.get());
}

void DataExchangeClient::SendApiAssetAsync(const SendApiAssetRequest& request, const SendApiAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SendApiAsset, request, handler, context, m_executor.get());
}

StartJobOutcome DataExchangeClient::StartJob(const StartJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: JobId, is not set");
    return StartJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return StartJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

StartJobOutcomeCallable DataExchangeClient::StartJobCallable(const StartJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StartJob, request, m_executor.get());
}

void DataExchangeClient::StartJobAsync(const StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StartJob, request, handler, context, m_executor.get());
}

TagResourceOutcome DataExchangeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DataExchangeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void DataExchangeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome DataExchangeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DataExchangeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void DataExchangeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateAssetOutcome DataExchangeClient::UpdateAsset(const UpdateAssetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: AssetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: DataSetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: RevisionId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  return UpdateAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssetOutcomeCallable DataExchangeClient::UpdateAssetCallable(const UpdateAssetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateAsset, request, m_executor.get());
}

void DataExchangeClient::UpdateAssetAsync(const UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateAsset, request, handler, context, m_executor.get());
}

UpdateDataSetOutcome DataExchangeClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return UpdateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetOutcomeCallable DataExchangeClient::UpdateDataSetCallable(const UpdateDataSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateDataSet, request, m_executor.get());
}

void DataExchangeClient::UpdateDataSetAsync(const UpdateDataSetRequest& request, const UpdateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateDataSet, request, handler, context, m_executor.get());
}

UpdateEventActionOutcome DataExchangeClient::UpdateEventAction(const UpdateEventActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventActionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventAction", "Required field: EventActionId, is not set");
    return UpdateEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventActionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  return UpdateEventActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventActionOutcomeCallable DataExchangeClient::UpdateEventActionCallable(const UpdateEventActionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateEventAction, request, m_executor.get());
}

void DataExchangeClient::UpdateEventActionAsync(const UpdateEventActionRequest& request, const UpdateEventActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateEventAction, request, handler, context, m_executor.get());
}

UpdateRevisionOutcome DataExchangeClient::UpdateRevision(const UpdateRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRevision", "Required field: DataSetId, is not set");
    return UpdateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRevision", "Required field: RevisionId, is not set");
    return UpdateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  return UpdateRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRevisionOutcomeCallable DataExchangeClient::UpdateRevisionCallable(const UpdateRevisionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateRevision, request, m_executor.get());
}

void DataExchangeClient::UpdateRevisionAsync(const UpdateRevisionRequest& request, const UpdateRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateRevision, request, handler, context, m_executor.get());
}

