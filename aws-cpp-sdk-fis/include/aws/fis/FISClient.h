/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fis/model/CreateExperimentTemplateResult.h>
#include <aws/fis/model/DeleteExperimentTemplateResult.h>
#include <aws/fis/model/GetActionResult.h>
#include <aws/fis/model/GetExperimentResult.h>
#include <aws/fis/model/GetExperimentTemplateResult.h>
#include <aws/fis/model/ListActionsResult.h>
#include <aws/fis/model/ListExperimentTemplatesResult.h>
#include <aws/fis/model/ListExperimentsResult.h>
#include <aws/fis/model/ListTagsForResourceResult.h>
#include <aws/fis/model/StartExperimentResult.h>
#include <aws/fis/model/StopExperimentResult.h>
#include <aws/fis/model/TagResourceResult.h>
#include <aws/fis/model/UntagResourceResult.h>
#include <aws/fis/model/UpdateExperimentTemplateResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace FIS
{

namespace Model
{
        class CreateExperimentTemplateRequest;
        class DeleteExperimentTemplateRequest;
        class GetActionRequest;
        class GetExperimentRequest;
        class GetExperimentTemplateRequest;
        class ListActionsRequest;
        class ListExperimentTemplatesRequest;
        class ListExperimentsRequest;
        class ListTagsForResourceRequest;
        class StartExperimentRequest;
        class StopExperimentRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateExperimentTemplateRequest;

        typedef Aws::Utils::Outcome<CreateExperimentTemplateResult, FISError> CreateExperimentTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteExperimentTemplateResult, FISError> DeleteExperimentTemplateOutcome;
        typedef Aws::Utils::Outcome<GetActionResult, FISError> GetActionOutcome;
        typedef Aws::Utils::Outcome<GetExperimentResult, FISError> GetExperimentOutcome;
        typedef Aws::Utils::Outcome<GetExperimentTemplateResult, FISError> GetExperimentTemplateOutcome;
        typedef Aws::Utils::Outcome<ListActionsResult, FISError> ListActionsOutcome;
        typedef Aws::Utils::Outcome<ListExperimentTemplatesResult, FISError> ListExperimentTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListExperimentsResult, FISError> ListExperimentsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, FISError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartExperimentResult, FISError> StartExperimentOutcome;
        typedef Aws::Utils::Outcome<StopExperimentResult, FISError> StopExperimentOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, FISError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, FISError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateExperimentTemplateResult, FISError> UpdateExperimentTemplateOutcome;

        typedef std::future<CreateExperimentTemplateOutcome> CreateExperimentTemplateOutcomeCallable;
        typedef std::future<DeleteExperimentTemplateOutcome> DeleteExperimentTemplateOutcomeCallable;
        typedef std::future<GetActionOutcome> GetActionOutcomeCallable;
        typedef std::future<GetExperimentOutcome> GetExperimentOutcomeCallable;
        typedef std::future<GetExperimentTemplateOutcome> GetExperimentTemplateOutcomeCallable;
        typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
        typedef std::future<ListExperimentTemplatesOutcome> ListExperimentTemplatesOutcomeCallable;
        typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartExperimentOutcome> StartExperimentOutcomeCallable;
        typedef std::future<StopExperimentOutcome> StopExperimentOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateExperimentTemplateOutcome> UpdateExperimentTemplateOutcomeCallable;
} // namespace Model

  class FISClient;

    typedef std::function<void(const FISClient*, const Model::CreateExperimentTemplateRequest&, const Model::CreateExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::DeleteExperimentTemplateRequest&, const Model::DeleteExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetActionRequest&, const Model::GetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActionResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetExperimentRequest&, const Model::GetExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::GetExperimentTemplateRequest&, const Model::GetExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentTemplateResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListActionsRequest&, const Model::ListActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionsResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListExperimentTemplatesRequest&, const Model::ListExperimentTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentTemplatesResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::StartExperimentRequest&, const Model::StartExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::StopExperimentRequest&, const Model::StopExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExperimentResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FISClient*, const Model::UpdateExperimentTemplateRequest&, const Model::UpdateExperimentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentTemplateResponseReceivedHandler;

  /**
   * <p>AWS Fault Injection Simulator is a managed service that enables you to
   * perform fault injection experiments on your AWS workloads. For more information,
   * see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault
   * Injection Simulator User Guide</a>.</p>
   */
  class AWS_FIS_API FISClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FISClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FISClient();


        /**
         * <p>Creates an experiment template. </p> <p>To create a template, specify the
         * following information: </p> <ul> <li> <p> <b>Targets</b>: A target can be a
         * specific resource in your AWS environment, or one or more resources that match
         * criteria that you specify, for example, resources that have specific tags.</p>
         * </li> <li> <p> <b>Actions</b>: The actions to carry out on the target. You can
         * specify multiple actions, the duration of each action, and when to start each
         * action during an experiment.</p> </li> <li> <p> <b>Stop conditions</b>: If a
         * stop condition is triggered while an experiment is running, the experiment is
         * automatically stopped. You can define a stop condition as a CloudWatch
         * alarm.</p> </li> </ul> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
         * Simulator User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentTemplateOutcome CreateExperimentTemplate(const Model::CreateExperimentTemplateRequest& request) const;

        /**
         * <p>Creates an experiment template. </p> <p>To create a template, specify the
         * following information: </p> <ul> <li> <p> <b>Targets</b>: A target can be a
         * specific resource in your AWS environment, or one or more resources that match
         * criteria that you specify, for example, resources that have specific tags.</p>
         * </li> <li> <p> <b>Actions</b>: The actions to carry out on the target. You can
         * specify multiple actions, the duration of each action, and when to start each
         * action during an experiment.</p> </li> <li> <p> <b>Stop conditions</b>: If a
         * stop condition is triggered while an experiment is running, the experiment is
         * automatically stopped. You can define a stop condition as a CloudWatch
         * alarm.</p> </li> </ul> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
         * Simulator User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperimentTemplateOutcomeCallable CreateExperimentTemplateCallable(const Model::CreateExperimentTemplateRequest& request) const;

        /**
         * <p>Creates an experiment template. </p> <p>To create a template, specify the
         * following information: </p> <ul> <li> <p> <b>Targets</b>: A target can be a
         * specific resource in your AWS environment, or one or more resources that match
         * criteria that you specify, for example, resources that have specific tags.</p>
         * </li> <li> <p> <b>Actions</b>: The actions to carry out on the target. You can
         * specify multiple actions, the duration of each action, and when to start each
         * action during an experiment.</p> </li> <li> <p> <b>Stop conditions</b>: If a
         * stop condition is triggered while an experiment is running, the experiment is
         * automatically stopped. You can define a stop condition as a CloudWatch
         * alarm.</p> </li> </ul> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
         * Simulator User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperimentTemplateAsync(const Model::CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentTemplateOutcome DeleteExperimentTemplate(const Model::DeleteExperimentTemplateRequest& request) const;

        /**
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperimentTemplateOutcomeCallable DeleteExperimentTemplateCallable(const Model::DeleteExperimentTemplateRequest& request) const;

        /**
         * <p>Deletes the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/DeleteExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperimentTemplateAsync(const Model::DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified AWS FIS action.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActionOutcome GetAction(const Model::GetActionRequest& request) const;

        /**
         * <p>Gets information about the specified AWS FIS action.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActionOutcomeCallable GetActionCallable(const Model::GetActionRequest& request) const;

        /**
         * <p>Gets information about the specified AWS FIS action.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about the specified experiment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentOutcomeCallable GetExperimentCallable(const Model::GetExperimentRequest& request) const;

        /**
         * <p>Gets information about the specified experiment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about the specified experiment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExperimentTemplateOutcomeCallable GetExperimentTemplateCallable(const Model::GetExperimentTemplateRequest& request) const;

        /**
         * <p>Gets information about the specified experiment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/GetExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExperimentTemplateAsync(const Model::GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the available AWS FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

        /**
         * <p>Lists the available AWS FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionsOutcomeCallable ListActionsCallable(const Model::ListActionsRequest& request) const;

        /**
         * <p>Lists the available AWS FIS actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListActions">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionsAsync(const Model::ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentTemplatesOutcome ListExperimentTemplates(const Model::ListExperimentTemplatesRequest& request) const;

        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentTemplatesOutcomeCallable ListExperimentTemplatesCallable(const Model::ListExperimentTemplatesRequest& request) const;

        /**
         * <p>Lists your experiment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperimentTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentTemplatesAsync(const Model::ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Lists your experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListExperiments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts running an experiment from the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExperimentOutcome StartExperiment(const Model::StartExperimentRequest& request) const;

        /**
         * <p>Starts running an experiment from the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExperimentOutcomeCallable StartExperimentCallable(const Model::StartExperimentRequest& request) const;

        /**
         * <p>Starts running an experiment from the specified experiment
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StartExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExperimentAsync(const Model::StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExperimentOutcome StopExperiment(const Model::StopExperimentRequest& request) const;

        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopExperimentOutcomeCallable StopExperimentCallable(const Model::StopExperimentRequest& request) const;

        /**
         * <p>Stops the specified experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/StopExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Applies the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentTemplateOutcome UpdateExperimentTemplate(const Model::UpdateExperimentTemplateRequest& request) const;

        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperimentTemplateOutcomeCallable UpdateExperimentTemplateCallable(const Model::UpdateExperimentTemplateRequest& request) const;

        /**
         * <p>Updates the specified experiment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperimentTemplateAsync(const Model::UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateExperimentTemplateAsyncHelper(const Model::CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteExperimentTemplateAsyncHelper(const Model::DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetActionAsyncHelper(const Model::GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExperimentAsyncHelper(const Model::GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExperimentTemplateAsyncHelper(const Model::GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListActionsAsyncHelper(const Model::ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExperimentTemplatesAsyncHelper(const Model::ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExperimentsAsyncHelper(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExperimentAsyncHelper(const Model::StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopExperimentAsyncHelper(const Model::StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateExperimentTemplateAsyncHelper(const Model::UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FIS
} // namespace Aws
