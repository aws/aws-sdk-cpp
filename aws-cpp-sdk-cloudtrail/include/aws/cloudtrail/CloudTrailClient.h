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
#include <aws/cloudtrail/model/GetTrailStatusResult.h>
#include <aws/cloudtrail/model/ListPublicKeysResult.h>
#include <aws/cloudtrail/model/ListTagsResult.h>
#include <aws/cloudtrail/model/LookupEventsResult.h>
#include <aws/cloudtrail/model/PutEventSelectorsResult.h>
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
        class GetTrailStatusRequest;
        class ListPublicKeysRequest;
        class ListTagsRequest;
        class LookupEventsRequest;
        class PutEventSelectorsRequest;
        class RemoveTagsRequest;
        class StartLoggingRequest;
        class StopLoggingRequest;
        class UpdateTrailRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<CloudTrailErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateTrailResult, Aws::Client::AWSError<CloudTrailErrors>> CreateTrailOutcome;
        typedef Aws::Utils::Outcome<DeleteTrailResult, Aws::Client::AWSError<CloudTrailErrors>> DeleteTrailOutcome;
        typedef Aws::Utils::Outcome<DescribeTrailsResult, Aws::Client::AWSError<CloudTrailErrors>> DescribeTrailsOutcome;
        typedef Aws::Utils::Outcome<GetEventSelectorsResult, Aws::Client::AWSError<CloudTrailErrors>> GetEventSelectorsOutcome;
        typedef Aws::Utils::Outcome<GetTrailStatusResult, Aws::Client::AWSError<CloudTrailErrors>> GetTrailStatusOutcome;
        typedef Aws::Utils::Outcome<ListPublicKeysResult, Aws::Client::AWSError<CloudTrailErrors>> ListPublicKeysOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<CloudTrailErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<LookupEventsResult, Aws::Client::AWSError<CloudTrailErrors>> LookupEventsOutcome;
        typedef Aws::Utils::Outcome<PutEventSelectorsResult, Aws::Client::AWSError<CloudTrailErrors>> PutEventSelectorsOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<CloudTrailErrors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<StartLoggingResult, Aws::Client::AWSError<CloudTrailErrors>> StartLoggingOutcome;
        typedef Aws::Utils::Outcome<StopLoggingResult, Aws::Client::AWSError<CloudTrailErrors>> StopLoggingOutcome;
        typedef Aws::Utils::Outcome<UpdateTrailResult, Aws::Client::AWSError<CloudTrailErrors>> UpdateTrailOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
        typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
        typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
        typedef std::future<GetEventSelectorsOutcome> GetEventSelectorsOutcomeCallable;
        typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
        typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
        typedef std::future<PutEventSelectorsOutcome> PutEventSelectorsOutcomeCallable;
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
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailStatusRequest&, const Model::GetTrailStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailStatusResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListPublicKeysRequest&, const Model::ListPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeysResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::LookupEventsRequest&, const Model::LookupEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupEventsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::PutEventSelectorsRequest&, const Model::PutEventSelectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventSelectorsResponseReceivedHandler;
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
   * elements returned by the service.</p> <note> <p>As an alternative to the API,
   * you can use one of the AWS SDKs, which consist of libraries and sample code for
   * various programming languages and platforms (Java, Ruby, .NET, iOS, Android,
   * etc.). The SDKs provide a convenient way to create programmatic access to
   * AWSCloudTrail. For example, the SDKs take care of cryptographically signing
   * requests, managing errors, and retrying requests automatically. For information
   * about the AWS SDKs, including how to download and install them, see the <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services page</a>.</p>
   * </note> <p>See the <a
   * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS
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

        inline virtual const char* GetServiceClientName() const override { return "CloudTrail"; }


        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 50. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrailOutcome CreateTrail(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/CreateTrail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrailOutcomeCallable CreateTrailCallable(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p><p><h3>See Also:</h3>   <a
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
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrailsOutcome DescribeTrails(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrailsOutcomeCallable DescribeTrailsCallable(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p><p><h3>See Also:</h3>   <a
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
         * Data and Management Events for Trails </a> in the <i>AWS CloudTrail User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetEventSelectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSelectorsAsync(const Model::GetEventSelectorsRequest& request, const GetEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * files that were signed with its corresponding private key.</p> <note>
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> <note>
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeysOutcomeCallable ListPublicKeysCallable(const Model::ListPublicKeysRequest& request) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> <note>
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> </note><p><h3>See Also:</h3>   <a
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
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> captured by CloudTrail. Events for a region can be looked up in that
         * region during the last 90 days. Lookup supports the following attributes:</p>
         * <ul> <li> <p>AWS access key</p> </li> <li> <p>Event ID</p> </li> <li> <p>Event
         * name</p> </li> <li> <p>Event source</p> </li> <li> <p>Read only</p> </li> <li>
         * <p>Resource name</p> </li> <li> <p>Resource type</p> </li> <li> <p>User name</p>
         * </li> </ul> <p>All attributes are optional. The default number of results
         * returned is 50, with a maximum of 50 possible. The response includes a token
         * that you can use to get the next page of results.</p> <important> <p>The rate of
         * lookup requests is limited to one per second per account. If this limit is
         * exceeded, a throttling error occurs.</p> </important> <important> <p>Events that
         * occurred during the selected time range will not be available for lookup if
         * CloudTrail logging was not enabled when the events occurred.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::LookupEventsOutcome LookupEvents(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> captured by CloudTrail. Events for a region can be looked up in that
         * region during the last 90 days. Lookup supports the following attributes:</p>
         * <ul> <li> <p>AWS access key</p> </li> <li> <p>Event ID</p> </li> <li> <p>Event
         * name</p> </li> <li> <p>Event source</p> </li> <li> <p>Read only</p> </li> <li>
         * <p>Resource name</p> </li> <li> <p>Resource type</p> </li> <li> <p>User name</p>
         * </li> </ul> <p>All attributes are optional. The default number of results
         * returned is 50, with a maximum of 50 possible. The response includes a token
         * that you can use to get the next page of results.</p> <important> <p>The rate of
         * lookup requests is limited to one per second per account. If this limit is
         * exceeded, a throttling error occurs.</p> </important> <important> <p>Events that
         * occurred during the selected time range will not be available for lookup if
         * CloudTrail logging was not enabled when the events occurred.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupEventsOutcomeCallable LookupEventsCallable(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-management-events">management
         * events</a> captured by CloudTrail. Events for a region can be looked up in that
         * region during the last 90 days. Lookup supports the following attributes:</p>
         * <ul> <li> <p>AWS access key</p> </li> <li> <p>Event ID</p> </li> <li> <p>Event
         * name</p> </li> <li> <p>Event source</p> </li> <li> <p>Read only</p> </li> <li>
         * <p>Resource name</p> </li> <li> <p>Resource type</p> </li> <li> <p>User name</p>
         * </li> </ul> <p>All attributes are optional. The default number of results
         * returned is 50, with a maximum of 50 possible. The response includes a token
         * that you can use to get the next page of results.</p> <important> <p>The rate of
         * lookup requests is limited to one per second per account. If this limit is
         * exceeded, a throttling error occurs.</p> </important> <important> <p>Events that
         * occurred during the selected time range will not be available for lookup if
         * CloudTrail logging was not enabled when the events occurred.</p>
         * </important><p><h3>See Also:</h3>   <a
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
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
         * href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-management-and-data-events-with-cloudtrail.html">Logging
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
        void GetTrailStatusAsyncHelper(const Model::GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeysAsyncHelper(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LookupEventsAsyncHelper(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventSelectorsAsyncHelper(const Model::PutEventSelectorsRequest& request, const PutEventSelectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
