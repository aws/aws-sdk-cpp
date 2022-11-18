/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fis/FISServiceClientModel.h>
#include <aws/fis/FISLegacyAsyncMacros.h>

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
  class AWS_FIS_API FISClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentTemplateOutcome DeleteExperimentTemplate(const Model::DeleteExperimentTemplateRequest& request) const;


        /**
         * <p>Gets information about the specified FIS action.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActionOutcome GetAction(const Model::GetActionRequest& request) const;


        /**
         * <p>Gets information about the specified experiment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentOutcome GetExperiment(const Model::GetExperimentRequest& request) const;


        /**
         * <p>Gets information about the specified experiment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExperimentTemplateOutcome GetExperimentTemplate(const Model::GetExperimentTemplateRequest& request) const;


        /**
         * <p>Gets information about the specified resource type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetTargetResourceType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTargetResourceTypeOutcome GetTargetResourceType(const Model::GetTargetResourceTypeRequest& request) const;


        /**
         * <p>Lists the available FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;


        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentTemplatesOutcome ListExperimentTemplates(const Model::ListExperimentTemplatesRequest& request) const;


        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the target resource types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTargetResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetResourceTypesOutcome ListTargetResourceTypes(const Model::ListTargetResourceTypesRequest& request) const;


        /**
         * <p>Starts running an experiment from the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExperimentOutcome StartExperiment(const Model::StartExperimentRequest& request) const;


        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;


        /**
         * <p>Applies the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentTemplateOutcome UpdateExperimentTemplate(const Model::UpdateExperimentTemplateRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FISEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const FISClientConfiguration& clientConfiguration);

      FISClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FISEndpointProviderBase> m_endpointProvider;
  };

} // namespace FIS
} // namespace Aws
