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


#include <aws/finspace/FinspaceClient.h>
#include <aws/finspace/FinspaceErrorMarshaller.h>
#include <aws/finspace/FinspaceEndpointProvider.h>
#include <aws/finspace/model/CreateKxChangesetRequest.h>
#include <aws/finspace/model/CreateKxClusterRequest.h>
#include <aws/finspace/model/CreateKxDatabaseRequest.h>
#include <aws/finspace/model/CreateKxDataviewRequest.h>
#include <aws/finspace/model/CreateKxEnvironmentRequest.h>
#include <aws/finspace/model/CreateKxScalingGroupRequest.h>
#include <aws/finspace/model/CreateKxUserRequest.h>
#include <aws/finspace/model/CreateKxVolumeRequest.h>
#include <aws/finspace/model/DeleteKxClusterRequest.h>
#include <aws/finspace/model/DeleteKxClusterNodeRequest.h>
#include <aws/finspace/model/DeleteKxDatabaseRequest.h>
#include <aws/finspace/model/DeleteKxDataviewRequest.h>
#include <aws/finspace/model/DeleteKxEnvironmentRequest.h>
#include <aws/finspace/model/DeleteKxScalingGroupRequest.h>
#include <aws/finspace/model/DeleteKxUserRequest.h>
#include <aws/finspace/model/DeleteKxVolumeRequest.h>
#include <aws/finspace/model/GetKxChangesetRequest.h>
#include <aws/finspace/model/GetKxClusterRequest.h>
#include <aws/finspace/model/GetKxConnectionStringRequest.h>
#include <aws/finspace/model/GetKxDatabaseRequest.h>
#include <aws/finspace/model/GetKxDataviewRequest.h>
#include <aws/finspace/model/GetKxEnvironmentRequest.h>
#include <aws/finspace/model/GetKxScalingGroupRequest.h>
#include <aws/finspace/model/GetKxUserRequest.h>
#include <aws/finspace/model/GetKxVolumeRequest.h>
#include <aws/finspace/model/ListKxChangesetsRequest.h>
#include <aws/finspace/model/ListKxClusterNodesRequest.h>
#include <aws/finspace/model/ListKxClustersRequest.h>
#include <aws/finspace/model/ListKxDatabasesRequest.h>
#include <aws/finspace/model/ListKxDataviewsRequest.h>
#include <aws/finspace/model/ListKxEnvironmentsRequest.h>
#include <aws/finspace/model/ListKxScalingGroupsRequest.h>
#include <aws/finspace/model/ListKxUsersRequest.h>
#include <aws/finspace/model/ListKxVolumesRequest.h>
#include <aws/finspace/model/ListTagsForResourceRequest.h>
#include <aws/finspace/model/TagResourceRequest.h>
#include <aws/finspace/model/UntagResourceRequest.h>
#include <aws/finspace/model/UpdateKxClusterCodeConfigurationRequest.h>
#include <aws/finspace/model/UpdateKxClusterDatabasesRequest.h>
#include <aws/finspace/model/UpdateKxDatabaseRequest.h>
#include <aws/finspace/model/UpdateKxDataviewRequest.h>
#include <aws/finspace/model/UpdateKxEnvironmentRequest.h>
#include <aws/finspace/model/UpdateKxEnvironmentNetworkRequest.h>
#include <aws/finspace/model/UpdateKxUserRequest.h>
#include <aws/finspace/model/UpdateKxVolumeRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::finspace;
using namespace Aws::finspace::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace finspace
  {
    const char ALLOCATION_TAG[] = "FinspaceClient";
    const char SERVICE_NAME[] = "finspace";
  }
}
const char* FinspaceClient::GetServiceName() {return SERVICE_NAME;}
const char* FinspaceClient::GetAllocationTag() {return ALLOCATION_TAG;}

FinspaceClient::FinspaceClient(const finspace::FinspaceClientConfiguration& clientConfiguration,
                           std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

FinspaceClient::FinspaceClient(const AWSCredentials& credentials,
                           std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider,
                           const finspace::FinspaceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

FinspaceClient::FinspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<FinspaceEndpointProviderBase> endpointProvider,
                           const finspace::FinspaceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
FinspaceClient::FinspaceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "finspace",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

FinspaceClient::FinspaceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

FinspaceClient::FinspaceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinspaceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<FinspaceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

FinspaceClient::~FinspaceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<FinspaceEndpointProviderBase>& FinspaceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void FinspaceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateKxChangesetOutcome FinspaceClient::CreateKxChangeset(const CreateKxChangesetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxChangeset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxChangeset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxChangeset", "Required field: EnvironmentId, is not set");
    return CreateKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxChangeset", "Required field: DatabaseName, is not set");
    return CreateKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxChangeset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxChangesetOutcome>(
    [&]()-> CreateKxChangesetOutcome {
      return CreateKxChangesetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/changesets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxClusterOutcome FinspaceClient::CreateKxCluster(const CreateKxClusterRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxCluster", "Required field: EnvironmentId, is not set");
    return CreateKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxClusterOutcome>(
    [&]()-> CreateKxClusterOutcome {
      return CreateKxClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxDatabaseOutcome FinspaceClient::CreateKxDatabase(const CreateKxDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxDatabase", "Required field: EnvironmentId, is not set");
    return CreateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxDatabaseOutcome>(
    [&]()-> CreateKxDatabaseOutcome {
      return CreateKxDatabaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxDataviewOutcome FinspaceClient::CreateKxDataview(const CreateKxDataviewRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxDataview);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxDataview", "Required field: EnvironmentId, is not set");
    return CreateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxDataview", "Required field: DatabaseName, is not set");
    return CreateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxDataview",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxDataviewOutcome>(
    [&]()-> CreateKxDataviewOutcome {
      return CreateKxDataviewOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/dataviews");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxEnvironmentOutcome FinspaceClient::CreateKxEnvironment(const CreateKxEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxEnvironmentOutcome>(
    [&]()-> CreateKxEnvironmentOutcome {
      return CreateKxEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxScalingGroupOutcome FinspaceClient::CreateKxScalingGroup(const CreateKxScalingGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxScalingGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxScalingGroup", "Required field: EnvironmentId, is not set");
    return CreateKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxScalingGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxScalingGroupOutcome>(
    [&]()-> CreateKxScalingGroupOutcome {
      return CreateKxScalingGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/scalingGroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxUserOutcome FinspaceClient::CreateKxUser(const CreateKxUserRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxUser", "Required field: EnvironmentId, is not set");
    return CreateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxUserOutcome>(
    [&]()-> CreateKxUserOutcome {
      return CreateKxUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/users");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKxVolumeOutcome FinspaceClient::CreateKxVolume(const CreateKxVolumeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKxVolume);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateKxVolume", "Required field: EnvironmentId, is not set");
    return CreateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKxVolume",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKxVolumeOutcome>(
    [&]()-> CreateKxVolumeOutcome {
      return CreateKxVolumeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/kxvolumes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxClusterOutcome FinspaceClient::DeleteKxCluster(const DeleteKxClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxCluster", "Required field: EnvironmentId, is not set");
    return DeleteKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxCluster", "Required field: ClusterName, is not set");
    return DeleteKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxClusterOutcome>(
    [&]()-> DeleteKxClusterOutcome {
      return DeleteKxClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxClusterNodeOutcome FinspaceClient::DeleteKxClusterNode(const DeleteKxClusterNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxClusterNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxClusterNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: EnvironmentId, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: ClusterName, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxClusterNode", "Required field: NodeId, is not set");
    return DeleteKxClusterNodeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxClusterNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxClusterNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxClusterNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxClusterNodeOutcome>(
    [&]()-> DeleteKxClusterNodeOutcome {
      return DeleteKxClusterNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxDatabaseOutcome FinspaceClient::DeleteKxDatabase(const DeleteKxDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: EnvironmentId, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: DatabaseName, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  if (!request.ClientTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDatabase", "Required field: ClientToken, is not set");
    return DeleteKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxDatabaseOutcome>(
    [&]()-> DeleteKxDatabaseOutcome {
      return DeleteKxDatabaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxDataviewOutcome FinspaceClient::DeleteKxDataview(const DeleteKxDataviewRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxDataview);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: EnvironmentId, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: DatabaseName, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: DataviewName, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataviewName]", false));
  }
  if (!request.ClientTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxDataview", "Required field: ClientToken, is not set");
    return DeleteKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxDataview",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxDataviewOutcome>(
    [&]()-> DeleteKxDataviewOutcome {
      return DeleteKxDataviewOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/dataviews/");
      resolvedEndpoint.AddPathSegment(request.GetDataviewName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxEnvironmentOutcome FinspaceClient::DeleteKxEnvironment(const DeleteKxEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxEnvironmentOutcome>(
    [&]()-> DeleteKxEnvironmentOutcome {
      return DeleteKxEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxScalingGroupOutcome FinspaceClient::DeleteKxScalingGroup(const DeleteKxScalingGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxScalingGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxScalingGroup", "Required field: EnvironmentId, is not set");
    return DeleteKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ScalingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxScalingGroup", "Required field: ScalingGroupName, is not set");
    return DeleteKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScalingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxScalingGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxScalingGroupOutcome>(
    [&]()-> DeleteKxScalingGroupOutcome {
      return DeleteKxScalingGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/scalingGroups/");
      resolvedEndpoint.AddPathSegment(request.GetScalingGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxUserOutcome FinspaceClient::DeleteKxUser(const DeleteKxUserRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxUser", "Required field: UserName, is not set");
    return DeleteKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxUser", "Required field: EnvironmentId, is not set");
    return DeleteKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxUserOutcome>(
    [&]()-> DeleteKxUserOutcome {
      return DeleteKxUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/users/");
      resolvedEndpoint.AddPathSegment(request.GetUserName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKxVolumeOutcome FinspaceClient::DeleteKxVolume(const DeleteKxVolumeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKxVolume);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxVolume", "Required field: EnvironmentId, is not set");
    return DeleteKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKxVolume", "Required field: VolumeName, is not set");
    return DeleteKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKxVolume",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKxVolumeOutcome>(
    [&]()-> DeleteKxVolumeOutcome {
      return DeleteKxVolumeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/kxvolumes/");
      resolvedEndpoint.AddPathSegment(request.GetVolumeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxChangesetOutcome FinspaceClient::GetKxChangeset(const GetKxChangesetRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxChangeset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxChangeset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: EnvironmentId, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: DatabaseName, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  if (!request.ChangesetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxChangeset", "Required field: ChangesetId, is not set");
    return GetKxChangesetOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangesetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxChangeset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxChangeset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxChangesetOutcome>(
    [&]()-> GetKxChangesetOutcome {
      return GetKxChangesetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/changesets/");
      resolvedEndpoint.AddPathSegment(request.GetChangesetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxClusterOutcome FinspaceClient::GetKxCluster(const GetKxClusterRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxCluster", "Required field: EnvironmentId, is not set");
    return GetKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxCluster", "Required field: ClusterName, is not set");
    return GetKxClusterOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxClusterOutcome>(
    [&]()-> GetKxClusterOutcome {
      return GetKxClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxConnectionStringOutcome FinspaceClient::GetKxConnectionString(const GetKxConnectionStringRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxConnectionString);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxConnectionString, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: UserArn, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserArn]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: EnvironmentId, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxConnectionString", "Required field: ClusterName, is not set");
    return GetKxConnectionStringOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxConnectionString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxConnectionString, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxConnectionString",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxConnectionStringOutcome>(
    [&]()-> GetKxConnectionStringOutcome {
      return GetKxConnectionStringOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/connectionString");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxDatabaseOutcome FinspaceClient::GetKxDatabase(const GetKxDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxDatabase", "Required field: EnvironmentId, is not set");
    return GetKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxDatabase", "Required field: DatabaseName, is not set");
    return GetKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxDatabaseOutcome>(
    [&]()-> GetKxDatabaseOutcome {
      return GetKxDatabaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxDataviewOutcome FinspaceClient::GetKxDataview(const GetKxDataviewRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxDataview);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: EnvironmentId, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: DatabaseName, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxDataview", "Required field: DataviewName, is not set");
    return GetKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataviewName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxDataview",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxDataviewOutcome>(
    [&]()-> GetKxDataviewOutcome {
      return GetKxDataviewOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/dataviews/");
      resolvedEndpoint.AddPathSegment(request.GetDataviewName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxEnvironmentOutcome FinspaceClient::GetKxEnvironment(const GetKxEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxEnvironment", "Required field: EnvironmentId, is not set");
    return GetKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxEnvironmentOutcome>(
    [&]()-> GetKxEnvironmentOutcome {
      return GetKxEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxScalingGroupOutcome FinspaceClient::GetKxScalingGroup(const GetKxScalingGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxScalingGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxScalingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxScalingGroup", "Required field: EnvironmentId, is not set");
    return GetKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ScalingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxScalingGroup", "Required field: ScalingGroupName, is not set");
    return GetKxScalingGroupOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScalingGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxScalingGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxScalingGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxScalingGroupOutcome>(
    [&]()-> GetKxScalingGroupOutcome {
      return GetKxScalingGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/scalingGroups/");
      resolvedEndpoint.AddPathSegment(request.GetScalingGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxUserOutcome FinspaceClient::GetKxUser(const GetKxUserRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxUser", "Required field: UserName, is not set");
    return GetKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxUser", "Required field: EnvironmentId, is not set");
    return GetKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxUserOutcome>(
    [&]()-> GetKxUserOutcome {
      return GetKxUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/users/");
      resolvedEndpoint.AddPathSegment(request.GetUserName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKxVolumeOutcome FinspaceClient::GetKxVolume(const GetKxVolumeRequest& request) const
{
  AWS_OPERATION_GUARD(GetKxVolume);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxVolume", "Required field: EnvironmentId, is not set");
    return GetKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKxVolume", "Required field: VolumeName, is not set");
    return GetKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKxVolume",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKxVolumeOutcome>(
    [&]()-> GetKxVolumeOutcome {
      return GetKxVolumeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/kxvolumes/");
      resolvedEndpoint.AddPathSegment(request.GetVolumeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxChangesetsOutcome FinspaceClient::ListKxChangesets(const ListKxChangesetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxChangesets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxChangesets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxChangesets", "Required field: EnvironmentId, is not set");
    return ListKxChangesetsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxChangesets", "Required field: DatabaseName, is not set");
    return ListKxChangesetsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxChangesets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxChangesets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxChangesets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxChangesetsOutcome>(
    [&]()-> ListKxChangesetsOutcome {
      return ListKxChangesetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/changesets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxClusterNodesOutcome FinspaceClient::ListKxClusterNodes(const ListKxClusterNodesRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxClusterNodes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxClusterNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxClusterNodes", "Required field: EnvironmentId, is not set");
    return ListKxClusterNodesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxClusterNodes", "Required field: ClusterName, is not set");
    return ListKxClusterNodesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxClusterNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxClusterNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxClusterNodes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxClusterNodesOutcome>(
    [&]()-> ListKxClusterNodesOutcome {
      return ListKxClusterNodesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/nodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxClustersOutcome FinspaceClient::ListKxClusters(const ListKxClustersRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxClusters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxClusters", "Required field: EnvironmentId, is not set");
    return ListKxClustersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxClusters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxClustersOutcome>(
    [&]()-> ListKxClustersOutcome {
      return ListKxClustersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxDatabasesOutcome FinspaceClient::ListKxDatabases(const ListKxDatabasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxDatabases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxDatabases", "Required field: EnvironmentId, is not set");
    return ListKxDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxDatabases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxDatabasesOutcome>(
    [&]()-> ListKxDatabasesOutcome {
      return ListKxDatabasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxDataviewsOutcome FinspaceClient::ListKxDataviews(const ListKxDataviewsRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxDataviews);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxDataviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxDataviews", "Required field: EnvironmentId, is not set");
    return ListKxDataviewsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxDataviews", "Required field: DatabaseName, is not set");
    return ListKxDataviewsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxDataviews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxDataviews, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxDataviews",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxDataviewsOutcome>(
    [&]()-> ListKxDataviewsOutcome {
      return ListKxDataviewsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/dataviews");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxEnvironmentsOutcome FinspaceClient::ListKxEnvironments(const ListKxEnvironmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxEnvironmentsOutcome>(
    [&]()-> ListKxEnvironmentsOutcome {
      return ListKxEnvironmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxScalingGroupsOutcome FinspaceClient::ListKxScalingGroups(const ListKxScalingGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxScalingGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxScalingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxScalingGroups", "Required field: EnvironmentId, is not set");
    return ListKxScalingGroupsOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxScalingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxScalingGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxScalingGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxScalingGroupsOutcome>(
    [&]()-> ListKxScalingGroupsOutcome {
      return ListKxScalingGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/scalingGroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxUsersOutcome FinspaceClient::ListKxUsers(const ListKxUsersRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxUsers", "Required field: EnvironmentId, is not set");
    return ListKxUsersOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxUsers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxUsersOutcome>(
    [&]()-> ListKxUsersOutcome {
      return ListKxUsersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/users");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKxVolumesOutcome FinspaceClient::ListKxVolumes(const ListKxVolumesRequest& request) const
{
  AWS_OPERATION_GUARD(ListKxVolumes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKxVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListKxVolumes", "Required field: EnvironmentId, is not set");
    return ListKxVolumesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKxVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKxVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKxVolumes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKxVolumesOutcome>(
    [&]()-> ListKxVolumesOutcome {
      return ListKxVolumesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/kxvolumes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome FinspaceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

TagResourceOutcome FinspaceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome FinspaceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateKxClusterCodeConfigurationOutcome FinspaceClient::UpdateKxClusterCodeConfiguration(const UpdateKxClusterCodeConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxClusterCodeConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxClusterCodeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterCodeConfiguration", "Required field: EnvironmentId, is not set");
    return UpdateKxClusterCodeConfigurationOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterCodeConfiguration", "Required field: ClusterName, is not set");
    return UpdateKxClusterCodeConfigurationOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxClusterCodeConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxClusterCodeConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxClusterCodeConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxClusterCodeConfigurationOutcome>(
    [&]()-> UpdateKxClusterCodeConfigurationOutcome {
      return UpdateKxClusterCodeConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/configuration/code");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxClusterDatabasesOutcome FinspaceClient::UpdateKxClusterDatabases(const UpdateKxClusterDatabasesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxClusterDatabases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxClusterDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterDatabases", "Required field: EnvironmentId, is not set");
    return UpdateKxClusterDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxClusterDatabases", "Required field: ClusterName, is not set");
    return UpdateKxClusterDatabasesOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxClusterDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxClusterDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxClusterDatabases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxClusterDatabasesOutcome>(
    [&]()-> UpdateKxClusterDatabasesOutcome {
      return UpdateKxClusterDatabasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterName());
      resolvedEndpoint.AddPathSegments("/configuration/databases");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxDatabaseOutcome FinspaceClient::UpdateKxDatabase(const UpdateKxDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxDatabase", "Required field: EnvironmentId, is not set");
    return UpdateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxDatabase", "Required field: DatabaseName, is not set");
    return UpdateKxDatabaseOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxDatabaseOutcome>(
    [&]()-> UpdateKxDatabaseOutcome {
      return UpdateKxDatabaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxDataviewOutcome FinspaceClient::UpdateKxDataview(const UpdateKxDataviewRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxDataview);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxDataview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: EnvironmentId, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.DatabaseNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: DatabaseName, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatabaseName]", false));
  }
  if (!request.DataviewNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxDataview", "Required field: DataviewName, is not set");
    return UpdateKxDataviewOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataviewName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxDataview, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxDataview",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxDataviewOutcome>(
    [&]()-> UpdateKxDataviewOutcome {
      return UpdateKxDataviewOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/databases/");
      resolvedEndpoint.AddPathSegment(request.GetDatabaseName());
      resolvedEndpoint.AddPathSegments("/dataviews/");
      resolvedEndpoint.AddPathSegment(request.GetDataviewName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxEnvironmentOutcome FinspaceClient::UpdateKxEnvironment(const UpdateKxEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxEnvironmentOutcome>(
    [&]()-> UpdateKxEnvironmentOutcome {
      return UpdateKxEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxEnvironmentNetworkOutcome FinspaceClient::UpdateKxEnvironmentNetwork(const UpdateKxEnvironmentNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxEnvironmentNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxEnvironmentNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxEnvironmentNetwork", "Required field: EnvironmentId, is not set");
    return UpdateKxEnvironmentNetworkOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxEnvironmentNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxEnvironmentNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxEnvironmentNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxEnvironmentNetworkOutcome>(
    [&]()-> UpdateKxEnvironmentNetworkOutcome {
      return UpdateKxEnvironmentNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/network");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxUserOutcome FinspaceClient::UpdateKxUser(const UpdateKxUserRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxUser", "Required field: EnvironmentId, is not set");
    return UpdateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxUser", "Required field: UserName, is not set");
    return UpdateKxUserOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxUserOutcome>(
    [&]()-> UpdateKxUserOutcome {
      return UpdateKxUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/users/");
      resolvedEndpoint.AddPathSegment(request.GetUserName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKxVolumeOutcome FinspaceClient::UpdateKxVolume(const UpdateKxVolumeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKxVolume);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKxVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxVolume", "Required field: EnvironmentId, is not set");
    return UpdateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  if (!request.VolumeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKxVolume", "Required field: VolumeName, is not set");
    return UpdateKxVolumeOutcome(Aws::Client::AWSError<FinspaceErrors>(FinspaceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VolumeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKxVolume, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKxVolume",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKxVolumeOutcome>(
    [&]()-> UpdateKxVolumeOutcome {
      return UpdateKxVolumeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/kx/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentId());
      resolvedEndpoint.AddPathSegments("/kxvolumes/");
      resolvedEndpoint.AddPathSegment(request.GetVolumeName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


