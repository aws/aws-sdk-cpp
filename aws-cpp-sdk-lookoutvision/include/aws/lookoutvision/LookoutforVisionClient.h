/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutvision/model/CreateDatasetResult.h>
#include <aws/lookoutvision/model/CreateModelResult.h>
#include <aws/lookoutvision/model/CreateProjectResult.h>
#include <aws/lookoutvision/model/DeleteDatasetResult.h>
#include <aws/lookoutvision/model/DeleteModelResult.h>
#include <aws/lookoutvision/model/DeleteProjectResult.h>
#include <aws/lookoutvision/model/DescribeDatasetResult.h>
#include <aws/lookoutvision/model/DescribeModelResult.h>
#include <aws/lookoutvision/model/DescribeProjectResult.h>
#include <aws/lookoutvision/model/DetectAnomaliesResult.h>
#include <aws/lookoutvision/model/ListDatasetEntriesResult.h>
#include <aws/lookoutvision/model/ListModelsResult.h>
#include <aws/lookoutvision/model/ListProjectsResult.h>
#include <aws/lookoutvision/model/ListTagsForResourceResult.h>
#include <aws/lookoutvision/model/StartModelResult.h>
#include <aws/lookoutvision/model/StopModelResult.h>
#include <aws/lookoutvision/model/TagResourceResult.h>
#include <aws/lookoutvision/model/UntagResourceResult.h>
#include <aws/lookoutvision/model/UpdateDatasetEntriesResult.h>
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

namespace LookoutforVision
{

namespace Model
{
        class CreateDatasetRequest;
        class CreateModelRequest;
        class CreateProjectRequest;
        class DeleteDatasetRequest;
        class DeleteModelRequest;
        class DeleteProjectRequest;
        class DescribeDatasetRequest;
        class DescribeModelRequest;
        class DescribeProjectRequest;
        class DetectAnomaliesRequest;
        class ListDatasetEntriesRequest;
        class ListModelsRequest;
        class ListProjectsRequest;
        class ListTagsForResourceRequest;
        class StartModelRequest;
        class StopModelRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDatasetEntriesRequest;

        typedef Aws::Utils::Outcome<CreateDatasetResult, LookoutforVisionError> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, LookoutforVisionError> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, LookoutforVisionError> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteDatasetResult, LookoutforVisionError> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<DeleteModelResult, LookoutforVisionError> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, LookoutforVisionError> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, LookoutforVisionError> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeModelResult, LookoutforVisionError> DescribeModelOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, LookoutforVisionError> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<DetectAnomaliesResult, LookoutforVisionError> DetectAnomaliesOutcome;
        typedef Aws::Utils::Outcome<ListDatasetEntriesResult, LookoutforVisionError> ListDatasetEntriesOutcome;
        typedef Aws::Utils::Outcome<ListModelsResult, LookoutforVisionError> ListModelsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, LookoutforVisionError> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutforVisionError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartModelResult, LookoutforVisionError> StartModelOutcome;
        typedef Aws::Utils::Outcome<StopModelResult, LookoutforVisionError> StopModelOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LookoutforVisionError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LookoutforVisionError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDatasetEntriesResult, LookoutforVisionError> UpdateDatasetEntriesOutcome;

        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
        typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
        typedef std::future<DetectAnomaliesOutcome> DetectAnomaliesOutcomeCallable;
        typedef std::future<ListDatasetEntriesOutcome> ListDatasetEntriesOutcomeCallable;
        typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartModelOutcome> StartModelOutcomeCallable;
        typedef std::future<StopModelOutcome> StopModelOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDatasetEntriesOutcome> UpdateDatasetEntriesOutcomeCallable;
} // namespace Model

  class LookoutforVisionClient;

    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::DetectAnomaliesRequest&, const Model::DetectAnomaliesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectAnomaliesResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListDatasetEntriesRequest&, const Model::ListDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetEntriesResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::StartModelRequest&, const Model::StartModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::StopModelRequest&, const Model::StopModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopModelResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutforVisionClient*, const Model::UpdateDatasetEntriesRequest&, const Model::UpdateDatasetEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetEntriesResponseReceivedHandler;

  /**
   * <p>This is the Amazon Lookout for Vision API Reference. It provides descriptions
   * of actions, data types, common parameters, and common errors.</p> <p>Amazon
   * Lookout for Vision enables you to find visual defects in industrial products,
   * accurately and at scale. It uses computer vision to identify missing components
   * in an industrial product, damage to vehicles or structures, irregularities in
   * production lines, and even minuscule defects in silicon wafers — or any other
   * physical item where quality is important such as a missing capacitor on printed
   * circuit boards.</p>
   */
  class AWS_LOOKOUTFORVISION_API LookoutforVisionClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutforVisionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LookoutforVisionClient();


        /**
         * <p>Creates a new dataset in an Amazon Lookout for Vision project.
         * <code>CreateDataset</code> can create a training or a test dataset from a valid
         * dataset source (<code>DatasetSource</code>).</p> <p>If you want a single dataset
         * project, specify <code>train</code> for the value of
         * <code>DatasetType</code>.</p> <p>To have a project with separate training and
         * test datasets, call <code>CreateDataset</code> twice. On the first call, specify
         * <code>train</code> for the value of <code>DatasetType</code>. On the second
         * call, specify <code>test</code> for the value of <code>DatasetType</code>. </p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:CreateDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates a new dataset in an Amazon Lookout for Vision project.
         * <code>CreateDataset</code> can create a training or a test dataset from a valid
         * dataset source (<code>DatasetSource</code>).</p> <p>If you want a single dataset
         * project, specify <code>train</code> for the value of
         * <code>DatasetType</code>.</p> <p>To have a project with separate training and
         * test datasets, call <code>CreateDataset</code> twice. On the first call, specify
         * <code>train</code> for the value of <code>DatasetType</code>. On the second
         * call, specify <code>test</code> for the value of <code>DatasetType</code>. </p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:CreateDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates a new dataset in an Amazon Lookout for Vision project.
         * <code>CreateDataset</code> can create a training or a test dataset from a valid
         * dataset source (<code>DatasetSource</code>).</p> <p>If you want a single dataset
         * project, specify <code>train</code> for the value of
         * <code>DatasetType</code>.</p> <p>To have a project with separate training and
         * test datasets, call <code>CreateDataset</code> twice. On the first call, specify
         * <code>train</code> for the value of <code>DatasetType</code>. On the second
         * call, specify <code>test</code> for the value of <code>DatasetType</code>. </p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:CreateDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of a model within an an Amazon Lookout for Vision
         * project. <code>CreateModel</code> is an asynchronous operation in which Amazon
         * Lookout for Vision trains, tests, and evaluates a new version of a model. </p>
         * <p>To get the current status, check the <code>Status</code> field returned in
         * the response from <a>DescribeModel</a>.</p> <p>If the project has a single
         * dataset, Amazon Lookout for Vision internally splits the dataset to create a
         * training and a test dataset. If the project has a training and a test dataset,
         * Lookout for Vision uses the respective datasets to train and test the model.
         * </p> <p>After training completes, the evaluation metrics are stored at the
         * location specified in <code>OutputConfig</code>. </p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:CreateModel</code> operation. If
         * you want to tag your model, you also require permission to the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a new version of a model within an an Amazon Lookout for Vision
         * project. <code>CreateModel</code> is an asynchronous operation in which Amazon
         * Lookout for Vision trains, tests, and evaluates a new version of a model. </p>
         * <p>To get the current status, check the <code>Status</code> field returned in
         * the response from <a>DescribeModel</a>.</p> <p>If the project has a single
         * dataset, Amazon Lookout for Vision internally splits the dataset to create a
         * training and a test dataset. If the project has a training and a test dataset,
         * Lookout for Vision uses the respective datasets to train and test the model.
         * </p> <p>After training completes, the evaluation metrics are stored at the
         * location specified in <code>OutputConfig</code>. </p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:CreateModel</code> operation. If
         * you want to tag your model, you also require permission to the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a new version of a model within an an Amazon Lookout for Vision
         * project. <code>CreateModel</code> is an asynchronous operation in which Amazon
         * Lookout for Vision trains, tests, and evaluates a new version of a model. </p>
         * <p>To get the current status, check the <code>Status</code> field returned in
         * the response from <a>DescribeModel</a>.</p> <p>If the project has a single
         * dataset, Amazon Lookout for Vision internally splits the dataset to create a
         * training and a test dataset. If the project has a training and a test dataset,
         * Lookout for Vision uses the respective datasets to train and test the model.
         * </p> <p>After training completes, the evaluation metrics are stored at the
         * location specified in <code>OutputConfig</code>. </p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:CreateModel</code> operation. If
         * you want to tag your model, you also require permission to the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty Amazon Lookout for Vision project. After you create the
         * project, add a dataset by calling <a>CreateDataset</a>.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:CreateProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates an empty Amazon Lookout for Vision project. After you create the
         * project, add a dataset by calling <a>CreateDataset</a>.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:CreateProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates an empty Amazon Lookout for Vision project. After you create the
         * project, add a dataset by calling <a>CreateDataset</a>.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:CreateProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing Amazon Lookout for Vision <code>dataset</code>. </p>
         * <p>If your the project has a single dataset, you must create a new dataset
         * before you can create a model.</p> <p>If you project has a training dataset and
         * a test dataset consider the following. </p> <ul> <li> <p>If you delete the test
         * dataset, your project reverts to a single dataset project. If you then train the
         * model, Amazon Lookout for Vision internally splits the remaining dataset into a
         * training and test dataset.</p> </li> <li> <p>If you delete the training dataset,
         * you must create a training dataset before you can create a model.</p> </li>
         * </ul> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes an existing Amazon Lookout for Vision <code>dataset</code>. </p>
         * <p>If your the project has a single dataset, you must create a new dataset
         * before you can create a model.</p> <p>If you project has a training dataset and
         * a test dataset consider the following. </p> <ul> <li> <p>If you delete the test
         * dataset, your project reverts to a single dataset project. If you then train the
         * model, Amazon Lookout for Vision internally splits the remaining dataset into a
         * training and test dataset.</p> </li> <li> <p>If you delete the training dataset,
         * you must create a training dataset before you can create a model.</p> </li>
         * </ul> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes an existing Amazon Lookout for Vision <code>dataset</code>. </p>
         * <p>If your the project has a single dataset, you must create a new dataset
         * before you can create a model.</p> <p>If you project has a training dataset and
         * a test dataset consider the following. </p> <ul> <li> <p>If you delete the test
         * dataset, your project reverts to a single dataset project. If you then train the
         * model, Amazon Lookout for Vision internally splits the remaining dataset into a
         * training and test dataset.</p> </li> <li> <p>If you delete the training dataset,
         * you must create a training dataset before you can create a model.</p> </li>
         * </ul> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteDataset</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision model. You can't delete a running model.
         * To stop a running model, use the <a>StopModel</a> operation.</p> <p>It might
         * take a few seconds to delete a model. To determine if a model has been deleted,
         * call <a>ListProjects</a> and check if the version of the model
         * (<code>ModelVersion</code>) is in the <code>Models</code> array. </p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DeleteModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision model. You can't delete a running model.
         * To stop a running model, use the <a>StopModel</a> operation.</p> <p>It might
         * take a few seconds to delete a model. To determine if a model has been deleted,
         * call <a>ListProjects</a> and check if the version of the model
         * (<code>ModelVersion</code>) is in the <code>Models</code> array. </p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DeleteModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision model. You can't delete a running model.
         * To stop a running model, use the <a>StopModel</a> operation.</p> <p>It might
         * take a few seconds to delete a model. To determine if a model has been deleted,
         * call <a>ListProjects</a> and check if the version of the model
         * (<code>ModelVersion</code>) is in the <code>Models</code> array. </p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DeleteModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision project.</p> <p>To delete a project, you
         * must first delete each version of the model associated with the project. To
         * delete a model use the <a>DeleteModel</a> operation.</p> <p>You also have to
         * delete the dataset(s) associated with the model. For more information, see
         * <a>DeleteDataset</a>. The images referenced by the training and test datasets
         * aren't deleted. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteProject</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision project.</p> <p>To delete a project, you
         * must first delete each version of the model associated with the project. To
         * delete a model use the <a>DeleteModel</a> operation.</p> <p>You also have to
         * delete the dataset(s) associated with the model. For more information, see
         * <a>DeleteDataset</a>. The images referenced by the training and test datasets
         * aren't deleted. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteProject</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an Amazon Lookout for Vision project.</p> <p>To delete a project, you
         * must first delete each version of the model associated with the project. To
         * delete a model use the <a>DeleteModel</a> operation.</p> <p>You also have to
         * delete the dataset(s) associated with the model. For more information, see
         * <a>DeleteDataset</a>. The images referenced by the training and test datasets
         * aren't deleted. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteProject</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an Amazon Lookout for Vision dataset.</p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:DescribeDataset</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describe an Amazon Lookout for Vision dataset.</p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:DescribeDataset</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Describe an Amazon Lookout for Vision dataset.</p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:DescribeDataset</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a version of an Amazon Lookout for Vision model.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DescribeModel</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a version of an Amazon Lookout for Vision model.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DescribeModel</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a version of an Amazon Lookout for Vision model.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DescribeModel</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Amazon Lookout for Vision project.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:DescribeProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Describes an Amazon Lookout for Vision project.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:DescribeProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Describes an Amazon Lookout for Vision project.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:DescribeProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects anomalies in an image that you supply. </p> <p>The response from
         * <code>DetectAnomalies</code> includes a boolean prediction that the image
         * contains one or more anomalies and a confidence value for the prediction.</p>
         *  <p>Before calling <code>DetectAnomalies</code>, you must first start your
         * model with the <a>StartModel</a> operation. You are charged for the amount of
         * time, in minutes, that a model runs and for the number of anomaly detection
         * units that your model uses. If you are not using a model, use the
         * <a>StopModel</a> operation to stop your model. </p>  <p>This operation
         * requires permissions to perform the <code>lookoutvision:DetectAnomalies</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalies">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectAnomaliesOutcome DetectAnomalies(const Model::DetectAnomaliesRequest& request) const;

        /**
         * <p>Detects anomalies in an image that you supply. </p> <p>The response from
         * <code>DetectAnomalies</code> includes a boolean prediction that the image
         * contains one or more anomalies and a confidence value for the prediction.</p>
         *  <p>Before calling <code>DetectAnomalies</code>, you must first start your
         * model with the <a>StartModel</a> operation. You are charged for the amount of
         * time, in minutes, that a model runs and for the number of anomaly detection
         * units that your model uses. If you are not using a model, use the
         * <a>StopModel</a> operation to stop your model. </p>  <p>This operation
         * requires permissions to perform the <code>lookoutvision:DetectAnomalies</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectAnomaliesOutcomeCallable DetectAnomaliesCallable(const Model::DetectAnomaliesRequest& request) const;

        /**
         * <p>Detects anomalies in an image that you supply. </p> <p>The response from
         * <code>DetectAnomalies</code> includes a boolean prediction that the image
         * contains one or more anomalies and a confidence value for the prediction.</p>
         *  <p>Before calling <code>DetectAnomalies</code>, you must first start your
         * model with the <a>StartModel</a> operation. You are charged for the amount of
         * time, in minutes, that a model runs and for the number of anomaly detection
         * units that your model uses. If you are not using a model, use the
         * <a>StopModel</a> operation to stop your model. </p>  <p>This operation
         * requires permissions to perform the <code>lookoutvision:DetectAnomalies</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectAnomaliesAsync(const Model::DetectAnomaliesRequest& request, const DetectAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the JSON Lines within a dataset. An Amazon Lookout for Vision JSON Line
         * contains the anomaly information for a single image, including the image
         * location and the assigned label.</p> <p>This operation requires permissions to
         * perform the <code>lookoutvision:ListDatasetEntries</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetEntriesOutcome ListDatasetEntries(const Model::ListDatasetEntriesRequest& request) const;

        /**
         * <p>Lists the JSON Lines within a dataset. An Amazon Lookout for Vision JSON Line
         * contains the anomaly information for a single image, including the image
         * location and the assigned label.</p> <p>This operation requires permissions to
         * perform the <code>lookoutvision:ListDatasetEntries</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListDatasetEntries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetEntriesOutcomeCallable ListDatasetEntriesCallable(const Model::ListDatasetEntriesRequest& request) const;

        /**
         * <p>Lists the JSON Lines within a dataset. An Amazon Lookout for Vision JSON Line
         * contains the anomaly information for a single image, including the image
         * location and the assigned label.</p> <p>This operation requires permissions to
         * perform the <code>lookoutvision:ListDatasetEntries</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListDatasetEntries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetEntriesAsync(const Model::ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of a model in an Amazon Lookout for Vision project.</p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListModels</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists the versions of a model in an Amazon Lookout for Vision project.</p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListModels</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists the versions of a model in an Amazon Lookout for Vision project.</p>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListModels</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Lookout for Vision projects in your AWS account.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:ListProjects</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Lists the Amazon Lookout for Vision projects in your AWS account.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:ListProjects</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Lists the Amazon Lookout for Vision projects in your AWS account.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:ListProjects</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags attached to the specified Amazon Lookout for Vision
         * model.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListTagsForResource</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags attached to the specified Amazon Lookout for Vision
         * model.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListTagsForResource</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags attached to the specified Amazon Lookout for Vision
         * model.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListTagsForResource</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the running of the version of an Amazon Lookout for Vision model.
         * Starting a model takes a while to complete. To check the current state of the
         * model, use <a>DescribeModel</a>.</p> <p>A model is ready to use when its status
         * is <code>HOSTED</code>.</p> <p>Once the model is running, you can detect custom
         * labels in new images by calling <a>DetectAnomalies</a>.</p>  <p>You are
         * charged for the amount of time that the model is running. To stop a running
         * model, call <a>StopModel</a>.</p>  <p>This operation requires permissions
         * to perform the <code>lookoutvision:StartModel</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StartModel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartModelOutcome StartModel(const Model::StartModelRequest& request) const;

        /**
         * <p>Starts the running of the version of an Amazon Lookout for Vision model.
         * Starting a model takes a while to complete. To check the current state of the
         * model, use <a>DescribeModel</a>.</p> <p>A model is ready to use when its status
         * is <code>HOSTED</code>.</p> <p>Once the model is running, you can detect custom
         * labels in new images by calling <a>DetectAnomalies</a>.</p>  <p>You are
         * charged for the amount of time that the model is running. To stop a running
         * model, call <a>StopModel</a>.</p>  <p>This operation requires permissions
         * to perform the <code>lookoutvision:StartModel</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StartModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartModelOutcomeCallable StartModelCallable(const Model::StartModelRequest& request) const;

        /**
         * <p>Starts the running of the version of an Amazon Lookout for Vision model.
         * Starting a model takes a while to complete. To check the current state of the
         * model, use <a>DescribeModel</a>.</p> <p>A model is ready to use when its status
         * is <code>HOSTED</code>.</p> <p>Once the model is running, you can detect custom
         * labels in new images by calling <a>DetectAnomalies</a>.</p>  <p>You are
         * charged for the amount of time that the model is running. To stop a running
         * model, call <a>StopModel</a>.</p>  <p>This operation requires permissions
         * to perform the <code>lookoutvision:StartModel</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StartModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartModelAsync(const Model::StartModelRequest& request, const StartModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the hosting of a running model. The operation might take a while to
         * complete. To check the current status, call <a>DescribeModel</a>. </p> <p>After
         * the model hosting stops, the <code>Status</code> of the model is
         * <code>TRAINED</code>.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:StopModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StopModel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopModelOutcome StopModel(const Model::StopModelRequest& request) const;

        /**
         * <p>Stops the hosting of a running model. The operation might take a while to
         * complete. To check the current status, call <a>DescribeModel</a>. </p> <p>After
         * the model hosting stops, the <code>Status</code> of the model is
         * <code>TRAINED</code>.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:StopModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StopModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopModelOutcomeCallable StopModelCallable(const Model::StopModelRequest& request) const;

        /**
         * <p>Stops the hosting of a running model. The operation might take a while to
         * complete. To check the current status, call <a>DescribeModel</a>. </p> <p>After
         * the model hosting stops, the <code>Status</code> of the model is
         * <code>TRAINED</code>.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:StopModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StopModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopModelAsync(const Model::StopModelRequest& request, const StopModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more key-value tags to an Amazon Lookout for Vision model. For
         * more information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to an Amazon Lookout for Vision model. For
         * more information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more key-value tags to an Amazon Lookout for Vision model. For
         * more information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from an Amazon Lookout for Vision model. For more
         * information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UntagResource</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from an Amazon Lookout for Vision model. For more
         * information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UntagResource</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from an Amazon Lookout for Vision model. For more
         * information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UntagResource</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more JSON Line entries to a dataset. A JSON Line includes
         * information about an image used for training or testing an Amazon Lookout for
         * Vision model. The following is an example JSON Line.</p> <p>Updating a dataset
         * might take a while to complete. To check the current status, call
         * <a>DescribeDataset</a> and check the <code>Status</code> field in the
         * response.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UpdateDatasetEntries</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UpdateDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetEntriesOutcome UpdateDatasetEntries(const Model::UpdateDatasetEntriesRequest& request) const;

        /**
         * <p>Adds one or more JSON Line entries to a dataset. A JSON Line includes
         * information about an image used for training or testing an Amazon Lookout for
         * Vision model. The following is an example JSON Line.</p> <p>Updating a dataset
         * might take a while to complete. To check the current status, call
         * <a>DescribeDataset</a> and check the <code>Status</code> field in the
         * response.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UpdateDatasetEntries</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UpdateDatasetEntries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetEntriesOutcomeCallable UpdateDatasetEntriesCallable(const Model::UpdateDatasetEntriesRequest& request) const;

        /**
         * <p>Adds one or more JSON Line entries to a dataset. A JSON Line includes
         * information about an image used for training or testing an Amazon Lookout for
         * Vision model. The following is an example JSON Line.</p> <p>Updating a dataset
         * might take a while to complete. To check the current status, call
         * <a>DescribeDataset</a> and check the <code>Status</code> field in the
         * response.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UpdateDatasetEntries</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UpdateDatasetEntries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetEntriesAsync(const Model::UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelAsyncHelper(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectAnomaliesAsyncHelper(const Model::DetectAnomaliesRequest& request, const DetectAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetEntriesAsyncHelper(const Model::ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelsAsyncHelper(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartModelAsyncHelper(const Model::StartModelRequest& request, const StartModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopModelAsyncHelper(const Model::StopModelRequest& request, const StopModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetEntriesAsyncHelper(const Model::UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LookoutforVision
} // namespace Aws
