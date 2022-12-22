/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize/PersonalizeServiceClientModel.h>

namespace Aws
{
namespace Personalize
{
  /**
   * <p>Amazon Personalize is a machine learning service that makes it easy to add
   * individualized recommendations to customers.</p>
   */
  class AWS_PERSONALIZE_API PersonalizeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Personalize::PersonalizeClientConfiguration& clientConfiguration = Aws::Personalize::PersonalizeClientConfiguration(),
                          std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG),
                          const Aws::Personalize::PersonalizeClientConfiguration& clientConfiguration = Aws::Personalize::PersonalizeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG),
                          const Aws::Personalize::PersonalizeClientConfiguration& clientConfiguration = Aws::Personalize::PersonalizeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PersonalizeClient();

        /**
         * <p>Creates a batch inference job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-batch-inference-job.html">Creating
         * a batch inference job</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchInferenceJobOutcome CreateBatchInferenceJob(const Model::CreateBatchInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchInferenceJobOutcomeCallable CreateBatchInferenceJobCallable(const Model::CreateBatchInferenceJobRequest& request) const;

        /**
         * An Async wrapper for CreateBatchInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchInferenceJobAsync(const Model::CreateBatchInferenceJobRequest& request, const CreateBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a batch segment job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/recommendations-batch.html">Getting
         * batch recommendations and user segments</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchSegmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchSegmentJobOutcome CreateBatchSegmentJob(const Model::CreateBatchSegmentJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBatchSegmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBatchSegmentJobOutcomeCallable CreateBatchSegmentJobCallable(const Model::CreateBatchSegmentJobRequest& request) const;

        /**
         * An Async wrapper for CreateBatchSegmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBatchSegmentJobAsync(const Model::CreateBatchSegmentJobRequest& request, const CreateBatchSegmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a campaign that deploys a solution version. When a client calls the
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * and <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetPersonalizedRanking.html">GetPersonalizedRanking</a>
         * APIs, a campaign is specified in the request.</p> <p> <b>Minimum Provisioned TPS
         * and Auto-Scaling</b> </p> <p>A transaction is a single
         * <code>GetRecommendations</code> or <code>GetPersonalizedRanking</code> call.
         * Transactions per second (TPS) is the throughput and unit of billing for Amazon
         * Personalize. The minimum provisioned TPS (<code>minProvisionedTPS</code>)
         * specifies the baseline throughput provisioned by Amazon Personalize, and thus,
         * the minimum billing charge. </p> <p> If your TPS increases beyond
         * <code>minProvisionedTPS</code>, Amazon Personalize auto-scales the provisioned
         * capacity up and down, but never below <code>minProvisionedTPS</code>. There's a
         * short time delay while the capacity is increased that might cause loss of
         * transactions.</p> <p>The actual TPS used is calculated as the average
         * requests/second within a 5-minute window. You pay for maximum of either the
         * minimum provisioned TPS or the actual TPS. We recommend starting with a low
         * <code>minProvisionedTPS</code>, track your usage using Amazon CloudWatch
         * metrics, and then increase the <code>minProvisionedTPS</code> as necessary.</p>
         * <p> <b>Status</b> </p> <p>A campaign can be in one of the following states:</p>
         * <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
         * <p>To get the campaign status, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeCampaign.html">DescribeCampaign</a>.</p>
         *  <p>Wait until the <code>status</code> of the campaign is
         * <code>ACTIVE</code> before asking the campaign for recommendations.</p> 
         * <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListCampaigns.html">ListCampaigns</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeCampaign.html">DescribeCampaign</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UpdateCampaign.html">UpdateCampaign</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteCampaign.html">DeleteCampaign</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty dataset and adds it to the specified dataset group. Use <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
         * to import your training data to a dataset.</p> <p>There are three types of
         * datasets:</p> <ul> <li> <p>Interactions</p> </li> <li> <p>Items</p> </li> <li>
         * <p>Users</p> </li> </ul> <p>Each dataset type has an associated schema with
         * required field types. Only the <code>Interactions</code> dataset is required in
         * order to train a model (also referred to as creating a solution).</p> <p>A
         * dataset can be in one of the following states:</p> <ul> <li> <p>CREATE PENDING
         * &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE
         * PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the status of the
         * dataset, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDataset.html">DescribeDataset</a>.</p>
         * <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListDatasets.html">ListDatasets</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteDataset.html">DeleteDataset</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a job that exports data from your dataset to an Amazon S3 bucket. To
         * allow Amazon Personalize to export the training data, you must specify an
         * service-linked IAM role that gives Amazon Personalize <code>PutObject</code>
         * permissions for your Amazon S3 bucket. For information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/export-data.html">Exporting
         * a dataset</a> in the Amazon Personalize developer guide. </p> <p> <b>Status</b>
         * </p> <p>A dataset export job can be in one of the following states:</p> <ul>
         * <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> </ul> <p> To get the status of the export job, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetExportJob.html">DescribeDatasetExportJob</a>,
         * and specify the Amazon Resource Name (ARN) of the dataset export job. The
         * dataset export is complete when the status shows as ACTIVE. If the status shows
         * as CREATE FAILED, the response includes a <code>failureReason</code> key, which
         * describes why the job failed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetExportJobOutcome CreateDatasetExportJob(const Model::CreateDatasetExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetExportJobOutcomeCallable CreateDatasetExportJobCallable(const Model::CreateDatasetExportJobRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetExportJobAsync(const Model::CreateDatasetExportJobRequest& request, const CreateDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty dataset group. A dataset group is a container for Amazon
         * Personalize resources. A dataset group can contain at most three datasets, one
         * for each type of dataset:</p> <ul> <li> <p>Interactions</p> </li> <li>
         * <p>Items</p> </li> <li> <p>Users</p> </li> </ul> <p> A dataset group can be a
         * Domain dataset group, where you specify a domain and use pre-configured
         * resources like recommenders, or a Custom dataset group, where you use custom
         * resources, such as a solution with a solution version, that you deploy with a
         * campaign. If you start with a Domain dataset group, you can still add custom
         * resources such as solutions and solution versions trained with recipes for
         * custom use cases and deployed with campaigns. </p> <p>A dataset group can be in
         * one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING</p>
         * </li> </ul> <p>To get the status of the dataset group, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>.
         * If the status shows as CREATE FAILED, the response includes a
         * <code>failureReason</code> key, which describes why the creation failed.</p>
         *  <p>You must wait until the <code>status</code> of the dataset group is
         * <code>ACTIVE</code> before adding a dataset to the group.</p>  <p>You can
         * specify an Key Management Service (KMS) key to encrypt the datasets in the
         * group. If you specify a KMS key, you must also include an Identity and Access
         * Management (IAM) role that has permission to access the key.</p> <p
         * class="title"> <b>APIs that require a dataset group ARN in the request</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
         * </p> </li> </ul> <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListDatasetGroups.html">ListDatasetGroups</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteDatasetGroup.html">DeleteDatasetGroup</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetGroupOutcome CreateDatasetGroup(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetGroupOutcomeCallable CreateDatasetGroupCallable(const Model::CreateDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetGroupAsync(const Model::CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job that imports training data from your data source (an Amazon S3
         * bucket) to an Amazon Personalize dataset. To allow Amazon Personalize to import
         * the training data, you must specify an IAM service role that has permission to
         * read from the data source, as Amazon Personalize makes a copy of your data and
         * processes it internally. For information on granting access to your Amazon S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/granting-personalize-s3-access.html">Giving
         * Amazon Personalize Access to Amazon S3 Resources</a>. </p>  <p>By
         * default, a dataset import job replaces any existing data in the dataset that you
         * imported in bulk. To add new records without replacing existing data, specify
         * INCREMENTAL for the import mode in the CreateDatasetImportJob operation.</p>
         *  <p> <b>Status</b> </p> <p>A dataset import job can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> </ul> <p>To get the status of the import
         * job, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>,
         * providing the Amazon Resource Name (ARN) of the dataset import job. The dataset
         * import is complete when the status shows as ACTIVE. If the status shows as
         * CREATE FAILED, the response includes a <code>failureReason</code> key, which
         * describes why the job failed.</p>  <p>Importing takes time. You must wait
         * until the status shows as ACTIVE before training a model using the dataset.</p>
         *  <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListDatasetImportJobs.html">ListDatasetImportJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeDatasetImportJob.html">DescribeDatasetImportJob</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetImportJobOutcome CreateDatasetImportJob(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetImportJobOutcomeCallable CreateDatasetImportJobCallable(const Model::CreateDatasetImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetImportJobAsync(const Model::CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an event tracker that you use when adding event data to a specified
         * dataset group using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * API.</p>  <p>Only one event tracker can be associated with a dataset
         * group. You will get an error if you call <code>CreateEventTracker</code> using
         * the same dataset group as an existing event tracker.</p>  <p>When you
         * create an event tracker, the response includes a tracking ID, which you pass as
         * a parameter when you use the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
         * operation. Amazon Personalize then appends the event data to the Interactions
         * dataset of the dataset group you specify in your event tracker. </p> <p>The
         * event tracker can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li>
         * <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the status
         * of the event tracker, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeEventTracker.html">DescribeEventTracker</a>.</p>
         *  <p>The event tracker must be in the ACTIVE state before using the
         * tracking ID.</p>  <p class="title"> <b>Related APIs</b> </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListEventTrackers.html">ListEventTrackers</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeEventTracker.html">DescribeEventTracker</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteEventTracker.html">DeleteEventTracker</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventTrackerOutcome CreateEventTracker(const Model::CreateEventTrackerRequest& request) const;

        /**
         * A Callable wrapper for CreateEventTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventTrackerOutcomeCallable CreateEventTrackerCallable(const Model::CreateEventTrackerRequest& request) const;

        /**
         * An Async wrapper for CreateEventTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventTrackerAsync(const Model::CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recommendation filter. For more information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
         * recommendations and user segments</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFilterOutcomeCallable CreateFilterCallable(const Model::CreateFilterRequest& request) const;

        /**
         * An Async wrapper for CreateFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFilterAsync(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a metric attribution. A metric attribution creates reports on the
         * data that you import into Amazon Personalize. Depending on how you imported the
         * data, you can view reports in Amazon CloudWatch or Amazon S3. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
         * impact of recommendations</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetricAttributionOutcome CreateMetricAttribution(const Model::CreateMetricAttributionRequest& request) const;

        /**
         * A Callable wrapper for CreateMetricAttribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMetricAttributionOutcomeCallable CreateMetricAttributionCallable(const Model::CreateMetricAttributionRequest& request) const;

        /**
         * An Async wrapper for CreateMetricAttribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMetricAttributionAsync(const Model::CreateMetricAttributionRequest& request, const CreateMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a recommender with the recipe (a Domain dataset group use case) you
         * specify. You create recommenders for a Domain dataset group and specify the
         * recommender's Amazon Resource Name (ARN) when you make a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request. </p> <p> <b>Minimum recommendation requests per second</b> </p> <p>When
         * you create a recommender, you can configure the recommender's minimum
         * recommendation requests per second. The minimum recommendation requests per
         * second (<code>minRecommendationRequestsPerSecond</code>) specifies the baseline
         * recommendation request throughput provisioned by Amazon Personalize. The default
         * minRecommendationRequestsPerSecond is <code>1</code>. A recommendation request
         * is a single <code>GetRecommendations</code> operation. Request throughput is
         * measured in requests per second and Amazon Personalize uses your requests per
         * second to derive your requests per hour and the price of your recommender usage.
         * </p> <p> If your requests per second increases beyond
         * <code>minRecommendationRequestsPerSecond</code>, Amazon Personalize auto-scales
         * the provisioned capacity up and down, but never below
         * <code>minRecommendationRequestsPerSecond</code>. There's a short time delay
         * while the capacity is increased that might cause loss of requests.</p> <p> Your
         * bill is the greater of either the minimum requests per hour (based on
         * minRecommendationRequestsPerSecond) or the actual number of requests. The actual
         * request throughput used is calculated as the average requests/second within a
         * one-hour window. We recommend starting with the default
         * <code>minRecommendationRequestsPerSecond</code>, track your usage using Amazon
         * CloudWatch metrics, and then increase the
         * <code>minRecommendationRequestsPerSecond</code> as necessary. </p> <p>
         * <b>Status</b> </p> <p>A recommender can be in one of the following states:</p>
         * <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE
         * FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS &gt; INACTIVE &gt;
         * START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li> <li> <p>DELETE
         * PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul> <p>To get the recommender
         * status, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeRecommender.html">DescribeRecommender</a>.</p>
         *  <p>Wait until the <code>status</code> of the recommender is
         * <code>ACTIVE</code> before asking the recommender for recommendations.</p>
         *  <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListRecommenders.html">ListRecommenders</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeRecommender.html">DescribeRecommender</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UpdateRecommender.html">UpdateRecommender</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteRecommender.html">DeleteRecommender</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommenderOutcome CreateRecommender(const Model::CreateRecommenderRequest& request) const;

        /**
         * A Callable wrapper for CreateRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecommenderOutcomeCallable CreateRecommenderCallable(const Model::CreateRecommenderRequest& request) const;

        /**
         * An Async wrapper for CreateRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecommenderAsync(const Model::CreateRecommenderRequest& request, const CreateRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Personalize schema from the specified schema string. The
         * schema you create must be in Avro JSON format.</p> <p>Amazon Personalize
         * recognizes three schema variants. Each schema is associated with a dataset type
         * and has a set of required field and keywords. If you are creating a schema for a
         * dataset in a Domain dataset group, you provide the domain of the Domain dataset
         * group. You specify a schema when you call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p>
         * <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSchemas.html">ListSchemas</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSchema.html">DescribeSchema</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteSchema.html">DeleteSchema</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * A Callable wrapper for CreateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the configuration for training a model. A trained model is known as a
         * solution. After the configuration is created, you train the model (create a
         * solution) by calling the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolutionVersion.html">CreateSolutionVersion</a>
         * operation. Every time you call <code>CreateSolutionVersion</code>, a new version
         * of the solution is created.</p> <p>After creating a solution version, you check
         * its accuracy by calling <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_GetSolutionMetrics.html">GetSolutionMetrics</a>.
         * When you are satisfied with the version, you deploy it using <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.
         * The campaign provides recommendations to a client through the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p> <p>To train a model, Amazon Personalize requires training data and a
         * recipe. The training data comes from the dataset group that you provide in the
         * request. A recipe specifies the training algorithm and a feature transformation.
         * You can specify one of the predefined recipes provided by Amazon Personalize.
         * Alternatively, you can specify <code>performAutoML</code> and Amazon Personalize
         * will analyze your data and select the optimum USER_PERSONALIZATION recipe for
         * you.</p>  <p>Amazon Personalize doesn't support configuring the
         * <code>hpoObjective</code> for solution hyperparameter optimization at this
         * time.</p>  <p> <b>Status</b> </p> <p>A solution can be in one of the
         * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
         * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
         * IN_PROGRESS</p> </li> </ul> <p>To get the status of the solution, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolution.html">DescribeSolution</a>.
         * Wait until the status shows as ACTIVE before calling
         * <code>CreateSolutionVersion</code>.</p> <p class="title"> <b>Related APIs</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutions.html">ListSolutions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolutionVersion.html">CreateSolutionVersion</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolution.html">DescribeSolution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteSolution.html">DeleteSolution</a>
         * </p> </li> </ul> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutionVersions.html">ListSolutionVersions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolutionOutcome CreateSolution(const Model::CreateSolutionRequest& request) const;

        /**
         * A Callable wrapper for CreateSolution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSolutionOutcomeCallable CreateSolutionCallable(const Model::CreateSolutionRequest& request) const;

        /**
         * An Async wrapper for CreateSolution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSolutionAsync(const Model::CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Trains or retrains an active solution in a Custom dataset group. A solution
         * is created using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
         * operation and must be in the ACTIVE state before calling
         * <code>CreateSolutionVersion</code>. A new version of the solution is created
         * every time you call this operation.</p> <p> <b>Status</b> </p> <p>A solution
         * version can be in one of the following states:</p> <ul> <li> <p>CREATE
         * PENDING</p> </li> <li> <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li>
         * <li> <p>CREATE FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE
         * STOPPED</p> </li> </ul> <p>To get the status of the version, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>.
         * Wait until the status shows as ACTIVE before calling
         * <code>CreateCampaign</code>.</p> <p>If the status shows as CREATE FAILED, the
         * response includes a <code>failureReason</code> key, which describes why the job
         * failed.</p> <p class="title"> <b>Related APIs</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutionVersions.html">ListSolutionVersions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutions.html">ListSolutions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolution.html">DescribeSolution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DeleteSolution.html">DeleteSolution</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateSolutionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolutionVersionOutcome CreateSolutionVersion(const Model::CreateSolutionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateSolutionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSolutionVersionOutcomeCallable CreateSolutionVersionCallable(const Model::CreateSolutionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateSolutionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSolutionVersionAsync(const Model::CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a campaign by deleting the solution deployment. The solution that the
         * campaign is based on is not deleted and can be redeployed when needed. A deleted
         * campaign can no longer be specified in a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request. For information on creating campaigns, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset. You can't delete a dataset if an associated
         * <code>DatasetImportJob</code> or <code>SolutionVersion</code> is in the CREATE
         * PENDING or IN PROGRESS state. For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataset group. Before you delete a dataset group, you must delete
         * the following:</p> <ul> <li> <p>All associated event trackers.</p> </li> <li>
         * <p>All associated solutions.</p> </li> <li> <p>All datasets in the dataset
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetGroupOutcome DeleteDatasetGroup(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetGroupOutcomeCallable DeleteDatasetGroupCallable(const Model::DeleteDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetGroupAsync(const Model::DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the event tracker. Does not delete the event-interactions dataset
         * from the associated dataset group. For more information on event trackers, see
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventTrackerOutcome DeleteEventTracker(const Model::DeleteEventTrackerRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventTrackerOutcomeCallable DeleteEventTrackerCallable(const Model::DeleteEventTrackerRequest& request) const;

        /**
         * An Async wrapper for DeleteEventTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventTrackerAsync(const Model::DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const Model::DeleteFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFilterAsync(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricAttributionOutcome DeleteMetricAttribution(const Model::DeleteMetricAttributionRequest& request) const;

        /**
         * A Callable wrapper for DeleteMetricAttribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMetricAttributionOutcomeCallable DeleteMetricAttributionCallable(const Model::DeleteMetricAttributionRequest& request) const;

        /**
         * An Async wrapper for DeleteMetricAttribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMetricAttributionAsync(const Model::DeleteMetricAttributionRequest& request, const DeleteMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates and removes a recommender. A deleted recommender can no longer be
         * specified in a <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommenderOutcome DeleteRecommender(const Model::DeleteRecommenderRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecommenderOutcomeCallable DeleteRecommenderCallable(const Model::DeleteRecommenderRequest& request) const;

        /**
         * An Async wrapper for DeleteRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecommenderAsync(const Model::DeleteRecommenderRequest& request, const DeleteRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a schema. Before deleting a schema, you must delete all datasets
         * referencing the schema. For more information on schemas, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all versions of a solution and the <code>Solution</code> object
         * itself. Before deleting a solution, you must delete all campaigns based on the
         * solution. To determine what campaigns are using the solution, call <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListCampaigns.html">ListCampaigns</a>
         * and supply the Amazon Resource Name (ARN) of the solution. You can't delete a
         * solution if an associated <code>SolutionVersion</code> is in the CREATE PENDING
         * or IN PROGRESS state. For more information on solutions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSolutionOutcome DeleteSolution(const Model::DeleteSolutionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSolution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSolutionOutcomeCallable DeleteSolutionCallable(const Model::DeleteSolutionRequest& request) const;

        /**
         * An Async wrapper for DeleteSolution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSolutionAsync(const Model::DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlgorithmOutcomeCallable DescribeAlgorithmCallable(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * An Async wrapper for DescribeAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlgorithmAsync(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties of a batch inference job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate the recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchInferenceJobOutcome DescribeBatchInferenceJob(const Model::DescribeBatchInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeBatchInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBatchInferenceJobOutcomeCallable DescribeBatchInferenceJobCallable(const Model::DescribeBatchInferenceJobRequest& request) const;

        /**
         * An Async wrapper for DescribeBatchInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBatchInferenceJobAsync(const Model::DescribeBatchInferenceJobRequest& request, const DescribeBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties of a batch segment job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate segments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchSegmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchSegmentJobOutcome DescribeBatchSegmentJob(const Model::DescribeBatchSegmentJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeBatchSegmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBatchSegmentJobOutcomeCallable DescribeBatchSegmentJobCallable(const Model::DescribeBatchSegmentJobRequest& request) const;

        /**
         * An Async wrapper for DescribeBatchSegmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBatchSegmentJobAsync(const Model::DescribeBatchSegmentJobRequest& request, const DescribeBatchSegmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given campaign, including its status.</p> <p>A campaign can be
         * in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE
         * IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt;
         * DELETE IN_PROGRESS</p> </li> </ul> <p>When the <code>status</code> is
         * <code>CREATE FAILED</code>, the response includes the <code>failureReason</code>
         * key, which describes why.</p> <p>For more information on campaigns, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCampaignOutcome DescribeCampaign(const Model::DescribeCampaignRequest& request) const;

        /**
         * A Callable wrapper for DescribeCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCampaignOutcomeCallable DescribeCampaignCallable(const Model::DescribeCampaignRequest& request) const;

        /**
         * An Async wrapper for DescribeCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCampaignAsync(const Model::DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given dataset. For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the dataset export job created by <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetExportJob.html">CreateDatasetExportJob</a>,
         * including the export job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetExportJobOutcome DescribeDatasetExportJob(const Model::DescribeDatasetExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatasetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetExportJobOutcomeCallable DescribeDatasetExportJobCallable(const Model::DescribeDatasetExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDatasetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetExportJobAsync(const Model::DescribeDatasetExportJobRequest& request, const DescribeDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given dataset group. For more information on dataset groups,
         * see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetGroupOutcome DescribeDatasetGroup(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatasetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetGroupOutcomeCallable DescribeDatasetGroupCallable(const Model::DescribeDatasetGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeDatasetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetGroupAsync(const Model::DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the dataset import job created by <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>,
         * including the import job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetImportJobOutcome DescribeDatasetImportJob(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatasetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetImportJobOutcomeCallable DescribeDatasetImportJobCallable(const Model::DescribeDatasetImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDatasetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetImportJobAsync(const Model::DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an event tracker. The response includes the <code>trackingId</code>
         * and <code>status</code> of the event tracker. For more information on event
         * trackers, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeEventTracker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventTrackerOutcome DescribeEventTracker(const Model::DescribeEventTrackerRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventTracker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventTrackerOutcomeCallable DescribeEventTrackerCallable(const Model::DescribeEventTrackerRequest& request) const;

        /**
         * An Async wrapper for DescribeEventTracker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventTrackerAsync(const Model::DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given feature transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFeatureTransformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureTransformationOutcome DescribeFeatureTransformation(const Model::DescribeFeatureTransformationRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeatureTransformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeatureTransformationOutcomeCallable DescribeFeatureTransformationCallable(const Model::DescribeFeatureTransformationRequest& request) const;

        /**
         * An Async wrapper for DescribeFeatureTransformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeatureTransformationAsync(const Model::DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a filter's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFilterOutcome DescribeFilter(const Model::DescribeFilterRequest& request) const;

        /**
         * A Callable wrapper for DescribeFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFilterOutcomeCallable DescribeFilterCallable(const Model::DescribeFilterRequest& request) const;

        /**
         * An Async wrapper for DescribeFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFilterAsync(const Model::DescribeFilterRequest& request, const DescribeFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricAttributionOutcome DescribeMetricAttribution(const Model::DescribeMetricAttributionRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetricAttribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMetricAttributionOutcomeCallable DescribeMetricAttributionCallable(const Model::DescribeMetricAttributionRequest& request) const;

        /**
         * An Async wrapper for DescribeMetricAttribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMetricAttributionAsync(const Model::DescribeMetricAttributionRequest& request, const DescribeMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a recipe.</p> <p>A recipe contains three items:</p> <ul> <li> <p>An
         * algorithm that trains a model.</p> </li> <li> <p>Hyperparameters that govern the
         * training.</p> </li> <li> <p>Feature transformation information for modifying the
         * input data before training.</p> </li> </ul> <p>Amazon Personalize provides a set
         * of predefined recipes. You specify a recipe when you create a solution with the
         * <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
         * API. <code>CreateSolution</code> trains a model by using the algorithm in the
         * specified recipe and a training dataset. The solution, when deployed as a
         * campaign, can provide recommendations using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecipeOutcome DescribeRecipe(const Model::DescribeRecipeRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecipeOutcomeCallable DescribeRecipeCallable(const Model::DescribeRecipeRequest& request) const;

        /**
         * An Async wrapper for DescribeRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecipeAsync(const Model::DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the given recommender, including its status.</p> <p>A recommender
         * can be in one of the following states:</p> <ul> <li> <p>CREATE PENDING &gt;
         * CREATE IN_PROGRESS &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING
         * &gt; STOP IN_PROGRESS &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS
         * &gt; ACTIVE</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
         * </ul> <p>When the <code>status</code> is <code>CREATE FAILED</code>, the
         * response includes the <code>failureReason</code> key, which describes why.</p>
         * <p>The <code>modelMetrics</code> key is null when the recommender is being
         * created or deleted.</p> <p>For more information on recommenders, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateRecommender.html">CreateRecommender</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommenderOutcome DescribeRecommender(const Model::DescribeRecommenderRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecommenderOutcomeCallable DescribeRecommenderCallable(const Model::DescribeRecommenderRequest& request) const;

        /**
         * An Async wrapper for DescribeRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecommenderAsync(const Model::DescribeRecommenderRequest& request, const DescribeRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a schema. For more information on schemas, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSchemaOutcomeCallable DescribeSchemaCallable(const Model::DescribeSchemaRequest& request) const;

        /**
         * An Async wrapper for DescribeSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSchemaAsync(const Model::DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a solution. For more information on solutions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSolutionOutcome DescribeSolution(const Model::DescribeSolutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeSolution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSolutionOutcomeCallable DescribeSolutionCallable(const Model::DescribeSolutionRequest& request) const;

        /**
         * An Async wrapper for DescribeSolution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSolutionAsync(const Model::DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specific version of a solution. For more information on
         * solutions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolutionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSolutionVersionOutcome DescribeSolutionVersion(const Model::DescribeSolutionVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeSolutionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSolutionVersionOutcomeCallable DescribeSolutionVersionCallable(const Model::DescribeSolutionVersionRequest& request) const;

        /**
         * An Async wrapper for DescribeSolutionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSolutionVersionAsync(const Model::DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the metrics for the specified solution version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/GetSolutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolutionMetricsOutcome GetSolutionMetrics(const Model::GetSolutionMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetSolutionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSolutionMetricsOutcomeCallable GetSolutionMetricsCallable(const Model::GetSolutionMetricsRequest& request) const;

        /**
         * An Async wrapper for GetSolutionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSolutionMetricsAsync(const Model::GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the batch inference jobs that have been performed off of a
         * solution version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchInferenceJobsOutcome ListBatchInferenceJobs(const Model::ListBatchInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListBatchInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBatchInferenceJobsOutcomeCallable ListBatchInferenceJobsCallable(const Model::ListBatchInferenceJobsRequest& request) const;

        /**
         * An Async wrapper for ListBatchInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBatchInferenceJobsAsync(const Model::ListBatchInferenceJobsRequest& request, const ListBatchInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the batch segment jobs that have been performed off of a
         * solution version that you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchSegmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchSegmentJobsOutcome ListBatchSegmentJobs(const Model::ListBatchSegmentJobsRequest& request) const;

        /**
         * A Callable wrapper for ListBatchSegmentJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBatchSegmentJobsOutcomeCallable ListBatchSegmentJobsCallable(const Model::ListBatchSegmentJobsRequest& request) const;

        /**
         * An Async wrapper for ListBatchSegmentJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBatchSegmentJobsAsync(const Model::ListBatchSegmentJobsRequest& request, const ListBatchSegmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of campaigns that use the given solution. When a solution is
         * not specified, all the campaigns associated with the account are listed. The
         * response provides the properties for each campaign, including the Amazon
         * Resource Name (ARN). For more information on campaigns, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;

        /**
         * A Callable wrapper for ListCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const Model::ListCampaignsRequest& request) const;

        /**
         * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCampaignsAsync(const Model::ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset export jobs that use the given dataset. When a
         * dataset is not specified, all the dataset export jobs associated with the
         * account are listed. The response provides the properties for each dataset export
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * export jobs, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetExportJob.html">CreateDatasetExportJob</a>.
         * For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetExportJobsOutcome ListDatasetExportJobs(const Model::ListDatasetExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetExportJobsOutcomeCallable ListDatasetExportJobsCallable(const Model::ListDatasetExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetExportJobsAsync(const Model::ListDatasetExportJobsRequest& request, const ListDatasetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset groups. The response provides the properties for
         * each dataset group, including the Amazon Resource Name (ARN). For more
         * information on dataset groups, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetGroup.html">CreateDatasetGroup</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetGroupsOutcome ListDatasetGroups(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetGroupsOutcomeCallable ListDatasetGroupsCallable(const Model::ListDatasetGroupsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetGroupsAsync(const Model::ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of dataset import jobs that use the given dataset. When a
         * dataset is not specified, all the dataset import jobs associated with the
         * account are listed. The response provides the properties for each dataset import
         * job, including the Amazon Resource Name (ARN). For more information on dataset
         * import jobs, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>.
         * For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetImportJobsOutcome ListDatasetImportJobs(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetImportJobsOutcomeCallable ListDatasetImportJobsCallable(const Model::ListDatasetImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetImportJobsAsync(const Model::ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of datasets contained in the given dataset group. The
         * response provides the properties for each dataset, including the Amazon Resource
         * Name (ARN). For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of event trackers associated with the account. The response
         * provides the properties for each event tracker, including the Amazon Resource
         * Name (ARN) and tracking ID. For more information on event trackers, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateEventTracker.html">CreateEventTracker</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListEventTrackers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventTrackersOutcome ListEventTrackers(const Model::ListEventTrackersRequest& request) const;

        /**
         * A Callable wrapper for ListEventTrackers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventTrackersOutcomeCallable ListEventTrackersCallable(const Model::ListEventTrackersRequest& request) const;

        /**
         * An Async wrapper for ListEventTrackers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventTrackersAsync(const Model::ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all filters that belong to a given dataset group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFiltersOutcomeCallable ListFiltersCallable(const Model::ListFiltersRequest& request) const;

        /**
         * An Async wrapper for ListFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFiltersAsync(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the metrics for the metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListMetricAttributionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricAttributionMetricsOutcome ListMetricAttributionMetrics(const Model::ListMetricAttributionMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListMetricAttributionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricAttributionMetricsOutcomeCallable ListMetricAttributionMetricsCallable(const Model::ListMetricAttributionMetricsRequest& request) const;

        /**
         * An Async wrapper for ListMetricAttributionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricAttributionMetricsAsync(const Model::ListMetricAttributionMetricsRequest& request, const ListMetricAttributionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists metric attributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListMetricAttributions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricAttributionsOutcome ListMetricAttributions(const Model::ListMetricAttributionsRequest& request) const;

        /**
         * A Callable wrapper for ListMetricAttributions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricAttributionsOutcomeCallable ListMetricAttributionsCallable(const Model::ListMetricAttributionsRequest& request) const;

        /**
         * An Async wrapper for ListMetricAttributions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricAttributionsAsync(const Model::ListMetricAttributionsRequest& request, const ListMetricAttributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of available recipes. The response provides the properties for
         * each recipe, including the recipe's Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipesOutcome ListRecipes(const Model::ListRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecipesOutcomeCallable ListRecipesCallable(const Model::ListRecipesRequest& request) const;

        /**
         * An Async wrapper for ListRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecipesAsync(const Model::ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of recommenders in a given Domain dataset group. When a Domain
         * dataset group is not specified, all the recommenders associated with the account
         * are listed. The response provides the properties for each recommender, including
         * the Amazon Resource Name (ARN). For more information on recommenders, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateRecommender.html">CreateRecommender</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecommenders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendersOutcome ListRecommenders(const Model::ListRecommendersRequest& request) const;

        /**
         * A Callable wrapper for ListRecommenders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendersOutcomeCallable ListRecommendersCallable(const Model::ListRecommendersRequest& request) const;

        /**
         * An Async wrapper for ListRecommenders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendersAsync(const Model::ListRecommendersRequest& request, const ListRecommendersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of schemas associated with the account. The response
         * provides the properties for each schema, including the Amazon Resource Name
         * (ARN). For more information on schemas, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of solution versions for the given solution. When a solution
         * is not specified, all the solution versions associated with the account are
         * listed. The response provides the properties for each solution version,
         * including the Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionVersionsOutcome ListSolutionVersions(const Model::ListSolutionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSolutionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSolutionVersionsOutcomeCallable ListSolutionVersionsCallable(const Model::ListSolutionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListSolutionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSolutionVersionsAsync(const Model::ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of solutions that use the given dataset group. When a dataset
         * group is not specified, all the solutions associated with the account are
         * listed. The response provides the properties for each solution, including the
         * Amazon Resource Name (ARN). For more information on solutions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionsOutcome ListSolutions(const Model::ListSolutionsRequest& request) const;

        /**
         * A Callable wrapper for ListSolutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSolutionsOutcomeCallable ListSolutionsCallable(const Model::ListSolutionsRequest& request) const;

        /**
         * An Async wrapper for ListSolutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSolutionsAsync(const Model::ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of <a
         * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
         * attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListTagsForResource">AWS
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
         * <p>Starts a recommender that is INACTIVE. Starting a recommender does not create
         * any new models, but resumes billing and automatic retraining for the
         * recommender.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StartRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommenderOutcome StartRecommender(const Model::StartRecommenderRequest& request) const;

        /**
         * A Callable wrapper for StartRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRecommenderOutcomeCallable StartRecommenderCallable(const Model::StartRecommenderRequest& request) const;

        /**
         * An Async wrapper for StartRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRecommenderAsync(const Model::StartRecommenderRequest& request, const StartRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a recommender that is ACTIVE. Stopping a recommender halts billing and
         * automatic retraining for the recommender.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRecommenderOutcome StopRecommender(const Model::StopRecommenderRequest& request) const;

        /**
         * A Callable wrapper for StopRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRecommenderOutcomeCallable StopRecommenderCallable(const Model::StopRecommenderRequest& request) const;

        /**
         * An Async wrapper for StopRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRecommenderAsync(const Model::StopRecommenderRequest& request, const StopRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops creating a solution version that is in a state of CREATE_PENDING or
         * CREATE IN_PROGRESS. </p> <p>Depending on the current state of the solution
         * version, the solution version state changes as follows:</p> <ul> <li>
         * <p>CREATE_PENDING &gt; CREATE_STOPPED</p> <p>or</p> </li> <li>
         * <p>CREATE_IN_PROGRESS &gt; CREATE_STOPPING &gt; CREATE_STOPPED</p> </li> </ul>
         * <p>You are billed for all of the training completed up until you stop the
         * solution version creation. You cannot resume creating a solution version once it
         * has been stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopSolutionVersionCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSolutionVersionCreationOutcome StopSolutionVersionCreation(const Model::StopSolutionVersionCreationRequest& request) const;

        /**
         * A Callable wrapper for StopSolutionVersionCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSolutionVersionCreationOutcomeCallable StopSolutionVersionCreationCallable(const Model::StopSolutionVersionCreationRequest& request) const;

        /**
         * An Async wrapper for StopSolutionVersionCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSolutionVersionCreationAsync(const Model::StopSolutionVersionCreationRequest& request, const StopSolutionVersionCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add a list of tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/TagResource">AWS
         * API Reference</a></p>
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
         * <p>Remove <a
         * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
         * that are attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UntagResource">AWS
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
         * <p>Updates a campaign by either deploying a new solution or changing the value
         * of the campaign's <code>minProvisionedTPS</code> parameter.</p> <p>To update a
         * campaign, the campaign status must be ACTIVE or CREATE FAILED. Check the
         * campaign status using the <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeCampaign.html">DescribeCampaign</a>
         * operation.</p>  <p>You can still get recommendations from a campaign while
         * an update is in progress. The campaign will use the previous solution version
         * and campaign configuration to generate recommendations until the latest campaign
         * update status is <code>Active</code>. </p>  <p>For more information on
         * campaigns, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateCampaign.html">CreateCampaign</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * An Async wrapper for UpdateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricAttributionOutcome UpdateMetricAttribution(const Model::UpdateMetricAttributionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMetricAttribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMetricAttributionOutcomeCallable UpdateMetricAttributionCallable(const Model::UpdateMetricAttributionRequest& request) const;

        /**
         * An Async wrapper for UpdateMetricAttribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMetricAttributionAsync(const Model::UpdateMetricAttributionRequest& request, const UpdateMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the recommender to modify the recommender
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommenderOutcome UpdateRecommender(const Model::UpdateRecommenderRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecommender that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecommenderOutcomeCallable UpdateRecommenderCallable(const Model::UpdateRecommenderRequest& request) const;

        /**
         * An Async wrapper for UpdateRecommender that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecommenderAsync(const Model::UpdateRecommenderRequest& request, const UpdateRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PersonalizeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeClient>;
      void init(const PersonalizeClientConfiguration& clientConfiguration);

      PersonalizeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PersonalizeEndpointProviderBase> m_endpointProvider;
  };

} // namespace Personalize
} // namespace Aws
