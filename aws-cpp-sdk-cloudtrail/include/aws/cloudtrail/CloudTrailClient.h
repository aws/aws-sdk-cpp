/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudtrail/model/AddTagsResult.h>
#include <aws/cloudtrail/model/CreateTrailResult.h>
#include <aws/cloudtrail/model/DeleteTrailResult.h>
#include <aws/cloudtrail/model/DescribeTrailsResult.h>
#include <aws/cloudtrail/model/GetEventSelectorsResult.h>
#include <aws/cloudtrail/model/GetInsightSelectorsResult.h>
#include <aws/cloudtrail/model/GetTrailResult.h>
#include <aws/cloudtrail/model/GetTrailStatusResult.h>
#include <aws/cloudtrail/model/ListPublicKeysResult.h>
#include <aws/cloudtrail/model/ListTagsResult.h>
#include <aws/cloudtrail/model/ListTrailsResult.h>
#include <aws/cloudtrail/model/LookupEventsResult.h>
#include <aws/cloudtrail/model/PutEventSelectorsResult.h>
#include <aws/cloudtrail/model/PutInsightSelectorsResult.h>
#include <aws/cloudtrail/model/RemoveTagsResult.h>
#include <aws/cloudtrail/model/StartLoggingResult.h>
#include <aws/cloudtrail/model/StopLoggingResult.h>
#include <aws/cloudtrail/model/UpdateTrailResult.h>
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

namespace CloudTrail
{

namespace Model
{
        class AddTagsRequest;
        class CreateTrailRequest;
        class DeleteTrailRequest;
        class DescribeTrailsRequest;
        class GetEventSelectorsRequest;
        class GetInsightSelectorsRequest;
        class GetTrailRequest;
        class GetTrailStatusRequest;
        class ListPublicKeysRequest;
        class ListTagsRequest;
        class ListTrailsRequest;
        class LookupEventsRequest;
        class PutEventSelectorsRequest;
        class PutInsightSelectorsRequest;
        class RemoveTagsRequest;
        class StartLoggingRequest;
        class StopLoggingRequest;
        class UpdateTrailRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, CloudTrailError> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateTrailResult, CloudTrailError> CreateTrailOutcome;
        typedef Aws::Utils::Outcome<DeleteTrailResult, CloudTrailError> DeleteTrailOutcome;
        typedef Aws::Utils::Outcome<DescribeTrailsResult, CloudTrailError> DescribeTrailsOutcome;
        typedef Aws::Utils::Outcome<GetEventSelectorsResult, CloudTrailError> GetEventSelectorsOutcome;
        typedef Aws::Utils::Outcome<GetInsightSelectorsResult, CloudTrailError> GetInsightSelectorsOutcome;
        typedef Aws::Utils::Outcome<GetTrailResult, CloudTrailError> GetTrailOutcome;
        typedef Aws::Utils::Outcome<GetTrailStatusResult, CloudTrailError> GetTrailStatusOutcome;
        typedef Aws::Utils::Outcome<ListPublicKeysResult, CloudTrailError> ListPublicKeysOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, CloudTrailError> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListTrailsResult, CloudTrailError> ListTrailsOutcome;
        typedef Aws::Utils::Outcome<LookupEventsResult, CloudTrailError> LookupEventsOutcome;
        typedef Aws::Utils::Outcome<PutEventSelectorsResult, CloudTrailError> PutEventSelectorsOutcome;
        typedef Aws::Utils::Outcome<PutInsightSelectorsResult, CloudTrailError> PutInsightSelectorsOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, CloudTrailError> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<StartLoggingResult, CloudTrailError> StartLoggingOutcome;
        typedef Aws::Utils::Outcome<StopLoggingResult, CloudTrailError> StopLoggingOutcome;
        typedef Aws::Utils::Outcome<UpdateTrailResult, CloudTrailError> UpdateTrailOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
        typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
        typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
        typedef std::future<GetEventSelectorsOutcome> GetEventSelectorsOutcomeCallable;
        typedef std::future<GetInsightSelectorsOutcome> GetInsightSelectorsOutcomeCallable;
        typedef std::future<GetTrailOutcome> GetTrailOutcomeCallable;
        typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
        typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListTrailsOutcome> ListTrailsOutcomeCallable;
        typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
        typedef std::future<PutEventSelectorsOutcome> PutEventSelectorsOutcomeCallable;
        typedef std::future<PutInsightSelectorsOutcome> PutInsightSelectorsOutcomeCallable;
        typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
        typedef std::future<StartLoggingOutcome> StartLoggingOutcomeCallable;
        typedef std::future<StopLoggingOutcome> StopLoggingOutcomeCallable;
        typedef std::future<UpdateTrailOutcome> UpdateTrailOutcomeCallable;
} // namespace Model

  class CloudTrailClient;

    typedef std::function<void(const CloudTrailClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::CreateTrailRequest&, const Model::CreateTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DeleteTrailRequest&, const Model::DeleteTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::DescribeTrailsRequest&, const Model::DescribeTrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrailsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetEventSelectorsRequest&, const Model::GetEventSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetInsightSelectorsRequest&, const Model::GetInsightSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailRequest&, const Model::GetTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailStatusRequest&, const Model::GetTrailStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailStatusResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListPublicKeysRequest&, const Model::ListPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeysResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTrailsRequest&, const Model::ListTrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrailsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::LookupEventsRequest&, const Model::LookupEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupEventsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutEventSelectorsRequest&, const Model::PutEventSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutInsightSelectorsRequest&, const Model::PutInsightSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInsightSelectorsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StartLoggingRequest&, const Model::StartLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLoggingResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::StopLoggingRequest&, const Model::StopLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLoggingResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::UpdateTrailRequest&, const Model::UpdateTrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrailResponseReceivedHandler;

  /**
   * <fullname>AWS CloudTrail</fullname> <p>This is the CloudTrail API Reference. It
   * provides descriptions of actions, data types, common parameters, and common
   * errors for CloudTrail.</p> <p>CloudTrail is a web service that records AWS API
   * calls for your AWS account and delivers log files to an Amazon S3 bucket. The
   * recorded information includes the identity of the user, the start time of the
   * AWS API call, the source IP address, the request parameters, and the response
   * elements returned by the service.</p>  <p>As an alternative to the API,
   * you can use one of the AWS SDKs, which consist of libraries and sample code for
   * various programming languages and platforms (Java, Ruby, .NET, iOS, Android,
   * etc.). The SDKs provide a convenient way to create programmatic access to
   * AWSCloudTrail. For example, the SDKs take care of cryptographically signing
   * requests, managing errors, and retrying requests automatically. For information
   * about the AWS SDKs, including how to download and install them, see the <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services page</a>.</p>
   *  <p>See the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS
   * CloudTrail User Guide</a> for information about the data that is included with
   * each AWS API call listed in the log files.</p>
   */
  class AWS_CLOUDTRAIL_API CloudTrailClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudTrailClient();


        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Overwrites an existing
         * tag's value when a new value is specified for an existing tag key. Tag key names
         * must be unique for a trail; you cannot have two keys with the same name but
         * different values. If you specify a key without a value, the tag will be created
         * with the specified key and a value of null. You can tag a trail that applies to
         * all AWS Regions only from the Region in which the trail was created (also known
         * as its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Overwrites an existing
         * tag's value when a new value is specified for an existing tag key. Tag key names
         * must be unique for a trail; you cannot have two keys with the same name but
         * different values. If you specify a key without a value, the tag will be created
         * with the specified key and a value of null. You can tag a trail that applies to
         * all AWS Regions only from the Region in which the trail was created (also known
         * as its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Overwrites an existing
         * tag's value when a new value is specified for an existing tag key. Tag key names
         * must be unique for a trail; you cannot have two keys with the same name but
         * different values. If you specify a key without a value, the tag will be created
         * with the specified key and a value of null. You can tag a trail that applies to
         * all AWS Regions only from the Region in which the trail was created (also known
         * as its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrailOutcome CreateTrail(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrailOutcomeCallable CreateTrailCallable(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrailAsync(const Model::CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteTrail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrailOutcomeCallable DeleteTrailCallable(const Model::DeleteTrailRequest& request) const;

        /**
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeleteTrail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrailAsync(const Model::DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves settings for one or more trails associated with the current region
         * for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrailsOutcome DescribeTrails(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for one or more trails associated with the current region
         * for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrailsOutcomeCallable DescribeTrailsCallable(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for one or more trails associated with the current region
         * for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrailsAsync(const Model::DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings for the event selectors that you configured for your
         * trail. The information returned for your event selectors includes the
         * following:</p> <ul> <li> <p>If your event selector includes read-only events,
         * write-only events, or all events. This applies to both management events and
         * data events.</p> </li> <li> <p>If your event selector includes management
         * events.</p> </li> <li> <p>If your event selector includes data events, the
         * Amazon S3 objects or AWS Lambda functions that you are logging for data
         * events.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSelectorsOutcome GetEventSelectors(const Model::GetEventSelectorsRequest& request) const;

        /**
         * <p>Describes the settings for the event selectors that you configured for your
         * trail. The information returned for your event selectors includes the
         * following:</p> <ul> <li> <p>If your event selector includes read-only events,
         * write-only events, or all events. This applies to both management events and
         * data events.</p> </li> <li> <p>If your event selector includes management
         * events.</p> </li> <li> <p>If your event selector includes data events, the
         * Amazon S3 objects or AWS Lambda functions that you are logging for data
         * events.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSelectorsOutcomeCallable GetEventSelectorsCallable(const Model::GetEventSelectorsRequest& request) const;

        /**
         * <p>Describes the settings for the event selectors that you configured for your
         * trail. The information returned for your event selectors includes the
         * following:</p> <ul> <li> <p>If your event selector includes read-only events,
         * write-only events, or all events. This applies to both management events and
         * data events.</p> </li> <li> <p>If your event selector includes management
         * events.</p> </li> <li> <p>If your event selector includes data events, the
         * Amazon S3 objects or AWS Lambda functions that you are logging for data
         * events.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSelectorsAsync(const Model::GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings for the Insights event selectors that you configured
         * for your trail. <code>GetInsightSelectors</code> shows if CloudTrail Insights
         * event logging is enabled on the trail, and if it is, which insight types are
         * enabled. If you run <code>GetInsightSelectors</code> on a trail that does not
         * have Insights events enabled, the operation throws the exception
         * <code>InsightNotEnabledException</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightSelectorsOutcome GetInsightSelectors(const Model::GetInsightSelectorsRequest& request) const;

        /**
         * <p>Describes the settings for the Insights event selectors that you configured
         * for your trail. <code>GetInsightSelectors</code> shows if CloudTrail Insights
         * event logging is enabled on the trail, and if it is, which insight types are
         * enabled. If you run <code>GetInsightSelectors</code> on a trail that does not
         * have Insights events enabled, the operation throws the exception
         * <code>InsightNotEnabledException</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetInsightSelectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInsightSelectorsOutcomeCallable GetInsightSelectorsCallable(const Model::GetInsightSelectorsRequest& request) const;

        /**
         * <p>Describes the settings for the Insights event selectors that you configured
         * for your trail. <code>GetInsightSelectors</code> shows if CloudTrail Insights
         * event logging is enabled on the trail, and if it is, which insight types are
         * enabled. If you run <code>GetInsightSelectors</code> on a trail that does not
         * have Insights events enabled, the operation throws the exception
         * <code>InsightNotEnabledException</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-insights-events-with-cloudtrail.html">Logging
         * CloudTrail Insights Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetInsightSelectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInsightSelectorsAsync(const Model::GetInsightSelectorsRequest& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns settings information for a specified trail.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrailOutcome GetTrail(const Model::GetTrailRequest& request) const;

        /**
         * <p>Returns settings information for a specified trail.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrailOutcomeCallable GetTrailCallable(const Model::GetTrailRequest& request) const;

        /**
         * <p>Returns settings information for a specified trail.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrailStatusOutcomeCallable GetTrailStatusCallable(const Model::GetTrailStatusRequest& request) const;

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrailStatusAsync(const Model::GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> 
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> 
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeysOutcomeCallable ListPublicKeysCallable(const Model::ListPublicKeysRequest& request) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> 
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeysAsync(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists trails that are in the current account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrailsOutcome ListTrails(const Model::ListTrailsRequest& request) const;

        /**
         * <p>Lists trails that are in the current account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTrails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrailsOutcomeCallable ListTrailsCallable(const Model::ListTrailsRequest& request) const;

        /**
         * <p>Lists trails that are in the current account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTrails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrailsAsync(const Model::ListTrailsRequest& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> or <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
         * Insights events</a> that are captured by CloudTrail. You can look up events that
         * occurred in a region within the last 90 days. Lookup supports the following
         * attributes for management events:</p> <ul> <li> <p>AWS access key</p> </li> <li>
         * <p>Event ID</p> </li> <li> <p>Event name</p> </li> <li> <p>Event source</p>
         * </li> <li> <p>Read only</p> </li> <li> <p>Resource name</p> </li> <li>
         * <p>Resource type</p> </li> <li> <p>User name</p> </li> </ul> <p>Lookup supports
         * the following attributes for Insights events:</p> <ul> <li> <p>Event ID</p>
         * </li> <li> <p>Event name</p> </li> <li> <p>Event source</p> </li> </ul> <p>All
         * attributes are optional. The default number of results returned is 50, with a
         * maximum of 50 possible. The response includes a token that you can use to get
         * the next page of results.</p>  <p>The rate of lookup requests is
         * limited to two per second, per account, per region. If this limit is exceeded, a
         * throttling error occurs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupEventsOutcome LookupEvents(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> or <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
         * Insights events</a> that are captured by CloudTrail. You can look up events that
         * occurred in a region within the last 90 days. Lookup supports the following
         * attributes for management events:</p> <ul> <li> <p>AWS access key</p> </li> <li>
         * <p>Event ID</p> </li> <li> <p>Event name</p> </li> <li> <p>Event source</p>
         * </li> <li> <p>Read only</p> </li> <li> <p>Resource name</p> </li> <li>
         * <p>Resource type</p> </li> <li> <p>User name</p> </li> </ul> <p>Lookup supports
         * the following attributes for Insights events:</p> <ul> <li> <p>Event ID</p>
         * </li> <li> <p>Event name</p> </li> <li> <p>Event source</p> </li> </ul> <p>All
         * attributes are optional. The default number of results returned is 50, with a
         * maximum of 50 possible. The response includes a token that you can use to get
         * the next page of results.</p>  <p>The rate of lookup requests is
         * limited to two per second, per account, per region. If this limit is exceeded, a
         * throttling error occurs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupEventsOutcomeCallable LookupEventsCallable(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> or <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-insights-events">CloudTrail
         * Insights events</a> that are captured by CloudTrail. You can look up events that
         * occurred in a region within the last 90 days. Lookup supports the following
         * attributes for management events:</p> <ul> <li> <p>AWS access key</p> </li> <li>
         * <p>Event ID</p> </li> <li> <p>Event name</p> </li> <li> <p>Event source</p>
         * </li> <li> <p>Read only</p> </li> <li> <p>Resource name</p> </li> <li>
         * <p>Resource type</p> </li> <li> <p>User name</p> </li> </ul> <p>Lookup supports
         * the following attributes for Insights events:</p> <ul> <li> <p>Event ID</p>
         * </li> <li> <p>Event name</p> </li> <li> <p>Event source</p> </li> </ul> <p>All
         * attributes are optional. The default number of results returned is 50, with a
         * maximum of 50 possible. The response includes a token that you can use to get
         * the next page of results.</p>  <p>The rate of lookup requests is
         * limited to two per second, per account, per region. If this limit is exceeded, a
         * throttling error occurs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures an event selector for your trail. Use event selectors to further
         * specify the management and data event settings for your trail. By default,
         * trails created without specific event selectors will be configured to log all
         * read and write management events, and no data events. </p> <p>When an event
         * occurs in your account, CloudTrail evaluates the event selectors in all trails.
         * For each trail, if the event matches any event selector, the trail processes and
         * logs the event. If the event doesn't match any event selector, the trail doesn't
         * log the event. </p> <p>Example</p> <ol> <li> <p>You create an event selector for
         * a trail and specify that you want write-only events.</p> </li> <li> <p>The EC2
         * <code>GetConsoleOutput</code> and <code>RunInstances</code> API operations occur
         * in your account.</p> </li> <li> <p>CloudTrail evaluates whether the events match
         * your event selectors.</p> </li> <li> <p>The <code>RunInstances</code> is a
         * write-only event and it matches your event selector. The trail logs the
         * event.</p> </li> <li> <p>The <code>GetConsoleOutput</code> is a read-only event
         * but it doesn't match your event selector. The trail doesn't log the event. </p>
         * </li> </ol> <p>The <code>PutEventSelectors</code> operation must be called from
         * the region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> is thrown.</p> <p>You can configure up
         * to five event selectors for each trail. For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
         * in AWS CloudTrail</a> in the <i>AWS CloudTrail User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutEventSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventSelectorsOutcome PutEventSelectors(const Model::PutEventSelectorsRequest& request) const;

        /**
         * <p>Configures an event selector for your trail. Use event selectors to further
         * specify the management and data event settings for your trail. By default,
         * trails created without specific event selectors will be configured to log all
         * read and write management events, and no data events. </p> <p>When an event
         * occurs in your account, CloudTrail evaluates the event selectors in all trails.
         * For each trail, if the event matches any event selector, the trail processes and
         * logs the event. If the event doesn't match any event selector, the trail doesn't
         * log the event. </p> <p>Example</p> <ol> <li> <p>You create an event selector for
         * a trail and specify that you want write-only events.</p> </li> <li> <p>The EC2
         * <code>GetConsoleOutput</code> and <code>RunInstances</code> API operations occur
         * in your account.</p> </li> <li> <p>CloudTrail evaluates whether the events match
         * your event selectors.</p> </li> <li> <p>The <code>RunInstances</code> is a
         * write-only event and it matches your event selector. The trail logs the
         * event.</p> </li> <li> <p>The <code>GetConsoleOutput</code> is a read-only event
         * but it doesn't match your event selector. The trail doesn't log the event. </p>
         * </li> </ol> <p>The <code>PutEventSelectors</code> operation must be called from
         * the region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> is thrown.</p> <p>You can configure up
         * to five event selectors for each trail. For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
         * in AWS CloudTrail</a> in the <i>AWS CloudTrail User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutEventSelectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventSelectorsOutcomeCallable PutEventSelectorsCallable(const Model::PutEventSelectorsRequest& request) const;

        /**
         * <p>Configures an event selector for your trail. Use event selectors to further
         * specify the management and data event settings for your trail. By default,
         * trails created without specific event selectors will be configured to log all
         * read and write management events, and no data events. </p> <p>When an event
         * occurs in your account, CloudTrail evaluates the event selectors in all trails.
         * For each trail, if the event matches any event selector, the trail processes and
         * logs the event. If the event doesn't match any event selector, the trail doesn't
         * log the event. </p> <p>Example</p> <ol> <li> <p>You create an event selector for
         * a trail and specify that you want write-only events.</p> </li> <li> <p>The EC2
         * <code>GetConsoleOutput</code> and <code>RunInstances</code> API operations occur
         * in your account.</p> </li> <li> <p>CloudTrail evaluates whether the events match
         * your event selectors.</p> </li> <li> <p>The <code>RunInstances</code> is a
         * write-only event and it matches your event selector. The trail logs the
         * event.</p> </li> <li> <p>The <code>GetConsoleOutput</code> is a read-only event
         * but it doesn't match your event selector. The trail doesn't log the event. </p>
         * </li> </ol> <p>The <code>PutEventSelectors</code> operation must be called from
         * the region in which the trail was created; otherwise, an
         * <code>InvalidHomeRegionException</code> is thrown.</p> <p>You can configure up
         * to five event selectors for each trail. For more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/WhatIsCloudTrail-Limits.html">Limits
         * in AWS CloudTrail</a> in the <i>AWS CloudTrail User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutEventSelectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventSelectorsAsync(const Model::PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lets you enable Insights event logging by specifying the Insights selectors
         * that you want to enable on an existing trail. You also use
         * <code>PutInsightSelectors</code> to turn off Insights event logging, by passing
         * an empty list of insight types. In this release, only
         * <code>ApiCallRateInsight</code> is supported as an Insights
         * selector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutInsightSelectors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInsightSelectorsOutcome PutInsightSelectors(const Model::PutInsightSelectorsRequest& request) const;

        /**
         * <p>Lets you enable Insights event logging by specifying the Insights selectors
         * that you want to enable on an existing trail. You also use
         * <code>PutInsightSelectors</code> to turn off Insights event logging, by passing
         * an empty list of insight types. In this release, only
         * <code>ApiCallRateInsight</code> is supported as an Insights
         * selector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutInsightSelectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInsightSelectorsOutcomeCallable PutInsightSelectorsCallable(const Model::PutInsightSelectorsRequest& request) const;

        /**
         * <p>Lets you enable Insights event logging by specifying the Insights selectors
         * that you want to enable on an existing trail. You also use
         * <code>PutInsightSelectors</code> to turn off Insights event logging, by passing
         * an empty list of insight types. In this release, only
         * <code>ApiCallRateInsight</code> is supported as an Insights
         * selector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PutInsightSelectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInsightSelectorsAsync(const Model::PutInsightSelectorsRequest& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from a trail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from a trail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from a trail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLoggingOutcome StartLogging(const Model::StartLoggingRequest& request) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLoggingOutcomeCallable StartLoggingCallable(const Model::StartLoggingRequest& request) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StartLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLoggingAsync(const Model::StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends the recording of AWS API calls and log file delivery for the
         * specified trail. Under most circumstances, there is no need to use this action.
         * You can update a trail without stopping it first. This action is the only way to
         * stop recording. For a trail enabled in all regions, this operation must be
         * called from the region in which the trail was created, or an
         * <code>InvalidHomeRegionException</code> will occur. This operation cannot be
         * called on the shadow trails (replicated trails in other regions) of a trail
         * enabled in all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLoggingOutcome StopLogging(const Model::StopLoggingRequest& request) const;

        /**
         * <p>Suspends the recording of AWS API calls and log file delivery for the
         * specified trail. Under most circumstances, there is no need to use this action.
         * You can update a trail without stopping it first. This action is the only way to
         * stop recording. For a trail enabled in all regions, this operation must be
         * called from the region in which the trail was created, or an
         * <code>InvalidHomeRegionException</code> will occur. This operation cannot be
         * called on the shadow trails (replicated trails in other regions) of a trail
         * enabled in all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopLoggingOutcomeCallable StopLoggingCallable(const Model::StopLoggingRequest& request) const;

        /**
         * <p>Suspends the recording of AWS API calls and log file delivery for the
         * specified trail. Under most circumstances, there is no need to use this action.
         * You can update a trail without stopping it first. This action is the only way to
         * stop recording. For a trail enabled in all regions, this operation must be
         * called from the region in which the trail was created, or an
         * <code>InvalidHomeRegionException</code> will occur. This operation cannot be
         * called on the shadow trails (replicated trails in other regions) of a trail
         * enabled in all regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/StopLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopLoggingAsync(const Model::StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings that specify delivery of log files. Changes to a trail
         * do not require stopping the CloudTrail service. Use this action to designate an
         * existing bucket for log delivery. If the existing bucket has previously been a
         * target for CloudTrail log files, an IAM policy exists for the bucket.
         * <code>UpdateTrail</code> must be called from the region in which the trail was
         * created; otherwise, an <code>InvalidHomeRegionException</code> is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrailOutcome UpdateTrail(const Model::UpdateTrailRequest& request) const;

        /**
         * <p>Updates the settings that specify delivery of log files. Changes to a trail
         * do not require stopping the CloudTrail service. Use this action to designate an
         * existing bucket for log delivery. If the existing bucket has previously been a
         * target for CloudTrail log files, an IAM policy exists for the bucket.
         * <code>UpdateTrail</code> must be called from the region in which the trail was
         * created; otherwise, an <code>InvalidHomeRegionException</code> is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrailOutcomeCallable UpdateTrailCallable(const Model::UpdateTrailRequest& request) const;

        /**
         * <p>Updates the settings that specify delivery of log files. Changes to a trail
         * do not require stopping the CloudTrail service. Use this action to designate an
         * existing bucket for log delivery. If the existing bucket has previously been a
         * target for CloudTrail log files, an IAM policy exists for the bucket.
         * <code>UpdateTrail</code> must be called from the region in which the trail was
         * created; otherwise, an <code>InvalidHomeRegionException</code> is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/UpdateTrail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrailAsync(const Model::UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrailAsyncHelper(const Model::CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrailAsyncHelper(const Model::DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrailsAsyncHelper(const Model::DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventSelectorsAsyncHelper(const Model::GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInsightSelectorsAsyncHelper(const Model::GetInsightSelectorsRequest& request, const GetInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrailAsyncHelper(const Model::GetTrailRequest& request, const GetTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrailStatusAsyncHelper(const Model::GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeysAsyncHelper(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrailsAsyncHelper(const Model::ListTrailsRequest& request, const ListTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LookupEventsAsyncHelper(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventSelectorsAsyncHelper(const Model::PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInsightSelectorsAsyncHelper(const Model::PutInsightSelectorsRequest& request, const PutInsightSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartLoggingAsyncHelper(const Model::StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopLoggingAsyncHelper(const Model::StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrailAsyncHelper(const Model::UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudTrail
} // namespace Aws
