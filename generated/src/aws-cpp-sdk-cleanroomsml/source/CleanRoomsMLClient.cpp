/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/CleanRoomsMLClient.h>
#include <aws/cleanroomsml/CleanRoomsMLEndpointProvider.h>
#include <aws/cleanroomsml/CleanRoomsMLErrorMarshaller.h>
#include <aws/cleanroomsml/model/CancelTrainedModelInferenceJobRequest.h>
#include <aws/cleanroomsml/model/CancelTrainedModelRequest.h>
#include <aws/cleanroomsml/model/CreateAudienceModelRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/CreateMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/CreateTrainedModelRequest.h>
#include <aws/cleanroomsml/model/CreateTrainingDatasetRequest.h>
#include <aws/cleanroomsml/model/DeleteAudienceGenerationJobRequest.h>
#include <aws/cleanroomsml/model/DeleteAudienceModelRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredAudienceModelPolicyRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/DeleteMLConfigurationRequest.h>
#include <aws/cleanroomsml/model/DeleteMLInputChannelDataRequest.h>
#include <aws/cleanroomsml/model/DeleteTrainedModelOutputRequest.h>
#include <aws/cleanroomsml/model/DeleteTrainingDatasetRequest.h>
#include <aws/cleanroomsml/model/GetAudienceGenerationJobRequest.h>
#include <aws/cleanroomsml/model/GetAudienceModelRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationTrainedModelRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelPolicyRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/GetMLConfigurationRequest.h>
#include <aws/cleanroomsml/model/GetMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/GetTrainedModelInferenceJobRequest.h>
#include <aws/cleanroomsml/model/GetTrainedModelRequest.h>
#include <aws/cleanroomsml/model/GetTrainingDatasetRequest.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsRequest.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsRequest.h>
#include <aws/cleanroomsml/model/ListAudienceModelsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationMLInputChannelsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelExportJobsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelInferenceJobsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsRequest.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsRequest.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmAssociationsRequest.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsRequest.h>
#include <aws/cleanroomsml/model/ListMLInputChannelsRequest.h>
#include <aws/cleanroomsml/model/ListTagsForResourceRequest.h>
#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsRequest.h>
#include <aws/cleanroomsml/model/ListTrainedModelVersionsRequest.h>
#include <aws/cleanroomsml/model/ListTrainedModelsRequest.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsRequest.h>
#include <aws/cleanroomsml/model/PutConfiguredAudienceModelPolicyRequest.h>
#include <aws/cleanroomsml/model/PutMLConfigurationRequest.h>
#include <aws/cleanroomsml/model/StartAudienceExportJobRequest.h>
#include <aws/cleanroomsml/model/StartAudienceGenerationJobRequest.h>
#include <aws/cleanroomsml/model/StartTrainedModelExportJobRequest.h>
#include <aws/cleanroomsml/model/StartTrainedModelInferenceJobRequest.h>
#include <aws/cleanroomsml/model/TagResourceRequest.h>
#include <aws/cleanroomsml/model/UntagResourceRequest.h>
#include <aws/cleanroomsml/model/UpdateConfiguredAudienceModelRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CleanRoomsML;
using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CleanRoomsML {
const char SERVICE_NAME[] = "cleanrooms-ml";
const char ALLOCATION_TAG[] = "CleanRoomsMLClient";
}  // namespace CleanRoomsML
}  // namespace Aws
const char* CleanRoomsMLClient::GetServiceName() { return SERVICE_NAME; }
const char* CleanRoomsMLClient::GetAllocationTag() { return ALLOCATION_TAG; }

CleanRoomsMLClient::CleanRoomsMLClient(const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration,
                                       std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsMLClient::CleanRoomsMLClient(const AWSCredentials& credentials,
                                       std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider,
                                       const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsMLClient::CleanRoomsMLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider,
                                       const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CleanRoomsMLClient::CleanRoomsMLClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsMLClient::CleanRoomsMLClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsMLClient::CleanRoomsMLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CleanRoomsMLClient::~CleanRoomsMLClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CleanRoomsMLEndpointProviderBase>& CleanRoomsMLClient::accessEndpointProvider() { return m_endpointProvider; }

void CleanRoomsMLClient::init(const CleanRoomsML::CleanRoomsMLClientConfiguration& config) {
  AWSClient::SetServiceClientName("CleanRoomsML");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cleanrooms-ml");
}

void CleanRoomsMLClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CleanRoomsMLClient::InvokeOperationOutcome CleanRoomsMLClient::InvokeServiceOperation(
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

CancelTrainedModelOutcome CleanRoomsMLClient::CancelTrainedModel(const CancelTrainedModelRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTrainedModel", "Required field: MembershipIdentifier, is not set");
    return CancelTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTrainedModel", "Required field: TrainedModelArn, is not set");
    return CancelTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TrainedModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? CancelTrainedModelOutcome(result.GetResultWithOwnership())
                            : CancelTrainedModelOutcome(std::move(result.GetError()));
}

CancelTrainedModelInferenceJobOutcome CleanRoomsMLClient::CancelTrainedModelInferenceJob(
    const CancelTrainedModelInferenceJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return CancelTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelInferenceJobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelTrainedModelInferenceJob", "Required field: TrainedModelInferenceJobArn, is not set");
    return CancelTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelInferenceJobArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-model-inference-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelInferenceJobArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? CancelTrainedModelInferenceJobOutcome(result.GetResultWithOwnership())
                            : CancelTrainedModelInferenceJobOutcome(std::move(result.GetError()));
}

CreateAudienceModelOutcome CleanRoomsMLClient::CreateAudienceModel(const CreateAudienceModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-model");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAudienceModelOutcome(result.GetResultWithOwnership())
                            : CreateAudienceModelOutcome(std::move(result.GetError()));
}

CreateConfiguredAudienceModelOutcome CleanRoomsMLClient::CreateConfiguredAudienceModel(
    const CreateConfiguredAudienceModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredAudienceModelOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredAudienceModelOutcome(std::move(result.GetError()));
}

CreateConfiguredModelAlgorithmOutcome CleanRoomsMLClient::CreateConfiguredModelAlgorithm(
    const CreateConfiguredModelAlgorithmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredModelAlgorithmOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredModelAlgorithmOutcome(std::move(result.GetError()));
}

CreateConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::CreateConfiguredModelAlgorithmAssociation(
    const CreateConfiguredModelAlgorithmAssociationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredModelAlgorithmAssociationOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredModelAlgorithmAssociationOutcome(std::move(result.GetError()));
}

CreateMLInputChannelOutcome CleanRoomsMLClient::CreateMLInputChannel(const CreateMLInputChannelRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMLInputChannel", "Required field: MembershipIdentifier, is not set");
    return CreateMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMLInputChannelOutcome(result.GetResultWithOwnership())
                            : CreateMLInputChannelOutcome(std::move(result.GetError()));
}

CreateTrainedModelOutcome CleanRoomsMLClient::CreateTrainedModel(const CreateTrainedModelRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTrainedModel", "Required field: MembershipIdentifier, is not set");
    return CreateTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrainedModelOutcome(result.GetResultWithOwnership())
                            : CreateTrainedModelOutcome(std::move(result.GetError()));
}

CreateTrainingDatasetOutcome CleanRoomsMLClient::CreateTrainingDataset(const CreateTrainingDatasetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/training-dataset");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrainingDatasetOutcome(result.GetResultWithOwnership())
                            : CreateTrainingDatasetOutcome(std::move(result.GetError()));
}

DeleteAudienceGenerationJobOutcome CleanRoomsMLClient::DeleteAudienceGenerationJob(
    const DeleteAudienceGenerationJobRequest& request) const {
  if (!request.AudienceGenerationJobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAudienceGenerationJob", "Required field: AudienceGenerationJobArn, is not set");
    return DeleteAudienceGenerationJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceGenerationJobArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-generation-job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAudienceGenerationJobArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAudienceGenerationJobOutcome(result.GetResultWithOwnership())
                            : DeleteAudienceGenerationJobOutcome(std::move(result.GetError()));
}

DeleteAudienceModelOutcome CleanRoomsMLClient::DeleteAudienceModel(const DeleteAudienceModelRequest& request) const {
  if (!request.AudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAudienceModel", "Required field: AudienceModelArn, is not set");
    return DeleteAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAudienceModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAudienceModelOutcome(result.GetResultWithOwnership())
                            : DeleteAudienceModelOutcome(std::move(result.GetError()));
}

DeleteConfiguredAudienceModelOutcome CleanRoomsMLClient::DeleteConfiguredAudienceModel(
    const DeleteConfiguredAudienceModelRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return DeleteConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredAudienceModelOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredAudienceModelOutcome(std::move(result.GetError()));
}

DeleteConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::DeleteConfiguredAudienceModelPolicy(
    const DeleteConfiguredAudienceModelPolicyRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return DeleteConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredAudienceModelPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredAudienceModelPolicyOutcome(std::move(result.GetError()));
}

DeleteConfiguredModelAlgorithmOutcome CleanRoomsMLClient::DeleteConfiguredModelAlgorithm(
    const DeleteConfiguredModelAlgorithmRequest& request) const {
  if (!request.ConfiguredModelAlgorithmArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithm", "Required field: ConfiguredModelAlgorithmArn, is not set");
    return DeleteConfiguredModelAlgorithmOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredModelAlgorithmArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredModelAlgorithmOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredModelAlgorithmOutcome(std::move(result.GetError()));
}

DeleteConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::DeleteConfiguredModelAlgorithmAssociation(
    const DeleteConfiguredModelAlgorithmAssociationRequest& request) const {
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithmAssociation", "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return DeleteConfiguredModelAlgorithmAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                  "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredModelAlgorithmAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredModelAlgorithmAssociationOutcome(std::move(result.GetError()));
}

DeleteMLConfigurationOutcome CleanRoomsMLClient::DeleteMLConfiguration(const DeleteMLConfigurationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return DeleteMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMLConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteMLConfigurationOutcome(std::move(result.GetError()));
}

DeleteMLInputChannelDataOutcome CleanRoomsMLClient::DeleteMLInputChannelData(const DeleteMLInputChannelDataRequest& request) const {
  if (!request.MlInputChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMLInputChannelData", "Required field: MlInputChannelArn, is not set");
    return DeleteMLInputChannelDataOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMLInputChannelData", "Required field: MembershipIdentifier, is not set");
    return DeleteMLInputChannelDataOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMlInputChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMLInputChannelDataOutcome(result.GetResultWithOwnership())
                            : DeleteMLInputChannelDataOutcome(std::move(result.GetError()));
}

DeleteTrainedModelOutputOutcome CleanRoomsMLClient::DeleteTrainedModelOutput(const DeleteTrainedModelOutputRequest& request) const {
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrainedModelOutput", "Required field: TrainedModelArn, is not set");
    return DeleteTrainedModelOutputOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrainedModelOutput", "Required field: MembershipIdentifier, is not set");
    return DeleteTrainedModelOutputOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTrainedModelOutputOutcome(result.GetResultWithOwnership())
                            : DeleteTrainedModelOutputOutcome(std::move(result.GetError()));
}

DeleteTrainingDatasetOutcome CleanRoomsMLClient::DeleteTrainingDataset(const DeleteTrainingDatasetRequest& request) const {
  if (!request.TrainingDatasetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrainingDataset", "Required field: TrainingDatasetArn, is not set");
    return DeleteTrainingDatasetOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingDatasetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/training-dataset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingDatasetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTrainingDatasetOutcome(result.GetResultWithOwnership())
                            : DeleteTrainingDatasetOutcome(std::move(result.GetError()));
}

GetAudienceGenerationJobOutcome CleanRoomsMLClient::GetAudienceGenerationJob(const GetAudienceGenerationJobRequest& request) const {
  if (!request.AudienceGenerationJobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAudienceGenerationJob", "Required field: AudienceGenerationJobArn, is not set");
    return GetAudienceGenerationJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceGenerationJobArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-generation-job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAudienceGenerationJobArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAudienceGenerationJobOutcome(result.GetResultWithOwnership())
                            : GetAudienceGenerationJobOutcome(std::move(result.GetError()));
}

GetAudienceModelOutcome CleanRoomsMLClient::GetAudienceModel(const GetAudienceModelRequest& request) const {
  if (!request.AudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAudienceModel", "Required field: AudienceModelArn, is not set");
    return GetAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAudienceModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAudienceModelOutcome(result.GetResultWithOwnership())
                            : GetAudienceModelOutcome(std::move(result.GetError()));
}

GetCollaborationConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::GetCollaborationConfiguredModelAlgorithmAssociation(
    const GetCollaborationConfiguredModelAlgorithmAssociationRequest& request) const {
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredModelAlgorithmAssociation",
                        "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return GetCollaborationConfiguredModelAlgorithmAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                  "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredModelAlgorithmAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationConfiguredModelAlgorithmAssociationOutcome(result.GetResultWithOwnership())
                            : GetCollaborationConfiguredModelAlgorithmAssociationOutcome(std::move(result.GetError()));
}

GetCollaborationMLInputChannelOutcome CleanRoomsMLClient::GetCollaborationMLInputChannel(
    const GetCollaborationMLInputChannelRequest& request) const {
  if (!request.MlInputChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationMLInputChannel", "Required field: MlInputChannelArn, is not set");
    return GetCollaborationMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationMLInputChannel", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMlInputChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationMLInputChannelOutcome(result.GetResultWithOwnership())
                            : GetCollaborationMLInputChannelOutcome(std::move(result.GetError()));
}

GetCollaborationTrainedModelOutcome CleanRoomsMLClient::GetCollaborationTrainedModel(
    const GetCollaborationTrainedModelRequest& request) const {
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationTrainedModel", "Required field: TrainedModelArn, is not set");
    return GetCollaborationTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationTrainedModel", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationTrainedModelOutcome(result.GetResultWithOwnership())
                            : GetCollaborationTrainedModelOutcome(std::move(result.GetError()));
}

GetConfiguredAudienceModelOutcome CleanRoomsMLClient::GetConfiguredAudienceModel(const GetConfiguredAudienceModelRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return GetConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredAudienceModelOutcome(result.GetResultWithOwnership())
                            : GetConfiguredAudienceModelOutcome(std::move(result.GetError()));
}

GetConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::GetConfiguredAudienceModelPolicy(
    const GetConfiguredAudienceModelPolicyRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return GetConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredAudienceModelPolicyOutcome(result.GetResultWithOwnership())
                            : GetConfiguredAudienceModelPolicyOutcome(std::move(result.GetError()));
}

GetConfiguredModelAlgorithmOutcome CleanRoomsMLClient::GetConfiguredModelAlgorithm(
    const GetConfiguredModelAlgorithmRequest& request) const {
  if (!request.ConfiguredModelAlgorithmArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithm", "Required field: ConfiguredModelAlgorithmArn, is not set");
    return GetConfiguredModelAlgorithmOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredModelAlgorithmArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredModelAlgorithmOutcome(result.GetResultWithOwnership())
                            : GetConfiguredModelAlgorithmOutcome(std::move(result.GetError()));
}

GetConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::GetConfiguredModelAlgorithmAssociation(
    const GetConfiguredModelAlgorithmAssociationRequest& request) const {
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithmAssociation", "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return GetConfiguredModelAlgorithmAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                  "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredModelAlgorithmAssociationOutcome(result.GetResultWithOwnership())
                            : GetConfiguredModelAlgorithmAssociationOutcome(std::move(result.GetError()));
}

GetMLConfigurationOutcome CleanRoomsMLClient::GetMLConfiguration(const GetMLConfigurationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return GetMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMLConfigurationOutcome(result.GetResultWithOwnership())
                            : GetMLConfigurationOutcome(std::move(result.GetError()));
}

GetMLInputChannelOutcome CleanRoomsMLClient::GetMLInputChannel(const GetMLInputChannelRequest& request) const {
  if (!request.MlInputChannelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLInputChannel", "Required field: MlInputChannelArn, is not set");
    return GetMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLInputChannel", "Required field: MembershipIdentifier, is not set");
    return GetMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMlInputChannelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMLInputChannelOutcome(result.GetResultWithOwnership())
                            : GetMLInputChannelOutcome(std::move(result.GetError()));
}

GetTrainedModelOutcome CleanRoomsMLClient::GetTrainedModel(const GetTrainedModelRequest& request) const {
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainedModel", "Required field: TrainedModelArn, is not set");
    return GetTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainedModel", "Required field: MembershipIdentifier, is not set");
    return GetTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrainedModelOutcome(result.GetResultWithOwnership())
                            : GetTrainedModelOutcome(std::move(result.GetError()));
}

GetTrainedModelInferenceJobOutcome CleanRoomsMLClient::GetTrainedModelInferenceJob(
    const GetTrainedModelInferenceJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return GetTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelInferenceJobArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainedModelInferenceJob", "Required field: TrainedModelInferenceJobArn, is not set");
    return GetTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelInferenceJobArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-model-inference-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelInferenceJobArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrainedModelInferenceJobOutcome(result.GetResultWithOwnership())
                            : GetTrainedModelInferenceJobOutcome(std::move(result.GetError()));
}

GetTrainingDatasetOutcome CleanRoomsMLClient::GetTrainingDataset(const GetTrainingDatasetRequest& request) const {
  if (!request.TrainingDatasetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainingDataset", "Required field: TrainingDatasetArn, is not set");
    return GetTrainingDatasetOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TrainingDatasetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/training-dataset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingDatasetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrainingDatasetOutcome(result.GetResultWithOwnership())
                            : GetTrainingDatasetOutcome(std::move(result.GetError()));
}

ListAudienceExportJobsOutcome CleanRoomsMLClient::ListAudienceExportJobs(const ListAudienceExportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-export-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAudienceExportJobsOutcome(result.GetResultWithOwnership())
                            : ListAudienceExportJobsOutcome(std::move(result.GetError()));
}

ListAudienceGenerationJobsOutcome CleanRoomsMLClient::ListAudienceGenerationJobs(const ListAudienceGenerationJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-generation-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAudienceGenerationJobsOutcome(result.GetResultWithOwnership())
                            : ListAudienceGenerationJobsOutcome(std::move(result.GetError()));
}

ListAudienceModelsOutcome CleanRoomsMLClient::ListAudienceModels(const ListAudienceModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-model");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAudienceModelsOutcome(result.GetResultWithOwnership())
                            : ListAudienceModelsOutcome(std::move(result.GetError()));
}

ListCollaborationConfiguredModelAlgorithmAssociationsOutcome CleanRoomsMLClient::ListCollaborationConfiguredModelAlgorithmAssociations(
    const ListCollaborationConfiguredModelAlgorithmAssociationsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationConfiguredModelAlgorithmAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationConfiguredModelAlgorithmAssociationsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationConfiguredModelAlgorithmAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationConfiguredModelAlgorithmAssociationsOutcome(std::move(result.GetError()));
}

ListCollaborationMLInputChannelsOutcome CleanRoomsMLClient::ListCollaborationMLInputChannels(
    const ListCollaborationMLInputChannelsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationMLInputChannels", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationMLInputChannelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationMLInputChannelsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationMLInputChannelsOutcome(std::move(result.GetError()));
}

ListCollaborationTrainedModelExportJobsOutcome CleanRoomsMLClient::ListCollaborationTrainedModelExportJobs(
    const ListCollaborationTrainedModelExportJobsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelExportJobs", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelExportJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelExportJobs", "Required field: TrainedModelArn, is not set");
    return ListCollaborationTrainedModelExportJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationTrainedModelExportJobsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationTrainedModelExportJobsOutcome(std::move(result.GetError()));
}

ListCollaborationTrainedModelInferenceJobsOutcome CleanRoomsMLClient::ListCollaborationTrainedModelInferenceJobs(
    const ListCollaborationTrainedModelInferenceJobsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelInferenceJobs", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelInferenceJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-model-inference-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationTrainedModelInferenceJobsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationTrainedModelInferenceJobsOutcome(std::move(result.GetError()));
}

ListCollaborationTrainedModelsOutcome CleanRoomsMLClient::ListCollaborationTrainedModels(
    const ListCollaborationTrainedModelsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModels", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationTrainedModelsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationTrainedModelsOutcome(std::move(result.GetError()));
}

ListConfiguredAudienceModelsOutcome CleanRoomsMLClient::ListConfiguredAudienceModels(
    const ListConfiguredAudienceModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredAudienceModelsOutcome(result.GetResultWithOwnership())
                            : ListConfiguredAudienceModelsOutcome(std::move(result.GetError()));
}

ListConfiguredModelAlgorithmAssociationsOutcome CleanRoomsMLClient::ListConfiguredModelAlgorithmAssociations(
    const ListConfiguredModelAlgorithmAssociationsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfiguredModelAlgorithmAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredModelAlgorithmAssociationsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithm-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredModelAlgorithmAssociationsOutcome(result.GetResultWithOwnership())
                            : ListConfiguredModelAlgorithmAssociationsOutcome(std::move(result.GetError()));
}

ListConfiguredModelAlgorithmsOutcome CleanRoomsMLClient::ListConfiguredModelAlgorithms(
    const ListConfiguredModelAlgorithmsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-model-algorithms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredModelAlgorithmsOutcome(result.GetResultWithOwnership())
                            : ListConfiguredModelAlgorithmsOutcome(std::move(result.GetError()));
}

ListMLInputChannelsOutcome CleanRoomsMLClient::ListMLInputChannels(const ListMLInputChannelsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMLInputChannels", "Required field: MembershipIdentifier, is not set");
    return ListMLInputChannelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-input-channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMLInputChannelsOutcome(result.GetResultWithOwnership())
                            : ListMLInputChannelsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CleanRoomsMLClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTrainedModelInferenceJobsOutcome CleanRoomsMLClient::ListTrainedModelInferenceJobs(
    const ListTrainedModelInferenceJobsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrainedModelInferenceJobs", "Required field: MembershipIdentifier, is not set");
    return ListTrainedModelInferenceJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-model-inference-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTrainedModelInferenceJobsOutcome(result.GetResultWithOwnership())
                            : ListTrainedModelInferenceJobsOutcome(std::move(result.GetError()));
}

ListTrainedModelVersionsOutcome CleanRoomsMLClient::ListTrainedModelVersions(const ListTrainedModelVersionsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrainedModelVersions", "Required field: MembershipIdentifier, is not set");
    return ListTrainedModelVersionsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrainedModelVersions", "Required field: TrainedModelArn, is not set");
    return ListTrainedModelVersionsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTrainedModelVersionsOutcome(result.GetResultWithOwnership())
                            : ListTrainedModelVersionsOutcome(std::move(result.GetError()));
}

ListTrainedModelsOutcome CleanRoomsMLClient::ListTrainedModels(const ListTrainedModelsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrainedModels", "Required field: MembershipIdentifier, is not set");
    return ListTrainedModelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTrainedModelsOutcome(result.GetResultWithOwnership())
                            : ListTrainedModelsOutcome(std::move(result.GetError()));
}

ListTrainingDatasetsOutcome CleanRoomsMLClient::ListTrainingDatasets(const ListTrainingDatasetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/training-dataset");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTrainingDatasetsOutcome(result.GetResultWithOwnership())
                            : ListTrainingDatasetsOutcome(std::move(result.GetError()));
}

PutConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::PutConfiguredAudienceModelPolicy(
    const PutConfiguredAudienceModelPolicyRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return PutConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutConfiguredAudienceModelPolicyOutcome(result.GetResultWithOwnership())
                            : PutConfiguredAudienceModelPolicyOutcome(std::move(result.GetError()));
}

PutMLConfigurationOutcome CleanRoomsMLClient::PutMLConfiguration(const PutMLConfigurationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return PutMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutMLConfigurationOutcome(result.GetResultWithOwnership())
                            : PutMLConfigurationOutcome(std::move(result.GetError()));
}

StartAudienceExportJobOutcome CleanRoomsMLClient::StartAudienceExportJob(const StartAudienceExportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-export-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAudienceExportJobOutcome(result.GetResultWithOwnership())
                            : StartAudienceExportJobOutcome(std::move(result.GetError()));
}

StartAudienceGenerationJobOutcome CleanRoomsMLClient::StartAudienceGenerationJob(const StartAudienceGenerationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audience-generation-job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAudienceGenerationJobOutcome(result.GetResultWithOwnership())
                            : StartAudienceGenerationJobOutcome(std::move(result.GetError()));
}

StartTrainedModelExportJobOutcome CleanRoomsMLClient::StartTrainedModelExportJob(const StartTrainedModelExportJobRequest& request) const {
  if (!request.TrainedModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTrainedModelExportJob", "Required field: TrainedModelArn, is not set");
    return StartTrainedModelExportJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTrainedModelExportJob", "Required field: MembershipIdentifier, is not set");
    return StartTrainedModelExportJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainedModelArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTrainedModelExportJobOutcome(result.GetResultWithOwnership())
                            : StartTrainedModelExportJobOutcome(std::move(result.GetError()));
}

StartTrainedModelInferenceJobOutcome CleanRoomsMLClient::StartTrainedModelInferenceJob(
    const StartTrainedModelInferenceJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return StartTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trained-model-inference-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTrainedModelInferenceJobOutcome(result.GetResultWithOwnership())
                            : StartTrainedModelInferenceJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome CleanRoomsMLClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CleanRoomsMLClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateConfiguredAudienceModelOutcome CleanRoomsMLClient::UpdateConfiguredAudienceModel(
    const UpdateConfiguredAudienceModelRequest& request) const {
  if (!request.ConfiguredAudienceModelArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return UpdateConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(
        CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configured-audience-model/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredAudienceModelOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredAudienceModelOutcome(std::move(result.GetError()));
}
