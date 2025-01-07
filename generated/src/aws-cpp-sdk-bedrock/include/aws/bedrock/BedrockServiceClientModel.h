﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock/BedrockErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock/BedrockEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockClient header */
#include <aws/bedrock/model/BatchDeleteEvaluationJobResult.h>
#include <aws/bedrock/model/CreateEvaluationJobResult.h>
#include <aws/bedrock/model/CreateGuardrailResult.h>
#include <aws/bedrock/model/CreateGuardrailVersionResult.h>
#include <aws/bedrock/model/CreateInferenceProfileResult.h>
#include <aws/bedrock/model/CreateMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/CreateModelCopyJobResult.h>
#include <aws/bedrock/model/CreateModelCustomizationJobResult.h>
#include <aws/bedrock/model/CreateModelImportJobResult.h>
#include <aws/bedrock/model/CreateModelInvocationJobResult.h>
#include <aws/bedrock/model/CreateProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/DeleteCustomModelResult.h>
#include <aws/bedrock/model/DeleteGuardrailResult.h>
#include <aws/bedrock/model/DeleteImportedModelResult.h>
#include <aws/bedrock/model/DeleteInferenceProfileResult.h>
#include <aws/bedrock/model/DeleteMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/DeleteModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/DeleteProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/DeregisterMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/GetCustomModelResult.h>
#include <aws/bedrock/model/GetEvaluationJobResult.h>
#include <aws/bedrock/model/GetFoundationModelResult.h>
#include <aws/bedrock/model/GetGuardrailResult.h>
#include <aws/bedrock/model/GetImportedModelResult.h>
#include <aws/bedrock/model/GetInferenceProfileResult.h>
#include <aws/bedrock/model/GetMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/GetModelCopyJobResult.h>
#include <aws/bedrock/model/GetModelCustomizationJobResult.h>
#include <aws/bedrock/model/GetModelImportJobResult.h>
#include <aws/bedrock/model/GetModelInvocationJobResult.h>
#include <aws/bedrock/model/GetModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/GetPromptRouterResult.h>
#include <aws/bedrock/model/GetProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/ListCustomModelsResult.h>
#include <aws/bedrock/model/ListEvaluationJobsResult.h>
#include <aws/bedrock/model/ListFoundationModelsResult.h>
#include <aws/bedrock/model/ListGuardrailsResult.h>
#include <aws/bedrock/model/ListImportedModelsResult.h>
#include <aws/bedrock/model/ListInferenceProfilesResult.h>
#include <aws/bedrock/model/ListMarketplaceModelEndpointsResult.h>
#include <aws/bedrock/model/ListModelCopyJobsResult.h>
#include <aws/bedrock/model/ListModelCustomizationJobsResult.h>
#include <aws/bedrock/model/ListModelImportJobsResult.h>
#include <aws/bedrock/model/ListModelInvocationJobsResult.h>
#include <aws/bedrock/model/ListPromptRoutersResult.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsResult.h>
#include <aws/bedrock/model/ListTagsForResourceResult.h>
#include <aws/bedrock/model/PutModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/RegisterMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/StopEvaluationJobResult.h>
#include <aws/bedrock/model/StopModelCustomizationJobResult.h>
#include <aws/bedrock/model/StopModelInvocationJobResult.h>
#include <aws/bedrock/model/TagResourceResult.h>
#include <aws/bedrock/model/UntagResourceResult.h>
#include <aws/bedrock/model/UpdateGuardrailResult.h>
#include <aws/bedrock/model/UpdateMarketplaceModelEndpointResult.h>
#include <aws/bedrock/model/UpdateProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/ListGuardrailsRequest.h>
#include <aws/bedrock/model/ListModelInvocationJobsRequest.h>
#include <aws/bedrock/model/ListEvaluationJobsRequest.h>
#include <aws/bedrock/model/ListModelCustomizationJobsRequest.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsRequest.h>
#include <aws/bedrock/model/ListImportedModelsRequest.h>
#include <aws/bedrock/model/ListModelCopyJobsRequest.h>
#include <aws/bedrock/model/ListCustomModelsRequest.h>
#include <aws/bedrock/model/ListModelImportJobsRequest.h>
#include <aws/bedrock/model/ListInferenceProfilesRequest.h>
#include <aws/bedrock/model/GetModelInvocationLoggingConfigurationRequest.h>
#include <aws/bedrock/model/ListFoundationModelsRequest.h>
#include <aws/bedrock/model/ListMarketplaceModelEndpointsRequest.h>
#include <aws/bedrock/model/DeleteModelInvocationLoggingConfigurationRequest.h>
#include <aws/bedrock/model/ListPromptRoutersRequest.h>
/* End of service model headers required in BedrockClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Bedrock
  {
    using BedrockClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockEndpointProviderBase = Aws::Bedrock::Endpoint::BedrockEndpointProviderBase;
    using BedrockEndpointProvider = Aws::Bedrock::Endpoint::BedrockEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockClient header */
      class BatchDeleteEvaluationJobRequest;
      class CreateEvaluationJobRequest;
      class CreateGuardrailRequest;
      class CreateGuardrailVersionRequest;
      class CreateInferenceProfileRequest;
      class CreateMarketplaceModelEndpointRequest;
      class CreateModelCopyJobRequest;
      class CreateModelCustomizationJobRequest;
      class CreateModelImportJobRequest;
      class CreateModelInvocationJobRequest;
      class CreateProvisionedModelThroughputRequest;
      class DeleteCustomModelRequest;
      class DeleteGuardrailRequest;
      class DeleteImportedModelRequest;
      class DeleteInferenceProfileRequest;
      class DeleteMarketplaceModelEndpointRequest;
      class DeleteModelInvocationLoggingConfigurationRequest;
      class DeleteProvisionedModelThroughputRequest;
      class DeregisterMarketplaceModelEndpointRequest;
      class GetCustomModelRequest;
      class GetEvaluationJobRequest;
      class GetFoundationModelRequest;
      class GetGuardrailRequest;
      class GetImportedModelRequest;
      class GetInferenceProfileRequest;
      class GetMarketplaceModelEndpointRequest;
      class GetModelCopyJobRequest;
      class GetModelCustomizationJobRequest;
      class GetModelImportJobRequest;
      class GetModelInvocationJobRequest;
      class GetModelInvocationLoggingConfigurationRequest;
      class GetPromptRouterRequest;
      class GetProvisionedModelThroughputRequest;
      class ListCustomModelsRequest;
      class ListEvaluationJobsRequest;
      class ListFoundationModelsRequest;
      class ListGuardrailsRequest;
      class ListImportedModelsRequest;
      class ListInferenceProfilesRequest;
      class ListMarketplaceModelEndpointsRequest;
      class ListModelCopyJobsRequest;
      class ListModelCustomizationJobsRequest;
      class ListModelImportJobsRequest;
      class ListModelInvocationJobsRequest;
      class ListPromptRoutersRequest;
      class ListProvisionedModelThroughputsRequest;
      class ListTagsForResourceRequest;
      class PutModelInvocationLoggingConfigurationRequest;
      class RegisterMarketplaceModelEndpointRequest;
      class StopEvaluationJobRequest;
      class StopModelCustomizationJobRequest;
      class StopModelInvocationJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateGuardrailRequest;
      class UpdateMarketplaceModelEndpointRequest;
      class UpdateProvisionedModelThroughputRequest;
      /* End of service model forward declarations required in BedrockClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteEvaluationJobResult, BedrockError> BatchDeleteEvaluationJobOutcome;
      typedef Aws::Utils::Outcome<CreateEvaluationJobResult, BedrockError> CreateEvaluationJobOutcome;
      typedef Aws::Utils::Outcome<CreateGuardrailResult, BedrockError> CreateGuardrailOutcome;
      typedef Aws::Utils::Outcome<CreateGuardrailVersionResult, BedrockError> CreateGuardrailVersionOutcome;
      typedef Aws::Utils::Outcome<CreateInferenceProfileResult, BedrockError> CreateInferenceProfileOutcome;
      typedef Aws::Utils::Outcome<CreateMarketplaceModelEndpointResult, BedrockError> CreateMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateModelCopyJobResult, BedrockError> CreateModelCopyJobOutcome;
      typedef Aws::Utils::Outcome<CreateModelCustomizationJobResult, BedrockError> CreateModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<CreateModelImportJobResult, BedrockError> CreateModelImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateModelInvocationJobResult, BedrockError> CreateModelInvocationJobOutcome;
      typedef Aws::Utils::Outcome<CreateProvisionedModelThroughputResult, BedrockError> CreateProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomModelResult, BedrockError> DeleteCustomModelOutcome;
      typedef Aws::Utils::Outcome<DeleteGuardrailResult, BedrockError> DeleteGuardrailOutcome;
      typedef Aws::Utils::Outcome<DeleteImportedModelResult, BedrockError> DeleteImportedModelOutcome;
      typedef Aws::Utils::Outcome<DeleteInferenceProfileResult, BedrockError> DeleteInferenceProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteMarketplaceModelEndpointResult, BedrockError> DeleteMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteModelInvocationLoggingConfigurationResult, BedrockError> DeleteModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisionedModelThroughputResult, BedrockError> DeleteProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<DeregisterMarketplaceModelEndpointResult, BedrockError> DeregisterMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<GetCustomModelResult, BedrockError> GetCustomModelOutcome;
      typedef Aws::Utils::Outcome<GetEvaluationJobResult, BedrockError> GetEvaluationJobOutcome;
      typedef Aws::Utils::Outcome<GetFoundationModelResult, BedrockError> GetFoundationModelOutcome;
      typedef Aws::Utils::Outcome<GetGuardrailResult, BedrockError> GetGuardrailOutcome;
      typedef Aws::Utils::Outcome<GetImportedModelResult, BedrockError> GetImportedModelOutcome;
      typedef Aws::Utils::Outcome<GetInferenceProfileResult, BedrockError> GetInferenceProfileOutcome;
      typedef Aws::Utils::Outcome<GetMarketplaceModelEndpointResult, BedrockError> GetMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<GetModelCopyJobResult, BedrockError> GetModelCopyJobOutcome;
      typedef Aws::Utils::Outcome<GetModelCustomizationJobResult, BedrockError> GetModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<GetModelImportJobResult, BedrockError> GetModelImportJobOutcome;
      typedef Aws::Utils::Outcome<GetModelInvocationJobResult, BedrockError> GetModelInvocationJobOutcome;
      typedef Aws::Utils::Outcome<GetModelInvocationLoggingConfigurationResult, BedrockError> GetModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPromptRouterResult, BedrockError> GetPromptRouterOutcome;
      typedef Aws::Utils::Outcome<GetProvisionedModelThroughputResult, BedrockError> GetProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<ListCustomModelsResult, BedrockError> ListCustomModelsOutcome;
      typedef Aws::Utils::Outcome<ListEvaluationJobsResult, BedrockError> ListEvaluationJobsOutcome;
      typedef Aws::Utils::Outcome<ListFoundationModelsResult, BedrockError> ListFoundationModelsOutcome;
      typedef Aws::Utils::Outcome<ListGuardrailsResult, BedrockError> ListGuardrailsOutcome;
      typedef Aws::Utils::Outcome<ListImportedModelsResult, BedrockError> ListImportedModelsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceProfilesResult, BedrockError> ListInferenceProfilesOutcome;
      typedef Aws::Utils::Outcome<ListMarketplaceModelEndpointsResult, BedrockError> ListMarketplaceModelEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListModelCopyJobsResult, BedrockError> ListModelCopyJobsOutcome;
      typedef Aws::Utils::Outcome<ListModelCustomizationJobsResult, BedrockError> ListModelCustomizationJobsOutcome;
      typedef Aws::Utils::Outcome<ListModelImportJobsResult, BedrockError> ListModelImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListModelInvocationJobsResult, BedrockError> ListModelInvocationJobsOutcome;
      typedef Aws::Utils::Outcome<ListPromptRoutersResult, BedrockError> ListPromptRoutersOutcome;
      typedef Aws::Utils::Outcome<ListProvisionedModelThroughputsResult, BedrockError> ListProvisionedModelThroughputsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutModelInvocationLoggingConfigurationResult, BedrockError> PutModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<RegisterMarketplaceModelEndpointResult, BedrockError> RegisterMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<StopEvaluationJobResult, BedrockError> StopEvaluationJobOutcome;
      typedef Aws::Utils::Outcome<StopModelCustomizationJobResult, BedrockError> StopModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<StopModelInvocationJobResult, BedrockError> StopModelInvocationJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BedrockError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BedrockError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGuardrailResult, BedrockError> UpdateGuardrailOutcome;
      typedef Aws::Utils::Outcome<UpdateMarketplaceModelEndpointResult, BedrockError> UpdateMarketplaceModelEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisionedModelThroughputResult, BedrockError> UpdateProvisionedModelThroughputOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteEvaluationJobOutcome> BatchDeleteEvaluationJobOutcomeCallable;
      typedef std::future<CreateEvaluationJobOutcome> CreateEvaluationJobOutcomeCallable;
      typedef std::future<CreateGuardrailOutcome> CreateGuardrailOutcomeCallable;
      typedef std::future<CreateGuardrailVersionOutcome> CreateGuardrailVersionOutcomeCallable;
      typedef std::future<CreateInferenceProfileOutcome> CreateInferenceProfileOutcomeCallable;
      typedef std::future<CreateMarketplaceModelEndpointOutcome> CreateMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<CreateModelCopyJobOutcome> CreateModelCopyJobOutcomeCallable;
      typedef std::future<CreateModelCustomizationJobOutcome> CreateModelCustomizationJobOutcomeCallable;
      typedef std::future<CreateModelImportJobOutcome> CreateModelImportJobOutcomeCallable;
      typedef std::future<CreateModelInvocationJobOutcome> CreateModelInvocationJobOutcomeCallable;
      typedef std::future<CreateProvisionedModelThroughputOutcome> CreateProvisionedModelThroughputOutcomeCallable;
      typedef std::future<DeleteCustomModelOutcome> DeleteCustomModelOutcomeCallable;
      typedef std::future<DeleteGuardrailOutcome> DeleteGuardrailOutcomeCallable;
      typedef std::future<DeleteImportedModelOutcome> DeleteImportedModelOutcomeCallable;
      typedef std::future<DeleteInferenceProfileOutcome> DeleteInferenceProfileOutcomeCallable;
      typedef std::future<DeleteMarketplaceModelEndpointOutcome> DeleteMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<DeleteModelInvocationLoggingConfigurationOutcome> DeleteModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<DeleteProvisionedModelThroughputOutcome> DeleteProvisionedModelThroughputOutcomeCallable;
      typedef std::future<DeregisterMarketplaceModelEndpointOutcome> DeregisterMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<GetCustomModelOutcome> GetCustomModelOutcomeCallable;
      typedef std::future<GetEvaluationJobOutcome> GetEvaluationJobOutcomeCallable;
      typedef std::future<GetFoundationModelOutcome> GetFoundationModelOutcomeCallable;
      typedef std::future<GetGuardrailOutcome> GetGuardrailOutcomeCallable;
      typedef std::future<GetImportedModelOutcome> GetImportedModelOutcomeCallable;
      typedef std::future<GetInferenceProfileOutcome> GetInferenceProfileOutcomeCallable;
      typedef std::future<GetMarketplaceModelEndpointOutcome> GetMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<GetModelCopyJobOutcome> GetModelCopyJobOutcomeCallable;
      typedef std::future<GetModelCustomizationJobOutcome> GetModelCustomizationJobOutcomeCallable;
      typedef std::future<GetModelImportJobOutcome> GetModelImportJobOutcomeCallable;
      typedef std::future<GetModelInvocationJobOutcome> GetModelInvocationJobOutcomeCallable;
      typedef std::future<GetModelInvocationLoggingConfigurationOutcome> GetModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<GetPromptRouterOutcome> GetPromptRouterOutcomeCallable;
      typedef std::future<GetProvisionedModelThroughputOutcome> GetProvisionedModelThroughputOutcomeCallable;
      typedef std::future<ListCustomModelsOutcome> ListCustomModelsOutcomeCallable;
      typedef std::future<ListEvaluationJobsOutcome> ListEvaluationJobsOutcomeCallable;
      typedef std::future<ListFoundationModelsOutcome> ListFoundationModelsOutcomeCallable;
      typedef std::future<ListGuardrailsOutcome> ListGuardrailsOutcomeCallable;
      typedef std::future<ListImportedModelsOutcome> ListImportedModelsOutcomeCallable;
      typedef std::future<ListInferenceProfilesOutcome> ListInferenceProfilesOutcomeCallable;
      typedef std::future<ListMarketplaceModelEndpointsOutcome> ListMarketplaceModelEndpointsOutcomeCallable;
      typedef std::future<ListModelCopyJobsOutcome> ListModelCopyJobsOutcomeCallable;
      typedef std::future<ListModelCustomizationJobsOutcome> ListModelCustomizationJobsOutcomeCallable;
      typedef std::future<ListModelImportJobsOutcome> ListModelImportJobsOutcomeCallable;
      typedef std::future<ListModelInvocationJobsOutcome> ListModelInvocationJobsOutcomeCallable;
      typedef std::future<ListPromptRoutersOutcome> ListPromptRoutersOutcomeCallable;
      typedef std::future<ListProvisionedModelThroughputsOutcome> ListProvisionedModelThroughputsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutModelInvocationLoggingConfigurationOutcome> PutModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<RegisterMarketplaceModelEndpointOutcome> RegisterMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<StopEvaluationJobOutcome> StopEvaluationJobOutcomeCallable;
      typedef std::future<StopModelCustomizationJobOutcome> StopModelCustomizationJobOutcomeCallable;
      typedef std::future<StopModelInvocationJobOutcome> StopModelInvocationJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGuardrailOutcome> UpdateGuardrailOutcomeCallable;
      typedef std::future<UpdateMarketplaceModelEndpointOutcome> UpdateMarketplaceModelEndpointOutcomeCallable;
      typedef std::future<UpdateProvisionedModelThroughputOutcome> UpdateProvisionedModelThroughputOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockClient*, const Model::BatchDeleteEvaluationJobRequest&, const Model::BatchDeleteEvaluationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteEvaluationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateEvaluationJobRequest&, const Model::CreateEvaluationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEvaluationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateGuardrailRequest&, const Model::CreateGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGuardrailResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateGuardrailVersionRequest&, const Model::CreateGuardrailVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGuardrailVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateInferenceProfileRequest&, const Model::CreateInferenceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceProfileResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateMarketplaceModelEndpointRequest&, const Model::CreateMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateModelCopyJobRequest&, const Model::CreateModelCopyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelCopyJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateModelCustomizationJobRequest&, const Model::CreateModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateModelImportJobRequest&, const Model::CreateModelImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelImportJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateModelInvocationJobRequest&, const Model::CreateModelInvocationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelInvocationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateProvisionedModelThroughputRequest&, const Model::CreateProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteCustomModelRequest&, const Model::DeleteCustomModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteGuardrailRequest&, const Model::DeleteGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGuardrailResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteImportedModelRequest&, const Model::DeleteImportedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportedModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteInferenceProfileRequest&, const Model::DeleteInferenceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInferenceProfileResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteMarketplaceModelEndpointRequest&, const Model::DeleteMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteModelInvocationLoggingConfigurationRequest&, const Model::DeleteModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteProvisionedModelThroughputRequest&, const Model::DeleteProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeregisterMarketplaceModelEndpointRequest&, const Model::DeregisterMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetCustomModelRequest&, const Model::GetCustomModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetEvaluationJobRequest&, const Model::GetEvaluationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEvaluationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetFoundationModelRequest&, const Model::GetFoundationModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFoundationModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetGuardrailRequest&, const Model::GetGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGuardrailResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetImportedModelRequest&, const Model::GetImportedModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportedModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetInferenceProfileRequest&, const Model::GetInferenceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInferenceProfileResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetMarketplaceModelEndpointRequest&, const Model::GetMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelCopyJobRequest&, const Model::GetModelCopyJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelCopyJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelCustomizationJobRequest&, const Model::GetModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelImportJobRequest&, const Model::GetModelImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelImportJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelInvocationJobRequest&, const Model::GetModelInvocationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelInvocationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelInvocationLoggingConfigurationRequest&, const Model::GetModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetPromptRouterRequest&, const Model::GetPromptRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPromptRouterResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetProvisionedModelThroughputRequest&, const Model::GetProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListCustomModelsRequest&, const Model::ListCustomModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomModelsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListEvaluationJobsRequest&, const Model::ListEvaluationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEvaluationJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListFoundationModelsRequest&, const Model::ListFoundationModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFoundationModelsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListGuardrailsRequest&, const Model::ListGuardrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGuardrailsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListImportedModelsRequest&, const Model::ListImportedModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportedModelsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListInferenceProfilesRequest&, const Model::ListInferenceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceProfilesResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListMarketplaceModelEndpointsRequest&, const Model::ListMarketplaceModelEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMarketplaceModelEndpointsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListModelCopyJobsRequest&, const Model::ListModelCopyJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCopyJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListModelCustomizationJobsRequest&, const Model::ListModelCustomizationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCustomizationJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListModelImportJobsRequest&, const Model::ListModelImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelImportJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListModelInvocationJobsRequest&, const Model::ListModelInvocationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelInvocationJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListPromptRoutersRequest&, const Model::ListPromptRoutersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPromptRoutersResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListProvisionedModelThroughputsRequest&, const Model::ListProvisionedModelThroughputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedModelThroughputsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::PutModelInvocationLoggingConfigurationRequest&, const Model::PutModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::RegisterMarketplaceModelEndpointRequest&, const Model::RegisterMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::StopEvaluationJobRequest&, const Model::StopEvaluationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEvaluationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::StopModelCustomizationJobRequest&, const Model::StopModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::StopModelInvocationJobRequest&, const Model::StopModelInvocationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopModelInvocationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UpdateGuardrailRequest&, const Model::UpdateGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGuardrailResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UpdateMarketplaceModelEndpointRequest&, const Model::UpdateMarketplaceModelEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMarketplaceModelEndpointResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UpdateProvisionedModelThroughputRequest&, const Model::UpdateProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedModelThroughputResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Bedrock
} // namespace Aws
