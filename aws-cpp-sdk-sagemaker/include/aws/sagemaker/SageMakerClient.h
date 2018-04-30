/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AddTagsResult.h>
#include <aws/sagemaker/model/CreateEndpointResult.h>
#include <aws/sagemaker/model/CreateEndpointConfigResult.h>
#include <aws/sagemaker/model/CreateModelResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlResult.h>
#include <aws/sagemaker/model/CreateTrainingJobResult.h>
#include <aws/sagemaker/model/DeleteTagsResult.h>
#include <aws/sagemaker/model/DescribeEndpointResult.h>
#include <aws/sagemaker/model/DescribeEndpointConfigResult.h>
#include <aws/sagemaker/model/DescribeModelResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/sagemaker/model/ListEndpointConfigsResult.h>
#include <aws/sagemaker/model/ListEndpointsResult.h>
#include <aws/sagemaker/model/ListModelsResult.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsResult.h>
#include <aws/sagemaker/model/ListNotebookInstancesResult.h>
#include <aws/sagemaker/model/ListTagsResult.h>
#include <aws/sagemaker/model/ListTrainingJobsResult.h>
#include <aws/sagemaker/model/UpdateEndpointResult.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigResult.h>
#include <aws/core/NoResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace SageMaker
{

namespace Model
{
        class AddTagsRequest;
        class CreateEndpointRequest;
        class CreateEndpointConfigRequest;
        class CreateModelRequest;
        class CreateNotebookInstanceRequest;
        class CreateNotebookInstanceLifecycleConfigRequest;
        class CreatePresignedNotebookInstanceUrlRequest;
        class CreateTrainingJobRequest;
        class DeleteEndpointRequest;
        class DeleteEndpointConfigRequest;
        class DeleteModelRequest;
        class DeleteNotebookInstanceRequest;
        class DeleteNotebookInstanceLifecycleConfigRequest;
        class DeleteTagsRequest;
        class DescribeEndpointRequest;
        class DescribeEndpointConfigRequest;
        class DescribeModelRequest;
        class DescribeNotebookInstanceRequest;
        class DescribeNotebookInstanceLifecycleConfigRequest;
        class DescribeTrainingJobRequest;
        class ListEndpointConfigsRequest;
        class ListEndpointsRequest;
        class ListModelsRequest;
        class ListNotebookInstanceLifecycleConfigsRequest;
        class ListNotebookInstancesRequest;
        class ListTagsRequest;
        class ListTrainingJobsRequest;
        class StartNotebookInstanceRequest;
        class StopNotebookInstanceRequest;
        class StopTrainingJobRequest;
        class UpdateEndpointRequest;
        class UpdateEndpointWeightsAndCapacitiesRequest;
        class UpdateNotebookInstanceRequest;
        class UpdateNotebookInstanceLifecycleConfigRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<SageMakerErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointResult, Aws::Client::AWSError<SageMakerErrors>> CreateEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointConfigResult, Aws::Client::AWSError<SageMakerErrors>> CreateEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, Aws::Client::AWSError<SageMakerErrors>> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> CreateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> CreateNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<CreatePresignedNotebookInstanceUrlResult, Aws::Client::AWSError<SageMakerErrors>> CreatePresignedNotebookInstanceUrlOutcome;
        typedef Aws::Utils::Outcome<CreateTrainingJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateTrainingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, Aws::Client::AWSError<SageMakerErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, Aws::Client::AWSError<SageMakerErrors>> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointConfigResult, Aws::Client::AWSError<SageMakerErrors>> DescribeEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeModelResult, Aws::Client::AWSError<SageMakerErrors>> DescribeModelOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> DescribeNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> DescribeNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeTrainingJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeTrainingJobOutcome;
        typedef Aws::Utils::Outcome<ListEndpointConfigsResult, Aws::Client::AWSError<SageMakerErrors>> ListEndpointConfigsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsResult, Aws::Client::AWSError<SageMakerErrors>> ListEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListModelsResult, Aws::Client::AWSError<SageMakerErrors>> ListModelsOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstanceLifecycleConfigsResult, Aws::Client::AWSError<SageMakerErrors>> ListNotebookInstanceLifecycleConfigsOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstancesResult, Aws::Client::AWSError<SageMakerErrors>> ListNotebookInstancesOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<SageMakerErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListTrainingJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListTrainingJobsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StartNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopTrainingJobOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, Aws::Client::AWSError<SageMakerErrors>> UpdateEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointWeightsAndCapacitiesResult, Aws::Client::AWSError<SageMakerErrors>> UpdateEndpointWeightsAndCapacitiesOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> UpdateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> UpdateNotebookInstanceLifecycleConfigOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
        typedef std::future<CreateEndpointConfigOutcome> CreateEndpointConfigOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateNotebookInstanceOutcome> CreateNotebookInstanceOutcomeCallable;
        typedef std::future<CreateNotebookInstanceLifecycleConfigOutcome> CreateNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<CreatePresignedNotebookInstanceUrlOutcome> CreatePresignedNotebookInstanceUrlOutcomeCallable;
        typedef std::future<CreateTrainingJobOutcome> CreateTrainingJobOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEndpointConfigOutcome> DeleteEndpointConfigOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceOutcome> DeleteNotebookInstanceOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceLifecycleConfigOutcome> DeleteNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeEndpointConfigOutcome> DescribeEndpointConfigOutcomeCallable;
        typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceOutcome> DescribeNotebookInstanceOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceLifecycleConfigOutcome> DescribeNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DescribeTrainingJobOutcome> DescribeTrainingJobOutcomeCallable;
        typedef std::future<ListEndpointConfigsOutcome> ListEndpointConfigsOutcomeCallable;
        typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
        typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
        typedef std::future<ListNotebookInstanceLifecycleConfigsOutcome> ListNotebookInstanceLifecycleConfigsOutcomeCallable;
        typedef std::future<ListNotebookInstancesOutcome> ListNotebookInstancesOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListTrainingJobsOutcome> ListTrainingJobsOutcomeCallable;
        typedef std::future<StartNotebookInstanceOutcome> StartNotebookInstanceOutcomeCallable;
        typedef std::future<StopNotebookInstanceOutcome> StopNotebookInstanceOutcomeCallable;
        typedef std::future<StopTrainingJobOutcome> StopTrainingJobOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
        typedef std::future<UpdateEndpointWeightsAndCapacitiesOutcome> UpdateEndpointWeightsAndCapacitiesOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceOutcome> UpdateNotebookInstanceOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceLifecycleConfigOutcome> UpdateNotebookInstanceLifecycleConfigOutcomeCallable;
} // namespace Model

  class SageMakerClient;

    typedef std::function<void(const SageMakerClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointConfigRequest&, const Model::CreateEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceRequest&, const Model::CreateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceLifecycleConfigRequest&, const Model::CreateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedNotebookInstanceUrlRequest&, const Model::CreatePresignedNotebookInstanceUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedNotebookInstanceUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrainingJobRequest&, const Model::CreateTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointConfigRequest&, const Model::DeleteEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceRequest&, const Model::DeleteNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceLifecycleConfigRequest&, const Model::DeleteNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointConfigRequest&, const Model::DescribeEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceRequest&, const Model::DescribeNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceLifecycleConfigRequest&, const Model::DescribeNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrainingJobRequest&, const Model::DescribeTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointConfigsRequest&, const Model::ListEndpointConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstanceLifecycleConfigsRequest&, const Model::ListNotebookInstanceLifecycleConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstanceLifecycleConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstancesRequest&, const Model::ListNotebookInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstancesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrainingJobsRequest&, const Model::ListTrainingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartNotebookInstanceRequest&, const Model::StartNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopNotebookInstanceRequest&, const Model::StopNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTrainingJobRequest&, const Model::StopTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointWeightsAndCapacitiesRequest&, const Model::UpdateEndpointWeightsAndCapacitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceRequest&, const Model::UpdateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceLifecycleConfigRequest&, const Model::UpdateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler;

  /**
   * Definition of the public APIs exposed by SageMaker
   */
  class AWS_SAGEMAKER_API SageMakerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SageMakerClient();

        inline virtual const char* GetServiceClientName() const override { return "sagemaker"; }


        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, models,
         * endpoint configurations, and endpoints. </p> <p>Each tag consists of a key and
         * an optional value. Tag keys must be unique per resource. For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, models,
         * endpoint configurations, and endpoints. </p> <p>Each tag consists of a key and
         * an optional value. Tag keys must be unique per resource. For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, models,
         * endpoint configurations, and endpoints. </p> <p>Each tag consists of a key and
         * an optional value. Tag keys must be unique per resource. For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
         * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> </note> <p>The endpoint name must be unique within an AWS
         * Region in your AWS account. </p> <p>When it receives the request, Amazon
         * SageMaker creates the endpoint, launches the resources (ML compute instances),
         * and deploys the model(s) on them. </p> <p>When Amazon SageMaker receives the
         * request, it sets the endpoint status to <code>Creating</code>. After it creates
         * the endpoint, it sets the status to <code>InService</code>. Amazon SageMaker can
         * then process incoming requests for inferences. To check the status of an
         * endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1: Using
         * the K-Means Algorithm Provided by Amazon SageMaker</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> </note> <p>The endpoint name must be unique within an AWS
         * Region in your AWS account. </p> <p>When it receives the request, Amazon
         * SageMaker creates the endpoint, launches the resources (ML compute instances),
         * and deploys the model(s) on them. </p> <p>When Amazon SageMaker receives the
         * request, it sets the endpoint status to <code>Creating</code>. After it creates
         * the endpoint, it sets the status to <code>InService</code>. Amazon SageMaker can
         * then process incoming requests for inferences. To check the status of an
         * endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1: Using
         * the K-Means Algorithm Provided by Amazon SageMaker</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> </note> <p>The endpoint name must be unique within an AWS
         * Region in your AWS account. </p> <p>When it receives the request, Amazon
         * SageMaker creates the endpoint, launches the resources (ML compute instances),
         * and deploys the model(s) on them. </p> <p>When Amazon SageMaker receives the
         * request, it sets the endpoint status to <code>Creating</code>. After it creates
         * the endpoint, it sets the status to <code>InService</code>. Amazon SageMaker can
         * then process incoming requests for inferences. To check the status of an
         * endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1: Using
         * the K-Means Algorithm Provided by Amazon SageMaker</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointConfigOutcome CreateEndpointConfig(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointConfigOutcomeCallable CreateEndpointConfigCallable(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointConfigAsync(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe one or more containers. For each container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model into
         * production. </p> <p>Use this API to create a model only if you want to use
         * Amazon SageMaker hosting services. To host your model, you create an endpoint
         * configuration with the <code>CreateEndpointConfig</code> API, and then create an
         * endpoint with the <code>CreateEndpoint</code> API. </p> <p>Amazon SageMaker then
         * deploys all of the containers that you defined for the model in the hosting
         * environment. </p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter. </p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances.
         * In addition, you also use the IAM role to manage permissions the inference code
         * needs. For example, if the inference code access any other AWS resources, you
         * grant necessary permissions via this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe one or more containers. For each container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model into
         * production. </p> <p>Use this API to create a model only if you want to use
         * Amazon SageMaker hosting services. To host your model, you create an endpoint
         * configuration with the <code>CreateEndpointConfig</code> API, and then create an
         * endpoint with the <code>CreateEndpoint</code> API. </p> <p>Amazon SageMaker then
         * deploys all of the containers that you defined for the model in the hosting
         * environment. </p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter. </p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances.
         * In addition, you also use the IAM role to manage permissions the inference code
         * needs. For example, if the inference code access any other AWS resources, you
         * grant necessary permissions via this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe one or more containers. For each container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model into
         * production. </p> <p>Use this API to create a model only if you want to use
         * Amazon SageMaker hosting services. To host your model, you create an endpoint
         * configuration with the <code>CreateEndpointConfig</code> API, and then create an
         * endpoint with the <code>CreateEndpoint</code> API. </p> <p>Amazon SageMaker then
         * deploys all of the containers that you defined for the model in the hosting
         * environment. </p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter. </p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances.
         * In addition, you also use the IAM role to manage permissions the inference code
         * needs. For example, if the inference code access any other AWS resources, you
         * grant necessary permissions via this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceOutcome CreateNotebookInstance(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceOutcomeCallable CreateNotebookInstanceCallable(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceAsync(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcome CreateNotebookInstanceLifecycleConfig(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcomeCallable CreateNotebookInstanceLifecycleConfigCallable(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceLifecycleConfigAsync(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a URL that you can use to connect to the Juypter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * <p>Returns a URL that you can use to connect to the Juypter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcomeCallable CreatePresignedNotebookInstanceUrlCallable(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * <p>Returns a URL that you can use to connect to the Juypter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedNotebookInstanceUrlAsync(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a model training job. After training completes, Amazon SageMaker
         * saves the resulting model artifacts to an Amazon S3 location that you specify.
         * </p> <p>If you choose to host your model using Amazon SageMaker hosting
         * services, you can use the resulting model artifacts as part of the model. You
         * can also use the artifacts in a deep learning service other than Amazon
         * SageMaker, provided that you know how to use them for inferences. </p> <p>In the
         * request body, you provide the following: </p> <ul> <li> <p>
         * <code>AlgorithmSpecification</code> - Identifies the training algorithm to use.
         * </p> </li> <li> <p> <code>HyperParameters</code> - Specify these
         * algorithm-specific parameters to influence the quality of the final model. For a
         * list of hyperparameters for each training algorithm provided by Amazon
         * SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a duration for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainingJobOutcome CreateTrainingJob(const Model::CreateTrainingJobRequest& request) const;

        /**
         * <p> Starts a model training job. After training completes, Amazon SageMaker
         * saves the resulting model artifacts to an Amazon S3 location that you specify.
         * </p> <p>If you choose to host your model using Amazon SageMaker hosting
         * services, you can use the resulting model artifacts as part of the model. You
         * can also use the artifacts in a deep learning service other than Amazon
         * SageMaker, provided that you know how to use them for inferences. </p> <p>In the
         * request body, you provide the following: </p> <ul> <li> <p>
         * <code>AlgorithmSpecification</code> - Identifies the training algorithm to use.
         * </p> </li> <li> <p> <code>HyperParameters</code> - Specify these
         * algorithm-specific parameters to influence the quality of the final model. For a
         * list of hyperparameters for each training algorithm provided by Amazon
         * SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a duration for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrainingJobOutcomeCallable CreateTrainingJobCallable(const Model::CreateTrainingJobRequest& request) const;

        /**
         * <p> Starts a model training job. After training completes, Amazon SageMaker
         * saves the resulting model artifacts to an Amazon S3 location that you specify.
         * </p> <p>If you choose to host your model using Amazon SageMaker hosting
         * services, you can use the resulting model artifacts as part of the model. You
         * can also use the artifacts in a deep learning service other than Amazon
         * SageMaker, provided that you know how to use them for inferences. </p> <p>In the
         * request body, you provide the following: </p> <ul> <li> <p>
         * <code>AlgorithmSpecification</code> - Identifies the training algorithm to use.
         * </p> </li> <li> <p> <code>HyperParameters</code> - Specify these
         * algorithm-specific parameters to influence the quality of the final model. For a
         * list of hyperparameters for each training algorithm provided by Amazon
         * SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a duration for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrainingJobAsync(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpoingConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointConfigOutcome DeleteEndpointConfig(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpoingConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointConfigOutcomeCallable DeleteEndpointConfigCallable(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpoingConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointConfigAsync(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceAsync(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcome DeleteNotebookInstanceLifecycleConfig(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcomeCallable DeleteNotebookInstanceLifecycleConfigCallable(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceLifecycleConfigAsync(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointConfigOutcome DescribeEndpointConfig(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointConfigOutcomeCallable DescribeEndpointConfigCallable(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointConfigAsync(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceOutcome DescribeNotebookInstance(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceOutcomeCallable DescribeNotebookInstanceCallable(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceAsync(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see
         * <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcome DescribeNotebookInstanceLifecycleConfig(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see
         * <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcomeCallable DescribeNotebookInstanceLifecycleConfigCallable(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see
         * <a>notebook-lifecycle-config</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceLifecycleConfigAsync(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrainingJobOutcome DescribeTrainingJob(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrainingJobOutcomeCallable DescribeTrainingJobCallable(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrainingJobAsync(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointConfigsOutcome ListEndpointConfigs(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointConfigsOutcomeCallable ListEndpointConfigsCallable(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointConfigsAsync(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsAsync(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists models created with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcome ListNotebookInstanceLifecycleConfigs(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcomeCallable ListNotebookInstanceLifecycleConfigsCallable(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstanceLifecycleConfigsAsync(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstancesOutcome ListNotebookInstances(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstancesOutcomeCallable ListNotebookInstancesCallable(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstancesAsync(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsOutcome ListTrainingJobs(const Model::ListTrainingJobsRequest& request) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrainingJobsOutcomeCallable ListTrainingJobsCallable(const Model::ListTrainingJobsRequest& request) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrainingJobsAsync(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookInstanceOutcome StartNotebookInstance(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNotebookInstanceOutcomeCallable StartNotebookInstanceCallable(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNotebookInstanceAsync(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. </p> <p>To access data on the ML storage volume for a
         * notebook instance that has been terminated, call the
         * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookInstanceOutcome StopNotebookInstance(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. </p> <p>To access data on the ML storage volume for a
         * notebook instance that has been terminated, call the
         * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopNotebookInstanceOutcomeCallable StopNotebookInstanceCallable(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. </p> <p>To access data on the ML storage volume for a
         * notebook instance that has been terminated, call the
         * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopNotebookInstanceAsync(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>Training algorithms provided by
         * Amazon SageMaker save the intermediate results of a model training job. This
         * intermediate data is a valid model artifact. You can use the model artifacts
         * that are saved when Amazon SageMaker stops a training job to create a model.
         * </p> <p>When it receives a <code>StopTrainingJob</code> request, Amazon
         * SageMaker changes the status of the job to <code>Stopping</code>. After Amazon
         * SageMaker stops the job, it sets the status to
         * <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingJobOutcome StopTrainingJob(const Model::StopTrainingJobRequest& request) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>Training algorithms provided by
         * Amazon SageMaker save the intermediate results of a model training job. This
         * intermediate data is a valid model artifact. You can use the model artifacts
         * that are saved when Amazon SageMaker stops a training job to create a model.
         * </p> <p>When it receives a <code>StopTrainingJob</code> request, Amazon
         * SageMaker changes the status of the job to <code>Stopping</code>. After Amazon
         * SageMaker stops the job, it sets the status to
         * <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingJobOutcomeCallable StopTrainingJobCallable(const Model::StopTrainingJobRequest& request) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>Training algorithms provided by
         * Amazon SageMaker save the intermediate results of a model training job. This
         * intermediate data is a valid model artifact. You can use the model artifacts
         * that are saved when Amazon SageMaker stops a training job to create a model.
         * </p> <p>When it receives a <code>StopTrainingJob</code> request, Amazon
         * SageMaker changes the status of the job to <code>Stopping</code>. After Amazon
         * SageMaker stops the job, it sets the status to
         * <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTrainingJobAsync(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p> Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p> Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcome UpdateEndpointWeightsAndCapacities(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcomeCallable UpdateEndpointWeightsAndCapacitiesCallable(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointWeightsAndCapacitiesAsync(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements. You can also update the VPC
         * security groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceOutcome UpdateNotebookInstance(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements. You can also update the VPC
         * security groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceOutcomeCallable UpdateNotebookInstanceCallable(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements. You can also update the VPC
         * security groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceAsync(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcome UpdateNotebookInstanceLifecycleConfig(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcomeCallable UpdateNotebookInstanceLifecycleConfigCallable(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceLifecycleConfigAsync(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAsyncHelper(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointConfigAsyncHelper(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceAsyncHelper(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceLifecycleConfigAsyncHelper(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresignedNotebookInstanceUrlAsyncHelper(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrainingJobAsyncHelper(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointConfigAsyncHelper(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceAsyncHelper(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceLifecycleConfigAsyncHelper(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointConfigAsyncHelper(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelAsyncHelper(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceAsyncHelper(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceLifecycleConfigAsyncHelper(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrainingJobAsyncHelper(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointConfigsAsyncHelper(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsAsyncHelper(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelsAsyncHelper(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstanceLifecycleConfigsAsyncHelper(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstancesAsyncHelper(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrainingJobsAsyncHelper(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartNotebookInstanceAsyncHelper(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopNotebookInstanceAsyncHelper(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingJobAsyncHelper(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAsyncHelper(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointWeightsAndCapacitiesAsyncHelper(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceAsyncHelper(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceLifecycleConfigAsyncHelper(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SageMaker
} // namespace Aws
