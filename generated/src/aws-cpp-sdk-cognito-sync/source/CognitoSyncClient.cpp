/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/cognito-sync/model/DeleteDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageRequest.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsRequest.h>
#include <aws/cognito-sync/model/GetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/ListDatasetsRequest.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/SubscribeToDatasetRequest.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/cognito-sync/model/UpdateRecordsRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoSync;
using namespace Aws::CognitoSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace CognitoSync
  {
    const char ALLOCATION_TAG[] = "CognitoSyncClient";
    const char SERVICE_NAME[] = "cognito-sync";
  }
}
const char* CognitoSyncClient::GetServiceName() {return SERVICE_NAME;}
const char* CognitoSyncClient::GetAllocationTag() {return ALLOCATION_TAG;}

CognitoSyncClient::CognitoSyncClient(const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration,
                           std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Cognito Sync",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials,
                           std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                           const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Cognito Sync",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                           const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Cognito Sync",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
CognitoSyncClient::CognitoSyncClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Cognito Sync",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Cognito Sync",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Cognito Sync",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

CognitoSyncClient::~CognitoSyncClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CognitoSyncEndpointProviderBase>& CognitoSyncClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CognitoSyncClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const
{
  AWS_OPERATION_GUARD(BulkPublish);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BulkPublish, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BulkPublish", "Required field: IdentityPoolId, is not set");
    return BulkPublishOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BulkPublish, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BulkPublish, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BulkPublish",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BulkPublishOutcome>(
    [&]()-> BulkPublishOutcome {
      return BulkPublishOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/bulkpublish");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityPoolId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDatasetOutcome>(
    [&]()-> DeleteDatasetOutcome {
      return DeleteDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityPoolId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDatasetOutcome>(
    [&]()-> DescribeDatasetOutcome {
      return DescribeDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIdentityPoolUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityPoolUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityPoolUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIdentityPoolUsage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIdentityPoolUsageOutcome>(
    [&]()-> DescribeIdentityPoolUsageOutcome {
      return DescribeIdentityPoolUsageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIdentityUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeIdentityUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIdentityUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIdentityUsage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIdentityUsageOutcome>(
    [&]()-> DescribeIdentityUsageOutcome {
      return DescribeIdentityUsageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBulkPublishDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBulkPublishDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBulkPublishDetails", "Required field: IdentityPoolId, is not set");
    return GetBulkPublishDetailsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBulkPublishDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBulkPublishDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBulkPublishDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBulkPublishDetailsOutcome>(
    [&]()-> GetBulkPublishDetailsOutcome {
      return GetBulkPublishDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/getBulkPublishDetails");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const
{
  AWS_OPERATION_GUARD(GetCognitoEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return GetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCognitoEvents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCognitoEventsOutcome>(
    [&]()-> GetCognitoEventsOutcome {
      return GetCognitoEventsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/events");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetIdentityPoolConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return GetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIdentityPoolConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIdentityPoolConfigurationOutcome>(
    [&]()-> GetIdentityPoolConfigurationOutcome {
      return GetIdentityPoolConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatasets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityPoolId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDatasets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDatasetsOutcome>(
    [&]()-> ListDatasetsOutcome {
      return ListDatasetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdentityPoolUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdentityPoolUsage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdentityPoolUsageOutcome>(
    [&]()-> ListIdentityPoolUsageOutcome {
      return ListIdentityPoolUsageOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityPoolId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: DatasetName, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecords",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecordsOutcome>(
    [&]()-> ListRecordsOutcome {
      return ListRecordsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      resolvedEndpoint.AddPathSegments("/records");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityPoolId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RegisterDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterDeviceOutcome>(
    [&]()-> RegisterDeviceOutcome {
      return RegisterDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identity/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/device");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const
{
  AWS_OPERATION_GUARD(SetCognitoEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return SetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetCognitoEvents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetCognitoEventsOutcome>(
    [&]()-> SetCognitoEventsOutcome {
      return SetCognitoEventsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/events");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(SetIdentityPoolConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return SetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetIdentityPoolConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetIdentityPoolConfigurationOutcome>(
    [&]()-> SetIdentityPoolConfigurationOutcome {
      return SetIdentityPoolConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(SubscribeToDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubscribeToDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityPoolId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DatasetName, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DeviceId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SubscribeToDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SubscribeToDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SubscribeToDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SubscribeToDatasetOutcome>(
    [&]()-> SubscribeToDatasetOutcome {
      return SubscribeToDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      resolvedEndpoint.AddPathSegments("/subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(UnsubscribeFromDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnsubscribeFromDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityPoolId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DatasetName, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DeviceId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UnsubscribeFromDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UnsubscribeFromDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UnsubscribeFromDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UnsubscribeFromDatasetOutcome>(
    [&]()-> UnsubscribeFromDatasetOutcome {
      return UnsubscribeFromDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      resolvedEndpoint.AddPathSegments("/subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityPoolIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityPoolId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: DatasetName, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRecords",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRecordsOutcome>(
    [&]()-> UpdateRecordsOutcome {
      return UpdateRecordsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/identitypools/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityPoolId());
      resolvedEndpoint.AddPathSegments("/identities/");
      resolvedEndpoint.AddPathSegment(request.GetIdentityId());
      resolvedEndpoint.AddPathSegments("/datasets/");
      resolvedEndpoint.AddPathSegment(request.GetDatasetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


