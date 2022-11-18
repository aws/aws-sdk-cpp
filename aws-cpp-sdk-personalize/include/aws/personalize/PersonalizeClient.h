/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize/PersonalizeServiceClientModel.h>
#include <aws/personalize/PersonalizeLegacyAsyncMacros.h>

namespace Aws
{
namespace Personalize
{
  /**
   * <p>Amazon Personalize is a machine learning service that makes it easy to add
   * individualized recommendations to customers.</p>
   */
  class AWS_PERSONALIZE_API PersonalizeClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a batch inference job. The operation can handle up to 50 million
         * records and the input file must be in JSON format. For more information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-batch-inference-job.html">Creating
         * a batch inference job</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBatchInferenceJobOutcome CreateBatchInferenceJob(const Model::CreateBatchInferenceJobRequest& request) const;


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
         * <p>Creates a recommendation filter. For more information, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
         * recommendations and user segments</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;


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
         * <p>Deletes a dataset group. Before you delete a dataset group, you must delete
         * the following:</p> <ul> <li> <p>All associated event trackers.</p> </li> <li>
         * <p>All associated solutions.</p> </li> <li> <p>All datasets in the dataset
         * group.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteDatasetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetGroupOutcome DeleteDatasetGroup(const Model::DeleteDatasetGroupRequest& request) const;


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
         * <p>Deletes a filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;


        /**
         * <p>Deletes a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricAttributionOutcome DeleteMetricAttribution(const Model::DeleteMetricAttributionRequest& request) const;


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
         * <p>Deletes a schema. Before deleting a schema, you must delete all datasets
         * referencing the schema. For more information on schemas, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;


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
         * <p>Describes the given algorithm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;


        /**
         * <p>Gets the properties of a batch inference job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate the recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchInferenceJobOutcome DescribeBatchInferenceJob(const Model::DescribeBatchInferenceJobRequest& request) const;


        /**
         * <p>Gets the properties of a batch segment job including name, Amazon Resource
         * Name (ARN), status, input and output configurations, and the ARN of the solution
         * version used to generate segments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeBatchSegmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBatchSegmentJobOutcome DescribeBatchSegmentJob(const Model::DescribeBatchSegmentJobRequest& request) const;


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
         * <p>Describes the given dataset. For more information on datasets, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDataset.html">CreateDataset</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;


        /**
         * <p>Describes the dataset export job created by <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetExportJob.html">CreateDatasetExportJob</a>,
         * including the export job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetExportJobOutcome DescribeDatasetExportJob(const Model::DescribeDatasetExportJobRequest& request) const;


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
         * <p>Describes the dataset import job created by <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>,
         * including the import job status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeDatasetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetImportJobOutcome DescribeDatasetImportJob(const Model::DescribeDatasetImportJobRequest& request) const;


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
         * <p>Describes the given feature transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFeatureTransformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureTransformationOutcome DescribeFeatureTransformation(const Model::DescribeFeatureTransformationRequest& request) const;


        /**
         * <p>Describes a filter's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFilterOutcome DescribeFilter(const Model::DescribeFilterRequest& request) const;


        /**
         * <p>Describes a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricAttributionOutcome DescribeMetricAttribution(const Model::DescribeMetricAttributionRequest& request) const;


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
         * <p>Describes a schema. For more information on schemas, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;


        /**
         * <p>Describes a solution. For more information on solutions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DescribeSolution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSolutionOutcome DescribeSolution(const Model::DescribeSolutionRequest& request) const;


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
         * <p>Gets the metrics for the specified solution version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/GetSolutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolutionMetricsOutcome GetSolutionMetrics(const Model::GetSolutionMetricsRequest& request) const;


        /**
         * <p>Gets a list of the batch inference jobs that have been performed off of a
         * solution version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchInferenceJobsOutcome ListBatchInferenceJobs(const Model::ListBatchInferenceJobsRequest& request) const;


        /**
         * <p>Gets a list of the batch segment jobs that have been performed off of a
         * solution version that you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListBatchSegmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBatchSegmentJobsOutcome ListBatchSegmentJobs(const Model::ListBatchSegmentJobsRequest& request) const;


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
         * <p>Lists all filters that belong to a given dataset group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;


        /**
         * <p>Lists the metrics for the metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListMetricAttributionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricAttributionMetricsOutcome ListMetricAttributionMetrics(const Model::ListMetricAttributionMetricsRequest& request) const;


        /**
         * <p>Lists metric attributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListMetricAttributions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricAttributionsOutcome ListMetricAttributions(const Model::ListMetricAttributionsRequest& request) const;


        /**
         * <p>Returns a list of available recipes. The response provides the properties for
         * each recipe, including the recipe's Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecipesOutcome ListRecipes(const Model::ListRecipesRequest& request) const;


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
         * <p>Returns a list of solution versions for the given solution. When a solution
         * is not specified, all the solution versions associated with the account are
         * listed. The response provides the properties for each solution version,
         * including the Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListSolutionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolutionVersionsOutcome ListSolutionVersions(const Model::ListSolutionVersionsRequest& request) const;


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
         * <p>Get a list of <a
         * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
         * attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Starts a recommender that is INACTIVE. Starting a recommender does not create
         * any new models, but resumes billing and automatic retraining for the
         * recommender.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StartRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommenderOutcome StartRecommender(const Model::StartRecommenderRequest& request) const;


        /**
         * <p>Stops a recommender that is ACTIVE. Stopping a recommender halts billing and
         * automatic retraining for the recommender.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/StopRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRecommenderOutcome StopRecommender(const Model::StopRecommenderRequest& request) const;


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
         * <p>Add a list of tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Remove <a
         * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
         * that are attached to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates a metric attribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateMetricAttribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMetricAttributionOutcome UpdateMetricAttribution(const Model::UpdateMetricAttributionRequest& request) const;


        /**
         * <p>Updates the recommender to modify the recommender
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/UpdateRecommender">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommenderOutcome UpdateRecommender(const Model::UpdateRecommenderRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PersonalizeEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PersonalizeClientConfiguration& clientConfiguration);

      PersonalizeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PersonalizeEndpointProviderBase> m_endpointProvider;
  };

} // namespace Personalize
} // namespace Aws
