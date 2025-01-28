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


#include <aws/amp/PrometheusServiceClient.h>
#include <aws/amp/PrometheusServiceErrorMarshaller.h>
#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <aws/amp/model/CreateAlertManagerDefinitionRequest.h>
#include <aws/amp/model/CreateLoggingConfigurationRequest.h>
#include <aws/amp/model/CreateRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/CreateScraperRequest.h>
#include <aws/amp/model/CreateWorkspaceRequest.h>
#include <aws/amp/model/DeleteAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DeleteLoggingConfigurationRequest.h>
#include <aws/amp/model/DeleteRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DeleteScraperRequest.h>
#include <aws/amp/model/DeleteWorkspaceRequest.h>
#include <aws/amp/model/DescribeAlertManagerDefinitionRequest.h>
#include <aws/amp/model/DescribeLoggingConfigurationRequest.h>
#include <aws/amp/model/DescribeRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/DescribeScraperRequest.h>
#include <aws/amp/model/DescribeWorkspaceRequest.h>
#include <aws/amp/model/GetDefaultScraperConfigurationRequest.h>
#include <aws/amp/model/ListRuleGroupsNamespacesRequest.h>
#include <aws/amp/model/ListScrapersRequest.h>
#include <aws/amp/model/ListTagsForResourceRequest.h>
#include <aws/amp/model/ListWorkspacesRequest.h>
#include <aws/amp/model/PutAlertManagerDefinitionRequest.h>
#include <aws/amp/model/PutRuleGroupsNamespaceRequest.h>
#include <aws/amp/model/TagResourceRequest.h>
#include <aws/amp/model/UntagResourceRequest.h>
#include <aws/amp/model/UpdateLoggingConfigurationRequest.h>
#include <aws/amp/model/UpdateScraperRequest.h>
#include <aws/amp/model/UpdateWorkspaceAliasRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PrometheusService;
using namespace Aws::PrometheusService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace PrometheusService
  {
    const char ALLOCATION_TAG[] = "PrometheusServiceClient";
    const char SERVICE_NAME[] = "aps";
  }
}
const char* PrometheusServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* PrometheusServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

PrometheusServiceClient::PrometheusServiceClient(const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration,
                           std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "amp",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

PrometheusServiceClient::PrometheusServiceClient(const AWSCredentials& credentials,
                           std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider,
                           const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "amp",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

PrometheusServiceClient::PrometheusServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider,
                           const PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "amp",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
PrometheusServiceClient::PrometheusServiceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "amp",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

PrometheusServiceClient::PrometheusServiceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "amp",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

PrometheusServiceClient::PrometheusServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "amp",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PrometheusServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

PrometheusServiceClient::~PrometheusServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<PrometheusServiceEndpointProviderBase>& PrometheusServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PrometheusServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateAlertManagerDefinitionOutcome PrometheusServiceClient::CreateAlertManagerDefinition(const CreateAlertManagerDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAlertManagerDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlertManagerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return CreateAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAlertManagerDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAlertManagerDefinitionOutcome>(
    [&]()-> CreateAlertManagerDefinitionOutcome {
      return CreateAlertManagerDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/alertmanager/definition");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLoggingConfigurationOutcome PrometheusServiceClient::CreateLoggingConfiguration(const CreateLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return CreateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLoggingConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLoggingConfigurationOutcome>(
    [&]()-> CreateLoggingConfigurationOutcome {
      return CreateLoggingConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/logging");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRuleGroupsNamespaceOutcome PrometheusServiceClient::CreateRuleGroupsNamespace(const CreateRuleGroupsNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRuleGroupsNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRuleGroupsNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return CreateRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRuleGroupsNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRuleGroupsNamespaceOutcome>(
    [&]()-> CreateRuleGroupsNamespaceOutcome {
      return CreateRuleGroupsNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/rulegroupsnamespaces");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateScraperOutcome PrometheusServiceClient::CreateScraper(const CreateScraperRequest& request) const
{
  AWS_OPERATION_GUARD(CreateScraper);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScraper, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateScraper",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateScraperOutcome>(
    [&]()-> CreateScraperOutcome {
      return CreateScraperOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scrapers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceOutcome PrometheusServiceClient::CreateWorkspace(const CreateWorkspaceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceOutcome>(
    [&]()-> CreateWorkspaceOutcome {
      return CreateWorkspaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAlertManagerDefinitionOutcome PrometheusServiceClient::DeleteAlertManagerDefinition(const DeleteAlertManagerDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAlertManagerDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlertManagerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DeleteAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAlertManagerDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAlertManagerDefinitionOutcome>(
    [&]()-> DeleteAlertManagerDefinitionOutcome {
      return DeleteAlertManagerDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/alertmanager/definition");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLoggingConfigurationOutcome PrometheusServiceClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DeleteLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLoggingConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLoggingConfigurationOutcome>(
    [&]()-> DeleteLoggingConfigurationOutcome {
      return DeleteLoggingConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/logging");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRuleGroupsNamespaceOutcome PrometheusServiceClient::DeleteRuleGroupsNamespace(const DeleteRuleGroupsNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRuleGroupsNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRuleGroupsNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: Name, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DeleteRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRuleGroupsNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRuleGroupsNamespaceOutcome>(
    [&]()-> DeleteRuleGroupsNamespaceOutcome {
      return DeleteRuleGroupsNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/rulegroupsnamespaces/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteScraperOutcome PrometheusServiceClient::DeleteScraper(const DeleteScraperRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteScraper);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScraper, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScraperIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScraper", "Required field: ScraperId, is not set");
    return DeleteScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteScraper",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScraperOutcome>(
    [&]()-> DeleteScraperOutcome {
      return DeleteScraperOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scrapers/");
      resolvedEndpoint.AddPathSegment(request.GetScraperId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkspaceOutcome PrometheusServiceClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkspace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkspaceOutcome>(
    [&]()-> DeleteWorkspaceOutcome {
      return DeleteWorkspaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAlertManagerDefinitionOutcome PrometheusServiceClient::DescribeAlertManagerDefinition(const DescribeAlertManagerDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAlertManagerDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlertManagerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return DescribeAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAlertManagerDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAlertManagerDefinitionOutcome>(
    [&]()-> DescribeAlertManagerDefinitionOutcome {
      return DescribeAlertManagerDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/alertmanager/definition");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLoggingConfigurationOutcome PrometheusServiceClient::DescribeLoggingConfiguration(const DescribeLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return DescribeLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeLoggingConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLoggingConfigurationOutcome>(
    [&]()-> DescribeLoggingConfigurationOutcome {
      return DescribeLoggingConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/logging");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRuleGroupsNamespaceOutcome PrometheusServiceClient::DescribeRuleGroupsNamespace(const DescribeRuleGroupsNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRuleGroupsNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRuleGroupsNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: Name, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return DescribeRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRuleGroupsNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRuleGroupsNamespaceOutcome>(
    [&]()-> DescribeRuleGroupsNamespaceOutcome {
      return DescribeRuleGroupsNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/rulegroupsnamespaces/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScraperOutcome PrometheusServiceClient::DescribeScraper(const DescribeScraperRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScraper);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScraper, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScraperIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeScraper", "Required field: ScraperId, is not set");
    return DescribeScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeScraper",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScraperOutcome>(
    [&]()-> DescribeScraperOutcome {
      return DescribeScraperOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scrapers/");
      resolvedEndpoint.AddPathSegment(request.GetScraperId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeWorkspaceOutcome PrometheusServiceClient::DescribeWorkspace(const DescribeWorkspaceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeWorkspace", "Required field: WorkspaceId, is not set");
    return DescribeWorkspaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeWorkspace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeWorkspaceOutcome>(
    [&]()-> DescribeWorkspaceOutcome {
      return DescribeWorkspaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDefaultScraperConfigurationOutcome PrometheusServiceClient::GetDefaultScraperConfiguration(const GetDefaultScraperConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetDefaultScraperConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultScraperConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDefaultScraperConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDefaultScraperConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDefaultScraperConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDefaultScraperConfigurationOutcome>(
    [&]()-> GetDefaultScraperConfigurationOutcome {
      return GetDefaultScraperConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scraperconfiguration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRuleGroupsNamespacesOutcome PrometheusServiceClient::ListRuleGroupsNamespaces(const ListRuleGroupsNamespacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRuleGroupsNamespaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRuleGroupsNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRuleGroupsNamespaces", "Required field: WorkspaceId, is not set");
    return ListRuleGroupsNamespacesOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRuleGroupsNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRuleGroupsNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRuleGroupsNamespaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRuleGroupsNamespacesOutcome>(
    [&]()-> ListRuleGroupsNamespacesOutcome {
      return ListRuleGroupsNamespacesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/rulegroupsnamespaces");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScrapersOutcome PrometheusServiceClient::ListScrapers(const ListScrapersRequest& request) const
{
  AWS_OPERATION_GUARD(ListScrapers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScrapers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListScrapers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScrapers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScrapers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScrapersOutcome>(
    [&]()-> ListScrapersOutcome {
      return ListScrapersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scrapers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome PrometheusServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListWorkspacesOutcome PrometheusServiceClient::ListWorkspaces(const ListWorkspacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkspaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkspaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkspaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkspacesOutcome>(
    [&]()-> ListWorkspacesOutcome {
      return ListWorkspacesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutAlertManagerDefinitionOutcome PrometheusServiceClient::PutAlertManagerDefinition(const PutAlertManagerDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(PutAlertManagerDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAlertManagerDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAlertManagerDefinition", "Required field: WorkspaceId, is not set");
    return PutAlertManagerDefinitionOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutAlertManagerDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutAlertManagerDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutAlertManagerDefinitionOutcome>(
    [&]()-> PutAlertManagerDefinitionOutcome {
      return PutAlertManagerDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/alertmanager/definition");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutRuleGroupsNamespaceOutcome PrometheusServiceClient::PutRuleGroupsNamespace(const PutRuleGroupsNamespaceRequest& request) const
{
  AWS_OPERATION_GUARD(PutRuleGroupsNamespace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRuleGroupsNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: Name, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRuleGroupsNamespace", "Required field: WorkspaceId, is not set");
    return PutRuleGroupsNamespaceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRuleGroupsNamespace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRuleGroupsNamespace",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRuleGroupsNamespaceOutcome>(
    [&]()-> PutRuleGroupsNamespaceOutcome {
      return PutRuleGroupsNamespaceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/rulegroupsnamespaces/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome PrometheusServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome PrometheusServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateLoggingConfigurationOutcome PrometheusServiceClient::UpdateLoggingConfiguration(const UpdateLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateLoggingConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLoggingConfiguration", "Required field: WorkspaceId, is not set");
    return UpdateLoggingConfigurationOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLoggingConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLoggingConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLoggingConfigurationOutcome>(
    [&]()-> UpdateLoggingConfigurationOutcome {
      return UpdateLoggingConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/logging");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateScraperOutcome PrometheusServiceClient::UpdateScraper(const UpdateScraperRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateScraper);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScraper, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScraperIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScraper", "Required field: ScraperId, is not set");
    return UpdateScraperOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScraperId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScraper, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScraper",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScraperOutcome>(
    [&]()-> UpdateScraperOutcome {
      return UpdateScraperOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scrapers/");
      resolvedEndpoint.AddPathSegment(request.GetScraperId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkspaceAliasOutcome PrometheusServiceClient::UpdateWorkspaceAlias(const UpdateWorkspaceAliasRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWorkspaceAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspaceAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceAlias", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceAliasOutcome(Aws::Client::AWSError<PrometheusServiceErrors>(PrometheusServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWorkspaceAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkspaceAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkspaceAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkspaceAliasOutcome>(
    [&]()-> UpdateWorkspaceAliasOutcome {
      return UpdateWorkspaceAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workspaces/");
      resolvedEndpoint.AddPathSegment(request.GetWorkspaceId());
      resolvedEndpoint.AddPathSegments("/alias");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


