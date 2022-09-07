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

#include <aws/iotsitewise/IoTSiteWiseClient.h>
#include <aws/iotsitewise/IoTSiteWiseEndpoint.h>
#include <aws/iotsitewise/IoTSiteWiseErrorMarshaller.h>
#include <aws/iotsitewise/model/AssociateAssetsRequest.h>
#include <aws/iotsitewise/model/AssociateTimeSeriesToAssetPropertyRequest.h>
#include <aws/iotsitewise/model/BatchAssociateProjectAssetsRequest.h>
#include <aws/iotsitewise/model/BatchDisassociateProjectAssetsRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryRequest.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/CreateAccessPolicyRequest.h>
#include <aws/iotsitewise/model/CreateAssetRequest.h>
#include <aws/iotsitewise/model/CreateAssetModelRequest.h>
#include <aws/iotsitewise/model/CreateBulkImportJobRequest.h>
#include <aws/iotsitewise/model/CreateDashboardRequest.h>
#include <aws/iotsitewise/model/CreateGatewayRequest.h>
#include <aws/iotsitewise/model/CreatePortalRequest.h>
#include <aws/iotsitewise/model/CreateProjectRequest.h>
#include <aws/iotsitewise/model/DeleteAccessPolicyRequest.h>
#include <aws/iotsitewise/model/DeleteAssetRequest.h>
#include <aws/iotsitewise/model/DeleteAssetModelRequest.h>
#include <aws/iotsitewise/model/DeleteDashboardRequest.h>
#include <aws/iotsitewise/model/DeleteGatewayRequest.h>
#include <aws/iotsitewise/model/DeletePortalRequest.h>
#include <aws/iotsitewise/model/DeleteProjectRequest.h>
#include <aws/iotsitewise/model/DeleteTimeSeriesRequest.h>
#include <aws/iotsitewise/model/DescribeAccessPolicyRequest.h>
#include <aws/iotsitewise/model/DescribeAssetRequest.h>
#include <aws/iotsitewise/model/DescribeAssetModelRequest.h>
#include <aws/iotsitewise/model/DescribeAssetPropertyRequest.h>
#include <aws/iotsitewise/model/DescribeBulkImportJobRequest.h>
#include <aws/iotsitewise/model/DescribeDashboardRequest.h>
#include <aws/iotsitewise/model/DescribeDefaultEncryptionConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeGatewayRequest.h>
#include <aws/iotsitewise/model/DescribeGatewayCapabilityConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotsitewise/model/DescribePortalRequest.h>
#include <aws/iotsitewise/model/DescribeProjectRequest.h>
#include <aws/iotsitewise/model/DescribeStorageConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeTimeSeriesRequest.h>
#include <aws/iotsitewise/model/DisassociateAssetsRequest.h>
#include <aws/iotsitewise/model/DisassociateTimeSeriesFromAssetPropertyRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyAggregatesRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryRequest.h>
#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesRequest.h>
#include <aws/iotsitewise/model/ListAccessPoliciesRequest.h>
#include <aws/iotsitewise/model/ListAssetModelsRequest.h>
#include <aws/iotsitewise/model/ListAssetRelationshipsRequest.h>
#include <aws/iotsitewise/model/ListAssetsRequest.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsRequest.h>
#include <aws/iotsitewise/model/ListBulkImportJobsRequest.h>
#include <aws/iotsitewise/model/ListDashboardsRequest.h>
#include <aws/iotsitewise/model/ListGatewaysRequest.h>
#include <aws/iotsitewise/model/ListPortalsRequest.h>
#include <aws/iotsitewise/model/ListProjectAssetsRequest.h>
#include <aws/iotsitewise/model/ListProjectsRequest.h>
#include <aws/iotsitewise/model/ListTagsForResourceRequest.h>
#include <aws/iotsitewise/model/ListTimeSeriesRequest.h>
#include <aws/iotsitewise/model/PutDefaultEncryptionConfigurationRequest.h>
#include <aws/iotsitewise/model/PutLoggingOptionsRequest.h>
#include <aws/iotsitewise/model/PutStorageConfigurationRequest.h>
#include <aws/iotsitewise/model/TagResourceRequest.h>
#include <aws/iotsitewise/model/UntagResourceRequest.h>
#include <aws/iotsitewise/model/UpdateAccessPolicyRequest.h>
#include <aws/iotsitewise/model/UpdateAssetRequest.h>
#include <aws/iotsitewise/model/UpdateAssetModelRequest.h>
#include <aws/iotsitewise/model/UpdateAssetPropertyRequest.h>
#include <aws/iotsitewise/model/UpdateDashboardRequest.h>
#include <aws/iotsitewise/model/UpdateGatewayRequest.h>
#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationRequest.h>
#include <aws/iotsitewise/model/UpdatePortalRequest.h>
#include <aws/iotsitewise/model/UpdateProjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTSiteWise;
using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iotsitewise";
static const char* ALLOCATION_TAG = "IoTSiteWiseClient";

IoTSiteWiseClient::IoTSiteWiseClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTSiteWiseClient::~IoTSiteWiseClient()
{
}

void IoTSiteWiseClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoTSiteWise");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = IoTSiteWiseEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void IoTSiteWiseClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

AssociateAssetsOutcome IoTSiteWiseClient::AssociateAssets(const AssociateAssetsRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAssets", "Required field: AssetId, is not set");
    return AssociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("AssociateAssets", "Invalid DNS host: " << uri.GetAuthority());
      return AssociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/associate");
  return AssociateAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateAssetsOutcomeCallable IoTSiteWiseClient::AssociateAssetsCallable(const AssociateAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientAssociateAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const AssociateAssetsRequest& request, const AssociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateAssets(request), context);
}

void IoTSiteWiseClient::AssociateAssetsAsync(const AssociateAssetsRequest& request, const AssociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientAssociateAssetsAsyncHelper( this, request, handler, context ); } );
}

AssociateTimeSeriesToAssetPropertyOutcome IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty(const AssociateTimeSeriesToAssetPropertyRequest& request) const
{
  if (!request.AliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: Alias, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: AssetId, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: PropertyId, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Invalid DNS host: " << uri.GetAuthority());
      return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/timeseries/associate/");
  return AssociateTimeSeriesToAssetPropertyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTimeSeriesToAssetPropertyOutcomeCallable IoTSiteWiseClient::AssociateTimeSeriesToAssetPropertyCallable(const AssociateTimeSeriesToAssetPropertyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTimeSeriesToAssetPropertyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTimeSeriesToAssetProperty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientAssociateTimeSeriesToAssetPropertyAsyncHelper(IoTSiteWiseClient const * const clientThis, const AssociateTimeSeriesToAssetPropertyRequest& request, const AssociateTimeSeriesToAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTimeSeriesToAssetProperty(request), context);
}

void IoTSiteWiseClient::AssociateTimeSeriesToAssetPropertyAsync(const AssociateTimeSeriesToAssetPropertyRequest& request, const AssociateTimeSeriesToAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientAssociateTimeSeriesToAssetPropertyAsyncHelper( this, request, handler, context ); } );
}

BatchAssociateProjectAssetsOutcome IoTSiteWiseClient::BatchAssociateProjectAssets(const BatchAssociateProjectAssetsRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchAssociateProjectAssets", "Required field: ProjectId, is not set");
    return BatchAssociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchAssociateProjectAssets", "Invalid DNS host: " << uri.GetAuthority());
      return BatchAssociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  uri.AddPathSegments("/assets/associate");
  return BatchAssociateProjectAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchAssociateProjectAssetsOutcomeCallable IoTSiteWiseClient::BatchAssociateProjectAssetsCallable(const BatchAssociateProjectAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchAssociateProjectAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchAssociateProjectAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchAssociateProjectAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchAssociateProjectAssetsRequest& request, const BatchAssociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchAssociateProjectAssets(request), context);
}

void IoTSiteWiseClient::BatchAssociateProjectAssetsAsync(const BatchAssociateProjectAssetsRequest& request, const BatchAssociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchAssociateProjectAssetsAsyncHelper( this, request, handler, context ); } );
}

BatchDisassociateProjectAssetsOutcome IoTSiteWiseClient::BatchDisassociateProjectAssets(const BatchDisassociateProjectAssetsRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDisassociateProjectAssets", "Required field: ProjectId, is not set");
    return BatchDisassociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchDisassociateProjectAssets", "Invalid DNS host: " << uri.GetAuthority());
      return BatchDisassociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  uri.AddPathSegments("/assets/disassociate");
  return BatchDisassociateProjectAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDisassociateProjectAssetsOutcomeCallable IoTSiteWiseClient::BatchDisassociateProjectAssetsCallable(const BatchDisassociateProjectAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisassociateProjectAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisassociateProjectAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchDisassociateProjectAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchDisassociateProjectAssetsRequest& request, const BatchDisassociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDisassociateProjectAssets(request), context);
}

void IoTSiteWiseClient::BatchDisassociateProjectAssetsAsync(const BatchDisassociateProjectAssetsRequest& request, const BatchDisassociateProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchDisassociateProjectAssetsAsyncHelper( this, request, handler, context ); } );
}

BatchGetAssetPropertyAggregatesOutcome IoTSiteWiseClient::BatchGetAssetPropertyAggregates(const BatchGetAssetPropertyAggregatesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchGetAssetPropertyAggregates", "Invalid DNS host: " << uri.GetAuthority());
      return BatchGetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/batch/aggregates");
  return BatchGetAssetPropertyAggregatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetAssetPropertyAggregatesOutcomeCallable IoTSiteWiseClient::BatchGetAssetPropertyAggregatesCallable(const BatchGetAssetPropertyAggregatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAssetPropertyAggregatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAssetPropertyAggregates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchGetAssetPropertyAggregatesAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchGetAssetPropertyAggregatesRequest& request, const BatchGetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetAssetPropertyAggregates(request), context);
}

void IoTSiteWiseClient::BatchGetAssetPropertyAggregatesAsync(const BatchGetAssetPropertyAggregatesRequest& request, const BatchGetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchGetAssetPropertyAggregatesAsyncHelper( this, request, handler, context ); } );
}

BatchGetAssetPropertyValueOutcome IoTSiteWiseClient::BatchGetAssetPropertyValue(const BatchGetAssetPropertyValueRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchGetAssetPropertyValue", "Invalid DNS host: " << uri.GetAuthority());
      return BatchGetAssetPropertyValueOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/batch/latest");
  return BatchGetAssetPropertyValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetAssetPropertyValueOutcomeCallable IoTSiteWiseClient::BatchGetAssetPropertyValueCallable(const BatchGetAssetPropertyValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAssetPropertyValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAssetPropertyValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchGetAssetPropertyValueAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchGetAssetPropertyValueRequest& request, const BatchGetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetAssetPropertyValue(request), context);
}

void IoTSiteWiseClient::BatchGetAssetPropertyValueAsync(const BatchGetAssetPropertyValueRequest& request, const BatchGetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchGetAssetPropertyValueAsyncHelper( this, request, handler, context ); } );
}

BatchGetAssetPropertyValueHistoryOutcome IoTSiteWiseClient::BatchGetAssetPropertyValueHistory(const BatchGetAssetPropertyValueHistoryRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchGetAssetPropertyValueHistory", "Invalid DNS host: " << uri.GetAuthority());
      return BatchGetAssetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/batch/history");
  return BatchGetAssetPropertyValueHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetAssetPropertyValueHistoryOutcomeCallable IoTSiteWiseClient::BatchGetAssetPropertyValueHistoryCallable(const BatchGetAssetPropertyValueHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetAssetPropertyValueHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetAssetPropertyValueHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchGetAssetPropertyValueHistoryAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchGetAssetPropertyValueHistoryRequest& request, const BatchGetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetAssetPropertyValueHistory(request), context);
}

void IoTSiteWiseClient::BatchGetAssetPropertyValueHistoryAsync(const BatchGetAssetPropertyValueHistoryRequest& request, const BatchGetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchGetAssetPropertyValueHistoryAsyncHelper( this, request, handler, context ); } );
}

BatchPutAssetPropertyValueOutcome IoTSiteWiseClient::BatchPutAssetPropertyValue(const BatchPutAssetPropertyValueRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchPutAssetPropertyValue", "Invalid DNS host: " << uri.GetAuthority());
      return BatchPutAssetPropertyValueOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties");
  return BatchPutAssetPropertyValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutAssetPropertyValueOutcomeCallable IoTSiteWiseClient::BatchPutAssetPropertyValueCallable(const BatchPutAssetPropertyValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutAssetPropertyValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutAssetPropertyValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientBatchPutAssetPropertyValueAsyncHelper(IoTSiteWiseClient const * const clientThis, const BatchPutAssetPropertyValueRequest& request, const BatchPutAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutAssetPropertyValue(request), context);
}

void IoTSiteWiseClient::BatchPutAssetPropertyValueAsync(const BatchPutAssetPropertyValueRequest& request, const BatchPutAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientBatchPutAssetPropertyValueAsyncHelper( this, request, handler, context ); } );
}

CreateAccessPolicyOutcome IoTSiteWiseClient::CreateAccessPolicy(const CreateAccessPolicyRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAccessPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/access-policies");
  return CreateAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessPolicyOutcomeCallable IoTSiteWiseClient::CreateAccessPolicyCallable(const CreateAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateAccessPolicyAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAccessPolicy(request), context);
}

void IoTSiteWiseClient::CreateAccessPolicyAsync(const CreateAccessPolicyRequest& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateAccessPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateAssetOutcome IoTSiteWiseClient::CreateAsset(const CreateAssetRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAsset", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets");
  return CreateAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssetOutcomeCallable IoTSiteWiseClient::CreateAssetCallable(const CreateAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateAssetAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAsset(request), context);
}

void IoTSiteWiseClient::CreateAssetAsync(const CreateAssetRequest& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateAssetAsyncHelper( this, request, handler, context ); } );
}

CreateAssetModelOutcome IoTSiteWiseClient::CreateAssetModel(const CreateAssetModelRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAssetModel", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/asset-models");
  return CreateAssetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssetModelOutcomeCallable IoTSiteWiseClient::CreateAssetModelCallable(const CreateAssetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAssetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAssetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateAssetModelAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateAssetModelRequest& request, const CreateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAssetModel(request), context);
}

void IoTSiteWiseClient::CreateAssetModelAsync(const CreateAssetModelRequest& request, const CreateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateAssetModelAsyncHelper( this, request, handler, context ); } );
}

CreateBulkImportJobOutcome IoTSiteWiseClient::CreateBulkImportJob(const CreateBulkImportJobRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateBulkImportJob", "Invalid DNS host: " << uri.GetAuthority());
      return CreateBulkImportJobOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/jobs");
  return CreateBulkImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBulkImportJobOutcomeCallable IoTSiteWiseClient::CreateBulkImportJobCallable(const CreateBulkImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBulkImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBulkImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateBulkImportJobAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateBulkImportJobRequest& request, const CreateBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBulkImportJob(request), context);
}

void IoTSiteWiseClient::CreateBulkImportJobAsync(const CreateBulkImportJobRequest& request, const CreateBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateBulkImportJobAsyncHelper( this, request, handler, context ); } );
}

CreateDashboardOutcome IoTSiteWiseClient::CreateDashboard(const CreateDashboardRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateDashboard", "Invalid DNS host: " << uri.GetAuthority());
      return CreateDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/dashboards");
  return CreateDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDashboardOutcomeCallable IoTSiteWiseClient::CreateDashboardCallable(const CreateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateDashboardAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDashboard(request), context);
}

void IoTSiteWiseClient::CreateDashboardAsync(const CreateDashboardRequest& request, const CreateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateDashboardAsyncHelper( this, request, handler, context ); } );
}

CreateGatewayOutcome IoTSiteWiseClient::CreateGateway(const CreateGatewayRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateGateway", "Invalid DNS host: " << uri.GetAuthority());
      return CreateGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways");
  return CreateGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGatewayOutcomeCallable IoTSiteWiseClient::CreateGatewayCallable(const CreateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateGatewayAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGateway(request), context);
}

void IoTSiteWiseClient::CreateGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateGatewayAsyncHelper( this, request, handler, context ); } );
}

CreatePortalOutcome IoTSiteWiseClient::CreatePortal(const CreatePortalRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreatePortal", "Invalid DNS host: " << uri.GetAuthority());
      return CreatePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/portals");
  return CreatePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortalOutcomeCallable IoTSiteWiseClient::CreatePortalCallable(const CreatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreatePortalAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePortal(request), context);
}

void IoTSiteWiseClient::CreatePortalAsync(const CreatePortalRequest& request, const CreatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreatePortalAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome IoTSiteWiseClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateProject", "Invalid DNS host: " << uri.GetAuthority());
      return CreateProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable IoTSiteWiseClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientCreateProjectAsyncHelper(IoTSiteWiseClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void IoTSiteWiseClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteAccessPolicyOutcome IoTSiteWiseClient::DeleteAccessPolicy(const DeleteAccessPolicyRequest& request) const
{
  if (!request.AccessPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessPolicy", "Required field: AccessPolicyId, is not set");
    return DeleteAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPolicyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAccessPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/access-policies/");
  uri.AddPathSegment(request.GetAccessPolicyId());
  return DeleteAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessPolicyOutcomeCallable IoTSiteWiseClient::DeleteAccessPolicyCallable(const DeleteAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteAccessPolicyAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAccessPolicy(request), context);
}

void IoTSiteWiseClient::DeleteAccessPolicyAsync(const DeleteAccessPolicyRequest& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteAccessPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteAssetOutcome IoTSiteWiseClient::DeleteAsset(const DeleteAssetRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: AssetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAsset", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  return DeleteAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssetOutcomeCallable IoTSiteWiseClient::DeleteAssetCallable(const DeleteAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteAssetAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAsset(request), context);
}

void IoTSiteWiseClient::DeleteAssetAsync(const DeleteAssetRequest& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteAssetAsyncHelper( this, request, handler, context ); } );
}

DeleteAssetModelOutcome IoTSiteWiseClient::DeleteAssetModel(const DeleteAssetModelRequest& request) const
{
  if (!request.AssetModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetModel", "Required field: AssetModelId, is not set");
    return DeleteAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAssetModel", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/asset-models/");
  uri.AddPathSegment(request.GetAssetModelId());
  return DeleteAssetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssetModelOutcomeCallable IoTSiteWiseClient::DeleteAssetModelCallable(const DeleteAssetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteAssetModelAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteAssetModelRequest& request, const DeleteAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssetModel(request), context);
}

void IoTSiteWiseClient::DeleteAssetModelAsync(const DeleteAssetModelRequest& request, const DeleteAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteAssetModelAsyncHelper( this, request, handler, context ); } );
}

DeleteDashboardOutcome IoTSiteWiseClient::DeleteDashboard(const DeleteDashboardRequest& request) const
{
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: DashboardId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteDashboard", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return DeleteDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDashboardOutcomeCallable IoTSiteWiseClient::DeleteDashboardCallable(const DeleteDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteDashboardAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDashboard(request), context);
}

void IoTSiteWiseClient::DeleteDashboardAsync(const DeleteDashboardRequest& request, const DeleteDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteDashboardAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayOutcome IoTSiteWiseClient::DeleteGateway(const DeleteGatewayRequest& request) const
{
  if (!request.GatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGateway", "Required field: GatewayId, is not set");
    return DeleteGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteGateway", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways/");
  uri.AddPathSegment(request.GetGatewayId());
  return DeleteGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayOutcomeCallable IoTSiteWiseClient::DeleteGatewayCallable(const DeleteGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteGatewayAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGateway(request), context);
}

void IoTSiteWiseClient::DeleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteGatewayAsyncHelper( this, request, handler, context ); } );
}

DeletePortalOutcome IoTSiteWiseClient::DeletePortal(const DeletePortalRequest& request) const
{
  if (!request.PortalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalId, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeletePortal", "Invalid DNS host: " << uri.GetAuthority());
      return DeletePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/portals/");
  uri.AddPathSegment(request.GetPortalId());
  return DeletePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePortalOutcomeCallable IoTSiteWiseClient::DeletePortalCallable(const DeletePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeletePortalAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePortal(request), context);
}

void IoTSiteWiseClient::DeletePortalAsync(const DeletePortalRequest& request, const DeletePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeletePortalAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome IoTSiteWiseClient::DeleteProject(const DeleteProjectRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectId, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteProject", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable IoTSiteWiseClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteProjectAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void IoTSiteWiseClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteTimeSeriesOutcome IoTSiteWiseClient::DeleteTimeSeries(const DeleteTimeSeriesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteTimeSeries", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteTimeSeriesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/timeseries/delete/");
  return DeleteTimeSeriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTimeSeriesOutcomeCallable IoTSiteWiseClient::DeleteTimeSeriesCallable(const DeleteTimeSeriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTimeSeriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTimeSeries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDeleteTimeSeriesAsyncHelper(IoTSiteWiseClient const * const clientThis, const DeleteTimeSeriesRequest& request, const DeleteTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTimeSeries(request), context);
}

void IoTSiteWiseClient::DeleteTimeSeriesAsync(const DeleteTimeSeriesRequest& request, const DeleteTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDeleteTimeSeriesAsyncHelper( this, request, handler, context ); } );
}

DescribeAccessPolicyOutcome IoTSiteWiseClient::DescribeAccessPolicy(const DescribeAccessPolicyRequest& request) const
{
  if (!request.AccessPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccessPolicy", "Required field: AccessPolicyId, is not set");
    return DescribeAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPolicyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAccessPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/access-policies/");
  uri.AddPathSegment(request.GetAccessPolicyId());
  return DescribeAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccessPolicyOutcomeCallable IoTSiteWiseClient::DescribeAccessPolicyCallable(const DescribeAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeAccessPolicyAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeAccessPolicyRequest& request, const DescribeAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccessPolicy(request), context);
}

void IoTSiteWiseClient::DescribeAccessPolicyAsync(const DescribeAccessPolicyRequest& request, const DescribeAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeAccessPolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeAssetOutcome IoTSiteWiseClient::DescribeAsset(const DescribeAssetRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAsset", "Required field: AssetId, is not set");
    return DescribeAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAsset", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  return DescribeAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssetOutcomeCallable IoTSiteWiseClient::DescribeAssetCallable(const DescribeAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeAssetAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAsset(request), context);
}

void IoTSiteWiseClient::DescribeAssetAsync(const DescribeAssetRequest& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeAssetAsyncHelper( this, request, handler, context ); } );
}

DescribeAssetModelOutcome IoTSiteWiseClient::DescribeAssetModel(const DescribeAssetModelRequest& request) const
{
  if (!request.AssetModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAssetModel", "Required field: AssetModelId, is not set");
    return DescribeAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAssetModel", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/asset-models/");
  uri.AddPathSegment(request.GetAssetModelId());
  return DescribeAssetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssetModelOutcomeCallable IoTSiteWiseClient::DescribeAssetModelCallable(const DescribeAssetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeAssetModelAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeAssetModelRequest& request, const DescribeAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAssetModel(request), context);
}

void IoTSiteWiseClient::DescribeAssetModelAsync(const DescribeAssetModelRequest& request, const DescribeAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeAssetModelAsyncHelper( this, request, handler, context ); } );
}

DescribeAssetPropertyOutcome IoTSiteWiseClient::DescribeAssetProperty(const DescribeAssetPropertyRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAssetProperty", "Required field: AssetId, is not set");
    return DescribeAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAssetProperty", "Required field: PropertyId, is not set");
    return DescribeAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAssetProperty", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/properties/");
  uri.AddPathSegment(request.GetPropertyId());
  return DescribeAssetPropertyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAssetPropertyOutcomeCallable IoTSiteWiseClient::DescribeAssetPropertyCallable(const DescribeAssetPropertyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAssetPropertyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAssetProperty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeAssetPropertyAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeAssetPropertyRequest& request, const DescribeAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAssetProperty(request), context);
}

void IoTSiteWiseClient::DescribeAssetPropertyAsync(const DescribeAssetPropertyRequest& request, const DescribeAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeAssetPropertyAsyncHelper( this, request, handler, context ); } );
}

DescribeBulkImportJobOutcome IoTSiteWiseClient::DescribeBulkImportJob(const DescribeBulkImportJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBulkImportJob", "Required field: JobId, is not set");
    return DescribeBulkImportJobOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeBulkImportJob", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeBulkImportJobOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeBulkImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBulkImportJobOutcomeCallable IoTSiteWiseClient::DescribeBulkImportJobCallable(const DescribeBulkImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBulkImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBulkImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeBulkImportJobAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeBulkImportJobRequest& request, const DescribeBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBulkImportJob(request), context);
}

void IoTSiteWiseClient::DescribeBulkImportJobAsync(const DescribeBulkImportJobRequest& request, const DescribeBulkImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeBulkImportJobAsyncHelper( this, request, handler, context ); } );
}

DescribeDashboardOutcome IoTSiteWiseClient::DescribeDashboard(const DescribeDashboardRequest& request) const
{
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: DashboardId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeDashboard", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return DescribeDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardOutcomeCallable IoTSiteWiseClient::DescribeDashboardCallable(const DescribeDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeDashboardAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDashboard(request), context);
}

void IoTSiteWiseClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeDashboardAsyncHelper( this, request, handler, context ); } );
}

DescribeDefaultEncryptionConfigurationOutcome IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration(const DescribeDefaultEncryptionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeDefaultEncryptionConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeDefaultEncryptionConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/configuration/account/encryption");
  return DescribeDefaultEncryptionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDefaultEncryptionConfigurationOutcomeCallable IoTSiteWiseClient::DescribeDefaultEncryptionConfigurationCallable(const DescribeDefaultEncryptionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDefaultEncryptionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDefaultEncryptionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeDefaultEncryptionConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeDefaultEncryptionConfigurationRequest& request, const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDefaultEncryptionConfiguration(request), context);
}

void IoTSiteWiseClient::DescribeDefaultEncryptionConfigurationAsync(const DescribeDefaultEncryptionConfigurationRequest& request, const DescribeDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeDefaultEncryptionConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeGatewayOutcome IoTSiteWiseClient::DescribeGateway(const DescribeGatewayRequest& request) const
{
  if (!request.GatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGateway", "Required field: GatewayId, is not set");
    return DescribeGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeGateway", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways/");
  uri.AddPathSegment(request.GetGatewayId());
  return DescribeGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayOutcomeCallable IoTSiteWiseClient::DescribeGatewayCallable(const DescribeGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeGatewayAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeGatewayRequest& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGateway(request), context);
}

void IoTSiteWiseClient::DescribeGatewayAsync(const DescribeGatewayRequest& request, const DescribeGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeGatewayAsyncHelper( this, request, handler, context ); } );
}

DescribeGatewayCapabilityConfigurationOutcome IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration(const DescribeGatewayCapabilityConfigurationRequest& request) const
{
  if (!request.GatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGatewayCapabilityConfiguration", "Required field: GatewayId, is not set");
    return DescribeGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  if (!request.CapabilityNamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGatewayCapabilityConfiguration", "Required field: CapabilityNamespace, is not set");
    return DescribeGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CapabilityNamespace]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeGatewayCapabilityConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways/");
  uri.AddPathSegment(request.GetGatewayId());
  uri.AddPathSegments("/capability/");
  uri.AddPathSegment(request.GetCapabilityNamespace());
  return DescribeGatewayCapabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGatewayCapabilityConfigurationOutcomeCallable IoTSiteWiseClient::DescribeGatewayCapabilityConfigurationCallable(const DescribeGatewayCapabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGatewayCapabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGatewayCapabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeGatewayCapabilityConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeGatewayCapabilityConfigurationRequest& request, const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGatewayCapabilityConfiguration(request), context);
}

void IoTSiteWiseClient::DescribeGatewayCapabilityConfigurationAsync(const DescribeGatewayCapabilityConfigurationRequest& request, const DescribeGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeGatewayCapabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeLoggingOptionsOutcome IoTSiteWiseClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeLoggingOptions", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeLoggingOptionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/logging");
  return DescribeLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingOptionsOutcomeCallable IoTSiteWiseClient::DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeLoggingOptionsAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoggingOptions(request), context);
}

void IoTSiteWiseClient::DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeLoggingOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribePortalOutcome IoTSiteWiseClient::DescribePortal(const DescribePortalRequest& request) const
{
  if (!request.PortalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePortal", "Required field: PortalId, is not set");
    return DescribePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribePortal", "Invalid DNS host: " << uri.GetAuthority());
      return DescribePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/portals/");
  uri.AddPathSegment(request.GetPortalId());
  return DescribePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePortalOutcomeCallable IoTSiteWiseClient::DescribePortalCallable(const DescribePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribePortalAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribePortalRequest& request, const DescribePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePortal(request), context);
}

void IoTSiteWiseClient::DescribePortalAsync(const DescribePortalRequest& request, const DescribePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribePortalAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectOutcome IoTSiteWiseClient::DescribeProject(const DescribeProjectRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectId, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeProject", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable IoTSiteWiseClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeProjectAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProject(request), context);
}

void IoTSiteWiseClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeProjectAsyncHelper( this, request, handler, context ); } );
}

DescribeStorageConfigurationOutcome IoTSiteWiseClient::DescribeStorageConfiguration(const DescribeStorageConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeStorageConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeStorageConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/configuration/account/storage");
  return DescribeStorageConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStorageConfigurationOutcomeCallable IoTSiteWiseClient::DescribeStorageConfigurationCallable(const DescribeStorageConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStorageConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStorageConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeStorageConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeStorageConfigurationRequest& request, const DescribeStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStorageConfiguration(request), context);
}

void IoTSiteWiseClient::DescribeStorageConfigurationAsync(const DescribeStorageConfigurationRequest& request, const DescribeStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeStorageConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeTimeSeriesOutcome IoTSiteWiseClient::DescribeTimeSeries(const DescribeTimeSeriesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeTimeSeries", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeTimeSeriesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/timeseries/describe/");
  return DescribeTimeSeriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTimeSeriesOutcomeCallable IoTSiteWiseClient::DescribeTimeSeriesCallable(const DescribeTimeSeriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeSeriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeSeries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDescribeTimeSeriesAsyncHelper(IoTSiteWiseClient const * const clientThis, const DescribeTimeSeriesRequest& request, const DescribeTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTimeSeries(request), context);
}

void IoTSiteWiseClient::DescribeTimeSeriesAsync(const DescribeTimeSeriesRequest& request, const DescribeTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDescribeTimeSeriesAsyncHelper( this, request, handler, context ); } );
}

DisassociateAssetsOutcome IoTSiteWiseClient::DisassociateAssets(const DisassociateAssetsRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAssets", "Required field: AssetId, is not set");
    return DisassociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DisassociateAssets", "Invalid DNS host: " << uri.GetAuthority());
      return DisassociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/disassociate");
  return DisassociateAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAssetsOutcomeCallable IoTSiteWiseClient::DisassociateAssetsCallable(const DisassociateAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDisassociateAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const DisassociateAssetsRequest& request, const DisassociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateAssets(request), context);
}

void IoTSiteWiseClient::DisassociateAssetsAsync(const DisassociateAssetsRequest& request, const DisassociateAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDisassociateAssetsAsyncHelper( this, request, handler, context ); } );
}

DisassociateTimeSeriesFromAssetPropertyOutcome IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty(const DisassociateTimeSeriesFromAssetPropertyRequest& request) const
{
  if (!request.AliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: Alias, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: AssetId, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: PropertyId, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Invalid DNS host: " << uri.GetAuthority());
      return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/timeseries/disassociate/");
  return DisassociateTimeSeriesFromAssetPropertyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTimeSeriesFromAssetPropertyOutcomeCallable IoTSiteWiseClient::DisassociateTimeSeriesFromAssetPropertyCallable(const DisassociateTimeSeriesFromAssetPropertyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTimeSeriesFromAssetPropertyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTimeSeriesFromAssetProperty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientDisassociateTimeSeriesFromAssetPropertyAsyncHelper(IoTSiteWiseClient const * const clientThis, const DisassociateTimeSeriesFromAssetPropertyRequest& request, const DisassociateTimeSeriesFromAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTimeSeriesFromAssetProperty(request), context);
}

void IoTSiteWiseClient::DisassociateTimeSeriesFromAssetPropertyAsync(const DisassociateTimeSeriesFromAssetPropertyRequest& request, const DisassociateTimeSeriesFromAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientDisassociateTimeSeriesFromAssetPropertyAsyncHelper( this, request, handler, context ); } );
}

GetAssetPropertyAggregatesOutcome IoTSiteWiseClient::GetAssetPropertyAggregates(const GetAssetPropertyAggregatesRequest& request) const
{
  if (!request.AggregateTypesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: AggregateTypes, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AggregateTypes]", false));
  }
  if (!request.ResolutionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: Resolution, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resolution]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: StartDate, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: EndDate, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Invalid DNS host: " << uri.GetAuthority());
      return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/aggregates");
  return GetAssetPropertyAggregatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssetPropertyAggregatesOutcomeCallable IoTSiteWiseClient::GetAssetPropertyAggregatesCallable(const GetAssetPropertyAggregatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssetPropertyAggregatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssetPropertyAggregates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientGetAssetPropertyAggregatesAsyncHelper(IoTSiteWiseClient const * const clientThis, const GetAssetPropertyAggregatesRequest& request, const GetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssetPropertyAggregates(request), context);
}

void IoTSiteWiseClient::GetAssetPropertyAggregatesAsync(const GetAssetPropertyAggregatesRequest& request, const GetAssetPropertyAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientGetAssetPropertyAggregatesAsyncHelper( this, request, handler, context ); } );
}

GetAssetPropertyValueOutcome IoTSiteWiseClient::GetAssetPropertyValue(const GetAssetPropertyValueRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAssetPropertyValue", "Invalid DNS host: " << uri.GetAuthority());
      return GetAssetPropertyValueOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/latest");
  return GetAssetPropertyValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssetPropertyValueOutcomeCallable IoTSiteWiseClient::GetAssetPropertyValueCallable(const GetAssetPropertyValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssetPropertyValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssetPropertyValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientGetAssetPropertyValueAsyncHelper(IoTSiteWiseClient const * const clientThis, const GetAssetPropertyValueRequest& request, const GetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssetPropertyValue(request), context);
}

void IoTSiteWiseClient::GetAssetPropertyValueAsync(const GetAssetPropertyValueRequest& request, const GetAssetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientGetAssetPropertyValueAsyncHelper( this, request, handler, context ); } );
}

GetAssetPropertyValueHistoryOutcome IoTSiteWiseClient::GetAssetPropertyValueHistory(const GetAssetPropertyValueHistoryRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAssetPropertyValueHistory", "Invalid DNS host: " << uri.GetAuthority());
      return GetAssetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/history");
  return GetAssetPropertyValueHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssetPropertyValueHistoryOutcomeCallable IoTSiteWiseClient::GetAssetPropertyValueHistoryCallable(const GetAssetPropertyValueHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssetPropertyValueHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssetPropertyValueHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientGetAssetPropertyValueHistoryAsyncHelper(IoTSiteWiseClient const * const clientThis, const GetAssetPropertyValueHistoryRequest& request, const GetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAssetPropertyValueHistory(request), context);
}

void IoTSiteWiseClient::GetAssetPropertyValueHistoryAsync(const GetAssetPropertyValueHistoryRequest& request, const GetAssetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientGetAssetPropertyValueHistoryAsyncHelper( this, request, handler, context ); } );
}

GetInterpolatedAssetPropertyValuesOutcome IoTSiteWiseClient::GetInterpolatedAssetPropertyValues(const GetInterpolatedAssetPropertyValuesRequest& request) const
{
  if (!request.StartTimeInSecondsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: StartTimeInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTimeInSeconds]", false));
  }
  if (!request.EndTimeInSecondsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: EndTimeInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTimeInSeconds]", false));
  }
  if (!request.QualityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: Quality, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Quality]", false));
  }
  if (!request.IntervalInSecondsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: IntervalInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntervalInSeconds]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: Type, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Invalid DNS host: " << uri.GetAuthority());
      return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/properties/interpolated");
  return GetInterpolatedAssetPropertyValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInterpolatedAssetPropertyValuesOutcomeCallable IoTSiteWiseClient::GetInterpolatedAssetPropertyValuesCallable(const GetInterpolatedAssetPropertyValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInterpolatedAssetPropertyValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInterpolatedAssetPropertyValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientGetInterpolatedAssetPropertyValuesAsyncHelper(IoTSiteWiseClient const * const clientThis, const GetInterpolatedAssetPropertyValuesRequest& request, const GetInterpolatedAssetPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInterpolatedAssetPropertyValues(request), context);
}

void IoTSiteWiseClient::GetInterpolatedAssetPropertyValuesAsync(const GetInterpolatedAssetPropertyValuesRequest& request, const GetInterpolatedAssetPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientGetInterpolatedAssetPropertyValuesAsyncHelper( this, request, handler, context ); } );
}

ListAccessPoliciesOutcome IoTSiteWiseClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAccessPolicies", "Invalid DNS host: " << uri.GetAuthority());
      return ListAccessPoliciesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/access-policies");
  return ListAccessPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPoliciesOutcomeCallable IoTSiteWiseClient::ListAccessPoliciesCallable(const ListAccessPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListAccessPoliciesAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAccessPolicies(request), context);
}

void IoTSiteWiseClient::ListAccessPoliciesAsync(const ListAccessPoliciesRequest& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListAccessPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListAssetModelsOutcome IoTSiteWiseClient::ListAssetModels(const ListAssetModelsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAssetModels", "Invalid DNS host: " << uri.GetAuthority());
      return ListAssetModelsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/asset-models");
  return ListAssetModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetModelsOutcomeCallable IoTSiteWiseClient::ListAssetModelsCallable(const ListAssetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListAssetModelsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListAssetModelsRequest& request, const ListAssetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssetModels(request), context);
}

void IoTSiteWiseClient::ListAssetModelsAsync(const ListAssetModelsRequest& request, const ListAssetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListAssetModelsAsyncHelper( this, request, handler, context ); } );
}

ListAssetRelationshipsOutcome IoTSiteWiseClient::ListAssetRelationships(const ListAssetRelationshipsRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetRelationships", "Required field: AssetId, is not set");
    return ListAssetRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.TraversalTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetRelationships", "Required field: TraversalType, is not set");
    return ListAssetRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TraversalType]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAssetRelationships", "Invalid DNS host: " << uri.GetAuthority());
      return ListAssetRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/assetRelationships");
  return ListAssetRelationshipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetRelationshipsOutcomeCallable IoTSiteWiseClient::ListAssetRelationshipsCallable(const ListAssetRelationshipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssetRelationshipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssetRelationships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListAssetRelationshipsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListAssetRelationshipsRequest& request, const ListAssetRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssetRelationships(request), context);
}

void IoTSiteWiseClient::ListAssetRelationshipsAsync(const ListAssetRelationshipsRequest& request, const ListAssetRelationshipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListAssetRelationshipsAsyncHelper( this, request, handler, context ); } );
}

ListAssetsOutcome IoTSiteWiseClient::ListAssets(const ListAssetsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAssets", "Invalid DNS host: " << uri.GetAuthority());
      return ListAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets");
  return ListAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetsOutcomeCallable IoTSiteWiseClient::ListAssetsCallable(const ListAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssets(request), context);
}

void IoTSiteWiseClient::ListAssetsAsync(const ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListAssetsAsyncHelper( this, request, handler, context ); } );
}

ListAssociatedAssetsOutcome IoTSiteWiseClient::ListAssociatedAssets(const ListAssociatedAssetsRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedAssets", "Required field: AssetId, is not set");
    return ListAssociatedAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAssociatedAssets", "Invalid DNS host: " << uri.GetAuthority());
      return ListAssociatedAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/hierarchies");
  return ListAssociatedAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedAssetsOutcomeCallable IoTSiteWiseClient::ListAssociatedAssetsCallable(const ListAssociatedAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListAssociatedAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListAssociatedAssetsRequest& request, const ListAssociatedAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociatedAssets(request), context);
}

void IoTSiteWiseClient::ListAssociatedAssetsAsync(const ListAssociatedAssetsRequest& request, const ListAssociatedAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListAssociatedAssetsAsyncHelper( this, request, handler, context ); } );
}

ListBulkImportJobsOutcome IoTSiteWiseClient::ListBulkImportJobs(const ListBulkImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListBulkImportJobs", "Invalid DNS host: " << uri.GetAuthority());
      return ListBulkImportJobsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/jobs");
  return ListBulkImportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBulkImportJobsOutcomeCallable IoTSiteWiseClient::ListBulkImportJobsCallable(const ListBulkImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBulkImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBulkImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListBulkImportJobsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListBulkImportJobsRequest& request, const ListBulkImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBulkImportJobs(request), context);
}

void IoTSiteWiseClient::ListBulkImportJobsAsync(const ListBulkImportJobsRequest& request, const ListBulkImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListBulkImportJobsAsyncHelper( this, request, handler, context ); } );
}

ListDashboardsOutcome IoTSiteWiseClient::ListDashboards(const ListDashboardsRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: ProjectId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListDashboards", "Invalid DNS host: " << uri.GetAuthority());
      return ListDashboardsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/dashboards");
  return ListDashboardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardsOutcomeCallable IoTSiteWiseClient::ListDashboardsCallable(const ListDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListDashboardsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDashboards(request), context);
}

void IoTSiteWiseClient::ListDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListDashboardsAsyncHelper( this, request, handler, context ); } );
}

ListGatewaysOutcome IoTSiteWiseClient::ListGateways(const ListGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListGateways", "Invalid DNS host: " << uri.GetAuthority());
      return ListGatewaysOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways");
  return ListGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGatewaysOutcomeCallable IoTSiteWiseClient::ListGatewaysCallable(const ListGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListGatewaysAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGateways(request), context);
}

void IoTSiteWiseClient::ListGatewaysAsync(const ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListGatewaysAsyncHelper( this, request, handler, context ); } );
}

ListPortalsOutcome IoTSiteWiseClient::ListPortals(const ListPortalsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListPortals", "Invalid DNS host: " << uri.GetAuthority());
      return ListPortalsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/portals");
  return ListPortalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPortalsOutcomeCallable IoTSiteWiseClient::ListPortalsCallable(const ListPortalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPortalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPortals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListPortalsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPortals(request), context);
}

void IoTSiteWiseClient::ListPortalsAsync(const ListPortalsRequest& request, const ListPortalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListPortalsAsyncHelper( this, request, handler, context ); } );
}

ListProjectAssetsOutcome IoTSiteWiseClient::ListProjectAssets(const ListProjectAssetsRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjectAssets", "Required field: ProjectId, is not set");
    return ListProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListProjectAssets", "Invalid DNS host: " << uri.GetAuthority());
      return ListProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  uri.AddPathSegments("/assets");
  return ListProjectAssetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectAssetsOutcomeCallable IoTSiteWiseClient::ListProjectAssetsCallable(const ListProjectAssetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectAssetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjectAssets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListProjectAssetsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListProjectAssetsRequest& request, const ListProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjectAssets(request), context);
}

void IoTSiteWiseClient::ListProjectAssetsAsync(const ListProjectAssetsRequest& request, const ListProjectAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListProjectAssetsAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome IoTSiteWiseClient::ListProjects(const ListProjectsRequest& request) const
{
  if (!request.PortalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: PortalId, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListProjects", "Invalid DNS host: " << uri.GetAuthority());
      return ListProjectsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable IoTSiteWiseClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListProjectsAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void IoTSiteWiseClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome IoTSiteWiseClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTagsForResource", "Invalid DNS host: " << uri.GetAuthority());
      return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTSiteWiseClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListTagsForResourceAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void IoTSiteWiseClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTimeSeriesOutcome IoTSiteWiseClient::ListTimeSeries(const ListTimeSeriesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTimeSeries", "Invalid DNS host: " << uri.GetAuthority());
      return ListTimeSeriesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/timeseries/");
  return ListTimeSeriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTimeSeriesOutcomeCallable IoTSiteWiseClient::ListTimeSeriesCallable(const ListTimeSeriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTimeSeriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTimeSeries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientListTimeSeriesAsyncHelper(IoTSiteWiseClient const * const clientThis, const ListTimeSeriesRequest& request, const ListTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTimeSeries(request), context);
}

void IoTSiteWiseClient::ListTimeSeriesAsync(const ListTimeSeriesRequest& request, const ListTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientListTimeSeriesAsyncHelper( this, request, handler, context ); } );
}

PutDefaultEncryptionConfigurationOutcome IoTSiteWiseClient::PutDefaultEncryptionConfiguration(const PutDefaultEncryptionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutDefaultEncryptionConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return PutDefaultEncryptionConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/configuration/account/encryption");
  return PutDefaultEncryptionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDefaultEncryptionConfigurationOutcomeCallable IoTSiteWiseClient::PutDefaultEncryptionConfigurationCallable(const PutDefaultEncryptionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDefaultEncryptionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDefaultEncryptionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientPutDefaultEncryptionConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const PutDefaultEncryptionConfigurationRequest& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDefaultEncryptionConfiguration(request), context);
}

void IoTSiteWiseClient::PutDefaultEncryptionConfigurationAsync(const PutDefaultEncryptionConfigurationRequest& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientPutDefaultEncryptionConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutLoggingOptionsOutcome IoTSiteWiseClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutLoggingOptions", "Invalid DNS host: " << uri.GetAuthority());
      return PutLoggingOptionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/logging");
  return PutLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingOptionsOutcomeCallable IoTSiteWiseClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientPutLoggingOptionsAsyncHelper(IoTSiteWiseClient const * const clientThis, const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLoggingOptions(request), context);
}

void IoTSiteWiseClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientPutLoggingOptionsAsyncHelper( this, request, handler, context ); } );
}

PutStorageConfigurationOutcome IoTSiteWiseClient::PutStorageConfiguration(const PutStorageConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutStorageConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return PutStorageConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/configuration/account/storage");
  return PutStorageConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutStorageConfigurationOutcomeCallable IoTSiteWiseClient::PutStorageConfigurationCallable(const PutStorageConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutStorageConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutStorageConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientPutStorageConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const PutStorageConfigurationRequest& request, const PutStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutStorageConfiguration(request), context);
}

void IoTSiteWiseClient::PutStorageConfigurationAsync(const PutStorageConfigurationRequest& request, const PutStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientPutStorageConfigurationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome IoTSiteWiseClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("TagResource", "Invalid DNS host: " << uri.GetAuthority());
      return TagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTSiteWiseClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientTagResourceAsyncHelper(IoTSiteWiseClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void IoTSiteWiseClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome IoTSiteWiseClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UntagResource", "Invalid DNS host: " << uri.GetAuthority());
      return UntagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTSiteWiseClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUntagResourceAsyncHelper(IoTSiteWiseClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void IoTSiteWiseClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAccessPolicyOutcome IoTSiteWiseClient::UpdateAccessPolicy(const UpdateAccessPolicyRequest& request) const
{
  if (!request.AccessPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccessPolicy", "Required field: AccessPolicyId, is not set");
    return UpdateAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPolicyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAccessPolicy", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/access-policies/");
  uri.AddPathSegment(request.GetAccessPolicyId());
  return UpdateAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccessPolicyOutcomeCallable IoTSiteWiseClient::UpdateAccessPolicyCallable(const UpdateAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateAccessPolicyAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccessPolicy(request), context);
}

void IoTSiteWiseClient::UpdateAccessPolicyAsync(const UpdateAccessPolicyRequest& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateAccessPolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateAssetOutcome IoTSiteWiseClient::UpdateAsset(const UpdateAssetRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: AssetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAsset", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  return UpdateAssetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssetOutcomeCallable IoTSiteWiseClient::UpdateAssetCallable(const UpdateAssetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAsset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateAssetAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAsset(request), context);
}

void IoTSiteWiseClient::UpdateAssetAsync(const UpdateAssetRequest& request, const UpdateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateAssetAsyncHelper( this, request, handler, context ); } );
}

UpdateAssetModelOutcome IoTSiteWiseClient::UpdateAssetModel(const UpdateAssetModelRequest& request) const
{
  if (!request.AssetModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetModel", "Required field: AssetModelId, is not set");
    return UpdateAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAssetModel", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/asset-models/");
  uri.AddPathSegment(request.GetAssetModelId());
  return UpdateAssetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssetModelOutcomeCallable IoTSiteWiseClient::UpdateAssetModelCallable(const UpdateAssetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateAssetModelAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateAssetModelRequest& request, const UpdateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssetModel(request), context);
}

void IoTSiteWiseClient::UpdateAssetModelAsync(const UpdateAssetModelRequest& request, const UpdateAssetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateAssetModelAsyncHelper( this, request, handler, context ); } );
}

UpdateAssetPropertyOutcome IoTSiteWiseClient::UpdateAssetProperty(const UpdateAssetPropertyRequest& request) const
{
  if (!request.AssetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetProperty", "Required field: AssetId, is not set");
    return UpdateAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetProperty", "Required field: PropertyId, is not set");
    return UpdateAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAssetProperty", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/assets/");
  uri.AddPathSegment(request.GetAssetId());
  uri.AddPathSegments("/properties/");
  uri.AddPathSegment(request.GetPropertyId());
  return UpdateAssetPropertyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAssetPropertyOutcomeCallable IoTSiteWiseClient::UpdateAssetPropertyCallable(const UpdateAssetPropertyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAssetPropertyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAssetProperty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateAssetPropertyAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateAssetPropertyRequest& request, const UpdateAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAssetProperty(request), context);
}

void IoTSiteWiseClient::UpdateAssetPropertyAsync(const UpdateAssetPropertyRequest& request, const UpdateAssetPropertyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateAssetPropertyAsyncHelper( this, request, handler, context ); } );
}

UpdateDashboardOutcome IoTSiteWiseClient::UpdateDashboard(const UpdateDashboardRequest& request) const
{
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateDashboard", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/dashboards/");
  uri.AddPathSegment(request.GetDashboardId());
  return UpdateDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardOutcomeCallable IoTSiteWiseClient::UpdateDashboardCallable(const UpdateDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateDashboardAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDashboard(request), context);
}

void IoTSiteWiseClient::UpdateDashboardAsync(const UpdateDashboardRequest& request, const UpdateDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateDashboardAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayOutcome IoTSiteWiseClient::UpdateGateway(const UpdateGatewayRequest& request) const
{
  if (!request.GatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGateway", "Required field: GatewayId, is not set");
    return UpdateGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateGateway", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways/");
  uri.AddPathSegment(request.GetGatewayId());
  return UpdateGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayOutcomeCallable IoTSiteWiseClient::UpdateGatewayCallable(const UpdateGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateGatewayAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGateway(request), context);
}

void IoTSiteWiseClient::UpdateGatewayAsync(const UpdateGatewayRequest& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateGatewayAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayCapabilityConfigurationOutcome IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration(const UpdateGatewayCapabilityConfigurationRequest& request) const
{
  if (!request.GatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayCapabilityConfiguration", "Required field: GatewayId, is not set");
    return UpdateGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateGatewayCapabilityConfiguration", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/20200301/gateways/");
  uri.AddPathSegment(request.GetGatewayId());
  uri.AddPathSegments("/capability");
  return UpdateGatewayCapabilityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayCapabilityConfigurationOutcomeCallable IoTSiteWiseClient::UpdateGatewayCapabilityConfigurationCallable(const UpdateGatewayCapabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayCapabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayCapabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateGatewayCapabilityConfigurationAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateGatewayCapabilityConfigurationRequest& request, const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayCapabilityConfiguration(request), context);
}

void IoTSiteWiseClient::UpdateGatewayCapabilityConfigurationAsync(const UpdateGatewayCapabilityConfigurationRequest& request, const UpdateGatewayCapabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateGatewayCapabilityConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdatePortalOutcome IoTSiteWiseClient::UpdatePortal(const UpdatePortalRequest& request) const
{
  if (!request.PortalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalId, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdatePortal", "Invalid DNS host: " << uri.GetAuthority());
      return UpdatePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/portals/");
  uri.AddPathSegment(request.GetPortalId());
  return UpdatePortalOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortalOutcomeCallable IoTSiteWiseClient::UpdatePortalCallable(const UpdatePortalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePortalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePortal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdatePortalAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePortal(request), context);
}

void IoTSiteWiseClient::UpdatePortalAsync(const UpdatePortalRequest& request, const UpdatePortalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdatePortalAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome IoTSiteWiseClient::UpdateProject(const UpdateProjectRequest& request) const
{
  if (!request.ProjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: ProjectId, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("monitor." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateProject", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProjectId());
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable IoTSiteWiseClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTSiteWiseClientUpdateProjectAsyncHelper(IoTSiteWiseClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void IoTSiteWiseClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTSiteWiseClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

