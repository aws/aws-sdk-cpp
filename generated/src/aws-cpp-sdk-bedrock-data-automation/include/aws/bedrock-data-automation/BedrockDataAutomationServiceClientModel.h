/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-data-automation/BedrockDataAutomationErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BedrockDataAutomationClient header */
#include <aws/bedrock-data-automation/model/CreateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/CreateBlueprintVersionResult.h>
#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/DeleteBlueprintResult.h>
#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/GetBlueprintResult.h>
#include <aws/bedrock-data-automation/model/GetDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsResult.h>
#include <aws/bedrock-data-automation/model/ListTagsForResourceResult.h>
#include <aws/bedrock-data-automation/model/TagResourceResult.h>
#include <aws/bedrock-data-automation/model/UntagResourceResult.h>
#include <aws/bedrock-data-automation/model/UpdateBlueprintResult.h>
#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectResult.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
/* End of service model headers required in BedrockDataAutomationClient header */

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

  namespace BedrockDataAutomation
  {
    using BedrockDataAutomationClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BedrockDataAutomationEndpointProviderBase = Aws::BedrockDataAutomation::Endpoint::BedrockDataAutomationEndpointProviderBase;
    using BedrockDataAutomationEndpointProvider = Aws::BedrockDataAutomation::Endpoint::BedrockDataAutomationEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BedrockDataAutomationClient header */
      class CreateBlueprintRequest;
      class CreateBlueprintVersionRequest;
      class CreateDataAutomationProjectRequest;
      class DeleteBlueprintRequest;
      class DeleteDataAutomationProjectRequest;
      class GetBlueprintRequest;
      class GetDataAutomationProjectRequest;
      class ListBlueprintsRequest;
      class ListDataAutomationProjectsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBlueprintRequest;
      class UpdateDataAutomationProjectRequest;
      /* End of service model forward declarations required in BedrockDataAutomationClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBlueprintResult, BedrockDataAutomationError> CreateBlueprintOutcome;
      typedef Aws::Utils::Outcome<CreateBlueprintVersionResult, BedrockDataAutomationError> CreateBlueprintVersionOutcome;
      typedef Aws::Utils::Outcome<CreateDataAutomationProjectResult, BedrockDataAutomationError> CreateDataAutomationProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteBlueprintResult, BedrockDataAutomationError> DeleteBlueprintOutcome;
      typedef Aws::Utils::Outcome<DeleteDataAutomationProjectResult, BedrockDataAutomationError> DeleteDataAutomationProjectOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintResult, BedrockDataAutomationError> GetBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetDataAutomationProjectResult, BedrockDataAutomationError> GetDataAutomationProjectOutcome;
      typedef Aws::Utils::Outcome<ListBlueprintsResult, BedrockDataAutomationError> ListBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListDataAutomationProjectsResult, BedrockDataAutomationError> ListDataAutomationProjectsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockDataAutomationError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BedrockDataAutomationError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BedrockDataAutomationError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBlueprintResult, BedrockDataAutomationError> UpdateBlueprintOutcome;
      typedef Aws::Utils::Outcome<UpdateDataAutomationProjectResult, BedrockDataAutomationError> UpdateDataAutomationProjectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
      typedef std::future<CreateBlueprintVersionOutcome> CreateBlueprintVersionOutcomeCallable;
      typedef std::future<CreateDataAutomationProjectOutcome> CreateDataAutomationProjectOutcomeCallable;
      typedef std::future<DeleteBlueprintOutcome> DeleteBlueprintOutcomeCallable;
      typedef std::future<DeleteDataAutomationProjectOutcome> DeleteDataAutomationProjectOutcomeCallable;
      typedef std::future<GetBlueprintOutcome> GetBlueprintOutcomeCallable;
      typedef std::future<GetDataAutomationProjectOutcome> GetDataAutomationProjectOutcomeCallable;
      typedef std::future<ListBlueprintsOutcome> ListBlueprintsOutcomeCallable;
      typedef std::future<ListDataAutomationProjectsOutcome> ListDataAutomationProjectsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBlueprintOutcome> UpdateBlueprintOutcomeCallable;
      typedef std::future<UpdateDataAutomationProjectOutcome> UpdateDataAutomationProjectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BedrockDataAutomationClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateBlueprintRequest&, const Model::CreateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBlueprintResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateBlueprintVersionRequest&, const Model::CreateBlueprintVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBlueprintVersionResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::CreateDataAutomationProjectRequest&, const Model::CreateDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataAutomationProjectResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::DeleteBlueprintRequest&, const Model::DeleteBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBlueprintResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::DeleteDataAutomationProjectRequest&, const Model::DeleteDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataAutomationProjectResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetBlueprintRequest&, const Model::GetBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::GetDataAutomationProjectRequest&, const Model::GetDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataAutomationProjectResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListBlueprintsRequest&, const Model::ListBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBlueprintsResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListDataAutomationProjectsRequest&, const Model::ListDataAutomationProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataAutomationProjectsResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::UpdateBlueprintRequest&, const Model::UpdateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBlueprintResponseReceivedHandler;
    typedef std::function<void(const BedrockDataAutomationClient*, const Model::UpdateDataAutomationProjectRequest&, const Model::UpdateDataAutomationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataAutomationProjectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BedrockDataAutomation
} // namespace Aws
