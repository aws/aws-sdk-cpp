/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fis/FISServiceClientModel.h>

namespace Aws
{
namespace FIS
{
  /**
   * <p>Fault Injection Simulator is a managed service that enables you to perform
   * fault injection experiments on your Amazon Web Services workloads. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault Injection
   * Simulator User Guide</a>.</p>
   */
  class AWS_FIS_API FISClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FISClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::FIS::FISClientConfiguration& clientConfiguration = Aws::FIS::FISClientConfiguration(),
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG),
                  const Aws::FIS::FISClientConfiguration& clientConfiguration = Aws::FIS::FISClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = Aws::MakeShared<FISEndpointProvider>(ALLOCATION_TAG),
                  const Aws::FIS::FISClientConfiguration& clientConfiguration = Aws::FIS::FISClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FISClient();

        /**
         * <p>Creates an experiment template. </p> <p>An experiment template includes the
         * following components:</p> <ul> <li> <p> <b>Targets</b>: A target can be a
         * specific resource in your Amazon Web Services environment, or one or more
         * resources that match criteria that you specify, for example, resources that have
         * specific tags.</p> </li> <li> <p> <b>Actions</b>: The actions to carry out on
         * the target. You can specify multiple actions, the duration of each action, and
         * when to start each action during an experiment.</p> </li> <li> <p> <b>Stop
         * conditions</b>: If a stop condition is triggered while an experiment is running,
         * the experiment is automatically stopped. You can define a stop condition as a
         * CloudWatch alarm.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-templates.html">Experiment
         * templates</a> in the <i>Fault Injection Simulator User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentTemplateOutcome CreateExperimentTemplate(const Model::CreateExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperimentTemplateOutcomeCallable CreateExperimentTemplateCallable(const Model::CreateExperimentTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperimentTemplateAsync(const Model::CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentTemplateOutcome DeleteExperimentTemplate(const Model::DeleteExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperimentTemplateOutcomeCallable DeleteExperimentTemplateCallable(const Model::DeleteExperimentTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperimentTemplateAsync(const Model::DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified FIS action.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActionOutcome GetAction(const Model::GetActionRequest& request) const;

        /**
         * A Callable wrapper for GetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActionOutcomeCallable GetActionCallable(const Model::GetActionRequest& request) const;

        /**
         * An Async wrapper for GetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetActionAsync(const Model::GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified experiment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentOutcome GetExperiment(const Model::GetExperimentRequest& request) const;

        /**
         * A Callable wrapper for GetExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentOutcomeCallable GetExperimentCallable(const Model::GetExperimentRequest& request) const;

        /**
         * An Async wrapper for GetExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExperimentAsync(const Model::GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified experiment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentTemplateOutcome GetExperimentTemplate(const Model::GetExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentTemplateOutcomeCallable GetExperimentTemplateCallable(const Model::GetExperimentTemplateRequest& request) const;

        /**
         * An Async wrapper for GetExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExperimentTemplateAsync(const Model::GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified resource type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetTargetResourceType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTargetResourceTypeOutcome GetTargetResourceType(const Model::GetTargetResourceTypeRequest& request) const;

        /**
         * A Callable wrapper for GetTargetResourceType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTargetResourceTypeOutcomeCallable GetTargetResourceTypeCallable(const Model::GetTargetResourceTypeRequest& request) const;

        /**
         * An Async wrapper for GetTargetResourceType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTargetResourceTypeAsync(const Model::GetTargetResourceTypeRequest& request, const GetTargetResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the available FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

        /**
         * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionsOutcomeCallable ListActionsCallable(const Model::ListActionsRequest& request) const;

        /**
         * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionsAsync(const Model::ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentTemplatesOutcome ListExperimentTemplates(const Model::ListExperimentTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListExperimentTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentTemplatesOutcomeCallable ListExperimentTemplatesCallable(const Model::ListExperimentTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListExperimentTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentTemplatesAsync(const Model::ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const Model::ListExperimentsRequest& request) const;

        /**
         * An Async wrapper for ListExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the target resource types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTargetResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetResourceTypesOutcome ListTargetResourceTypes(const Model::ListTargetResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTargetResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetResourceTypesOutcomeCallable ListTargetResourceTypesCallable(const Model::ListTargetResourceTypesRequest& request) const;

        /**
         * An Async wrapper for ListTargetResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetResourceTypesAsync(const Model::ListTargetResourceTypesRequest& request, const ListTargetResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts running an experiment from the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExperimentOutcome StartExperiment(const Model::StartExperimentRequest& request) const;

        /**
         * A Callable wrapper for StartExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExperimentOutcomeCallable StartExperimentCallable(const Model::StartExperimentRequest& request) const;

        /**
         * An Async wrapper for StartExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExperimentAsync(const Model::StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;

        /**
         * A Callable wrapper for StopExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopExperimentOutcomeCallable StopExperimentCallable(const Model::StopExperimentRequest& request) const;

        /**
         * An Async wrapper for StopExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopExperimentAsync(const Model::StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentTemplateOutcome UpdateExperimentTemplate(const Model::UpdateExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperimentTemplateOutcomeCallable UpdateExperimentTemplateCallable(const Model::UpdateExperimentTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperimentTemplateAsync(const Model::UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FISEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FISClient>;
      void init(const FISClientConfiguration& clientConfiguration);

      FISClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FISEndpointProviderBase> m_endpointProvider;
  };

} // namespace FIS
} // namespace Aws
