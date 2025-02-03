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


#include <aws/appfabric/AppFabricClient.h>
#include <aws/appfabric/AppFabricErrorMarshaller.h>
#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <aws/appfabric/model/BatchGetUserAccessTasksRequest.h>
#include <aws/appfabric/model/ConnectAppAuthorizationRequest.h>
#include <aws/appfabric/model/CreateAppAuthorizationRequest.h>
#include <aws/appfabric/model/CreateAppBundleRequest.h>
#include <aws/appfabric/model/CreateIngestionRequest.h>
#include <aws/appfabric/model/CreateIngestionDestinationRequest.h>
#include <aws/appfabric/model/DeleteAppAuthorizationRequest.h>
#include <aws/appfabric/model/DeleteAppBundleRequest.h>
#include <aws/appfabric/model/DeleteIngestionRequest.h>
#include <aws/appfabric/model/DeleteIngestionDestinationRequest.h>
#include <aws/appfabric/model/GetAppAuthorizationRequest.h>
#include <aws/appfabric/model/GetAppBundleRequest.h>
#include <aws/appfabric/model/GetIngestionRequest.h>
#include <aws/appfabric/model/GetIngestionDestinationRequest.h>
#include <aws/appfabric/model/ListAppAuthorizationsRequest.h>
#include <aws/appfabric/model/ListAppBundlesRequest.h>
#include <aws/appfabric/model/ListIngestionDestinationsRequest.h>
#include <aws/appfabric/model/ListIngestionsRequest.h>
#include <aws/appfabric/model/ListTagsForResourceRequest.h>
#include <aws/appfabric/model/StartIngestionRequest.h>
#include <aws/appfabric/model/StartUserAccessTasksRequest.h>
#include <aws/appfabric/model/StopIngestionRequest.h>
#include <aws/appfabric/model/TagResourceRequest.h>
#include <aws/appfabric/model/UntagResourceRequest.h>
#include <aws/appfabric/model/UpdateAppAuthorizationRequest.h>
#include <aws/appfabric/model/UpdateIngestionDestinationRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppFabric;
using namespace Aws::AppFabric::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace AppFabric
  {
    const char ALLOCATION_TAG[] = "AppFabricClient";
    const char SERVICE_NAME[] = "appfabric";
  }
}
const char* AppFabricClient::GetServiceName() {return SERVICE_NAME;}
const char* AppFabricClient::GetAllocationTag() {return ALLOCATION_TAG;}

AppFabricClient::AppFabricClient(const AppFabric::AppFabricClientConfiguration& clientConfiguration,
                           std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AppFabric",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

AppFabricClient::AppFabricClient(const AWSCredentials& credentials,
                           std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider,
                           const AppFabric::AppFabricClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AppFabric",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

AppFabricClient::AppFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AppFabricEndpointProviderBase> endpointProvider,
                           const AppFabric::AppFabricClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AppFabric",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
AppFabricClient::AppFabricClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "AppFabric",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

AppFabricClient::AppFabricClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AppFabric",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

AppFabricClient::AppFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "AppFabric",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<AppFabricErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<AppFabricEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

AppFabricClient::~AppFabricClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<AppFabricEndpointProviderBase>& AppFabricClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppFabricClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchGetUserAccessTasksOutcome AppFabricClient::BatchGetUserAccessTasks(const BatchGetUserAccessTasksRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetUserAccessTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetUserAccessTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetUserAccessTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetUserAccessTasksOutcome>(
    [&]()-> BatchGetUserAccessTasksOutcome {
      return BatchGetUserAccessTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/useraccess/batchget");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConnectAppAuthorizationOutcome AppFabricClient::ConnectAppAuthorization(const ConnectAppAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(ConnectAppAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConnectAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConnectAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return ConnectAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConnectAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return ConnectAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ConnectAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ConnectAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ConnectAppAuthorization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ConnectAppAuthorizationOutcome>(
    [&]()-> ConnectAppAuthorizationOutcome {
      return ConnectAppAuthorizationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations/");
      resolvedEndpoint.AddPathSegment(request.GetAppAuthorizationIdentifier());
      resolvedEndpoint.AddPathSegments("/connect");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAppAuthorizationOutcome AppFabricClient::CreateAppAuthorization(const CreateAppAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAppAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return CreateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAppAuthorization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAppAuthorizationOutcome>(
    [&]()-> CreateAppAuthorizationOutcome {
      return CreateAppAuthorizationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAppBundleOutcome AppFabricClient::CreateAppBundle(const CreateAppBundleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAppBundle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAppBundle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAppBundleOutcome>(
    [&]()-> CreateAppBundleOutcome {
      return CreateAppBundleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIngestionOutcome AppFabricClient::CreateIngestion(const CreateIngestionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIngestion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AppBundleIdentifier, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIngestion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIngestionOutcome>(
    [&]()-> CreateIngestionOutcome {
      return CreateIngestionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIngestionDestinationOutcome AppFabricClient::CreateIngestionDestination(const CreateIngestionDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIngestionDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIngestionDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return CreateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return CreateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIngestionDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIngestionDestinationOutcome>(
    [&]()-> CreateIngestionDestinationOutcome {
      return CreateIngestionDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestiondestinations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAppAuthorizationOutcome AppFabricClient::DeleteAppAuthorization(const DeleteAppAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAppAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return DeleteAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return DeleteAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAppAuthorization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAppAuthorizationOutcome>(
    [&]()-> DeleteAppAuthorizationOutcome {
      return DeleteAppAuthorizationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations/");
      resolvedEndpoint.AddPathSegment(request.GetAppAuthorizationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAppBundleOutcome AppFabricClient::DeleteAppBundle(const DeleteAppBundleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAppBundle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppBundle", "Required field: AppBundleIdentifier, is not set");
    return DeleteAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAppBundle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAppBundleOutcome>(
    [&]()-> DeleteAppBundleOutcome {
      return DeleteAppBundleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIngestionOutcome AppFabricClient::DeleteIngestion(const DeleteIngestionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIngestion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIngestion", "Required field: AppBundleIdentifier, is not set");
    return DeleteIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIngestion", "Required field: IngestionIdentifier, is not set");
    return DeleteIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIngestion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIngestionOutcome>(
    [&]()-> DeleteIngestionOutcome {
      return DeleteIngestionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIngestionDestinationOutcome AppFabricClient::DeleteIngestionDestination(const DeleteIngestionDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIngestionDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIngestionDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return DeleteIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIngestionDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIngestionDestinationOutcome>(
    [&]()-> DeleteIngestionDestinationOutcome {
      return DeleteIngestionDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestiondestinations/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionDestinationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAppAuthorizationOutcome AppFabricClient::GetAppAuthorization(const GetAppAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(GetAppAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return GetAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return GetAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAppAuthorization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAppAuthorizationOutcome>(
    [&]()-> GetAppAuthorizationOutcome {
      return GetAppAuthorizationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations/");
      resolvedEndpoint.AddPathSegment(request.GetAppAuthorizationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAppBundleOutcome AppFabricClient::GetAppBundle(const GetAppBundleRequest& request) const
{
  AWS_OPERATION_GUARD(GetAppBundle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppBundle", "Required field: AppBundleIdentifier, is not set");
    return GetAppBundleOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAppBundle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAppBundle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAppBundleOutcome>(
    [&]()-> GetAppBundleOutcome {
      return GetAppBundleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIngestionOutcome AppFabricClient::GetIngestion(const GetIngestionRequest& request) const
{
  AWS_OPERATION_GUARD(GetIngestion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIngestion", "Required field: AppBundleIdentifier, is not set");
    return GetIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIngestion", "Required field: IngestionIdentifier, is not set");
    return GetIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIngestion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIngestionOutcome>(
    [&]()-> GetIngestionOutcome {
      return GetIngestionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIngestionDestinationOutcome AppFabricClient::GetIngestionDestination(const GetIngestionDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(GetIngestionDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIngestionDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return GetIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIngestionDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIngestionDestinationOutcome>(
    [&]()-> GetIngestionDestinationOutcome {
      return GetIngestionDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestiondestinations/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionDestinationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAppAuthorizationsOutcome AppFabricClient::ListAppAuthorizations(const ListAppAuthorizationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAppAuthorizations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppAuthorizations", "Required field: AppBundleIdentifier, is not set");
    return ListAppAuthorizationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAppAuthorizations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAppAuthorizations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAppAuthorizations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAppAuthorizationsOutcome>(
    [&]()-> ListAppAuthorizationsOutcome {
      return ListAppAuthorizationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAppBundlesOutcome AppFabricClient::ListAppBundles(const ListAppBundlesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAppBundles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAppBundles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAppBundles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAppBundles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAppBundlesOutcome>(
    [&]()-> ListAppBundlesOutcome {
      return ListAppBundlesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionDestinationsOutcome AppFabricClient::ListIngestionDestinations(const ListIngestionDestinationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIngestionDestinations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestionDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestionDestinations", "Required field: AppBundleIdentifier, is not set");
    return ListIngestionDestinationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestionDestinations", "Required field: IngestionIdentifier, is not set");
    return ListIngestionDestinationsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIngestionDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestionDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestionDestinations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionDestinationsOutcome>(
    [&]()-> ListIngestionDestinationsOutcome {
      return ListIngestionDestinationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestiondestinations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionsOutcome AppFabricClient::ListIngestions(const ListIngestionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIngestions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AppBundleIdentifier, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionsOutcome>(
    [&]()-> ListIngestionsOutcome {
      return ListIngestionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome AppFabricClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartIngestionOutcome AppFabricClient::StartIngestion(const StartIngestionRequest& request) const
{
  AWS_OPERATION_GUARD(StartIngestion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartIngestion", "Required field: IngestionIdentifier, is not set");
    return StartIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartIngestion", "Required field: AppBundleIdentifier, is not set");
    return StartIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartIngestion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartIngestionOutcome>(
    [&]()-> StartIngestionOutcome {
      return StartIngestionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartUserAccessTasksOutcome AppFabricClient::StartUserAccessTasks(const StartUserAccessTasksRequest& request) const
{
  AWS_OPERATION_GUARD(StartUserAccessTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartUserAccessTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartUserAccessTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartUserAccessTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartUserAccessTasksOutcome>(
    [&]()-> StartUserAccessTasksOutcome {
      return StartUserAccessTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/useraccess/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopIngestionOutcome AppFabricClient::StopIngestion(const StopIngestionRequest& request) const
{
  AWS_OPERATION_GUARD(StopIngestion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopIngestion", "Required field: IngestionIdentifier, is not set");
    return StopIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopIngestion", "Required field: AppBundleIdentifier, is not set");
    return StopIngestionOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopIngestion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopIngestion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopIngestionOutcome>(
    [&]()-> StopIngestionOutcome {
      return StopIngestionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome AppFabricClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome AppFabricClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAppAuthorizationOutcome AppFabricClient::UpdateAppAuthorization(const UpdateAppAuthorizationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAppAuthorization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppAuthorization", "Required field: AppBundleIdentifier, is not set");
    return UpdateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.AppAuthorizationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppAuthorization", "Required field: AppAuthorizationIdentifier, is not set");
    return UpdateAppAuthorizationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppAuthorizationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAppAuthorization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAppAuthorization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAppAuthorizationOutcome>(
    [&]()-> UpdateAppAuthorizationOutcome {
      return UpdateAppAuthorizationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/appauthorizations/");
      resolvedEndpoint.AddPathSegment(request.GetAppAuthorizationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIngestionDestinationOutcome AppFabricClient::UpdateIngestionDestination(const UpdateIngestionDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIngestionDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIngestionDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppBundleIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: AppBundleIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppBundleIdentifier]", false));
  }
  if (!request.IngestionIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: IngestionIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionIdentifier]", false));
  }
  if (!request.IngestionDestinationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIngestionDestination", "Required field: IngestionDestinationIdentifier, is not set");
    return UpdateIngestionDestinationOutcome(Aws::Client::AWSError<AppFabricErrors>(AppFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionDestinationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIngestionDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIngestionDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIngestionDestinationOutcome>(
    [&]()-> UpdateIngestionDestinationOutcome {
      return UpdateIngestionDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/appbundles/");
      resolvedEndpoint.AddPathSegment(request.GetAppBundleIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestions/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionIdentifier());
      resolvedEndpoint.AddPathSegments("/ingestiondestinations/");
      resolvedEndpoint.AddPathSegment(request.GetIngestionDestinationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


