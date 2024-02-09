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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FISClientConfiguration ClientConfigurationType;
      typedef FISEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::FIS::FISClientConfiguration& clientConfiguration = Aws::FIS::FISClientConfiguration(),
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::FIS::FISClientConfiguration& clientConfiguration = Aws::FIS::FISClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<FISEndpointProviderBase> endpointProvider = nullptr,
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
         * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-templates.html">experiment
         * templates</a> in the <i>Fault Injection Simulator User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentTemplateOutcome CreateExperimentTemplate(const Model::CreateExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExperimentTemplateRequestT = Model::CreateExperimentTemplateRequest>
        Model::CreateExperimentTemplateOutcomeCallable CreateExperimentTemplateCallable(const CreateExperimentTemplateRequestT& request) const
        {
            return SubmitCallable(&FISClient::CreateExperimentTemplate, request);
        }

        /**
         * An Async wrapper for CreateExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExperimentTemplateRequestT = Model::CreateExperimentTemplateRequest>
        void CreateExperimentTemplateAsync(const CreateExperimentTemplateRequestT& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::CreateExperimentTemplate, request, handler, context);
        }

        /**
         * <p>Creates a target account configuration for the experiment template. A target
         * account configuration is required when <code>accountTargeting</code> of
         * <code>experimentOptions</code> is set to <code>multi-account</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-options.html">experiment
         * options</a> in the <i>Fault Injection Simulator User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateTargetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTargetAccountConfigurationOutcome CreateTargetAccountConfiguration(const Model::CreateTargetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateTargetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTargetAccountConfigurationRequestT = Model::CreateTargetAccountConfigurationRequest>
        Model::CreateTargetAccountConfigurationOutcomeCallable CreateTargetAccountConfigurationCallable(const CreateTargetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&FISClient::CreateTargetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for CreateTargetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTargetAccountConfigurationRequestT = Model::CreateTargetAccountConfigurationRequest>
        void CreateTargetAccountConfigurationAsync(const CreateTargetAccountConfigurationRequestT& request, const CreateTargetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::CreateTargetAccountConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentTemplateOutcome DeleteExperimentTemplate(const Model::DeleteExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExperimentTemplateRequestT = Model::DeleteExperimentTemplateRequest>
        Model::DeleteExperimentTemplateOutcomeCallable DeleteExperimentTemplateCallable(const DeleteExperimentTemplateRequestT& request) const
        {
            return SubmitCallable(&FISClient::DeleteExperimentTemplate, request);
        }

        /**
         * An Async wrapper for DeleteExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExperimentTemplateRequestT = Model::DeleteExperimentTemplateRequest>
        void DeleteExperimentTemplateAsync(const DeleteExperimentTemplateRequestT& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::DeleteExperimentTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the specified target account configuration of the experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteTargetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetAccountConfigurationOutcome DeleteTargetAccountConfiguration(const Model::DeleteTargetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteTargetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTargetAccountConfigurationRequestT = Model::DeleteTargetAccountConfigurationRequest>
        Model::DeleteTargetAccountConfigurationOutcomeCallable DeleteTargetAccountConfigurationCallable(const DeleteTargetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&FISClient::DeleteTargetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteTargetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTargetAccountConfigurationRequestT = Model::DeleteTargetAccountConfigurationRequest>
        void DeleteTargetAccountConfigurationAsync(const DeleteTargetAccountConfigurationRequestT& request, const DeleteTargetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::DeleteTargetAccountConfiguration, request, handler, context);
        }

        /**
         * <p>Gets information about the specified FIS action.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActionOutcome GetAction(const Model::GetActionRequest& request) const;

        /**
         * A Callable wrapper for GetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetActionRequestT = Model::GetActionRequest>
        Model::GetActionOutcomeCallable GetActionCallable(const GetActionRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetAction, request);
        }

        /**
         * An Async wrapper for GetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetActionRequestT = Model::GetActionRequest>
        void GetActionAsync(const GetActionRequestT& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetAction, request, handler, context);
        }

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
        template<typename GetExperimentRequestT = Model::GetExperimentRequest>
        Model::GetExperimentOutcomeCallable GetExperimentCallable(const GetExperimentRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetExperiment, request);
        }

        /**
         * An Async wrapper for GetExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExperimentRequestT = Model::GetExperimentRequest>
        void GetExperimentAsync(const GetExperimentRequestT& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetExperiment, request, handler, context);
        }

        /**
         * <p>Gets information about the specified target account configuration of the
         * experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperimentTargetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentTargetAccountConfigurationOutcome GetExperimentTargetAccountConfiguration(const Model::GetExperimentTargetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetExperimentTargetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExperimentTargetAccountConfigurationRequestT = Model::GetExperimentTargetAccountConfigurationRequest>
        Model::GetExperimentTargetAccountConfigurationOutcomeCallable GetExperimentTargetAccountConfigurationCallable(const GetExperimentTargetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetExperimentTargetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for GetExperimentTargetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExperimentTargetAccountConfigurationRequestT = Model::GetExperimentTargetAccountConfigurationRequest>
        void GetExperimentTargetAccountConfigurationAsync(const GetExperimentTargetAccountConfigurationRequestT& request, const GetExperimentTargetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetExperimentTargetAccountConfiguration, request, handler, context);
        }

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
        template<typename GetExperimentTemplateRequestT = Model::GetExperimentTemplateRequest>
        Model::GetExperimentTemplateOutcomeCallable GetExperimentTemplateCallable(const GetExperimentTemplateRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetExperimentTemplate, request);
        }

        /**
         * An Async wrapper for GetExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExperimentTemplateRequestT = Model::GetExperimentTemplateRequest>
        void GetExperimentTemplateAsync(const GetExperimentTemplateRequestT& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetExperimentTemplate, request, handler, context);
        }

        /**
         * <p>Gets information about the specified target account configuration of the
         * experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetTargetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTargetAccountConfigurationOutcome GetTargetAccountConfiguration(const Model::GetTargetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetTargetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTargetAccountConfigurationRequestT = Model::GetTargetAccountConfigurationRequest>
        Model::GetTargetAccountConfigurationOutcomeCallable GetTargetAccountConfigurationCallable(const GetTargetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetTargetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for GetTargetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTargetAccountConfigurationRequestT = Model::GetTargetAccountConfigurationRequest>
        void GetTargetAccountConfigurationAsync(const GetTargetAccountConfigurationRequestT& request, const GetTargetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetTargetAccountConfiguration, request, handler, context);
        }

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
        template<typename GetTargetResourceTypeRequestT = Model::GetTargetResourceTypeRequest>
        Model::GetTargetResourceTypeOutcomeCallable GetTargetResourceTypeCallable(const GetTargetResourceTypeRequestT& request) const
        {
            return SubmitCallable(&FISClient::GetTargetResourceType, request);
        }

        /**
         * An Async wrapper for GetTargetResourceType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTargetResourceTypeRequestT = Model::GetTargetResourceTypeRequest>
        void GetTargetResourceTypeAsync(const GetTargetResourceTypeRequestT& request, const GetTargetResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::GetTargetResourceType, request, handler, context);
        }

        /**
         * <p>Lists the available FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

        /**
         * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActionsRequestT = Model::ListActionsRequest>
        Model::ListActionsOutcomeCallable ListActionsCallable(const ListActionsRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListActions, request);
        }

        /**
         * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActionsRequestT = Model::ListActionsRequest>
        void ListActionsAsync(const ListActionsRequestT& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListActions, request, handler, context);
        }

        /**
         * <p>Lists the resolved targets information of the specified
         * experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentResolvedTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentResolvedTargetsOutcome ListExperimentResolvedTargets(const Model::ListExperimentResolvedTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListExperimentResolvedTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentResolvedTargetsRequestT = Model::ListExperimentResolvedTargetsRequest>
        Model::ListExperimentResolvedTargetsOutcomeCallable ListExperimentResolvedTargetsCallable(const ListExperimentResolvedTargetsRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListExperimentResolvedTargets, request);
        }

        /**
         * An Async wrapper for ListExperimentResolvedTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentResolvedTargetsRequestT = Model::ListExperimentResolvedTargetsRequest>
        void ListExperimentResolvedTargetsAsync(const ListExperimentResolvedTargetsRequestT& request, const ListExperimentResolvedTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListExperimentResolvedTargets, request, handler, context);
        }

        /**
         * <p>Lists the target account configurations of the specified
         * experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTargetAccountConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentTargetAccountConfigurationsOutcome ListExperimentTargetAccountConfigurations(const Model::ListExperimentTargetAccountConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListExperimentTargetAccountConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentTargetAccountConfigurationsRequestT = Model::ListExperimentTargetAccountConfigurationsRequest>
        Model::ListExperimentTargetAccountConfigurationsOutcomeCallable ListExperimentTargetAccountConfigurationsCallable(const ListExperimentTargetAccountConfigurationsRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListExperimentTargetAccountConfigurations, request);
        }

        /**
         * An Async wrapper for ListExperimentTargetAccountConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentTargetAccountConfigurationsRequestT = Model::ListExperimentTargetAccountConfigurationsRequest>
        void ListExperimentTargetAccountConfigurationsAsync(const ListExperimentTargetAccountConfigurationsRequestT& request, const ListExperimentTargetAccountConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListExperimentTargetAccountConfigurations, request, handler, context);
        }

        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentTemplatesOutcome ListExperimentTemplates(const Model::ListExperimentTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListExperimentTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentTemplatesRequestT = Model::ListExperimentTemplatesRequest>
        Model::ListExperimentTemplatesOutcomeCallable ListExperimentTemplatesCallable(const ListExperimentTemplatesRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListExperimentTemplates, request);
        }

        /**
         * An Async wrapper for ListExperimentTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentTemplatesRequestT = Model::ListExperimentTemplatesRequest>
        void ListExperimentTemplatesAsync(const ListExperimentTemplatesRequestT& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListExperimentTemplates, request, handler, context);
        }

        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const ListExperimentsRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListExperiments, request);
        }

        /**
         * An Async wrapper for ListExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExperimentsRequestT = Model::ListExperimentsRequest>
        void ListExperimentsAsync(const ListExperimentsRequestT& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListExperiments, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the target account configurations of the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTargetAccountConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetAccountConfigurationsOutcome ListTargetAccountConfigurations(const Model::ListTargetAccountConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListTargetAccountConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetAccountConfigurationsRequestT = Model::ListTargetAccountConfigurationsRequest>
        Model::ListTargetAccountConfigurationsOutcomeCallable ListTargetAccountConfigurationsCallable(const ListTargetAccountConfigurationsRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListTargetAccountConfigurations, request);
        }

        /**
         * An Async wrapper for ListTargetAccountConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetAccountConfigurationsRequestT = Model::ListTargetAccountConfigurationsRequest>
        void ListTargetAccountConfigurationsAsync(const ListTargetAccountConfigurationsRequestT& request, const ListTargetAccountConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListTargetAccountConfigurations, request, handler, context);
        }

        /**
         * <p>Lists the target resource types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTargetResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetResourceTypesOutcome ListTargetResourceTypes(const Model::ListTargetResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTargetResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetResourceTypesRequestT = Model::ListTargetResourceTypesRequest>
        Model::ListTargetResourceTypesOutcomeCallable ListTargetResourceTypesCallable(const ListTargetResourceTypesRequestT& request) const
        {
            return SubmitCallable(&FISClient::ListTargetResourceTypes, request);
        }

        /**
         * An Async wrapper for ListTargetResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetResourceTypesRequestT = Model::ListTargetResourceTypesRequest>
        void ListTargetResourceTypesAsync(const ListTargetResourceTypesRequestT& request, const ListTargetResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::ListTargetResourceTypes, request, handler, context);
        }

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
        template<typename StartExperimentRequestT = Model::StartExperimentRequest>
        Model::StartExperimentOutcomeCallable StartExperimentCallable(const StartExperimentRequestT& request) const
        {
            return SubmitCallable(&FISClient::StartExperiment, request);
        }

        /**
         * An Async wrapper for StartExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExperimentRequestT = Model::StartExperimentRequest>
        void StartExperimentAsync(const StartExperimentRequestT& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::StartExperiment, request, handler, context);
        }

        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;

        /**
         * A Callable wrapper for StopExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopExperimentRequestT = Model::StopExperimentRequest>
        Model::StopExperimentOutcomeCallable StopExperimentCallable(const StopExperimentRequestT& request) const
        {
            return SubmitCallable(&FISClient::StopExperiment, request);
        }

        /**
         * An Async wrapper for StopExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopExperimentRequestT = Model::StopExperimentRequest>
        void StopExperimentAsync(const StopExperimentRequestT& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::StopExperiment, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&FISClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&FISClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentTemplateOutcome UpdateExperimentTemplate(const Model::UpdateExperimentTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateExperimentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExperimentTemplateRequestT = Model::UpdateExperimentTemplateRequest>
        Model::UpdateExperimentTemplateOutcomeCallable UpdateExperimentTemplateCallable(const UpdateExperimentTemplateRequestT& request) const
        {
            return SubmitCallable(&FISClient::UpdateExperimentTemplate, request);
        }

        /**
         * An Async wrapper for UpdateExperimentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExperimentTemplateRequestT = Model::UpdateExperimentTemplateRequest>
        void UpdateExperimentTemplateAsync(const UpdateExperimentTemplateRequestT& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::UpdateExperimentTemplate, request, handler, context);
        }

        /**
         * <p>Updates the target account configuration for the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateTargetAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTargetAccountConfigurationOutcome UpdateTargetAccountConfiguration(const Model::UpdateTargetAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTargetAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTargetAccountConfigurationRequestT = Model::UpdateTargetAccountConfigurationRequest>
        Model::UpdateTargetAccountConfigurationOutcomeCallable UpdateTargetAccountConfigurationCallable(const UpdateTargetAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&FISClient::UpdateTargetAccountConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateTargetAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTargetAccountConfigurationRequestT = Model::UpdateTargetAccountConfigurationRequest>
        void UpdateTargetAccountConfigurationAsync(const UpdateTargetAccountConfigurationRequestT& request, const UpdateTargetAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FISClient::UpdateTargetAccountConfiguration, request, handler, context);
        }


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
