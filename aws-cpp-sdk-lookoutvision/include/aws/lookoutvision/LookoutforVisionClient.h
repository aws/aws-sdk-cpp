/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lookoutvision/LookoutforVisionServiceClientModel.h>
#include <aws/lookoutvision/LookoutforVisionLegacyAsyncMacros.h>

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
  class AWS_LOOKOUTFORVISION_API LookoutforVisionClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::LookoutforVision::LookoutforVisionClientConfiguration& clientConfiguration = Aws::LookoutforVision::LookoutforVisionClientConfiguration(),
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutforVisionEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LookoutforVisionClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutforVisionEndpointProvider>(ALLOCATION_TAG),
                               const Aws::LookoutforVision::LookoutforVisionClientConfiguration& clientConfiguration = Aws::LookoutforVision::LookoutforVisionClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LookoutforVisionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<LookoutforVisionEndpointProviderBase> endpointProvider = Aws::MakeShared<LookoutforVisionEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Creates an empty Amazon Lookout for Vision project. After you create the
         * project, add a dataset by calling <a>CreateDataset</a>.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:CreateProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


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
         * <p>Describe an Amazon Lookout for Vision dataset.</p> <p>This operation requires
         * permissions to perform the <code>lookoutvision:DescribeDataset</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;


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
         * <p>Describes an Amazon Lookout for Vision project.</p> <p>This operation
         * requires permissions to perform the <code>lookoutvision:DescribeProject</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;


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
         * <p>Returns a list of tags attached to the specified Amazon Lookout for Vision
         * model.</p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:ListTagsForResource</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * </p> </li> <li> <p> <code>greengrass:CreateComponentVersion</code> </p> </li>
         * <li> <p> <code>greengrass:DescribeComponent</code> </p> </li> <li> <p>(Optional)
         * <code>greengrass:TagResource</code>. Only required if you want to tag the
         * component.</p> </li> </ul> <p>For more information, see <i>Using your Amazon
         * Lookout for Vision model on an edge device</i> in the Amazon Lookout for Vision
         * Developer Guide. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/StartModelPackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartModelPackagingJobOutcome StartModelPackagingJob(const Model::StartModelPackagingJobRequest& request) const;


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
         * <p>Adds one or more key-value tags to an Amazon Lookout for Vision model. For
         * more information, see <i>Tagging a model</i> in the <i>Amazon Lookout for Vision
         * Developer Guide</i>. </p> <p>This operation requires permissions to perform the
         * <code>lookoutvision:TagResource</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LookoutforVisionEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LookoutforVisionClientConfiguration& clientConfiguration);

      LookoutforVisionClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LookoutforVisionEndpointProviderBase> m_endpointProvider;
  };

} // namespace LookoutforVision
} // namespace Aws
