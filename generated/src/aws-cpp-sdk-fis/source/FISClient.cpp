/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/fis/FISClient.h>
#include <aws/fis/FISEndpointProvider.h>
#include <aws/fis/FISErrorMarshaller.h>
#include <aws/fis/model/CreateExperimentTemplateRequest.h>
#include <aws/fis/model/CreateTargetAccountConfigurationRequest.h>
#include <aws/fis/model/DeleteExperimentTemplateRequest.h>
#include <aws/fis/model/DeleteTargetAccountConfigurationRequest.h>
#include <aws/fis/model/GetActionRequest.h>
#include <aws/fis/model/GetExperimentRequest.h>
#include <aws/fis/model/GetExperimentTargetAccountConfigurationRequest.h>
#include <aws/fis/model/GetExperimentTemplateRequest.h>
#include <aws/fis/model/GetSafetyLeverRequest.h>
#include <aws/fis/model/GetTargetAccountConfigurationRequest.h>
#include <aws/fis/model/GetTargetResourceTypeRequest.h>
#include <aws/fis/model/ListActionsRequest.h>
#include <aws/fis/model/ListExperimentResolvedTargetsRequest.h>
#include <aws/fis/model/ListExperimentTargetAccountConfigurationsRequest.h>
#include <aws/fis/model/ListExperimentTemplatesRequest.h>
#include <aws/fis/model/ListExperimentsRequest.h>
#include <aws/fis/model/ListTagsForResourceRequest.h>
#include <aws/fis/model/ListTargetAccountConfigurationsRequest.h>
#include <aws/fis/model/ListTargetResourceTypesRequest.h>
#include <aws/fis/model/StartExperimentRequest.h>
#include <aws/fis/model/StopExperimentRequest.h>
#include <aws/fis/model/TagResourceRequest.h>
#include <aws/fis/model/UntagResourceRequest.h>
#include <aws/fis/model/UpdateExperimentTemplateRequest.h>
#include <aws/fis/model/UpdateSafetyLeverStateRequest.h>
#include <aws/fis/model/UpdateTargetAccountConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FIS;
using namespace Aws::FIS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace FIS {
const char SERVICE_NAME[] = "fis";
const char ALLOCATION_TAG[] = "FISClient";
}  // namespace FIS
}  // namespace Aws
const char* FISClient::GetServiceName() { return SERVICE_NAME; }
const char* FISClient::GetAllocationTag() { return ALLOCATION_TAG; }

FISClient::FISClient(const FIS::FISClientConfiguration& clientConfiguration, std::shared_ptr<FISEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FISClient::FISClient(const AWSCredentials& credentials, std::shared_ptr<FISEndpointProviderBase> endpointProvider,
                     const FIS::FISClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FISClient::FISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<FISEndpointProviderBase> endpointProvider, const FIS::FISClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FISClient::FISClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FISClient::FISClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FISClient::FISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FISClient::~FISClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FISEndpointProviderBase>& FISClient::accessEndpointProvider() { return m_endpointProvider; }

void FISClient::init(const FIS::FISClientConfiguration& config) {
  AWSClient::SetServiceClientName("fis");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "fis");
}

void FISClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FISClient::InvokeOperationOutcome FISClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateExperimentTemplateOutcome FISClient::CreateExperimentTemplate(const CreateExperimentTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates");
  };

  return CreateExperimentTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTargetAccountConfigurationOutcome FISClient::CreateTargetAccountConfiguration(
    const CreateTargetAccountConfigurationRequest& request) const {
  if (!request.ExperimentTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTargetAccountConfiguration", "Required field: ExperimentTemplateId, is not set");
    return CreateTargetAccountConfigurationOutcome(Aws::Client::AWSError<FISErrors>(
        FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExperimentTemplateId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTargetAccountConfiguration", "Required field: AccountId, is not set");
    return CreateTargetAccountConfigurationOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return CreateTargetAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExperimentTemplateOutcome FISClient::DeleteExperimentTemplate(const DeleteExperimentTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteExperimentTemplate", "Required field: Id, is not set");
    return DeleteExperimentTemplateOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteExperimentTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTargetAccountConfigurationOutcome FISClient::DeleteTargetAccountConfiguration(
    const DeleteTargetAccountConfigurationRequest& request) const {
  if (!request.ExperimentTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTargetAccountConfiguration", "Required field: ExperimentTemplateId, is not set");
    return DeleteTargetAccountConfigurationOutcome(Aws::Client::AWSError<FISErrors>(
        FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExperimentTemplateId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTargetAccountConfiguration", "Required field: AccountId, is not set");
    return DeleteTargetAccountConfigurationOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return DeleteTargetAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetActionOutcome FISClient::GetAction(const GetActionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAction", "Required field: Id, is not set");
    return GetActionOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExperimentOutcome FISClient::GetExperiment(const GetExperimentRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExperiment", "Required field: Id, is not set");
    return GetExperimentOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetExperimentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExperimentTargetAccountConfigurationOutcome FISClient::GetExperimentTargetAccountConfiguration(
    const GetExperimentTargetAccountConfigurationRequest& request) const {
  if (!request.ExperimentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExperimentTargetAccountConfiguration", "Required field: ExperimentId, is not set");
    return GetExperimentTargetAccountConfigurationOutcome(Aws::Client::AWSError<FISErrors>(
        FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExperimentId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExperimentTargetAccountConfiguration", "Required field: AccountId, is not set");
    return GetExperimentTargetAccountConfigurationOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return GetExperimentTargetAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExperimentTemplateOutcome FISClient::GetExperimentTemplate(const GetExperimentTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExperimentTemplate", "Required field: Id, is not set");
    return GetExperimentTemplateOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetExperimentTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSafetyLeverOutcome FISClient::GetSafetyLever(const GetSafetyLeverRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSafetyLever", "Required field: Id, is not set");
    return GetSafetyLeverOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyLevers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetSafetyLeverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTargetAccountConfigurationOutcome FISClient::GetTargetAccountConfiguration(const GetTargetAccountConfigurationRequest& request) const {
  if (!request.ExperimentTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTargetAccountConfiguration", "Required field: ExperimentTemplateId, is not set");
    return GetTargetAccountConfigurationOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ExperimentTemplateId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTargetAccountConfiguration", "Required field: AccountId, is not set");
    return GetTargetAccountConfigurationOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return GetTargetAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTargetResourceTypeOutcome FISClient::GetTargetResourceType(const GetTargetResourceTypeRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTargetResourceType", "Required field: ResourceType, is not set");
    return GetTargetResourceTypeOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetResourceTypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceType());
  };

  return GetTargetResourceTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListActionsOutcome FISClient::ListActions(const ListActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  return ListActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExperimentResolvedTargetsOutcome FISClient::ListExperimentResolvedTargets(const ListExperimentResolvedTargetsRequest& request) const {
  if (!request.ExperimentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExperimentResolvedTargets", "Required field: ExperimentId, is not set");
    return ListExperimentResolvedTargetsOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ExperimentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolvedTargets");
  };

  return ListExperimentResolvedTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExperimentTargetAccountConfigurationsOutcome FISClient::ListExperimentTargetAccountConfigurations(
    const ListExperimentTargetAccountConfigurationsRequest& request) const {
  if (!request.ExperimentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExperimentTargetAccountConfigurations", "Required field: ExperimentId, is not set");
    return ListExperimentTargetAccountConfigurationsOutcome(Aws::Client::AWSError<FISErrors>(
        FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExperimentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations");
  };

  return ListExperimentTargetAccountConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExperimentTemplatesOutcome FISClient::ListExperimentTemplates(const ListExperimentTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates");
  };

  return ListExperimentTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExperimentsOutcome FISClient::ListExperiments(const ListExperimentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments");
  };

  return ListExperimentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome FISClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTargetAccountConfigurationsOutcome FISClient::ListTargetAccountConfigurations(
    const ListTargetAccountConfigurationsRequest& request) const {
  if (!request.ExperimentTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTargetAccountConfigurations", "Required field: ExperimentTemplateId, is not set");
    return ListTargetAccountConfigurationsOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ExperimentTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations");
  };

  return ListTargetAccountConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTargetResourceTypesOutcome FISClient::ListTargetResourceTypes(const ListTargetResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetResourceTypes");
  };

  return ListTargetResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartExperimentOutcome FISClient::StartExperiment(const StartExperimentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments");
  };

  return StartExperimentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopExperimentOutcome FISClient::StopExperiment(const StopExperimentRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopExperiment", "Required field: Id, is not set");
    return StopExperimentOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return StopExperimentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

TagResourceOutcome FISClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome FISClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateExperimentTemplateOutcome FISClient::UpdateExperimentTemplate(const UpdateExperimentTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateExperimentTemplate", "Required field: Id, is not set");
    return UpdateExperimentTemplateOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateExperimentTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSafetyLeverStateOutcome FISClient::UpdateSafetyLeverState(const UpdateSafetyLeverStateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSafetyLeverState", "Required field: Id, is not set");
    return UpdateSafetyLeverStateOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/safetyLevers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  return UpdateSafetyLeverStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateTargetAccountConfigurationOutcome FISClient::UpdateTargetAccountConfiguration(
    const UpdateTargetAccountConfigurationRequest& request) const {
  if (!request.ExperimentTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTargetAccountConfiguration", "Required field: ExperimentTemplateId, is not set");
    return UpdateTargetAccountConfigurationOutcome(Aws::Client::AWSError<FISErrors>(
        FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExperimentTemplateId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTargetAccountConfiguration", "Required field: AccountId, is not set");
    return UpdateTargetAccountConfigurationOutcome(
        Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/experimentTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperimentTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targetAccountConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return UpdateTargetAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
