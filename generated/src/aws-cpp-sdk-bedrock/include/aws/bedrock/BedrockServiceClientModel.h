/**
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
#include <aws/bedrock/model/CreateModelCustomizationJobResult.h>
#include <aws/bedrock/model/CreateProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/DeleteCustomModelResult.h>
#include <aws/bedrock/model/DeleteModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/DeleteProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/GetCustomModelResult.h>
#include <aws/bedrock/model/GetFoundationModelResult.h>
#include <aws/bedrock/model/GetModelCustomizationJobResult.h>
#include <aws/bedrock/model/GetModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/GetProvisionedModelThroughputResult.h>
#include <aws/bedrock/model/ListCustomModelsResult.h>
#include <aws/bedrock/model/ListFoundationModelsResult.h>
#include <aws/bedrock/model/ListModelCustomizationJobsResult.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsResult.h>
#include <aws/bedrock/model/ListTagsForResourceResult.h>
#include <aws/bedrock/model/PutModelInvocationLoggingConfigurationResult.h>
#include <aws/bedrock/model/StopModelCustomizationJobResult.h>
#include <aws/bedrock/model/TagResourceResult.h>
#include <aws/bedrock/model/UntagResourceResult.h>
#include <aws/bedrock/model/UpdateProvisionedModelThroughputResult.h>
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
    using BedrockClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BedrockEndpointProviderBase = Aws::Bedrock::Endpoint::BedrockEndpointProviderBase;
    using BedrockEndpointProvider = Aws::Bedrock::Endpoint::BedrockEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockClient header */
      class CreateModelCustomizationJobRequest;
      class CreateProvisionedModelThroughputRequest;
      class DeleteCustomModelRequest;
      class DeleteModelInvocationLoggingConfigurationRequest;
      class DeleteProvisionedModelThroughputRequest;
      class GetCustomModelRequest;
      class GetFoundationModelRequest;
      class GetModelCustomizationJobRequest;
      class GetModelInvocationLoggingConfigurationRequest;
      class GetProvisionedModelThroughputRequest;
      class ListCustomModelsRequest;
      class ListFoundationModelsRequest;
      class ListModelCustomizationJobsRequest;
      class ListProvisionedModelThroughputsRequest;
      class ListTagsForResourceRequest;
      class PutModelInvocationLoggingConfigurationRequest;
      class StopModelCustomizationJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateProvisionedModelThroughputRequest;
      /* End of service model forward declarations required in BedrockClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateModelCustomizationJobResult, BedrockError> CreateModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<CreateProvisionedModelThroughputResult, BedrockError> CreateProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomModelResult, BedrockError> DeleteCustomModelOutcome;
      typedef Aws::Utils::Outcome<DeleteModelInvocationLoggingConfigurationResult, BedrockError> DeleteModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisionedModelThroughputResult, BedrockError> DeleteProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<GetCustomModelResult, BedrockError> GetCustomModelOutcome;
      typedef Aws::Utils::Outcome<GetFoundationModelResult, BedrockError> GetFoundationModelOutcome;
      typedef Aws::Utils::Outcome<GetModelCustomizationJobResult, BedrockError> GetModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<GetModelInvocationLoggingConfigurationResult, BedrockError> GetModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetProvisionedModelThroughputResult, BedrockError> GetProvisionedModelThroughputOutcome;
      typedef Aws::Utils::Outcome<ListCustomModelsResult, BedrockError> ListCustomModelsOutcome;
      typedef Aws::Utils::Outcome<ListFoundationModelsResult, BedrockError> ListFoundationModelsOutcome;
      typedef Aws::Utils::Outcome<ListModelCustomizationJobsResult, BedrockError> ListModelCustomizationJobsOutcome;
      typedef Aws::Utils::Outcome<ListProvisionedModelThroughputsResult, BedrockError> ListProvisionedModelThroughputsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutModelInvocationLoggingConfigurationResult, BedrockError> PutModelInvocationLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<StopModelCustomizationJobResult, BedrockError> StopModelCustomizationJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BedrockError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BedrockError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisionedModelThroughputResult, BedrockError> UpdateProvisionedModelThroughputOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateModelCustomizationJobOutcome> CreateModelCustomizationJobOutcomeCallable;
      typedef std::future<CreateProvisionedModelThroughputOutcome> CreateProvisionedModelThroughputOutcomeCallable;
      typedef std::future<DeleteCustomModelOutcome> DeleteCustomModelOutcomeCallable;
      typedef std::future<DeleteModelInvocationLoggingConfigurationOutcome> DeleteModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<DeleteProvisionedModelThroughputOutcome> DeleteProvisionedModelThroughputOutcomeCallable;
      typedef std::future<GetCustomModelOutcome> GetCustomModelOutcomeCallable;
      typedef std::future<GetFoundationModelOutcome> GetFoundationModelOutcomeCallable;
      typedef std::future<GetModelCustomizationJobOutcome> GetModelCustomizationJobOutcomeCallable;
      typedef std::future<GetModelInvocationLoggingConfigurationOutcome> GetModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<GetProvisionedModelThroughputOutcome> GetProvisionedModelThroughputOutcomeCallable;
      typedef std::future<ListCustomModelsOutcome> ListCustomModelsOutcomeCallable;
      typedef std::future<ListFoundationModelsOutcome> ListFoundationModelsOutcomeCallable;
      typedef std::future<ListModelCustomizationJobsOutcome> ListModelCustomizationJobsOutcomeCallable;
      typedef std::future<ListProvisionedModelThroughputsOutcome> ListProvisionedModelThroughputsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutModelInvocationLoggingConfigurationOutcome> PutModelInvocationLoggingConfigurationOutcomeCallable;
      typedef std::future<StopModelCustomizationJobOutcome> StopModelCustomizationJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateProvisionedModelThroughputOutcome> UpdateProvisionedModelThroughputOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockClient*, const Model::CreateModelCustomizationJobRequest&, const Model::CreateModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::CreateProvisionedModelThroughputRequest&, const Model::CreateProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteCustomModelRequest&, const Model::DeleteCustomModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteModelInvocationLoggingConfigurationRequest&, const Model::DeleteModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::DeleteProvisionedModelThroughputRequest&, const Model::DeleteProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetCustomModelRequest&, const Model::GetCustomModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetFoundationModelRequest&, const Model::GetFoundationModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFoundationModelResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelCustomizationJobRequest&, const Model::GetModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetModelInvocationLoggingConfigurationRequest&, const Model::GetModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::GetProvisionedModelThroughputRequest&, const Model::GetProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProvisionedModelThroughputResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListCustomModelsRequest&, const Model::ListCustomModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomModelsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListFoundationModelsRequest&, const Model::ListFoundationModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFoundationModelsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListModelCustomizationJobsRequest&, const Model::ListModelCustomizationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCustomizationJobsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListProvisionedModelThroughputsRequest&, const Model::ListProvisionedModelThroughputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedModelThroughputsResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::PutModelInvocationLoggingConfigurationRequest&, const Model::PutModelInvocationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutModelInvocationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::StopModelCustomizationJobRequest&, const Model::StopModelCustomizationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopModelCustomizationJobResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockClient*, const Model::UpdateProvisionedModelThroughputRequest&, const Model::UpdateProvisionedModelThroughputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedModelThroughputResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Bedrock
} // namespace Aws
