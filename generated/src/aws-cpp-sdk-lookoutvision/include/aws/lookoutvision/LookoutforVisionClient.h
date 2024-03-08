/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutvision/LookoutforVisionServiceClientModel.h>

namespace Aws
{
namespace LookoutforVision
{
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
  class AWS_LOOKOUTFORVISION_API LookoutforVisionClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LookoutforVisionClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LookoutforVisionClientConfiguration ClientConfigurationType;
      typedef LookoutforVisionEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::LookoutforVision::LookoutforVisionClientConfiguration& clientConfiguration = Aws::LookoutforVision::LookoutforVisionClientConfiguration(),
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::LookoutforVision::LookoutforVisionClientConfiguration& clientConfiguration = Aws::LookoutforVision::LookoutforVisionClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutforVisionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::LookoutforVision::LookoutforVisionClientConfiguration& clientConfiguration = Aws::LookoutforVision::LookoutforVisionClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutforVisionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::CreateDataset, request, handler, context);
        }

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
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        Model::CreateModelOutcomeCallable CreateModelCallable(const CreateModelRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::CreateModel, request);
        }

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateModelRequestT = Model::CreateModelRequest>
        void CreateModelAsync(const CreateModelRequestT& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::CreateModel, request, handler, context);
        }

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
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::CreateProject, request, handler, context);
        }

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
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DeleteDataset, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Lookout for Vision model. You can't delete a running model.
         * To stop a running model, use the <a>StopModel</a> operation.</p> <p>It might
         * take a few seconds to delete a model. To determine if a model has been deleted,
         * call <a>ListModels</a> and check if the version of the model
         * (<code>ModelVersion</code>) is in the <code>Models</code> array. </p> <p/>
         * <p>This operation requires permissions to perform the
         * <code>lookoutvision:DeleteModel</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        Model::DeleteModelOutcomeCallable DeleteModelCallable(const DeleteModelRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DeleteModel, request);
        }

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteModelRequestT = Model::DeleteModelRequest>
        void DeleteModelAsync(const DeleteModelRequestT& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DeleteModel, request, handler, context);
        }

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
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Describe an Amazon Lookout for Vision dataset.</p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:DescribeDataset</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DescribeDataset, request, handler, context);
        }

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
         * A Callable wrapper for DescribeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        Model::DescribeModelOutcomeCallable DescribeModelCallable(const DescribeModelRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DescribeModel, request);
        }

        /**
         * An Async wrapper for DescribeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelRequestT = Model::DescribeModelRequest>
        void DescribeModelAsync(const DescribeModelRequestT& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DescribeModel, request, handler, context);
        }

        /**
         * <p>Describes an Amazon Lookout for Vision model packaging job. </p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DescribeModelPackagingJob</code> operation.</p> <p>For more
         * information, see <i>Using your Amazon Lookout for Vision model on an edge
         * device</i> in the Amazon Lookout for Vision Developer Guide. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeModelPackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackagingJobOutcome DescribeModelPackagingJob(const Model::DescribeModelPackagingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelPackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeModelPackagingJobRequestT = Model::DescribeModelPackagingJobRequest>
        Model::DescribeModelPackagingJobOutcomeCallable DescribeModelPackagingJobCallable(const DescribeModelPackagingJobRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DescribeModelPackagingJob, request);
        }

        /**
         * An Async wrapper for DescribeModelPackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeModelPackagingJobRequestT = Model::DescribeModelPackagingJobRequest>
        void DescribeModelPackagingJobAsync(const DescribeModelPackagingJobRequestT& request, const DescribeModelPackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DescribeModelPackagingJob, request, handler, context);
        }

        /**
         * <p>Describes an Amazon Lookout for Vision project.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:DescribeProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DescribeProject, request);
        }

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DescribeProject, request, handler, context);
        }

        /**
         * <p>Detects anomalies in an image that you supply. </p> <p>The response from
         * <code>DetectAnomalies</code> includes a boolean prediction that the image
         * contains one or more anomalies and a confidence value for the prediction. If the
         * model is an image segmentation model, the response also includes segmentation
         * information for each type of anomaly found in the image.</p>  <p>Before
         * calling <code>DetectAnomalies</code>, you must first start your model with the
         * <a>StartModel</a> operation. You are charged for the amount of time, in minutes,
         * that a model runs and for the number of anomaly detection units that your model
         * uses. If you are not using a model, use the <a>StopModel</a> operation to stop
         * your model. </p>  <p>For more information, see <i>Detecting anomalies in
         * an image</i> in the Amazon Lookout for Vision developer guide.</p> <p>This
         * operation requires permissions to perform the
         * <code>lookoutvision:DetectAnomalies</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DetectAnomalies">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectAnomaliesOutcome DetectAnomalies(const Model::DetectAnomaliesRequest& request) const;

        /**
         * A Callable wrapper for DetectAnomalies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectAnomaliesRequestT = Model::DetectAnomaliesRequest>
        Model::DetectAnomaliesOutcomeCallable DetectAnomaliesCallable(const DetectAnomaliesRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::DetectAnomalies, request);
        }

        /**
         * An Async wrapper for DetectAnomalies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectAnomaliesRequestT = Model::DetectAnomaliesRequest>
        void DetectAnomaliesAsync(const DetectAnomaliesRequestT& request, const DetectAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::DetectAnomalies, request, handler, context);
        }

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
         * A Callable wrapper for ListDatasetEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetEntriesRequestT = Model::ListDatasetEntriesRequest>
        Model::ListDatasetEntriesOutcomeCallable ListDatasetEntriesCallable(const ListDatasetEntriesRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::ListDatasetEntries, request);
        }

        /**
         * An Async wrapper for ListDatasetEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetEntriesRequestT = Model::ListDatasetEntriesRequest>
        void ListDatasetEntriesAsync(const ListDatasetEntriesRequestT& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::ListDatasetEntries, request, handler, context);
        }

        /**
         * <p> Lists the model packaging jobs created for an Amazon Lookout for Vision
         * project. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListModelPackagingJobs</code> operation. </p> <p>For more
         * information, see <i>Using your Amazon Lookout for Vision model on an edge
         * device</i> in the Amazon Lookout for Vision Developer Guide. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListModelPackagingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackagingJobsOutcome ListModelPackagingJobs(const Model::ListModelPackagingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListModelPackagingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelPackagingJobsRequestT = Model::ListModelPackagingJobsRequest>
        Model::ListModelPackagingJobsOutcomeCallable ListModelPackagingJobsCallable(const ListModelPackagingJobsRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::ListModelPackagingJobs, request);
        }

        /**
         * An Async wrapper for ListModelPackagingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelPackagingJobsRequestT = Model::ListModelPackagingJobsRequest>
        void ListModelPackagingJobsAsync(const ListModelPackagingJobsRequestT& request, const ListModelPackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::ListModelPackagingJobs, request, handler, context);
        }

        /**
         * <p>Lists the versions of a model in an Amazon Lookout for Vision project.</p>
         * <p>The <code>ListModels</code> operation is eventually consistent. Recent calls
         * to <code>CreateModel</code> might take a while to appear in the response from
         * <code>ListProjects</code>.</p> <p>This operation requires permissions to perform
         * the <code>lookoutvision:ListModels</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * A Callable wrapper for ListModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        Model::ListModelsOutcomeCallable ListModelsCallable(const ListModelsRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::ListModels, request);
        }

        /**
         * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListModelsRequestT = Model::ListModelsRequest>
        void ListModelsAsync(const ListModelsRequestT& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::ListModels, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Lookout for Vision projects in your AWS account that are in
         * the AWS Region in which you call <code>ListProjects</code>.</p> <p>The
         * <code>ListProjects</code> operation is eventually consistent. Recent calls to
         * <code>CreateProject</code> and <code>DeleteProject</code> might take a while to
         * appear in the response from <code>ListProjects</code>.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:ListProjects</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::ListProjects, request, handler, context);
        }

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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::ListTagsForResource, request, handler, context);
        }

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
         * A Callable wrapper for StartModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartModelRequestT = Model::StartModelRequest>
        Model::StartModelOutcomeCallable StartModelCallable(const StartModelRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::StartModel, request);
        }

        /**
         * An Async wrapper for StartModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartModelRequestT = Model::StartModelRequest>
        void StartModelAsync(const StartModelRequestT& request, const StartModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::StartModel, request, handler, context);
        }

        /**
         * <p>Starts an Amazon Lookout for Vision model packaging job. A model packaging
         * job creates an AWS IoT Greengrass component for a Lookout for Vision model. You
         * can use the component to deploy your model to an edge device managed by
         * Greengrass. </p> <p>Use the <a>DescribeModelPackagingJob</a> API to determine
         * the current status of the job. The model packaging job is complete if the value
         * of <code>Status</code> is <code>SUCCEEDED</code>.</p> <p>To deploy the component
         * to the target device, use the component name and component version with the AWS
         * IoT Greengrass <a
         * href="https://docs.aws.amazon.com/greengrass/v2/APIReference/API_CreateDeployment.html">CreateDeployment</a>
         * API.</p> <p>This operation requires the following permissions:</p> <ul> <li> <p>
         * <code>lookoutvision:StartModelPackagingJob</code> </p> </li> <li> <p>
         * <code>s3:PutObject</code> </p> </li> <li> <p> <code>s3:GetBucketLocation</code>
         * </p> </li> <li> <p> <code>kms:GenerateDataKey</code> </p> </li> <li> <p>
         * <code>greengrass:CreateComponentVersion</code> </p> </li> <li> <p>
         * <code>greengrass:DescribeComponent</code> </p> </li> <li> <p>(Optional)
         * <code>greengrass:TagResource</code>. Only required if you want to tag the
         * component.</p> </li> </ul> <p>For more information, see <i>Using your Amazon
         * Lookout for Vision model on an edge device</i> in the Amazon Lookout for Vision
         * Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StartModelPackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartModelPackagingJobOutcome StartModelPackagingJob(const Model::StartModelPackagingJobRequest& request) const;

        /**
         * A Callable wrapper for StartModelPackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartModelPackagingJobRequestT = Model::StartModelPackagingJobRequest>
        Model::StartModelPackagingJobOutcomeCallable StartModelPackagingJobCallable(const StartModelPackagingJobRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::StartModelPackagingJob, request);
        }

        /**
         * An Async wrapper for StartModelPackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartModelPackagingJobRequestT = Model::StartModelPackagingJobRequest>
        void StartModelPackagingJobAsync(const StartModelPackagingJobRequestT& request, const StartModelPackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::StartModelPackagingJob, request, handler, context);
        }

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
         * A Callable wrapper for StopModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopModelRequestT = Model::StopModelRequest>
        Model::StopModelOutcomeCallable StopModelCallable(const StopModelRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::StopModel, request);
        }

        /**
         * An Async wrapper for StopModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopModelRequestT = Model::StopModelRequest>
        void StopModelAsync(const StopModelRequestT& request, const StopModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::StopModel, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::TagResource, request, handler, context);
        }

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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Adds or updates one or more JSON Line entries in a dataset. A JSON Line
         * includes information about an image used for training or testing an Amazon
         * Lookout for Vision model.</p> <p>To update an existing JSON Line, use the
         * <code>source-ref</code> field to identify the JSON Line. The JSON line that you
         * supply replaces the existing JSON line. Any existing annotations that are not in
         * the new JSON line are removed from the dataset. </p> <p>For more information,
         * see <i>Defining JSON lines for anomaly classification</i> in the Amazon Lookout
         * for Vision Developer Guide. </p>  <p>The images you reference in the
         * <code>source-ref</code> field of a JSON line, must be in the same S3 bucket as
         * the existing images in the dataset. </p>  <p>Updating a dataset might
         * take a while to complete. To check the current status, call
         * <a>DescribeDataset</a> and check the <code>Status</code> field in the
         * response.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:UpdateDatasetEntries</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/UpdateDatasetEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetEntriesOutcome UpdateDatasetEntries(const Model::UpdateDatasetEntriesRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatasetEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatasetEntriesRequestT = Model::UpdateDatasetEntriesRequest>
        Model::UpdateDatasetEntriesOutcomeCallable UpdateDatasetEntriesCallable(const UpdateDatasetEntriesRequestT& request) const
        {
            return SubmitCallable(&LookoutforVisionClient::UpdateDatasetEntries, request);
        }

        /**
         * An Async wrapper for UpdateDatasetEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasetEntriesRequestT = Model::UpdateDatasetEntriesRequest>
        void UpdateDatasetEntriesAsync(const UpdateDatasetEntriesRequestT& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LookoutforVisionClient::UpdateDatasetEntries, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LookoutforVisionEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LookoutforVisionClient>;
      void init(const LookoutforVisionClientConfiguration& clientConfiguration);

      LookoutforVisionClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutforVisionEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutforVision
} // namespace Aws
