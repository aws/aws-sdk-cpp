/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>

namespace Aws
{
namespace CloudTrail
{
  /**
   * <fullname>CloudTrail</fullname> <p>This is the CloudTrail API Reference. It
   * provides descriptions of actions, data types, common parameters, and common
   * errors for CloudTrail.</p> <p>CloudTrail is a web service that records Amazon
   * Web Services API calls for your Amazon Web Services account and delivers log
   * files to an Amazon S3 bucket. The recorded information includes the identity of
   * the user, the start time of the Amazon Web Services API call, the source IP
   * address, the request parameters, and the response elements returned by the
   * service.</p>  <p>As an alternative to the API, you can use one of the
   * Amazon Web Services SDKs, which consist of libraries and sample code for various
   * programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The
   * SDKs provide programmatic access to CloudTrail. For example, the SDKs handle
   * cryptographically signing requests, managing errors, and retrying requests
   * automatically. For more information about the Amazon Web Services SDKs,
   * including how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
   * Services</a>.</p>  <p>See the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail
   * User Guide</a> for information about the data that is included with each Amazon
   * Web Services API call listed in the log files.</p>
   */
  class AWS_CLOUDTRAIL_API CloudTrailClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration(),
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudTrailEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudTrailEndpointProvider>(ALLOCATION_TAG),
                         const Aws::CloudTrail::CloudTrailClientConfiguration& clientConfiguration = Aws::CloudTrail::CloudTrailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudTrailClient();

        /**
         * <p>Adds one or more tags to a trail or event data store, up to a limit of 50.
         * Overwrites an existing tag's value when a new value is specified for an existing
         * tag key. Tag key names must be unique for a trail; you cannot have two keys with
         * the same name but different values. If you specify a key without a value, the
         * tag will be created with the specified key and a value of null. You can tag a
         * trail or event data store that applies to all Amazon Web Services Regions only
         * from the Region in which the trail or event data store was created (also known
         * as its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a query if the query is not in a terminated state, such as
         * <code>CANCELLED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
         * <code>FINISHED</code>. You must specify an ARN value for
         * <code>EventDataStore</code>. The ID of the query that you want to cancel is also
         * required. When you run <code>CancelQuery</code>, the query status might show as
         * <code>CANCELLED</code> even if the operation is not yet finished.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

        /**
         * A Callable wrapper for CancelQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelQueryOutcomeCallable CancelQueryCallable(const Model::CancelQueryRequest& request) const;

        /**
         * An Async wrapper for CancelQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelQueryAsync(const Model::CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventDataStoreOutcome CreateEventDataStore(const Model::CreateEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventDataStoreOutcomeCallable CreateEventDataStoreCallable(const Model::CreateEventDataStoreRequest& request) const;

        /**
         * An Async wrapper for CreateEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventDataStoreAsync(const Model::CreateEventDataStoreRequest& request, const CreateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrailOutcome CreateTrail(const Model::CreateTrailRequest& request) const;

        /**
         * A Callable wrapper for CreateTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrailOutcomeCallable CreateTrailCallable(const Model::CreateTrailRequest& request) const;

        /**
         * An Async wrapper for CreateTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrailAsync(const Model::CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the event data store specified by <code>EventDataStore</code>, which
         * accepts an event data store ARN. After you run
         * <code>DeleteEventDataStore</code>, the event data store enters a
         * <code>PENDING_DELETION</code> state, and is automatically deleted after a wait
         * period of seven days. <code>TerminationProtectionEnabled</code> must be set to
         * <code>False</code> on the event data store; this operation cannot work if
         * <code>TerminationProtectionEnabled</code> is <code>True</code>.</p> <p>After you
         * run <code>DeleteEventDataStore</code> on an event data store, you cannot run
         * <code>ListQueries</code>, <code>DescribeQuery</code>, or
         * <code>GetQueryResults</code> on queries that are using an event data store in a
         * <code>PENDING_DELETION</code> state. An event data store in the
         * <code>PENDING_DELETION</code> state does not incur costs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventDataStoreOutcome DeleteEventDataStore(const Model::DeleteEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventDataStoreOutcomeCallable DeleteEventDataStoreCallable(const Model::DeleteEventDataStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventDataStoreAsync(const Model::DeleteEventDataStoreRequest& request, const DeleteEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrailOutcome DeleteTrail(const Model::DeleteTrailRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrailOutcomeCallable DeleteTrailCallable(const Model::DeleteTrailRequest& request) const;

        /**
         * An Async wrapper for DeleteTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrailAsync(const Model::DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes CloudTrail delegated administrator permissions from a member account
         * in an organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeregisterOrganizationDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterOrganizationDelegatedAdminOutcome DeregisterOrganizationDelegatedAdmin(const Model::DeregisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for DeregisterOrganizationDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterOrganizationDelegatedAdminOutcomeCallable DeregisterOrganizationDelegatedAdminCallable(const Model::DeregisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * An Async wrapper for DeregisterOrganizationDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterOrganizationDelegatedAdminAsync(const Model::DeregisterOrganizationDelegatedAdminRequest& request, const DeregisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a query, including query run time in milliseconds,
         * number of events scanned and matched, and query status. You must specify an ARN
         * for <code>EventDataStore</code>, and a value for
         * <code>QueryID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueryOutcome DescribeQuery(const Model::DescribeQueryRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeQueryOutcomeCallable DescribeQueryCallable(const Model::DescribeQueryRequest& request) const;

        /**
         * An Async wrapper for DescribeQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeQueryAsync(const Model::DescribeQueryRequest& request, const DescribeQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves settings for one or more trails associated with the current region
         * for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrailsOutcome DescribeTrails(const Model::DescribeTrailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrailsOutcomeCallable DescribeTrailsCallable(const Model::DescribeTrailsRequest& request) const;

        /**
         * An Async wrapper for DescribeTrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrailsAsync(const Model::DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about a specific channel. Amazon Web Services services
         * create service-linked channels to get information about CloudTrail events on
         * your behalf. For more information about service-linked channels, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/viewing-service-linked-channels.html">Viewing
         * service-linked channels for CloudTrail by using the CLI</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelOutcome GetChannel(const Model::GetChannelRequest& request) const;

        /**
         * A Callable wrapper for GetChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelOutcomeCallable GetChannelCallable(const Model::GetChannelRequest& request) const;

        /**
         * An Async wrapper for GetChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelAsync(const Model::GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an event data store specified as either an ARN or
         * the ID portion of the ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventDataStoreOutcome GetEventDataStore(const Model::GetEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for GetEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventDataStoreOutcomeCallable GetEventDataStoreCallable(const Model::GetEventDataStoreRequest& request) const;

        /**
         * An Async wrapper for GetEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventDataStoreAsync(const Model::GetEventDataStoreRequest& request, const GetEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings for the event selectors that you configured for your
         * trail. The information returned for your event selectors includes the
         * following:</p> <ul> <li> <p>If your event selector includes read-only events,
         * write-only events, or all events. This applies to both management events and
         * data events.</p> </li> <li> <p>If your event selector includes management
         * events.</p> </li> <li> <p>If your event selector includes data events, the
         * resources on which you are logging data events.</p> </li> </ul> <p>For more
         * information about logging management and data events, see the following topics
         * in the <i>CloudTrail User Guide</i>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Logging
         * management events for trails </a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events for trails </a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSelectorsOutcome GetEventSelectors(const Model::GetEventSelectorsRequest& request) const;

        /**
         * A Callable wrapper for GetEventSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSelectorsOutcomeCallable GetEventSelectorsCallable(const Model::GetEventSelectorsRequest& request) const;

        /**
         * An Async wrapper for GetEventSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSelectorsAsync(const Model::GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about a specific import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportOutcome GetImport(const Model::GetImportRequest& request) const;

        /**
         * A Callable wrapper for GetImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportOutcomeCallable GetImportCallable(const Model::GetImportRequest& request) const;

        /**
         * An Async wrapper for GetImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportAsync(const Model::GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings for the Insights event selectors that you configured
         * for your trail. <code>GetInsightSelectors</code> shows if CloudTrail Insights
         * event logging is enabled on the trail, and if it is, which insight types are
         * enabled. If you run <code>GetInsightSelectors</code> on a trail that does not
         * have Insights events enabled, the operation throws the exception
         * <code>InsightNotEnabledException</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights Events for Trails </a> in the <i>CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightSelectorsOutcome GetInsightSelectors(const Model::GetInsightSelectorsRequest& request) const;

        /**
         * A Callable wrapper for GetInsightSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightSelectorsOutcomeCallable GetInsightSelectorsCallable(const Model::GetInsightSelectorsRequest& request) const;

        /**
         * An Async wrapper for GetInsightSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightSelectorsAsync(const Model::GetInsightSelectorsRequest& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets event data results of a query. You must specify the <code>QueryID</code>
         * value returned by the <code>StartQuery</code> operation, and an ARN for
         * <code>EventDataStore</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const Model::GetQueryResultsRequest& request) const;

        /**
         * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryResultsAsync(const Model::GetQueryResultsRequest& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns settings information for a specified trail.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrailOutcome GetTrail(const Model::GetTrailRequest& request) const;

        /**
         * A Callable wrapper for GetTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrailOutcomeCallable GetTrailCallable(const Model::GetTrailRequest& request) const;

        /**
         * An Async wrapper for GetTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrailAsync(const Model::GetTrailRequest& request, const GetTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrailStatusOutcome GetTrailStatus(const Model::GetTrailStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTrailStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrailStatusOutcomeCallable GetTrailStatusCallable(const Model::GetTrailStatusRequest& request) const;

        /**
         * An Async wrapper for GetTrailStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrailStatusAsync(const Model::GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the channels in the current account, and their source names. Amazon
         * Web Services services create service-linked channels get information about
         * CloudTrail events on your behalf. For more information about service-linked
         * channels, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/viewing-service-linked-channels.html">Viewing
         * service-linked channels for CloudTrail by using the CLI</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all event data stores in the account, in the
         * current region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListEventDataStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventDataStoresOutcome ListEventDataStores(const Model::ListEventDataStoresRequest& request) const;

        /**
         * A Callable wrapper for ListEventDataStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventDataStoresOutcomeCallable ListEventDataStoresCallable(const Model::ListEventDataStoresRequest& request) const;

        /**
         * An Async wrapper for ListEventDataStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventDataStoresAsync(const Model::ListEventDataStoresRequest& request, const ListEventDataStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of failures for the specified import. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListImportFailures">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportFailuresOutcome ListImportFailures(const Model::ListImportFailuresRequest& request) const;

        /**
         * A Callable wrapper for ListImportFailures that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportFailuresOutcomeCallable ListImportFailuresCallable(const Model::ListImportFailuresRequest& request) const;

        /**
         * An Async wrapper for ListImportFailures that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportFailuresAsync(const Model::ListImportFailuresRequest& request, const ListImportFailuresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information on all imports, or a select set of imports by
         * <code>ImportStatus</code> or <code>Destination</code>. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportsOutcomeCallable ListImportsCallable(const Model::ListImportsRequest& request) const;

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportsAsync(const Model::ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> 
         * <p>CloudTrail uses different private and public key pairs per region. Each
         * digest file is signed with a private key unique to its region. When you validate
         * a digest file from a specific region, you must look in the same region for its
         * corresponding public key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request) const;

        /**
         * A Callable wrapper for ListPublicKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeysOutcomeCallable ListPublicKeysCallable(const Model::ListPublicKeysRequest& request) const;

        /**
         * An Async wrapper for ListPublicKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeysAsync(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of queries and query statuses for the past seven days. You
         * must specify an ARN value for <code>EventDataStore</code>. Optionally, to
         * shorten the list of results, you can specify a time range, formatted as
         * timestamps, by adding <code>StartTime</code> and <code>EndTime</code>
         * parameters, and a <code>QueryStatus</code> value. Valid values for
         * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
         * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
         * <code>CANCELLED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueriesOutcome ListQueries(const Model::ListQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueriesOutcomeCallable ListQueriesCallable(const Model::ListQueriesRequest& request) const;

        /**
         * An Async wrapper for ListQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueriesAsync(const Model::ListQueriesRequest& request, const ListQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the trail or event data store in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists trails that are in the current account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrailsOutcome ListTrails(const Model::ListTrailsRequest& request) const;

        /**
         * A Callable wrapper for ListTrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrailsOutcomeCallable ListTrailsCallable(const Model::ListTrailsRequest& request) const;

        /**
         * An Async wrapper for ListTrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrailsAsync(const Model::ListTrailsRequest& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> or <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
         * Insights events</a> that are captured by CloudTrail. You can look up events that
         * occurred in a region within the last 90 days. Lookup supports the following
         * attributes for management events:</p> <ul> <li> <p>Amazon Web Services access
         * key</p> </li> <li> <p>Event ID</p> </li> <li> <p>Event name</p> </li> <li>
         * <p>Event source</p> </li> <li> <p>Read only</p> </li> <li> <p>Resource name</p>
         * </li> <li> <p>Resource type</p> </li> <li> <p>User name</p> </li> </ul>
         * <p>Lookup supports the following attributes for Insights events:</p> <ul> <li>
         * <p>Event ID</p> </li> <li> <p>Event name</p> </li> <li> <p>Event source</p>
         * </li> </ul> <p>All attributes are optional. The default number of results
         * returned is 50, with a maximum of 50 possible. The response includes a token
         * that you can use to get the next page of results.</p>  <p>The rate of
         * lookup requests is limited to two per second, per account, per region. If this
         * limit is exceeded, a throttling error occurs.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupEventsOutcome LookupEvents(const Model::LookupEventsRequest& request) const;

        /**
         * A Callable wrapper for LookupEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupEventsOutcomeCallable LookupEventsCallable(const Model::LookupEventsRequest& request) const;

        /**
         * An Async wrapper for LookupEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an event selector or advanced event selectors for your trail. Use
         * event selectors or advanced event selectors to specify management and data event
         * settings for your trail. By default, trails created without specific event
         * selectors are configured to log all read and write management events, and no
         * data events.</p> <p>When an event occurs in your account, CloudTrail evaluates
         * the event selectors or advanced event selectors in all trails. For each trail,
         * if the event matches any event selector, the trail processes and logs the event.
         * If the event doesn't match any event selector, the trail doesn't log the
         * event.</p> <p>Example</p> <ol> <li> <p>You create an event selector for a trail
         * and specify that you want write-only events.</p> </li> <li> <p>The EC2
         * <code>GetConsoleOutput</code> and <code>RunInstances</code> API operations occur
         * in your account.</p> </li> <li> <p>CloudTrail evaluates whether the events match
         * your event selectors.</p> </li> <li> <p>The <code>RunInstances</code> is a
         * write-only event and it matches your event selector. The trail logs the
         * event.</p> </li> <li> <p>The <code>GetConsoleOutput</code> is a read-only event
         * that doesn't match your event selector. The trail doesn't log the event. </p>
         * </li> </ol> <p>The <code>PutEventSelectors</code> operation must be called from
         * the region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> exception is thrown.</p> <p>You can
         * configure up to five event selectors for each trail. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-events-with-cloudtrail.html">Logging
         * management events for trails </a>, <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events for trails </a>, and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Quotas
         * in CloudTrail</a> in the <i>CloudTrail User Guide</i>.</p> <p>You can add
         * advanced event selectors, and conditions for your advanced event selectors, up
         * to a maximum of 500 values for all conditions and selectors on a trail. You can
         * use either <code>AdvancedEventSelectors</code> or <code>EventSelectors</code>,
         * but not both. If you apply <code>AdvancedEventSelectors</code> to a trail, any
         * existing <code>EventSelectors</code> are overwritten. For more information about
         * advanced event selectors, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
         * data events for trails</a> in the <i>CloudTrail User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventSelectorsOutcome PutEventSelectors(const Model::PutEventSelectorsRequest& request) const;

        /**
         * A Callable wrapper for PutEventSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventSelectorsOutcomeCallable PutEventSelectorsCallable(const Model::PutEventSelectorsRequest& request) const;

        /**
         * An Async wrapper for PutEventSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventSelectorsAsync(const Model::PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lets you enable Insights event logging by specifying the Insights selectors
         * that you want to enable on an existing trail. You also use
         * <code>PutInsightSelectors</code> to turn off Insights event logging, by passing
         * an empty list of insight types. The valid Insights event types in this release
         * are <code>ApiErrorRateInsight</code> and
         * <code>ApiCallRateInsight</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInsightSelectorsOutcome PutInsightSelectors(const Model::PutInsightSelectorsRequest& request) const;

        /**
         * A Callable wrapper for PutInsightSelectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInsightSelectorsOutcomeCallable PutInsightSelectorsCallable(const Model::PutInsightSelectorsRequest& request) const;

        /**
         * An Async wrapper for PutInsightSelectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInsightSelectorsAsync(const Model::PutInsightSelectorsRequest& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an organization’s member account as the CloudTrail delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RegisterOrganizationDelegatedAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterOrganizationDelegatedAdminOutcome RegisterOrganizationDelegatedAdmin(const Model::RegisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * A Callable wrapper for RegisterOrganizationDelegatedAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterOrganizationDelegatedAdminOutcomeCallable RegisterOrganizationDelegatedAdminCallable(const Model::RegisterOrganizationDelegatedAdminRequest& request) const;

        /**
         * An Async wrapper for RegisterOrganizationDelegatedAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterOrganizationDelegatedAdminAsync(const Model::RegisterOrganizationDelegatedAdminRequest& request, const RegisterOrganizationDelegatedAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from a trail or event data store.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a deleted event data store specified by <code>EventDataStore</code>,
         * which accepts an event data store ARN. You can only restore a deleted event data
         * store within the seven-day wait period after deletion. Restoring an event data
         * store can take several minutes, depending on the size of the event data
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RestoreEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreEventDataStoreOutcome RestoreEventDataStore(const Model::RestoreEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for RestoreEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreEventDataStoreOutcomeCallable RestoreEventDataStoreCallable(const Model::RestoreEventDataStoreRequest& request) const;

        /**
         * An Async wrapper for RestoreEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreEventDataStoreAsync(const Model::RestoreEventDataStoreRequest& request, const RestoreEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts an import of logged trail events from a source S3 bucket to a
         * destination event data store. By default, CloudTrail only imports events
         * contained in the S3 bucket's <code>CloudTrail</code> prefix and the prefixes
         * inside the <code>CloudTrail</code> prefix, and does not check prefixes for other
         * Amazon Web Services services. If you want to import CloudTrail events contained
         * in another prefix, you must include the prefix in the
         * <code>S3LocationUri</code>. For more considerations about importing trail
         * events, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-copy-trail-to-lake.html#cloudtrail-trail-copy-considerations">Considerations</a>.
         * </p> <p> When you start a new import, the <code>Destinations</code> and
         * <code>ImportSource</code> parameters are required. Before starting a new import,
         * disable any access control lists (ACLs) attached to the source S3 bucket. For
         * more information about disabling ACLs, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">Controlling
         * ownership of objects and disabling ACLs for your bucket</a>. </p> <p> When you
         * retry an import, the <code>ImportID</code> parameter is required. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

        /**
         * A Callable wrapper for StartImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportOutcomeCallable StartImportCallable(const Model::StartImportRequest& request) const;

        /**
         * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportAsync(const Model::StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the recording of Amazon Web Services API calls and log file delivery
         * for a trail. For a trail that is enabled in all regions, this operation must be
         * called from the region in which the trail was created. This operation cannot be
         * called on the shadow trails (replicated trails in other regions) of a trail that
         * is enabled in all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLoggingOutcome StartLogging(const Model::StartLoggingRequest& request) const;

        /**
         * A Callable wrapper for StartLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLoggingOutcomeCallable StartLoggingCallable(const Model::StartLoggingRequest& request) const;

        /**
         * An Async wrapper for StartLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLoggingAsync(const Model::StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a CloudTrail Lake query. The required <code>QueryStatement</code>
         * parameter provides your SQL query, enclosed in single quotation marks. Use the
         * optional <code>DeliveryS3Uri</code> parameter to deliver the query results to an
         * S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryOutcome StartQuery(const Model::StartQueryRequest& request) const;

        /**
         * A Callable wrapper for StartQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartQueryOutcomeCallable StartQueryCallable(const Model::StartQueryRequest& request) const;

        /**
         * An Async wrapper for StartQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartQueryAsync(const Model::StartQueryRequest& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops a specified import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StopImportOutcome StopImport(const Model::StopImportRequest& request) const;

        /**
         * A Callable wrapper for StopImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopImportOutcomeCallable StopImportCallable(const Model::StopImportRequest& request) const;

        /**
         * An Async wrapper for StopImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopImportAsync(const Model::StopImportRequest& request, const StopImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends the recording of Amazon Web Services API calls and log file delivery
         * for the specified trail. Under most circumstances, there is no need to use this
         * action. You can update a trail without stopping it first. This action is the
         * only way to stop recording. For a trail enabled in all regions, this operation
         * must be called from the region in which the trail was created, or an
         * <code>InvalidHomeRegionException</code> will occur. This operation cannot be
         * called on the shadow trails (replicated trails in other regions) of a trail
         * enabled in all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLoggingOutcome StopLogging(const Model::StopLoggingRequest& request) const;

        /**
         * A Callable wrapper for StopLogging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopLoggingOutcomeCallable StopLoggingCallable(const Model::StopLoggingRequest& request) const;

        /**
         * An Async wrapper for StopLogging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopLoggingAsync(const Model::StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an event data store. The required <code>EventDataStore</code> value
         * is an ARN or the ID portion of the ARN. Other parameters are optional, but at
         * least one optional parameter must be specified, or CloudTrail throws an error.
         * <code>RetentionPeriod</code> is in days, and valid values are integers between
         * 90 and 2557. By default, <code>TerminationProtection</code> is enabled.
         * <code>AdvancedEventSelectors</code> includes or excludes management and data
         * events in your event data store; for more information about
         * <code>AdvancedEventSelectors</code>, see
         * <a>PutEventSelectorsRequest$AdvancedEventSelectors</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateEventDataStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventDataStoreOutcome UpdateEventDataStore(const Model::UpdateEventDataStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventDataStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventDataStoreOutcomeCallable UpdateEventDataStoreCallable(const Model::UpdateEventDataStoreRequest& request) const;

        /**
         * An Async wrapper for UpdateEventDataStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventDataStoreAsync(const Model::UpdateEventDataStoreRequest& request, const UpdateEventDataStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates trail settings that control what events you are logging, and how to
         * handle log files. Changes to a trail do not require stopping the CloudTrail
         * service. Use this action to designate an existing bucket for log delivery. If
         * the existing bucket has previously been a target for CloudTrail log files, an
         * IAM policy exists for the bucket. <code>UpdateTrail</code> must be called from
         * the region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrailOutcome UpdateTrail(const Model::UpdateTrailRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrailOutcomeCallable UpdateTrailCallable(const Model::UpdateTrailRequest& request) const;

        /**
         * An Async wrapper for UpdateTrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrailAsync(const Model::UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudTrailEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudTrailClient>;
      void init(const CloudTrailClientConfiguration& clientConfiguration);

      CloudTrailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudTrailEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudTrail
} // namespace Aws
