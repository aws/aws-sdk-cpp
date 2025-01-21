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


#include <aws/cleanroomsml/CleanRoomsMLClient.h>
#include <aws/cleanroomsml/CleanRoomsMLErrorMarshaller.h>
#include <aws/cleanroomsml/CleanRoomsMLEndpointProvider.h>
#include <aws/cleanroomsml/model/CancelTrainedModelRequest.h>
#include <aws/cleanroomsml/model/CancelTrainedModelInferenceJobRequest.h>
#include <aws/cleanroomsml/model/CreateAudienceModelRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/CreateMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/CreateTrainedModelRequest.h>
#include <aws/cleanroomsml/model/CreateTrainingDatasetRequest.h>
#include <aws/cleanroomsml/model/DeleteAudienceGenerationJobRequest.h>
#include <aws/cleanroomsml/model/DeleteAudienceModelRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredAudienceModelPolicyRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/DeleteConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/DeleteMLConfigurationRequest.h>
#include <aws/cleanroomsml/model/DeleteMLInputChannelDataRequest.h>
#include <aws/cleanroomsml/model/DeleteTrainedModelOutputRequest.h>
#include <aws/cleanroomsml/model/DeleteTrainingDatasetRequest.h>
#include <aws/cleanroomsml/model/GetAudienceGenerationJobRequest.h>
#include <aws/cleanroomsml/model/GetAudienceModelRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/GetCollaborationTrainedModelRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredAudienceModelPolicyRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmRequest.h>
#include <aws/cleanroomsml/model/GetConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/cleanroomsml/model/GetMLConfigurationRequest.h>
#include <aws/cleanroomsml/model/GetMLInputChannelRequest.h>
#include <aws/cleanroomsml/model/GetTrainedModelRequest.h>
#include <aws/cleanroomsml/model/GetTrainedModelInferenceJobRequest.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CleanRoomsML;
using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace CleanRoomsML
  {
    const char ALLOCATION_TAG[] = "CleanRoomsMLClient";
    const char SERVICE_NAME[] = "cleanrooms-ml";
  }
}
const char* CleanRoomsMLClient::GetServiceName() {return SERVICE_NAME;}
const char* CleanRoomsMLClient::GetAllocationTag() {return ALLOCATION_TAG;}

CleanRoomsMLClient::CleanRoomsMLClient(const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration,
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRoomsML",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

CleanRoomsMLClient::CleanRoomsMLClient(const AWSCredentials& credentials,
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider,
                           const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRoomsML",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

CleanRoomsMLClient::CleanRoomsMLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CleanRoomsMLEndpointProviderBase> endpointProvider,
                           const CleanRoomsML::CleanRoomsMLClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRoomsML",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
CleanRoomsMLClient::CleanRoomsMLClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "CleanRoomsML",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

CleanRoomsMLClient::CleanRoomsMLClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRoomsML",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

CleanRoomsMLClient::CleanRoomsMLClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRoomsML",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsMLErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CleanRoomsMLEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

CleanRoomsMLClient::~CleanRoomsMLClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CleanRoomsMLEndpointProviderBase>& CleanRoomsMLClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CleanRoomsMLClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CancelTrainedModelOutcome CleanRoomsMLClient::CancelTrainedModel(const CancelTrainedModelRequest& request) const
{
  AWS_OPERATION_GUARD(CancelTrainedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTrainedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTrainedModel", "Required field: MembershipIdentifier, is not set");
    return CancelTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTrainedModel", "Required field: TrainedModelArn, is not set");
    return CancelTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelTrainedModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelTrainedModelOutcome>(
    [&]()-> CancelTrainedModelOutcome {
      return CancelTrainedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelTrainedModelInferenceJobOutcome CleanRoomsMLClient::CancelTrainedModelInferenceJob(const CancelTrainedModelInferenceJobRequest& request) const
{
  AWS_OPERATION_GUARD(CancelTrainedModelInferenceJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTrainedModelInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return CancelTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelInferenceJobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTrainedModelInferenceJob", "Required field: TrainedModelInferenceJobArn, is not set");
    return CancelTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelInferenceJobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelTrainedModelInferenceJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelTrainedModelInferenceJobOutcome>(
    [&]()-> CancelTrainedModelInferenceJobOutcome {
      return CancelTrainedModelInferenceJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-model-inference-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelInferenceJobArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAudienceModelOutcome CleanRoomsMLClient::CreateAudienceModel(const CreateAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAudienceModelOutcome>(
    [&]()-> CreateAudienceModelOutcome {
      return CreateAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-model");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredAudienceModelOutcome CleanRoomsMLClient::CreateConfiguredAudienceModel(const CreateConfiguredAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredAudienceModelOutcome>(
    [&]()-> CreateConfiguredAudienceModelOutcome {
      return CreateConfiguredAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredModelAlgorithmOutcome CleanRoomsMLClient::CreateConfiguredModelAlgorithm(const CreateConfiguredModelAlgorithmRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredModelAlgorithm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredModelAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredModelAlgorithm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredModelAlgorithmOutcome>(
    [&]()-> CreateConfiguredModelAlgorithmOutcome {
      return CreateConfiguredModelAlgorithmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-model-algorithms");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::CreateConfiguredModelAlgorithmAssociation(const CreateConfiguredModelAlgorithmAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredModelAlgorithmAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredModelAlgorithmAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredModelAlgorithmAssociationOutcome>(
    [&]()-> CreateConfiguredModelAlgorithmAssociationOutcome {
      return CreateConfiguredModelAlgorithmAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMLInputChannelOutcome CleanRoomsMLClient::CreateMLInputChannel(const CreateMLInputChannelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMLInputChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMLInputChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMLInputChannel", "Required field: MembershipIdentifier, is not set");
    return CreateMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMLInputChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMLInputChannelOutcome>(
    [&]()-> CreateMLInputChannelOutcome {
      return CreateMLInputChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrainedModelOutcome CleanRoomsMLClient::CreateTrainedModel(const CreateTrainedModelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTrainedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrainedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTrainedModel", "Required field: MembershipIdentifier, is not set");
    return CreateTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTrainedModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTrainedModelOutcome>(
    [&]()-> CreateTrainedModelOutcome {
      return CreateTrainedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrainingDatasetOutcome CleanRoomsMLClient::CreateTrainingDataset(const CreateTrainingDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTrainingDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrainingDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTrainingDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTrainingDatasetOutcome>(
    [&]()-> CreateTrainingDatasetOutcome {
      return CreateTrainingDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/training-dataset");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAudienceGenerationJobOutcome CleanRoomsMLClient::DeleteAudienceGenerationJob(const DeleteAudienceGenerationJobRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAudienceGenerationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAudienceGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AudienceGenerationJobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAudienceGenerationJob", "Required field: AudienceGenerationJobArn, is not set");
    return DeleteAudienceGenerationJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceGenerationJobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAudienceGenerationJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAudienceGenerationJobOutcome>(
    [&]()-> DeleteAudienceGenerationJobOutcome {
      return DeleteAudienceGenerationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-generation-job/");
      resolvedEndpoint.AddPathSegment(request.GetAudienceGenerationJobArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAudienceModelOutcome CleanRoomsMLClient::DeleteAudienceModel(const DeleteAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAudienceModel", "Required field: AudienceModelArn, is not set");
    return DeleteAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAudienceModelOutcome>(
    [&]()-> DeleteAudienceModelOutcome {
      return DeleteAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetAudienceModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredAudienceModelOutcome CleanRoomsMLClient::DeleteConfiguredAudienceModel(const DeleteConfiguredAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return DeleteConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredAudienceModelOutcome>(
    [&]()-> DeleteConfiguredAudienceModelOutcome {
      return DeleteConfiguredAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::DeleteConfiguredAudienceModelPolicy(const DeleteConfiguredAudienceModelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredAudienceModelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return DeleteConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredAudienceModelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredAudienceModelPolicyOutcome>(
    [&]()-> DeleteConfiguredAudienceModelPolicyOutcome {
      return DeleteConfiguredAudienceModelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredModelAlgorithmOutcome CleanRoomsMLClient::DeleteConfiguredModelAlgorithm(const DeleteConfiguredModelAlgorithmRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredModelAlgorithm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredModelAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredModelAlgorithmArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithm", "Required field: ConfiguredModelAlgorithmArn, is not set");
    return DeleteConfiguredModelAlgorithmOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredModelAlgorithm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredModelAlgorithmOutcome>(
    [&]()-> DeleteConfiguredModelAlgorithmOutcome {
      return DeleteConfiguredModelAlgorithmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-model-algorithms/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredModelAlgorithmArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::DeleteConfiguredModelAlgorithmAssociation(const DeleteConfiguredModelAlgorithmAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredModelAlgorithmAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithmAssociation", "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return DeleteConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredModelAlgorithmAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredModelAlgorithmAssociationOutcome>(
    [&]()-> DeleteConfiguredModelAlgorithmAssociationOutcome {
      return DeleteConfiguredModelAlgorithmAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMLConfigurationOutcome CleanRoomsMLClient::DeleteMLConfiguration(const DeleteMLConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMLConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMLConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return DeleteMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMLConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMLConfigurationOutcome>(
    [&]()-> DeleteMLConfigurationOutcome {
      return DeleteMLConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMLInputChannelDataOutcome CleanRoomsMLClient::DeleteMLInputChannelData(const DeleteMLInputChannelDataRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMLInputChannelData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMLInputChannelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MlInputChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMLInputChannelData", "Required field: MlInputChannelArn, is not set");
    return DeleteMLInputChannelDataOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMLInputChannelData", "Required field: MembershipIdentifier, is not set");
    return DeleteMLInputChannelDataOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMLInputChannelData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMLInputChannelData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMLInputChannelData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMLInputChannelDataOutcome>(
    [&]()-> DeleteMLInputChannelDataOutcome {
      return DeleteMLInputChannelDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels/");
      resolvedEndpoint.AddPathSegment(request.GetMlInputChannelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrainedModelOutputOutcome CleanRoomsMLClient::DeleteTrainedModelOutput(const DeleteTrainedModelOutputRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTrainedModelOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrainedModelOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrainedModelOutput", "Required field: TrainedModelArn, is not set");
    return DeleteTrainedModelOutputOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrainedModelOutput", "Required field: MembershipIdentifier, is not set");
    return DeleteTrainedModelOutputOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTrainedModelOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTrainedModelOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTrainedModelOutput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTrainedModelOutputOutcome>(
    [&]()-> DeleteTrainedModelOutputOutcome {
      return DeleteTrainedModelOutputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrainingDatasetOutcome CleanRoomsMLClient::DeleteTrainingDataset(const DeleteTrainingDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTrainingDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrainingDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainingDatasetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrainingDataset", "Required field: TrainingDatasetArn, is not set");
    return DeleteTrainingDatasetOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingDatasetArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTrainingDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTrainingDatasetOutcome>(
    [&]()-> DeleteTrainingDatasetOutcome {
      return DeleteTrainingDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/training-dataset/");
      resolvedEndpoint.AddPathSegment(request.GetTrainingDatasetArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAudienceGenerationJobOutcome CleanRoomsMLClient::GetAudienceGenerationJob(const GetAudienceGenerationJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetAudienceGenerationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAudienceGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AudienceGenerationJobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAudienceGenerationJob", "Required field: AudienceGenerationJobArn, is not set");
    return GetAudienceGenerationJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceGenerationJobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAudienceGenerationJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAudienceGenerationJobOutcome>(
    [&]()-> GetAudienceGenerationJobOutcome {
      return GetAudienceGenerationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-generation-job/");
      resolvedEndpoint.AddPathSegment(request.GetAudienceGenerationJobArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAudienceModelOutcome CleanRoomsMLClient::GetAudienceModel(const GetAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(GetAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAudienceModel", "Required field: AudienceModelArn, is not set");
    return GetAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAudienceModelOutcome>(
    [&]()-> GetAudienceModelOutcome {
      return GetAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetAudienceModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::GetCollaborationConfiguredModelAlgorithmAssociation(const GetCollaborationConfiguredModelAlgorithmAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationConfiguredModelAlgorithmAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredModelAlgorithmAssociation", "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return GetCollaborationConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredModelAlgorithmAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationConfiguredModelAlgorithmAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationConfiguredModelAlgorithmAssociationOutcome>(
    [&]()-> GetCollaborationConfiguredModelAlgorithmAssociationOutcome {
      return GetCollaborationConfiguredModelAlgorithmAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationMLInputChannelOutcome CleanRoomsMLClient::GetCollaborationMLInputChannel(const GetCollaborationMLInputChannelRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationMLInputChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationMLInputChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MlInputChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationMLInputChannel", "Required field: MlInputChannelArn, is not set");
    return GetCollaborationMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationMLInputChannel", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationMLInputChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationMLInputChannelOutcome>(
    [&]()-> GetCollaborationMLInputChannelOutcome {
      return GetCollaborationMLInputChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels/");
      resolvedEndpoint.AddPathSegment(request.GetMlInputChannelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationTrainedModelOutcome CleanRoomsMLClient::GetCollaborationTrainedModel(const GetCollaborationTrainedModelRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationTrainedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationTrainedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationTrainedModel", "Required field: TrainedModelArn, is not set");
    return GetCollaborationTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationTrainedModel", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationTrainedModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationTrainedModelOutcome>(
    [&]()-> GetCollaborationTrainedModelOutcome {
      return GetCollaborationTrainedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredAudienceModelOutcome CleanRoomsMLClient::GetConfiguredAudienceModel(const GetConfiguredAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return GetConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredAudienceModelOutcome>(
    [&]()-> GetConfiguredAudienceModelOutcome {
      return GetConfiguredAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::GetConfiguredAudienceModelPolicy(const GetConfiguredAudienceModelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredAudienceModelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return GetConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredAudienceModelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredAudienceModelPolicyOutcome>(
    [&]()-> GetConfiguredAudienceModelPolicyOutcome {
      return GetConfiguredAudienceModelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredModelAlgorithmOutcome CleanRoomsMLClient::GetConfiguredModelAlgorithm(const GetConfiguredModelAlgorithmRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredModelAlgorithm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredModelAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredModelAlgorithmArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithm", "Required field: ConfiguredModelAlgorithmArn, is not set");
    return GetConfiguredModelAlgorithmOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredModelAlgorithm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredModelAlgorithm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredModelAlgorithmOutcome>(
    [&]()-> GetConfiguredModelAlgorithmOutcome {
      return GetConfiguredModelAlgorithmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-model-algorithms/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredModelAlgorithmArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredModelAlgorithmAssociationOutcome CleanRoomsMLClient::GetConfiguredModelAlgorithmAssociation(const GetConfiguredModelAlgorithmAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredModelAlgorithmAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredModelAlgorithmAssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithmAssociation", "Required field: ConfiguredModelAlgorithmAssociationArn, is not set");
    return GetConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredModelAlgorithmAssociationArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredModelAlgorithmAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredModelAlgorithmAssociationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredModelAlgorithmAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredModelAlgorithmAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredModelAlgorithmAssociationOutcome>(
    [&]()-> GetConfiguredModelAlgorithmAssociationOutcome {
      return GetConfiguredModelAlgorithmAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredModelAlgorithmAssociationArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMLConfigurationOutcome CleanRoomsMLClient::GetMLConfiguration(const GetMLConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetMLConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMLConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return GetMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMLConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMLConfigurationOutcome>(
    [&]()-> GetMLConfigurationOutcome {
      return GetMLConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMLInputChannelOutcome CleanRoomsMLClient::GetMLInputChannel(const GetMLInputChannelRequest& request) const
{
  AWS_OPERATION_GUARD(GetMLInputChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMLInputChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MlInputChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMLInputChannel", "Required field: MlInputChannelArn, is not set");
    return GetMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MlInputChannelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMLInputChannel", "Required field: MembershipIdentifier, is not set");
    return GetMLInputChannelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMLInputChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMLInputChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMLInputChannelOutcome>(
    [&]()-> GetMLInputChannelOutcome {
      return GetMLInputChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels/");
      resolvedEndpoint.AddPathSegment(request.GetMlInputChannelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTrainedModelOutcome CleanRoomsMLClient::GetTrainedModel(const GetTrainedModelRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrainedModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrainedModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrainedModel", "Required field: TrainedModelArn, is not set");
    return GetTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrainedModel", "Required field: MembershipIdentifier, is not set");
    return GetTrainedModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTrainedModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTrainedModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTrainedModelOutcome>(
    [&]()-> GetTrainedModelOutcome {
      return GetTrainedModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTrainedModelInferenceJobOutcome CleanRoomsMLClient::GetTrainedModelInferenceJob(const GetTrainedModelInferenceJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrainedModelInferenceJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrainedModelInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return GetTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.TrainedModelInferenceJobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrainedModelInferenceJob", "Required field: TrainedModelInferenceJobArn, is not set");
    return GetTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelInferenceJobArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTrainedModelInferenceJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTrainedModelInferenceJobOutcome>(
    [&]()-> GetTrainedModelInferenceJobOutcome {
      return GetTrainedModelInferenceJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-model-inference-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelInferenceJobArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTrainingDatasetOutcome CleanRoomsMLClient::GetTrainingDataset(const GetTrainingDatasetRequest& request) const
{
  AWS_OPERATION_GUARD(GetTrainingDataset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrainingDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainingDatasetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrainingDataset", "Required field: TrainingDatasetArn, is not set");
    return GetTrainingDatasetOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingDatasetArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTrainingDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTrainingDataset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTrainingDatasetOutcome>(
    [&]()-> GetTrainingDatasetOutcome {
      return GetTrainingDatasetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/training-dataset/");
      resolvedEndpoint.AddPathSegment(request.GetTrainingDatasetArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAudienceExportJobsOutcome CleanRoomsMLClient::ListAudienceExportJobs(const ListAudienceExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAudienceExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAudienceExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAudienceExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAudienceExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAudienceExportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAudienceExportJobsOutcome>(
    [&]()-> ListAudienceExportJobsOutcome {
      return ListAudienceExportJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-export-job");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAudienceGenerationJobsOutcome CleanRoomsMLClient::ListAudienceGenerationJobs(const ListAudienceGenerationJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAudienceGenerationJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAudienceGenerationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAudienceGenerationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAudienceGenerationJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAudienceGenerationJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAudienceGenerationJobsOutcome>(
    [&]()-> ListAudienceGenerationJobsOutcome {
      return ListAudienceGenerationJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-generation-job");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAudienceModelsOutcome CleanRoomsMLClient::ListAudienceModels(const ListAudienceModelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAudienceModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAudienceModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAudienceModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAudienceModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAudienceModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAudienceModelsOutcome>(
    [&]()-> ListAudienceModelsOutcome {
      return ListAudienceModelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-model");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationConfiguredModelAlgorithmAssociationsOutcome CleanRoomsMLClient::ListCollaborationConfiguredModelAlgorithmAssociations(const ListCollaborationConfiguredModelAlgorithmAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationConfiguredModelAlgorithmAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationConfiguredModelAlgorithmAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationConfiguredModelAlgorithmAssociationsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationConfiguredModelAlgorithmAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationConfiguredModelAlgorithmAssociationsOutcome>(
    [&]()-> ListCollaborationConfiguredModelAlgorithmAssociationsOutcome {
      return ListCollaborationConfiguredModelAlgorithmAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationMLInputChannelsOutcome CleanRoomsMLClient::ListCollaborationMLInputChannels(const ListCollaborationMLInputChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationMLInputChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationMLInputChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationMLInputChannels", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationMLInputChannelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationMLInputChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationMLInputChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationMLInputChannels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationMLInputChannelsOutcome>(
    [&]()-> ListCollaborationMLInputChannelsOutcome {
      return ListCollaborationMLInputChannelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationTrainedModelExportJobsOutcome CleanRoomsMLClient::ListCollaborationTrainedModelExportJobs(const ListCollaborationTrainedModelExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationTrainedModelExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationTrainedModelExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelExportJobs", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelExportJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelExportJobs", "Required field: TrainedModelArn, is not set");
    return ListCollaborationTrainedModelExportJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationTrainedModelExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationTrainedModelExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationTrainedModelExportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationTrainedModelExportJobsOutcome>(
    [&]()-> ListCollaborationTrainedModelExportJobsOutcome {
      return ListCollaborationTrainedModelExportJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      resolvedEndpoint.AddPathSegments("/export-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationTrainedModelInferenceJobsOutcome CleanRoomsMLClient::ListCollaborationTrainedModelInferenceJobs(const ListCollaborationTrainedModelInferenceJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationTrainedModelInferenceJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationTrainedModelInferenceJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModelInferenceJobs", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelInferenceJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationTrainedModelInferenceJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationTrainedModelInferenceJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationTrainedModelInferenceJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationTrainedModelInferenceJobsOutcome>(
    [&]()-> ListCollaborationTrainedModelInferenceJobsOutcome {
      return ListCollaborationTrainedModelInferenceJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-model-inference-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationTrainedModelsOutcome CleanRoomsMLClient::ListCollaborationTrainedModels(const ListCollaborationTrainedModelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationTrainedModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationTrainedModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationTrainedModels", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationTrainedModelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationTrainedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationTrainedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationTrainedModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationTrainedModelsOutcome>(
    [&]()-> ListCollaborationTrainedModelsOutcome {
      return ListCollaborationTrainedModelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredAudienceModelsOutcome CleanRoomsMLClient::ListConfiguredAudienceModels(const ListConfiguredAudienceModelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredAudienceModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredAudienceModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredAudienceModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredAudienceModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredAudienceModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredAudienceModelsOutcome>(
    [&]()-> ListConfiguredAudienceModelsOutcome {
      return ListConfiguredAudienceModelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredModelAlgorithmAssociationsOutcome CleanRoomsMLClient::ListConfiguredModelAlgorithmAssociations(const ListConfiguredModelAlgorithmAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredModelAlgorithmAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfiguredModelAlgorithmAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredModelAlgorithmAssociationsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredModelAlgorithmAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredModelAlgorithmAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredModelAlgorithmAssociationsOutcome>(
    [&]()-> ListConfiguredModelAlgorithmAssociationsOutcome {
      return ListConfiguredModelAlgorithmAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configured-model-algorithm-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredModelAlgorithmsOutcome CleanRoomsMLClient::ListConfiguredModelAlgorithms(const ListConfiguredModelAlgorithmsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredModelAlgorithms);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredModelAlgorithms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredModelAlgorithms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredModelAlgorithms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredModelAlgorithms",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredModelAlgorithmsOutcome>(
    [&]()-> ListConfiguredModelAlgorithmsOutcome {
      return ListConfiguredModelAlgorithmsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-model-algorithms");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMLInputChannelsOutcome CleanRoomsMLClient::ListMLInputChannels(const ListMLInputChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMLInputChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMLInputChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMLInputChannels", "Required field: MembershipIdentifier, is not set");
    return ListMLInputChannelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMLInputChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMLInputChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMLInputChannels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMLInputChannelsOutcome>(
    [&]()-> ListMLInputChannelsOutcome {
      return ListMLInputChannelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-input-channels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome CleanRoomsMLClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListTrainedModelInferenceJobsOutcome CleanRoomsMLClient::ListTrainedModelInferenceJobs(const ListTrainedModelInferenceJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrainedModelInferenceJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainedModelInferenceJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrainedModelInferenceJobs", "Required field: MembershipIdentifier, is not set");
    return ListTrainedModelInferenceJobsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTrainedModelInferenceJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrainedModelInferenceJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrainedModelInferenceJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrainedModelInferenceJobsOutcome>(
    [&]()-> ListTrainedModelInferenceJobsOutcome {
      return ListTrainedModelInferenceJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-model-inference-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrainedModelsOutcome CleanRoomsMLClient::ListTrainedModels(const ListTrainedModelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrainedModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainedModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrainedModels", "Required field: MembershipIdentifier, is not set");
    return ListTrainedModelsOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTrainedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrainedModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrainedModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrainedModelsOutcome>(
    [&]()-> ListTrainedModelsOutcome {
      return ListTrainedModelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrainingDatasetsOutcome CleanRoomsMLClient::ListTrainingDatasets(const ListTrainingDatasetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrainingDatasets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainingDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTrainingDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrainingDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrainingDatasets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrainingDatasetsOutcome>(
    [&]()-> ListTrainingDatasetsOutcome {
      return ListTrainingDatasetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/training-dataset");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutConfiguredAudienceModelPolicyOutcome CleanRoomsMLClient::PutConfiguredAudienceModelPolicy(const PutConfiguredAudienceModelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutConfiguredAudienceModelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfiguredAudienceModelPolicy", "Required field: ConfiguredAudienceModelArn, is not set");
    return PutConfiguredAudienceModelPolicyOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutConfiguredAudienceModelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutConfiguredAudienceModelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutConfiguredAudienceModelPolicyOutcome>(
    [&]()-> PutConfiguredAudienceModelPolicyOutcome {
      return PutConfiguredAudienceModelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutMLConfigurationOutcome CleanRoomsMLClient::PutMLConfiguration(const PutMLConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutMLConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMLConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMLConfiguration", "Required field: MembershipIdentifier, is not set");
    return PutMLConfigurationOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutMLConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutMLConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutMLConfigurationOutcome>(
    [&]()-> PutMLConfigurationOutcome {
      return PutMLConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/ml-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAudienceExportJobOutcome CleanRoomsMLClient::StartAudienceExportJob(const StartAudienceExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartAudienceExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAudienceExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartAudienceExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAudienceExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAudienceExportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAudienceExportJobOutcome>(
    [&]()-> StartAudienceExportJobOutcome {
      return StartAudienceExportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-export-job");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAudienceGenerationJobOutcome CleanRoomsMLClient::StartAudienceGenerationJob(const StartAudienceGenerationJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartAudienceGenerationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAudienceGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAudienceGenerationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAudienceGenerationJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAudienceGenerationJobOutcome>(
    [&]()-> StartAudienceGenerationJobOutcome {
      return StartAudienceGenerationJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audience-generation-job");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTrainedModelExportJobOutcome CleanRoomsMLClient::StartTrainedModelExportJob(const StartTrainedModelExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartTrainedModelExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTrainedModelExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainedModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTrainedModelExportJob", "Required field: TrainedModelArn, is not set");
    return StartTrainedModelExportJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainedModelArn]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTrainedModelExportJob", "Required field: MembershipIdentifier, is not set");
    return StartTrainedModelExportJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartTrainedModelExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTrainedModelExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTrainedModelExportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTrainedModelExportJobOutcome>(
    [&]()-> StartTrainedModelExportJobOutcome {
      return StartTrainedModelExportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-models/");
      resolvedEndpoint.AddPathSegment(request.GetTrainedModelArn());
      resolvedEndpoint.AddPathSegments("/export-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTrainedModelInferenceJobOutcome CleanRoomsMLClient::StartTrainedModelInferenceJob(const StartTrainedModelInferenceJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartTrainedModelInferenceJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTrainedModelInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTrainedModelInferenceJob", "Required field: MembershipIdentifier, is not set");
    return StartTrainedModelInferenceJobOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTrainedModelInferenceJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTrainedModelInferenceJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTrainedModelInferenceJobOutcome>(
    [&]()-> StartTrainedModelInferenceJobOutcome {
      return StartTrainedModelInferenceJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/trained-model-inference-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome CleanRoomsMLClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome CleanRoomsMLClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateConfiguredAudienceModelOutcome CleanRoomsMLClient::UpdateConfiguredAudienceModel(const UpdateConfiguredAudienceModelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredAudienceModel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredAudienceModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModel", "Required field: ConfiguredAudienceModelArn, is not set");
    return UpdateConfiguredAudienceModelOutcome(Aws::Client::AWSError<CleanRoomsMLErrors>(CleanRoomsMLErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredAudienceModel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredAudienceModel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredAudienceModelOutcome>(
    [&]()-> UpdateConfiguredAudienceModelOutcome {
      return UpdateConfiguredAudienceModelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configured-audience-model/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


