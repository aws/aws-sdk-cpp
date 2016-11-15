/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudtrail/model/GetTrailStatusResult.h>
#include <aws/cloudtrail/model/ListPublicKeysResult.h>
#include <aws/cloudtrail/model/ListTagsResult.h>
#include <aws/cloudtrail/model/LookupEventsResult.h>
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

namespace CloudTrail
{

namespace Model
{
        class AddTagsRequest;
        class CreateTrailRequest;
        class DeleteTrailRequest;
        class DescribeTrailsRequest;
        class GetTrailStatusRequest;
        class ListPublicKeysRequest;
        class ListTagsRequest;
        class LookupEventsRequest;
        class RemoveTagsRequest;
        class StartLoggingRequest;
        class StopLoggingRequest;
        class UpdateTrailRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<CloudTrailErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateTrailResult, Aws::Client::AWSError<CloudTrailErrors>> CreateTrailOutcome;
        typedef Aws::Utils::Outcome<DeleteTrailResult, Aws::Client::AWSError<CloudTrailErrors>> DeleteTrailOutcome;
        typedef Aws::Utils::Outcome<DescribeTrailsResult, Aws::Client::AWSError<CloudTrailErrors>> DescribeTrailsOutcome;
        typedef Aws::Utils::Outcome<GetTrailStatusResult, Aws::Client::AWSError<CloudTrailErrors>> GetTrailStatusOutcome;
        typedef Aws::Utils::Outcome<ListPublicKeysResult, Aws::Client::AWSError<CloudTrailErrors>> ListPublicKeysOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<CloudTrailErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<LookupEventsResult, Aws::Client::AWSError<CloudTrailErrors>> LookupEventsOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsResult, Aws::Client::AWSError<CloudTrailErrors>> RemoveTagsOutcome;
        typedef Aws::Utils::Outcome<StartLoggingResult, Aws::Client::AWSError<CloudTrailErrors>> StartLoggingOutcome;
        typedef Aws::Utils::Outcome<StopLoggingResult, Aws::Client::AWSError<CloudTrailErrors>> StopLoggingOutcome;
        typedef Aws::Utils::Outcome<UpdateTrailResult, Aws::Client::AWSError<CloudTrailErrors>> UpdateTrailOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
        typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
        typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
        typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
        typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
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
    typedef std::function<void(const CloudTrailClient*, const Model::GetTrailStatusRequest&, const Model::GetTrailStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrailStatusResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListPublicKeysRequest&, const Model::ListPublicKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeysResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const CloudTrailClient*, const Model::LookupEventsRequest&, const Model::LookupEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LookupEventsResponseReceivedHandler;
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
   * </note> <p>See the CloudTrail User Guide for information about the data that is
   * included with each AWS API call listed in the log files.</p>
   */
  class AWS_CLOUDTRAIL_API CloudTrailClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudTrailClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudTrailClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CloudTrailClient();

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 10. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 10. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds one or more tags to a trail, up to a limit of 10. Tags must be unique
         * per trail. Overwrites an existing tag's value when a new value is specified for
         * an existing tag key. If you specify a key without a value, the tag will be
         * created with the specified key and a value of null. You can tag a trail that
         * applies to all regions only from the region in which the trail was created (that
         * is, from its home region).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p>
         */
        virtual Model::CreateTrailOutcome CreateTrail(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrailOutcomeCallable CreateTrailCallable(const Model::CreateTrailRequest& request) const;

        /**
         * <p>Creates a trail that specifies the settings for delivery of log data to an
         * Amazon S3 bucket. A maximum of five trails can exist in a region, irrespective
         * of the region in which they were created.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrailAsync(const Model::CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p>
         */
        virtual Model::DeleteTrailOutcome DeleteTrail(const Model::DeleteTrailRequest& request) const;

        /**
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrailOutcomeCallable DeleteTrailCallable(const Model::DeleteTrailRequest& request) const;

        /**
         * <p>Deletes a trail. This operation must be called from the region in which the
         * trail was created. <code>DeleteTrail</code> cannot be called on the shadow
         * trails (replicated trails in other regions) of a trail that is enabled in all
         * regions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrailAsync(const Model::DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p>
         */
        virtual Model::DescribeTrailsOutcome DescribeTrails(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrailsOutcomeCallable DescribeTrailsCallable(const Model::DescribeTrailsRequest& request) const;

        /**
         * <p>Retrieves settings for the trail associated with the current region for your
         * account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrailsAsync(const Model::DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p>
         */
        virtual Model::GetTrailStatusOutcome GetTrailStatus(const Model::GetTrailStatusRequest& request) const;

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrailStatusOutcomeCallable GetTrailStatusCallable(const Model::GetTrailStatusRequest& request) const;

        /**
         * <p>Returns a JSON-formatted list of information about the specified trail.
         * Fields include information on delivery errors, Amazon SNS and Amazon S3 errors,
         * and start and stop logging times for each trail. This operation returns trail
         * status from a single region. To return trail status from all regions, you must
         * call the operation on each region.</p>
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
         * region for its corresponding public key.</p> </note>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request) const;

        /**
         * <p>Returns all public keys whose private keys were used to sign the digest files
         * within the specified time range. The public key is needed to validate digest
         * files that were signed with its corresponding private key.</p> <note>
         * <p>CloudTrail uses different private/public key pairs per region. Each digest
         * file is signed with a private key unique to its region. Therefore, when you
         * validate a digest file from a particular region, you must look in the same
         * region for its corresponding public key.</p> </note>
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
         * region for its corresponding public key.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeysAsync(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Lists the tags for the trail in the current region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Looks up API activity events captured by CloudTrail that create, update, or
         * delete resources in your account. Events for a region can be looked up for the
         * times in which you had CloudTrail turned on in that region during the last seven
         * days. Lookup supports five different attributes: time range (defined by a start
         * time and end time), user name, event name, resource type, and resource name. All
         * attributes are optional. The maximum number of attributes that can be specified
         * in any one lookup request are time range and one other attribute. The default
         * number of results returned is 10, with a maximum of 50 possible. The response
         * includes a token that you can use to get the next page of results.</p>
         * <important> <p>The rate of lookup requests is limited to one per second per
         * account. If this limit is exceeded, a throttling error occurs.</p> </important>
         * <important> <p>Events that occurred during the selected time range will not be
         * available for lookup if CloudTrail logging was not enabled when the events
         * occurred.</p> </important>
         */
        virtual Model::LookupEventsOutcome LookupEvents(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up API activity events captured by CloudTrail that create, update, or
         * delete resources in your account. Events for a region can be looked up for the
         * times in which you had CloudTrail turned on in that region during the last seven
         * days. Lookup supports five different attributes: time range (defined by a start
         * time and end time), user name, event name, resource type, and resource name. All
         * attributes are optional. The maximum number of attributes that can be specified
         * in any one lookup request are time range and one other attribute. The default
         * number of results returned is 10, with a maximum of 50 possible. The response
         * includes a token that you can use to get the next page of results.</p>
         * <important> <p>The rate of lookup requests is limited to one per second per
         * account. If this limit is exceeded, a throttling error occurs.</p> </important>
         * <important> <p>Events that occurred during the selected time range will not be
         * available for lookup if CloudTrail logging was not enabled when the events
         * occurred.</p> </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LookupEventsOutcomeCallable LookupEventsCallable(const Model::LookupEventsRequest& request) const;

        /**
         * <p>Looks up API activity events captured by CloudTrail that create, update, or
         * delete resources in your account. Events for a region can be looked up for the
         * times in which you had CloudTrail turned on in that region during the last seven
         * days. Lookup supports five different attributes: time range (defined by a start
         * time and end time), user name, event name, resource type, and resource name. All
         * attributes are optional. The maximum number of attributes that can be specified
         * in any one lookup request are time range and one other attribute. The default
         * number of results returned is 10, with a maximum of 50 possible. The response
         * includes a token that you can use to get the next page of results.</p>
         * <important> <p>The rate of lookup requests is limited to one per second per
         * account. If this limit is exceeded, a throttling error occurs.</p> </important>
         * <important> <p>Events that occurred during the selected time range will not be
         * available for lookup if CloudTrail logging was not enabled when the events
         * occurred.</p> </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from a trail.</p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from a trail.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const Model::RemoveTagsRequest& request) const;

        /**
         * <p>Removes the specified tags from a trail.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p>
         */
        virtual Model::StartLoggingOutcome StartLogging(const Model::StartLoggingRequest& request) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLoggingOutcomeCallable StartLoggingCallable(const Model::StartLoggingRequest& request) const;

        /**
         * <p>Starts the recording of AWS API calls and log file delivery for a trail. For
         * a trail that is enabled in all regions, this operation must be called from the
         * region in which the trail was created. This operation cannot be called on the
         * shadow trails (replicated trails in other regions) of a trail that is enabled in
         * all regions.</p>
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
         * enabled in all regions.</p>
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
         * enabled in all regions.</p>
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
         * enabled in all regions.</p>
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
         * created; otherwise, an <code>InvalidHomeRegionException</code> is thrown.</p>
         */
        virtual Model::UpdateTrailOutcome UpdateTrail(const Model::UpdateTrailRequest& request) const;

        /**
         * <p>Updates the settings that specify delivery of log files. Changes to a trail
         * do not require stopping the CloudTrail service. Use this action to designate an
         * existing bucket for log delivery. If the existing bucket has previously been a
         * target for CloudTrail log files, an IAM policy exists for the bucket.
         * <code>UpdateTrail</code> must be called from the region in which the trail was
         * created; otherwise, an <code>InvalidHomeRegionException</code> is thrown.</p>
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
         * created; otherwise, an <code>InvalidHomeRegionException</code> is thrown.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrailAsync(const Model::UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrailAsyncHelper(const Model::CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrailAsyncHelper(const Model::DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrailsAsyncHelper(const Model::DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTrailStatusAsyncHelper(const Model::GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeysAsyncHelper(const Model::ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LookupEventsAsyncHelper(const Model::LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsAsyncHelper(const Model::RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartLoggingAsyncHelper(const Model::StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopLoggingAsyncHelper(const Model::StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrailAsyncHelper(const Model::UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudTrail
} // namespace Aws
