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
  ShutdownSdkClient(this, -1);
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
  AWS_OPERATION_GUARD(CancelJob);
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

CreateDataSetOutcome DataExchangeClient::CreateDataSet(const CreateDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  return CreateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventActionOutcome DataExchangeClient::CreateEventAction(const CreateEventActionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEventAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  return CreateEventActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcome DataExchangeClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRevisionOutcome DataExchangeClient::CreateRevision(const CreateRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRevision);
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

DeleteAssetOutcome DataExchangeClient::DeleteAsset(const DeleteAssetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAsset);
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

DeleteDataSetOutcome DataExchangeClient::DeleteDataSet(const DeleteDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataSet);
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

DeleteEventActionOutcome DataExchangeClient::DeleteEventAction(const DeleteEventActionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEventAction);
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

DeleteRevisionOutcome DataExchangeClient::DeleteRevision(const DeleteRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRevision);
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

GetAssetOutcome DataExchangeClient::GetAsset(const GetAssetRequest& request) const
{
  AWS_OPERATION_GUARD(GetAsset);
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

GetDataSetOutcome DataExchangeClient::GetDataSet(const GetDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataSet);
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

GetEventActionOutcome DataExchangeClient::GetEventAction(const GetEventActionRequest& request) const
{
  AWS_OPERATION_GUARD(GetEventAction);
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

GetJobOutcome DataExchangeClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetJob);
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

GetRevisionOutcome DataExchangeClient::GetRevision(const GetRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(GetRevision);
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

ListDataSetRevisionsOutcome DataExchangeClient::ListDataSetRevisions(const ListDataSetRevisionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSetRevisions);
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

ListDataSetsOutcome DataExchangeClient::ListDataSets(const ListDataSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  return ListDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventActionsOutcome DataExchangeClient::ListEventActions(const ListEventActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEventActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  return ListEventActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcome DataExchangeClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRevisionAssetsOutcome DataExchangeClient::ListRevisionAssets(const ListRevisionAssetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRevisionAssets);
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

ListTagsForResourceOutcome DataExchangeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
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

RevokeRevisionOutcome DataExchangeClient::RevokeRevision(const RevokeRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(RevokeRevision);
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

SendApiAssetOutcome DataExchangeClient::SendApiAsset(const SendApiAssetRequest& request) const
{
  AWS_OPERATION_GUARD(SendApiAsset);
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

StartJobOutcome DataExchangeClient::StartJob(const StartJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartJob);
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

TagResourceOutcome DataExchangeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
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

UntagResourceOutcome DataExchangeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
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

UpdateAssetOutcome DataExchangeClient::UpdateAsset(const UpdateAssetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAsset);
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

UpdateDataSetOutcome DataExchangeClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSet);
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

UpdateEventActionOutcome DataExchangeClient::UpdateEventAction(const UpdateEventActionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEventAction);
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

UpdateRevisionOutcome DataExchangeClient::UpdateRevision(const UpdateRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRevision);
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

