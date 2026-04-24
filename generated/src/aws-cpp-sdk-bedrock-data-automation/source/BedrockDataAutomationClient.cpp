/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/BedrockDataAutomationAwsBearerTokenIdentityResolver.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationClient.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationErrorMarshaller.h>
#include <aws/bedrock-data-automation/model/CopyBlueprintStageRequest.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionRequest.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationLibraryRequest.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationLibraryRequest.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/GetBlueprintOptimizationStatusRequest.h>
#include <aws/bedrock-data-automation/model/GetBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryEntityRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryIngestionJobRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationLibraryRequest.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectRequest.h>
#include <aws/bedrock-data-automation/model/InvokeBlueprintOptimizationAsyncRequest.h>
#include <aws/bedrock-data-automation/model/InvokeDataAutomationLibraryIngestionJobRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryEntitiesRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryIngestionJobsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-data-automation/model/TagResourceRequest.h>
#include <aws/bedrock-data-automation/model/UntagResourceRequest.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintRequest.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationLibraryRequest.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockDataAutomation;
using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockDataAutomation {
const char ALLOCATION_TAG[] = "BedrockDataAutomationClient";
const char SERVICE_NAME[] = "bedrock";
}  // namespace BedrockDataAutomation
}  // namespace Aws
const char* BedrockDataAutomationClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockDataAutomationClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockDataAutomationClient::BedrockDataAutomationClient(
    const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration,
    std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockDataAutomationClient::BedrockDataAutomationClient(
    const AWSCredentials& credentials, std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider,
    const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockDataAutomationClient::BedrockDataAutomationClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<BedrockDataAutomationEndpointProviderBase> endpointProvider,
    const BedrockDataAutomation::BedrockDataAutomationClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
BedrockDataAutomationClient::BedrockDataAutomationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockDataAutomationClient::BedrockDataAutomationClient(const AWSCredentials& credentials,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockDataAutomationClient::BedrockDataAutomationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Data Automation", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockDataAutomationErrorMarshaller>(ALLOCATION_TAG),
          Aws::MakeShared<BedrockDataAutomationEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

BedrockDataAutomationClient::~BedrockDataAutomationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockDataAutomationEndpointProviderBase>& BedrockDataAutomationClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void BedrockDataAutomationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CopyBlueprintStageOutcome BedrockDataAutomationClient::CopyBlueprintStage(const CopyBlueprintStageRequest& request) const {
  AWS_OPERATION_GUARD(CopyBlueprintStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyBlueprintStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyBlueprintStage", "Required field: BlueprintArn, is not set");
    return CopyBlueprintStageOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CopyBlueprintStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CopyBlueprintStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CopyBlueprintStage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CopyBlueprintStageOutcome>(
      [&]() -> CopyBlueprintStageOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/blueprints/");
                                               resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
                                               resolvedEndpoint.AddPathSegments("/copy-stage");
                                             });
        return result.IsSuccess() ? CopyBlueprintStageOutcome(result.GetResultWithOwnership())
                                  : CopyBlueprintStageOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBlueprintOutcome BedrockDataAutomationClient::CreateBlueprint(const CreateBlueprintRequest& request) const {
  AWS_OPERATION_GUARD(CreateBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBlueprint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBlueprintOutcome>(
      [&]() -> CreateBlueprintOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/blueprints/"); });
        return result.IsSuccess() ? CreateBlueprintOutcome(result.GetResultWithOwnership())
                                  : CreateBlueprintOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBlueprintVersionOutcome BedrockDataAutomationClient::CreateBlueprintVersion(const CreateBlueprintVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateBlueprintVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBlueprintVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBlueprintVersion", "Required field: BlueprintArn, is not set");
    return CreateBlueprintVersionOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBlueprintVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBlueprintVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBlueprintVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBlueprintVersionOutcome>(
      [&]() -> CreateBlueprintVersionOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/blueprints/");
                                               resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
                                               resolvedEndpoint.AddPathSegments("/versions/");
                                             });
        return result.IsSuccess() ? CreateBlueprintVersionOutcome(result.GetResultWithOwnership())
                                  : CreateBlueprintVersionOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataAutomationLibraryOutcome BedrockDataAutomationClient::CreateDataAutomationLibrary(
    const CreateDataAutomationLibraryRequest& request) const {
  AWS_OPERATION_GUARD(CreateDataAutomationLibrary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataAutomationLibrary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataAutomationLibrary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataAutomationLibraryOutcome>(
      [&]() -> CreateDataAutomationLibraryOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/data-automation-libraries/"); });
        return result.IsSuccess() ? CreateDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                                  : CreateDataAutomationLibraryOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataAutomationProjectOutcome BedrockDataAutomationClient::CreateDataAutomationProject(
    const CreateDataAutomationProjectRequest& request) const {
  AWS_OPERATION_GUARD(CreateDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataAutomationProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataAutomationProjectOutcome>(
      [&]() -> CreateDataAutomationProjectOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/data-automation-projects/"); });
        return result.IsSuccess() ? CreateDataAutomationProjectOutcome(result.GetResultWithOwnership())
                                  : CreateDataAutomationProjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBlueprintOutcome BedrockDataAutomationClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const {
  AWS_OPERATION_GUARD(DeleteBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBlueprint", "Required field: BlueprintArn, is not set");
    return DeleteBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBlueprint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBlueprintOutcome>(
      [&]() -> DeleteBlueprintOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/blueprints/");
                                               resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
                                             });
        return result.IsSuccess() ? DeleteBlueprintOutcome(result.GetResultWithOwnership())
                                  : DeleteBlueprintOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataAutomationLibraryOutcome BedrockDataAutomationClient::DeleteDataAutomationLibrary(
    const DeleteDataAutomationLibraryRequest& request) const {
  AWS_OPERATION_GUARD(DeleteDataAutomationLibrary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataAutomationLibrary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return DeleteDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataAutomationLibrary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataAutomationLibraryOutcome>(
      [&]() -> DeleteDataAutomationLibraryOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                             });
        return result.IsSuccess() ? DeleteDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                                  : DeleteDataAutomationLibraryOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataAutomationProjectOutcome BedrockDataAutomationClient::DeleteDataAutomationProject(
    const DeleteDataAutomationProjectRequest& request) const {
  AWS_OPERATION_GUARD(DeleteDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAutomationProject", "Required field: ProjectArn, is not set");
    return DeleteDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataAutomationProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataAutomationProjectOutcome>(
      [&]() -> DeleteDataAutomationProjectOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-projects/");
                                               resolvedEndpoint.AddPathSegment(request.GetProjectArn());
                                             });
        return result.IsSuccess() ? DeleteDataAutomationProjectOutcome(result.GetResultWithOwnership())
                                  : DeleteDataAutomationProjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBlueprintOutcome BedrockDataAutomationClient::GetBlueprint(const GetBlueprintRequest& request) const {
  AWS_OPERATION_GUARD(GetBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlueprint", "Required field: BlueprintArn, is not set");
    return GetBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBlueprint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBlueprintOutcome>(
      [&]() -> GetBlueprintOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/blueprints/");
                                               resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
                                             });
        return result.IsSuccess() ? GetBlueprintOutcome(result.GetResultWithOwnership())
                                  : GetBlueprintOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBlueprintOptimizationStatusOutcome BedrockDataAutomationClient::GetBlueprintOptimizationStatus(
    const GetBlueprintOptimizationStatusRequest& request) const {
  AWS_OPERATION_GUARD(GetBlueprintOptimizationStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlueprintOptimizationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InvocationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlueprintOptimizationStatus", "Required field: InvocationArn, is not set");
    return GetBlueprintOptimizationStatusOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvocationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBlueprintOptimizationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBlueprintOptimizationStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBlueprintOptimizationStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBlueprintOptimizationStatusOutcome>(
      [&]() -> GetBlueprintOptimizationStatusOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/getBlueprintOptimizationStatus/");
                                               resolvedEndpoint.AddPathSegment(request.GetInvocationArn());
                                             });
        return result.IsSuccess() ? GetBlueprintOptimizationStatusOutcome(result.GetResultWithOwnership())
                                  : GetBlueprintOptimizationStatusOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataAutomationLibraryOutcome BedrockDataAutomationClient::GetDataAutomationLibrary(
    const GetDataAutomationLibraryRequest& request) const {
  AWS_OPERATION_GUARD(GetDataAutomationLibrary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationLibrary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return GetDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationLibrary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationLibraryOutcome>(
      [&]() -> GetDataAutomationLibraryOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                             });
        return result.IsSuccess() ? GetDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                                  : GetDataAutomationLibraryOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataAutomationLibraryEntityOutcome BedrockDataAutomationClient::GetDataAutomationLibraryEntity(
    const GetDataAutomationLibraryEntityRequest& request) const {
  AWS_OPERATION_GUARD(GetDataAutomationLibraryEntity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationLibraryEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibraryEntity", "Required field: LibraryArn, is not set");
    return GetDataAutomationLibraryEntityOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibraryEntity", "Required field: EntityType, is not set");
    return GetDataAutomationLibraryEntityOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibraryEntity", "Required field: EntityId, is not set");
    return GetDataAutomationLibraryEntityOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationLibraryEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationLibraryEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationLibraryEntity",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationLibraryEntityOutcome>(
      [&]() -> GetDataAutomationLibraryEntityOutcome {
        auto result =
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                     resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                     resolvedEndpoint.AddPathSegments("/entityType/");
                                     resolvedEndpoint.AddPathSegment(EntityTypeMapper::GetNameForEntityType(request.GetEntityType()));
                                     resolvedEndpoint.AddPathSegments("/entities/");
                                     resolvedEndpoint.AddPathSegment(request.GetEntityId());
                                   });
        return result.IsSuccess() ? GetDataAutomationLibraryEntityOutcome(result.GetResultWithOwnership())
                                  : GetDataAutomationLibraryEntityOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataAutomationLibraryIngestionJobOutcome BedrockDataAutomationClient::GetDataAutomationLibraryIngestionJob(
    const GetDataAutomationLibraryIngestionJobRequest& request) const {
  AWS_OPERATION_GUARD(GetDataAutomationLibraryIngestionJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationLibraryIngestionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibraryIngestionJob", "Required field: LibraryArn, is not set");
    return GetDataAutomationLibraryIngestionJobOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  if (!request.JobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibraryIngestionJob", "Required field: JobArn, is not set");
    return GetDataAutomationLibraryIngestionJobOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationLibraryIngestionJob, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationLibraryIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationLibraryIngestionJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationLibraryIngestionJobOutcome>(
      [&]() -> GetDataAutomationLibraryIngestionJobOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                               resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
                                               resolvedEndpoint.AddPathSegment(request.GetJobArn());
                                             });
        return result.IsSuccess() ? GetDataAutomationLibraryIngestionJobOutcome(result.GetResultWithOwnership())
                                  : GetDataAutomationLibraryIngestionJobOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataAutomationProjectOutcome BedrockDataAutomationClient::GetDataAutomationProject(
    const GetDataAutomationProjectRequest& request) const {
  AWS_OPERATION_GUARD(GetDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationProject", "Required field: ProjectArn, is not set");
    return GetDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataAutomationProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataAutomationProjectOutcome>(
      [&]() -> GetDataAutomationProjectOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-projects/");
                                               resolvedEndpoint.AddPathSegment(request.GetProjectArn());
                                             });
        return result.IsSuccess() ? GetDataAutomationProjectOutcome(result.GetResultWithOwnership())
                                  : GetDataAutomationProjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeBlueprintOptimizationAsyncOutcome BedrockDataAutomationClient::InvokeBlueprintOptimizationAsync(
    const InvokeBlueprintOptimizationAsyncRequest& request) const {
  AWS_OPERATION_GUARD(InvokeBlueprintOptimizationAsync);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeBlueprintOptimizationAsync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeBlueprintOptimizationAsync, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeBlueprintOptimizationAsync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeBlueprintOptimizationAsync",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeBlueprintOptimizationAsyncOutcome>(
      [&]() -> InvokeBlueprintOptimizationAsyncOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/invokeBlueprintOptimizationAsync");
                                             });
        return result.IsSuccess() ? InvokeBlueprintOptimizationAsyncOutcome(result.GetResultWithOwnership())
                                  : InvokeBlueprintOptimizationAsyncOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeDataAutomationLibraryIngestionJobOutcome BedrockDataAutomationClient::InvokeDataAutomationLibraryIngestionJob(
    const InvokeDataAutomationLibraryIngestionJobRequest& request) const {
  AWS_OPERATION_GUARD(InvokeDataAutomationLibraryIngestionJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeDataAutomationLibraryIngestionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeDataAutomationLibraryIngestionJob", "Required field: LibraryArn, is not set");
    return InvokeDataAutomationLibraryIngestionJobOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeDataAutomationLibraryIngestionJob, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeDataAutomationLibraryIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeDataAutomationLibraryIngestionJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeDataAutomationLibraryIngestionJobOutcome>(
      [&]() -> InvokeDataAutomationLibraryIngestionJobOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                               resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
                                             });
        return result.IsSuccess() ? InvokeDataAutomationLibraryIngestionJobOutcome(result.GetResultWithOwnership())
                                  : InvokeDataAutomationLibraryIngestionJobOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBlueprintsOutcome BedrockDataAutomationClient::ListBlueprints(const ListBlueprintsRequest& request) const {
  AWS_OPERATION_GUARD(ListBlueprints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBlueprints",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBlueprintsOutcome>(
      [&]() -> ListBlueprintsOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/blueprints/"); });
        return result.IsSuccess() ? ListBlueprintsOutcome(result.GetResultWithOwnership())
                                  : ListBlueprintsOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataAutomationLibrariesOutcome BedrockDataAutomationClient::ListDataAutomationLibraries(
    const ListDataAutomationLibrariesRequest& request) const {
  AWS_OPERATION_GUARD(ListDataAutomationLibraries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataAutomationLibraries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataAutomationLibraries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataAutomationLibraries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataAutomationLibraries",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataAutomationLibrariesOutcome>(
      [&]() -> ListDataAutomationLibrariesOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/data-automation-libraries/"); });
        return result.IsSuccess() ? ListDataAutomationLibrariesOutcome(result.GetResultWithOwnership())
                                  : ListDataAutomationLibrariesOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataAutomationLibraryEntitiesOutcome BedrockDataAutomationClient::ListDataAutomationLibraryEntities(
    const ListDataAutomationLibraryEntitiesRequest& request) const {
  AWS_OPERATION_GUARD(ListDataAutomationLibraryEntities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataAutomationLibraryEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataAutomationLibraryEntities", "Required field: LibraryArn, is not set");
    return ListDataAutomationLibraryEntitiesOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataAutomationLibraryEntities", "Required field: EntityType, is not set");
    return ListDataAutomationLibraryEntitiesOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataAutomationLibraryEntities, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataAutomationLibraryEntities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataAutomationLibraryEntities",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataAutomationLibraryEntitiesOutcome>(
      [&]() -> ListDataAutomationLibraryEntitiesOutcome {
        auto result =
            MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                     resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                     resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                     resolvedEndpoint.AddPathSegments("/entityType/");
                                     resolvedEndpoint.AddPathSegment(EntityTypeMapper::GetNameForEntityType(request.GetEntityType()));
                                     resolvedEndpoint.AddPathSegments("/entities/");
                                   });
        return result.IsSuccess() ? ListDataAutomationLibraryEntitiesOutcome(result.GetResultWithOwnership())
                                  : ListDataAutomationLibraryEntitiesOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataAutomationLibraryIngestionJobsOutcome BedrockDataAutomationClient::ListDataAutomationLibraryIngestionJobs(
    const ListDataAutomationLibraryIngestionJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListDataAutomationLibraryIngestionJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataAutomationLibraryIngestionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataAutomationLibraryIngestionJobs", "Required field: LibraryArn, is not set");
    return ListDataAutomationLibraryIngestionJobsOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataAutomationLibraryIngestionJobs, CoreErrors,
                          CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataAutomationLibraryIngestionJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataAutomationLibraryIngestionJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataAutomationLibraryIngestionJobsOutcome>(
      [&]() -> ListDataAutomationLibraryIngestionJobsOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                               resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
                                             });
        return result.IsSuccess() ? ListDataAutomationLibraryIngestionJobsOutcome(result.GetResultWithOwnership())
                                  : ListDataAutomationLibraryIngestionJobsOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataAutomationProjectsOutcome BedrockDataAutomationClient::ListDataAutomationProjects(
    const ListDataAutomationProjectsRequest& request) const {
  AWS_OPERATION_GUARD(ListDataAutomationProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataAutomationProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataAutomationProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataAutomationProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataAutomationProjects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataAutomationProjectsOutcome>(
      [&]() -> ListDataAutomationProjectsOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/data-automation-projects/"); });
        return result.IsSuccess() ? ListDataAutomationProjectsOutcome(result.GetResultWithOwnership())
                                  : ListDataAutomationProjectsOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome BedrockDataAutomationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/listTagsForResource"); });
        return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                                  : ListTagsForResourceOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome BedrockDataAutomationClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/tagResource"); });
        return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome BedrockDataAutomationClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto result = MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/untagResource"); });
        return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership())
                                  : UntagResourceOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBlueprintOutcome BedrockDataAutomationClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const {
  AWS_OPERATION_GUARD(UpdateBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBlueprint", "Required field: BlueprintArn, is not set");
    return UpdateBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBlueprint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBlueprintOutcome>(
      [&]() -> UpdateBlueprintOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/blueprints/");
                                               resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
                                             });
        return result.IsSuccess() ? UpdateBlueprintOutcome(result.GetResultWithOwnership())
                                  : UpdateBlueprintOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataAutomationLibraryOutcome BedrockDataAutomationClient::UpdateDataAutomationLibrary(
    const UpdateDataAutomationLibraryRequest& request) const {
  AWS_OPERATION_GUARD(UpdateDataAutomationLibrary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataAutomationLibrary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return UpdateDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataAutomationLibrary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataAutomationLibrary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataAutomationLibraryOutcome>(
      [&]() -> UpdateDataAutomationLibraryOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
                                               resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
                                             });
        return result.IsSuccess() ? UpdateDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                                  : UpdateDataAutomationLibraryOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataAutomationProjectOutcome BedrockDataAutomationClient::UpdateDataAutomationProject(
    const UpdateDataAutomationProjectRequest& request) const {
  AWS_OPERATION_GUARD(UpdateDataAutomationProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataAutomationProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAutomationProject", "Required field: ProjectArn, is not set");
    return UpdateDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataAutomationProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataAutomationProject",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataAutomationProjectOutcome>(
      [&]() -> UpdateDataAutomationProjectOutcome {
        auto result = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                               resolvedEndpoint.AddPathSegments("/data-automation-projects/");
                                               resolvedEndpoint.AddPathSegment(request.GetProjectArn());
                                             });
        return result.IsSuccess() ? UpdateDataAutomationProjectOutcome(result.GetResultWithOwnership())
                                  : UpdateDataAutomationProjectOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
