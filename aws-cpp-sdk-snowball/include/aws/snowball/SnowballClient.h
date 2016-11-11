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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/snowball/model/CancelJobResult.h>
#include <aws/snowball/model/CreateAddressResult.h>
#include <aws/snowball/model/CreateJobResult.h>
#include <aws/snowball/model/DescribeAddressResult.h>
#include <aws/snowball/model/DescribeAddressesResult.h>
#include <aws/snowball/model/DescribeJobResult.h>
#include <aws/snowball/model/GetJobManifestResult.h>
#include <aws/snowball/model/GetJobUnlockCodeResult.h>
#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/snowball/model/ListJobsResult.h>
#include <aws/snowball/model/UpdateJobResult.h>
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

namespace Snowball
{

namespace Model
{
        class CancelJobRequest;
        class CreateAddressRequest;
        class CreateJobRequest;
        class DescribeAddressRequest;
        class DescribeAddressesRequest;
        class DescribeJobRequest;
        class GetJobManifestRequest;
        class GetJobUnlockCodeRequest;
        class GetSnowballUsageRequest;
        class ListJobsRequest;
        class UpdateJobRequest;

        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<SnowballErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateAddressResult, Aws::Client::AWSError<SnowballErrors>> CreateAddressOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<SnowballErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<DescribeAddressResult, Aws::Client::AWSError<SnowballErrors>> DescribeAddressOutcome;
        typedef Aws::Utils::Outcome<DescribeAddressesResult, Aws::Client::AWSError<SnowballErrors>> DescribeAddressesOutcome;
        typedef Aws::Utils::Outcome<DescribeJobResult, Aws::Client::AWSError<SnowballErrors>> DescribeJobOutcome;
        typedef Aws::Utils::Outcome<GetJobManifestResult, Aws::Client::AWSError<SnowballErrors>> GetJobManifestOutcome;
        typedef Aws::Utils::Outcome<GetJobUnlockCodeResult, Aws::Client::AWSError<SnowballErrors>> GetJobUnlockCodeOutcome;
        typedef Aws::Utils::Outcome<GetSnowballUsageResult, Aws::Client::AWSError<SnowballErrors>> GetSnowballUsageOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<SnowballErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<UpdateJobResult, Aws::Client::AWSError<SnowballErrors>> UpdateJobOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateAddressOutcome> CreateAddressOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<DescribeAddressOutcome> DescribeAddressOutcomeCallable;
        typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
        typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
        typedef std::future<GetJobManifestOutcome> GetJobManifestOutcomeCallable;
        typedef std::future<GetJobUnlockCodeOutcome> GetJobUnlockCodeOutcomeCallable;
        typedef std::future<GetSnowballUsageOutcome> GetSnowballUsageOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
} // namespace Model

  class SnowballClient;

    typedef std::function<void(const SnowballClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateAddressRequest&, const Model::CreateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressRequest&, const Model::DescribeAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeAddressesRequest&, const Model::DescribeAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::DescribeJobRequest&, const Model::DescribeJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobManifestRequest&, const Model::GetJobManifestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobManifestResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetJobUnlockCodeRequest&, const Model::GetJobUnlockCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobUnlockCodeResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::GetSnowballUsageRequest&, const Model::GetSnowballUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnowballUsageResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const SnowballClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;

  /**
   * <p>AWS Import/Export Snowball is a petabyte-scale data transport solution that
   * uses secure appliances to transfer large amounts of data between your
   * on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
   * Snowball commands described here provide access to the same functionality that
   * is available in the AWS Snowball Management Console, which enables you to create
   * and manage jobs for Snowball. To transfer data locally with a Snowball
   * appliance, you'll need to use the Snowball client or the Amazon S3 API adapter
   * for Snowball. For more information, see the <a
   * href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
   * Guide</a>.</p>
   */
  class AWS_SNOWBALL_API SnowballClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SnowballClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SnowballClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~SnowballClient();

        /**
         * <p>Cancels the specified job. Note that you can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action will
         * return a job's <code>JobState</code> as part of the response element data
         * returned.</p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels the specified job. Note that you can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action will
         * return a job's <code>JobState</code> as part of the response element data
         * returned.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * <p>Cancels the specified job. Note that you can only cancel a job before its
         * <code>JobState</code> value changes to <code>PreparingAppliance</code>.
         * Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action will
         * return a job's <code>JobState</code> as part of the response element data
         * returned.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. </p> <p>Addresses are
         * validated at the time of creation. The address you provide must be located
         * within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p>
         */
        virtual Model::CreateAddressOutcome CreateAddress(const Model::CreateAddressRequest& request) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. </p> <p>Addresses are
         * validated at the time of creation. The address you provide must be located
         * within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAddressOutcomeCallable CreateAddressCallable(const Model::CreateAddressRequest& request) const;

        /**
         * <p>Creates an address for a Snowball to be shipped to. </p> <p>Addresses are
         * validated at the time of creation. The address you provide must be located
         * within the serviceable area of your region. If the address is invalid or
         * unsupported, then an exception is thrown.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAddressAsync(const Model::CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Note that your AWS account must have the right trust policies and
         * permissions in place to create a job for Snowball. For more information, see
         * <a>api-reference-policies</a>.</p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Note that your AWS account must have the right trust policies and
         * permissions in place to create a job for Snowball. For more information, see
         * <a>api-reference-policies</a>.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a job to import or export data between Amazon S3 and your on-premises
         * data center. Note that your AWS account must have the right trust policies and
         * permissions in place to create a job for Snowball. For more information, see
         * <a>api-reference-policies</a>.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p>
         */
        virtual Model::DescribeAddressOutcome DescribeAddress(const Model::DescribeAddressRequest& request) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressOutcomeCallable DescribeAddressCallable(const Model::DescribeAddressRequest& request) const;

        /**
         * <p>Takes an <code>AddressId</code> and returns specific details about that
         * address in the form of an <code>Address</code> object.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressAsync(const Model::DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p>
         */
        virtual Model::DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request) const;

        /**
         * <p>Returns a specified number of <code>ADDRESS</code> objects. Calling this API
         * in one of the US regions will return addresses from the list of all addresses
         * associated with this account in all US regions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata.</p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * <p>Returns information about a specific job including shipping information, job
         * status, and other important metadata.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>Note that the credentials of a given job, including its
         * manifest file and unlock code, expire 90 days after the job is created.</p>
         */
        virtual Model::GetJobManifestOutcome GetJobManifest(const Model::GetJobManifestRequest& request) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>Note that the credentials of a given job, including its
         * manifest file and unlock code, expire 90 days after the job is created.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobManifestOutcomeCallable GetJobManifestCallable(const Model::GetJobManifestRequest& request) const;

        /**
         * <p>Returns a link to an Amazon S3 presigned URL for the manifest file associated
         * with the specified <code>JobId</code> value. You can access the manifest file
         * for up to 60 minutes after this request has been made. To access the manifest
         * file after 60 minutes have passed, you'll have to make another call to the
         * <code>GetJobManifest</code> action.</p> <p>The manifest is an encrypted file
         * that you can download after your job enters the <code>WithCustomer</code>
         * status. The manifest is decrypted by using the <code>UnlockCode</code> code
         * value, when you pass both values to the Snowball through the Snowball client
         * when the client is started for the first time.</p> <p>As a best practice, we
         * recommend that you don't save a copy of an <code>UnlockCode</code> value in the
         * same location as the manifest file for that job. Saving these separately helps
         * prevent unauthorized parties from gaining access to the Snowball associated with
         * that job.</p> <p>Note that the credentials of a given job, including its
         * manifest file and unlock code, expire 90 days after the job is created.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobManifestAsync(const Model::GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p>
         */
        virtual Model::GetJobUnlockCodeOutcome GetJobUnlockCode(const Model::GetJobUnlockCodeRequest& request) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobUnlockCodeOutcomeCallable GetJobUnlockCodeCallable(const Model::GetJobUnlockCodeRequest& request) const;

        /**
         * <p>Returns the <code>UnlockCode</code> code value for the specified job. A
         * particular <code>UnlockCode</code> value can be accessed for up to 90 days after
         * the associated job has been created.</p> <p>The <code>UnlockCode</code> value is
         * a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
         * used to decrypt the manifest file when it is passed along with the manifest to
         * the Snowball through the Snowball client when the client is started for the
         * first time.</p> <p>As a best practice, we recommend that you don't save a copy
         * of the <code>UnlockCode</code> in the same location as the manifest file for
         * that job. Saving these separately helps prevent unauthorized parties from
         * gaining access to the Snowball associated with that job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobUnlockCodeAsync(const Model::GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>Note that the
         * default service limit for the number of Snowballs that you can have at one time
         * is 1. If you want to increase your service limit, contact AWS Support.</p>
         */
        virtual Model::GetSnowballUsageOutcome GetSnowballUsage(const Model::GetSnowballUsageRequest& request) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>Note that the
         * default service limit for the number of Snowballs that you can have at one time
         * is 1. If you want to increase your service limit, contact AWS Support.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnowballUsageOutcomeCallable GetSnowballUsageCallable(const Model::GetSnowballUsageRequest& request) const;

        /**
         * <p>Returns information about the Snowball service limit for your account, and
         * also the number of Snowballs your account has in use.</p> <p>Note that the
         * default service limit for the number of Snowballs that you can have at one time
         * is 1. If you want to increase your service limit, contact AWS Support.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnowballUsageAsync(const Model::GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US regions.</p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US regions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Returns an array of <code>JobListEntry</code> objects of the specified
         * length. Each <code>JobListEntry</code> object contains a job's state, a job's
         * ID, and a value that indicates whether the job is a job part, in the case of
         * export jobs. Calling this API action in one of the US regions will return jobs
         * from the list of all jobs associated with this account in all US regions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * <p>While a job's <code>JobState</code> value is <code>New</code>, you can update
         * some of the information associated with a job. Once the job changes to a
         * different job state, usually within 60 minutes of the job being created, this
         * action is no longer available.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAddressAsyncHelper(const Model::CreateAddressRequest& request, const CreateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAddressAsyncHelper(const Model::DescribeAddressRequest& request, const DescribeAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAddressesAsyncHelper(const Model::DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobAsyncHelper(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobManifestAsyncHelper(const Model::GetJobManifestRequest& request, const GetJobManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobUnlockCodeAsyncHelper(const Model::GetJobUnlockCodeRequest& request, const GetJobUnlockCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSnowballUsageAsyncHelper(const Model::GetSnowballUsageRequest& request, const GetSnowballUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobAsyncHelper(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Snowball
} // namespace Aws
