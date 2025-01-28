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


#include <aws/bedrock-data-automation/BedrockDataAutomationClient.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrorMarshaller.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionRequest.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/GetBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockDataAutomation;
using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace BedrockDataAutomation
  {
    const char ALLOCATION_TAG[] = "BedrockDataAutomationClient";
    const char SERVICE_NAME[] = "bedrock";
  }
}
const char* BedrockDataAutomationClient::GetServiceName() {return SERVICE_NAME;}
const char* BedrockDataAutomationClient::GetAllocationTag() {return ALLOCATION_TAG;}

BedrockDataAutomationClient::BedrockDataAutomationClient(const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration,
                           std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockDataAutomationClient::BedrockDataAutomationClient(const AWSCredentials& credentials,
                           std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider,
                           const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

BedrockDataAutomationClient::BedrockDataAutomationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider,
                           const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
BedrockDataAutomationClient::BedrockDataAutomationClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Bedrock Data Automation",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

BedrockDataAutomationClient::BedrockDataAutomationClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

BedrockDataAutomationClient::BedrockDataAutomationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Bedrock Data Automation",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

BedrockDataAutomationClient::~BedrockDataAutomationClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BedrockDataAutomationEndpointProviderBase>& BedrockDataAutomationClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BedrockDataAutomationClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateBlueprintOutcome BedrockDataAutomationClient::CreateBlueprint(const CreateBlueprintRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBlueprintOutcome>(
    [&]()-> CreateBlueprintOutcome {
      return CreateBlueprintOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBlueprintVersionOutcome BedrockDataAutomationClient::CreateBlueprintVersion(const CreateBlueprintVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBlueprintVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBlueprintVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBlueprintVersion", "Required field: BlueprintArn, is not set");
    return CreateBlueprintVersionOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBlueprintVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBlueprintVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBlueprintVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBlueprintVersionOutcome>(
    [&]()-> CreateBlueprintVersionOutcome {
      return CreateBlueprintVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      resolvedEndpoint.AddPathSegments("/versions/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataAutomationProjectOutcome BedrockDataAutomationClient::CreateDataAutomationProject(const CreateDataAutomationProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataAutomationProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataAutomationProjectOutcome>(
    [&]()-> CreateDataAutomationProjectOutcome {
      return CreateDataAutomationProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/data-automation-projects/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBlueprintOutcome BedrockDataAutomationClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBlueprint", "Required field: BlueprintArn, is not set");
    return DeleteBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBlueprintOutcome>(
    [&]()-> DeleteBlueprintOutcome {
      return DeleteBlueprintOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataAutomationProjectOutcome BedrockDataAutomationClient::DeleteDataAutomationProject(const DeleteDataAutomationProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataAutomationProject", "Required field: ProjectArn, is not set");
    return DeleteDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataAutomationProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataAutomationProjectOutcome>(
    [&]()-> DeleteDataAutomationProjectOutcome {
      return DeleteDataAutomationProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/data-automation-projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBlueprintOutcome BedrockDataAutomationClient::GetBlueprint(const GetBlueprintRequest& request) const
{
  AWS_OPERATION_GUARD(GetBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlueprint", "Required field: BlueprintArn, is not set");
    return GetBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBlueprintOutcome>(
    [&]()-> GetBlueprintOutcome {
      return GetBlueprintOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataAutomationProjectOutcome BedrockDataAutomationClient::GetDataAutomationProject(const GetDataAutomationProjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataAutomationProject", "Required field: ProjectArn, is not set");
    return GetDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationProjectOutcome>(
    [&]()-> GetDataAutomationProjectOutcome {
      return GetDataAutomationProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/data-automation-projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBlueprintsOutcome BedrockDataAutomationClient::ListBlueprints(const ListBlueprintsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBlueprints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBlueprints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBlueprintsOutcome>(
    [&]()-> ListBlueprintsOutcome {
      return ListBlueprintsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataAutomationProjectsOutcome BedrockDataAutomationClient::ListDataAutomationProjects(const ListDataAutomationProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataAutomationProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataAutomationProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataAutomationProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataAutomationProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataAutomationProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataAutomationProjectsOutcome>(
    [&]()-> ListDataAutomationProjectsOutcome {
      return ListDataAutomationProjectsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/data-automation-projects/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBlueprintOutcome BedrockDataAutomationClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBlueprint", "Required field: BlueprintArn, is not set");
    return UpdateBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBlueprintOutcome>(
    [&]()-> UpdateBlueprintOutcome {
      return UpdateBlueprintOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/blueprints/");
      resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataAutomationProjectOutcome BedrockDataAutomationClient::UpdateDataAutomationProject(const UpdateDataAutomationProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataAutomationProject", "Required field: ProjectArn, is not set");
    return UpdateDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataAutomationProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataAutomationProjectOutcome>(
    [&]()-> UpdateDataAutomationProjectOutcome {
      return UpdateDataAutomationProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/data-automation-projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


