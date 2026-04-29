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
BedrockDataAutomationClient::InvokeOperationOutcome BedrockDataAutomationClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::AWSEndpoint&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result = MakeRequestDeserialize(&request, operationName, httpMethod,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolveUri(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
CopyBlueprintStageOutcome BedrockDataAutomationClient::CopyBlueprintStage(const CopyBlueprintStageRequest& request) const {
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyBlueprintStage", "Required field: BlueprintArn, is not set");
    return CopyBlueprintStageOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/blueprints/");
        resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
        resolvedEndpoint.AddPathSegments("/copy-stage");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CopyBlueprintStageOutcome(result.GetResultWithOwnership())
                            : CopyBlueprintStageOutcome(std::move(result.GetError()));
}
CreateBlueprintOutcome BedrockDataAutomationClient::CreateBlueprint(const CreateBlueprintRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/blueprints/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBlueprintOutcome(result.GetResultWithOwnership())
                            : CreateBlueprintOutcome(std::move(result.GetError()));
}
CreateBlueprintVersionOutcome BedrockDataAutomationClient::CreateBlueprintVersion(const CreateBlueprintVersionRequest& request) const {
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBlueprintVersion", "Required field: BlueprintArn, is not set");
    return CreateBlueprintVersionOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/blueprints/");
        resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
        resolvedEndpoint.AddPathSegments("/versions/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBlueprintVersionOutcome(result.GetResultWithOwnership())
                            : CreateBlueprintVersionOutcome(std::move(result.GetError()));
}
CreateDataAutomationLibraryOutcome BedrockDataAutomationClient::CreateDataAutomationLibrary(
    const CreateDataAutomationLibraryRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/data-automation-libraries/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                            : CreateDataAutomationLibraryOutcome(std::move(result.GetError()));
}
CreateDataAutomationProjectOutcome BedrockDataAutomationClient::CreateDataAutomationProject(
    const CreateDataAutomationProjectRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/data-automation-projects/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataAutomationProjectOutcome(result.GetResultWithOwnership())
                            : CreateDataAutomationProjectOutcome(std::move(result.GetError()));
}
DeleteBlueprintOutcome BedrockDataAutomationClient::DeleteBlueprint(const DeleteBlueprintRequest& request) const {
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBlueprint", "Required field: BlueprintArn, is not set");
    return DeleteBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/blueprints/");
        resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBlueprintOutcome(result.GetResultWithOwnership())
                            : DeleteBlueprintOutcome(std::move(result.GetError()));
}
DeleteDataAutomationLibraryOutcome BedrockDataAutomationClient::DeleteDataAutomationLibrary(
    const DeleteDataAutomationLibraryRequest& request) const {
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return DeleteDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                            : DeleteDataAutomationLibraryOutcome(std::move(result.GetError()));
}
DeleteDataAutomationProjectOutcome BedrockDataAutomationClient::DeleteDataAutomationProject(
    const DeleteDataAutomationProjectRequest& request) const {
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAutomationProject", "Required field: ProjectArn, is not set");
    return DeleteDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-projects/");
        resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataAutomationProjectOutcome(result.GetResultWithOwnership())
                            : DeleteDataAutomationProjectOutcome(std::move(result.GetError()));
}
GetBlueprintOutcome BedrockDataAutomationClient::GetBlueprint(const GetBlueprintRequest& request) const {
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlueprint", "Required field: BlueprintArn, is not set");
    return GetBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/blueprints/");
        resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintOutcome(result.GetResultWithOwnership()) : GetBlueprintOutcome(std::move(result.GetError()));
}
GetBlueprintOptimizationStatusOutcome BedrockDataAutomationClient::GetBlueprintOptimizationStatus(
    const GetBlueprintOptimizationStatusRequest& request) const {
  if (!request.InvocationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlueprintOptimizationStatus", "Required field: InvocationArn, is not set");
    return GetBlueprintOptimizationStatusOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvocationArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/getBlueprintOptimizationStatus/");
        resolvedEndpoint.AddPathSegment(request.GetInvocationArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintOptimizationStatusOutcome(result.GetResultWithOwnership())
                            : GetBlueprintOptimizationStatusOutcome(std::move(result.GetError()));
}
GetDataAutomationLibraryOutcome BedrockDataAutomationClient::GetDataAutomationLibrary(
    const GetDataAutomationLibraryRequest& request) const {
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return GetDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                            : GetDataAutomationLibraryOutcome(std::move(result.GetError()));
}
GetDataAutomationLibraryEntityOutcome BedrockDataAutomationClient::GetDataAutomationLibraryEntity(
    const GetDataAutomationLibraryEntityRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
        resolvedEndpoint.AddPathSegments("/entityType/");
        resolvedEndpoint.AddPathSegment(EntityTypeMapper::GetNameForEntityType(request.GetEntityType()));
        resolvedEndpoint.AddPathSegments("/entities/");
        resolvedEndpoint.AddPathSegment(request.GetEntityId());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataAutomationLibraryEntityOutcome(result.GetResultWithOwnership())
                            : GetDataAutomationLibraryEntityOutcome(std::move(result.GetError()));
}
GetDataAutomationLibraryIngestionJobOutcome BedrockDataAutomationClient::GetDataAutomationLibraryIngestionJob(
    const GetDataAutomationLibraryIngestionJobRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
        resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
        resolvedEndpoint.AddPathSegment(request.GetJobArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataAutomationLibraryIngestionJobOutcome(result.GetResultWithOwnership())
                            : GetDataAutomationLibraryIngestionJobOutcome(std::move(result.GetError()));
}
GetDataAutomationProjectOutcome BedrockDataAutomationClient::GetDataAutomationProject(
    const GetDataAutomationProjectRequest& request) const {
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAutomationProject", "Required field: ProjectArn, is not set");
    return GetDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-projects/");
        resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataAutomationProjectOutcome(result.GetResultWithOwnership())
                            : GetDataAutomationProjectOutcome(std::move(result.GetError()));
}
InvokeBlueprintOptimizationAsyncOutcome BedrockDataAutomationClient::InvokeBlueprintOptimizationAsync(
    const InvokeBlueprintOptimizationAsyncRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/invokeBlueprintOptimizationAsync"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InvokeBlueprintOptimizationAsyncOutcome(result.GetResultWithOwnership())
                            : InvokeBlueprintOptimizationAsyncOutcome(std::move(result.GetError()));
}
InvokeDataAutomationLibraryIngestionJobOutcome BedrockDataAutomationClient::InvokeDataAutomationLibraryIngestionJob(
    const InvokeDataAutomationLibraryIngestionJobRequest& request) const {
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeDataAutomationLibraryIngestionJob", "Required field: LibraryArn, is not set");
    return InvokeDataAutomationLibraryIngestionJobOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
        resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? InvokeDataAutomationLibraryIngestionJobOutcome(result.GetResultWithOwnership())
                            : InvokeDataAutomationLibraryIngestionJobOutcome(std::move(result.GetError()));
}
ListBlueprintsOutcome BedrockDataAutomationClient::ListBlueprints(const ListBlueprintsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/blueprints/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBlueprintsOutcome(result.GetResultWithOwnership()) : ListBlueprintsOutcome(std::move(result.GetError()));
}
ListDataAutomationLibrariesOutcome BedrockDataAutomationClient::ListDataAutomationLibraries(
    const ListDataAutomationLibrariesRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/data-automation-libraries/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataAutomationLibrariesOutcome(result.GetResultWithOwnership())
                            : ListDataAutomationLibrariesOutcome(std::move(result.GetError()));
}
ListDataAutomationLibraryEntitiesOutcome BedrockDataAutomationClient::ListDataAutomationLibraryEntities(
    const ListDataAutomationLibraryEntitiesRequest& request) const {
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

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
        resolvedEndpoint.AddPathSegments("/entityType/");
        resolvedEndpoint.AddPathSegment(EntityTypeMapper::GetNameForEntityType(request.GetEntityType()));
        resolvedEndpoint.AddPathSegments("/entities/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataAutomationLibraryEntitiesOutcome(result.GetResultWithOwnership())
                            : ListDataAutomationLibraryEntitiesOutcome(std::move(result.GetError()));
}
ListDataAutomationLibraryIngestionJobsOutcome BedrockDataAutomationClient::ListDataAutomationLibraryIngestionJobs(
    const ListDataAutomationLibraryIngestionJobsRequest& request) const {
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataAutomationLibraryIngestionJobs", "Required field: LibraryArn, is not set");
    return ListDataAutomationLibraryIngestionJobsOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
        resolvedEndpoint.AddPathSegments("/library-ingestion-jobs/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataAutomationLibraryIngestionJobsOutcome(result.GetResultWithOwnership())
                            : ListDataAutomationLibraryIngestionJobsOutcome(std::move(result.GetError()));
}
ListDataAutomationProjectsOutcome BedrockDataAutomationClient::ListDataAutomationProjects(
    const ListDataAutomationProjectsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/data-automation-projects/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataAutomationProjectsOutcome(result.GetResultWithOwnership())
                            : ListDataAutomationProjectsOutcome(std::move(result.GetError()));
}
ListTagsForResourceOutcome BedrockDataAutomationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/listTagsForResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}
TagResourceOutcome BedrockDataAutomationClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/tagResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
UntagResourceOutcome BedrockDataAutomationClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/untagResource"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
UpdateBlueprintOutcome BedrockDataAutomationClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const {
  if (!request.BlueprintArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBlueprint", "Required field: BlueprintArn, is not set");
    return UpdateBlueprintOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/blueprints/");
        resolvedEndpoint.AddPathSegment(request.GetBlueprintArn());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBlueprintOutcome(result.GetResultWithOwnership())
                            : UpdateBlueprintOutcome(std::move(result.GetError()));
}
UpdateDataAutomationLibraryOutcome BedrockDataAutomationClient::UpdateDataAutomationLibrary(
    const UpdateDataAutomationLibraryRequest& request) const {
  if (!request.LibraryArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAutomationLibrary", "Required field: LibraryArn, is not set");
    return UpdateDataAutomationLibraryOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LibraryArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-libraries/");
        resolvedEndpoint.AddPathSegment(request.GetLibraryArn());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataAutomationLibraryOutcome(result.GetResultWithOwnership())
                            : UpdateDataAutomationLibraryOutcome(std::move(result.GetError()));
}
UpdateDataAutomationProjectOutcome BedrockDataAutomationClient::UpdateDataAutomationProject(
    const UpdateDataAutomationProjectRequest& request) const {
  if (!request.ProjectArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAutomationProject", "Required field: ProjectArn, is not set");
    return UpdateDataAutomationProjectOutcome(Aws::Client::AWSError<BedrockDataAutomationErrors>(
        BedrockDataAutomationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/data-automation-projects/");
        resolvedEndpoint.AddPathSegment(request.GetProjectArn());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataAutomationProjectOutcome(result.GetResultWithOwnership())
                            : UpdateDataAutomationProjectOutcome(std::move(result.GetError()));
}
