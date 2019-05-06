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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/signer/model/GetSigningPlatformResult.h>
#include <aws/signer/model/GetSigningProfileResult.h>
#include <aws/signer/model/ListSigningJobsResult.h>
#include <aws/signer/model/ListSigningPlatformsResult.h>
#include <aws/signer/model/ListSigningProfilesResult.h>
#include <aws/signer/model/PutSigningProfileResult.h>
#include <aws/signer/model/StartSigningJobResult.h>
#include <aws/core/NoResult.h>
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

namespace signer
{

namespace Model
{
        class CancelSigningProfileRequest;
        class DescribeSigningJobRequest;
        class GetSigningPlatformRequest;
        class GetSigningProfileRequest;
        class ListSigningJobsRequest;
        class ListSigningPlatformsRequest;
        class ListSigningProfilesRequest;
        class PutSigningProfileRequest;
        class StartSigningJobRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SignerErrors>> CancelSigningProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeSigningJobResult, Aws::Client::AWSError<SignerErrors>> DescribeSigningJobOutcome;
        typedef Aws::Utils::Outcome<GetSigningPlatformResult, Aws::Client::AWSError<SignerErrors>> GetSigningPlatformOutcome;
        typedef Aws::Utils::Outcome<GetSigningProfileResult, Aws::Client::AWSError<SignerErrors>> GetSigningProfileOutcome;
        typedef Aws::Utils::Outcome<ListSigningJobsResult, Aws::Client::AWSError<SignerErrors>> ListSigningJobsOutcome;
        typedef Aws::Utils::Outcome<ListSigningPlatformsResult, Aws::Client::AWSError<SignerErrors>> ListSigningPlatformsOutcome;
        typedef Aws::Utils::Outcome<ListSigningProfilesResult, Aws::Client::AWSError<SignerErrors>> ListSigningProfilesOutcome;
        typedef Aws::Utils::Outcome<PutSigningProfileResult, Aws::Client::AWSError<SignerErrors>> PutSigningProfileOutcome;
        typedef Aws::Utils::Outcome<StartSigningJobResult, Aws::Client::AWSError<SignerErrors>> StartSigningJobOutcome;

        typedef std::future<CancelSigningProfileOutcome> CancelSigningProfileOutcomeCallable;
        typedef std::future<DescribeSigningJobOutcome> DescribeSigningJobOutcomeCallable;
        typedef std::future<GetSigningPlatformOutcome> GetSigningPlatformOutcomeCallable;
        typedef std::future<GetSigningProfileOutcome> GetSigningProfileOutcomeCallable;
        typedef std::future<ListSigningJobsOutcome> ListSigningJobsOutcomeCallable;
        typedef std::future<ListSigningPlatformsOutcome> ListSigningPlatformsOutcomeCallable;
        typedef std::future<ListSigningProfilesOutcome> ListSigningProfilesOutcomeCallable;
        typedef std::future<PutSigningProfileOutcome> PutSigningProfileOutcomeCallable;
        typedef std::future<StartSigningJobOutcome> StartSigningJobOutcomeCallable;
} // namespace Model

  class SignerClient;

    typedef std::function<void(const SignerClient*, const Model::CancelSigningProfileRequest&, const Model::CancelSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::DescribeSigningJobRequest&, const Model::DescribeSigningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSigningJobResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::GetSigningPlatformRequest&, const Model::GetSigningPlatformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSigningPlatformResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::GetSigningProfileRequest&, const Model::GetSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningJobsRequest&, const Model::ListSigningJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningJobsResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningPlatformsRequest&, const Model::ListSigningPlatformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningPlatformsResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::ListSigningProfilesRequest&, const Model::ListSigningProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSigningProfilesResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::PutSigningProfileRequest&, const Model::PutSigningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSigningProfileResponseReceivedHandler;
    typedef std::function<void(const SignerClient*, const Model::StartSigningJobRequest&, const Model::StartSigningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSigningJobResponseReceivedHandler;

  /**
   * <p>You can use Code Signing for Amazon FreeRTOS (AWS Signer) to sign code that
   * you created for any of the IoT devices that Amazon Web Services supports. AWS
   * Signer is integrated with Amazon FreeRTOS, AWS Certificate Manager, and AWS
   * CloudTrail. Amazon FreeRTOS customers can use AWS Signer to sign code images
   * before making them available for microcontrollers. You can use ACM to import
   * third-party certificates to be used by AWS Signer. For general information about
   * using AWS Signer, see the <a
   * href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">Code
   * Signing for Amazon FreeRTOS Developer Guide</a>.</p>
   */
  class AWS_SIGNER_API SignerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SignerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SignerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SignerClient();

        inline virtual const char* GetServiceClientName() const override { return "signer"; }


        /**
         * <p>Changes the state of an <code>ACTIVE</code> signing profile to
         * <code>CANCELED</code>. A canceled profile is still viewable with the
         * <code>ListSigningProfiles</code> operation, but it cannot perform new signing
         * jobs, and is deleted two years after cancelation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/CancelSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSigningProfileOutcome CancelSigningProfile(const Model::CancelSigningProfileRequest& request) const;

        /**
         * <p>Changes the state of an <code>ACTIVE</code> signing profile to
         * <code>CANCELED</code>. A canceled profile is still viewable with the
         * <code>ListSigningProfiles</code> operation, but it cannot perform new signing
         * jobs, and is deleted two years after cancelation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/CancelSigningProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSigningProfileOutcomeCallable CancelSigningProfileCallable(const Model::CancelSigningProfileRequest& request) const;

        /**
         * <p>Changes the state of an <code>ACTIVE</code> signing profile to
         * <code>CANCELED</code>. A canceled profile is still viewable with the
         * <code>ListSigningProfiles</code> operation, but it cannot perform new signing
         * jobs, and is deleted two years after cancelation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/CancelSigningProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSigningProfileAsync(const Model::CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific code signing job. You specify the job by
         * using the <code>jobId</code> value that is returned by the
         * <a>StartSigningJob</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/DescribeSigningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSigningJobOutcome DescribeSigningJob(const Model::DescribeSigningJobRequest& request) const;

        /**
         * <p>Returns information about a specific code signing job. You specify the job by
         * using the <code>jobId</code> value that is returned by the
         * <a>StartSigningJob</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/DescribeSigningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSigningJobOutcomeCallable DescribeSigningJobCallable(const Model::DescribeSigningJobRequest& request) const;

        /**
         * <p>Returns information about a specific code signing job. You specify the job by
         * using the <code>jobId</code> value that is returned by the
         * <a>StartSigningJob</a> operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/DescribeSigningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSigningJobAsync(const Model::DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information on a specific signing platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningPlatform">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningPlatformOutcome GetSigningPlatform(const Model::GetSigningPlatformRequest& request) const;

        /**
         * <p>Returns information on a specific signing platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningPlatform">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSigningPlatformOutcomeCallable GetSigningPlatformCallable(const Model::GetSigningPlatformRequest& request) const;

        /**
         * <p>Returns information on a specific signing platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningPlatform">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSigningPlatformAsync(const Model::GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information on a specific signing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSigningProfileOutcome GetSigningProfile(const Model::GetSigningProfileRequest& request) const;

        /**
         * <p>Returns information on a specific signing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSigningProfileOutcomeCallable GetSigningProfileCallable(const Model::GetSigningProfileRequest& request) const;

        /**
         * <p>Returns information on a specific signing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/GetSigningProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSigningProfileAsync(const Model::GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all your signing jobs. You can use the <code>maxResults</code>
         * parameter to limit the number of signing jobs that are returned in the response.
         * If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningJobsOutcome ListSigningJobs(const Model::ListSigningJobsRequest& request) const;

        /**
         * <p>Lists all your signing jobs. You can use the <code>maxResults</code>
         * parameter to limit the number of signing jobs that are returned in the response.
         * If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningJobsOutcomeCallable ListSigningJobsCallable(const Model::ListSigningJobsRequest& request) const;

        /**
         * <p>Lists all your signing jobs. You can use the <code>maxResults</code>
         * parameter to limit the number of signing jobs that are returned in the response.
         * If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningJobsAsync(const Model::ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all signing platforms available in AWS Signer that match the request
         * parameters. If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningPlatforms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningPlatformsOutcome ListSigningPlatforms(const Model::ListSigningPlatformsRequest& request) const;

        /**
         * <p>Lists all signing platforms available in AWS Signer that match the request
         * parameters. If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningPlatforms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningPlatformsOutcomeCallable ListSigningPlatformsCallable(const Model::ListSigningPlatformsRequest& request) const;

        /**
         * <p>Lists all signing platforms available in AWS Signer that match the request
         * parameters. If additional jobs remain to be listed, AWS Signer returns a
         * <code>nextToken</code> value. Use this value in subsequent calls to
         * <code>ListSigningJobs</code> to fetch the remaining values. You can continue
         * calling <code>ListSigningJobs</code> with your <code>maxResults</code> parameter
         * and with new values that AWS Signer returns in the <code>nextToken</code>
         * parameter until all of your signing jobs have been returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningPlatforms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningPlatformsAsync(const Model::ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available signing profiles in your AWS account. Returns only
         * profiles with an <code>ACTIVE</code> status unless the
         * <code>includeCanceled</code> request field is set to <code>true</code>. If
         * additional jobs remain to be listed, AWS Signer returns a <code>nextToken</code>
         * value. Use this value in subsequent calls to <code>ListSigningJobs</code> to
         * fetch the remaining values. You can continue calling
         * <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and
         * with new values that AWS Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSigningProfilesOutcome ListSigningProfiles(const Model::ListSigningProfilesRequest& request) const;

        /**
         * <p>Lists all available signing profiles in your AWS account. Returns only
         * profiles with an <code>ACTIVE</code> status unless the
         * <code>includeCanceled</code> request field is set to <code>true</code>. If
         * additional jobs remain to be listed, AWS Signer returns a <code>nextToken</code>
         * value. Use this value in subsequent calls to <code>ListSigningJobs</code> to
         * fetch the remaining values. You can continue calling
         * <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and
         * with new values that AWS Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSigningProfilesOutcomeCallable ListSigningProfilesCallable(const Model::ListSigningProfilesRequest& request) const;

        /**
         * <p>Lists all available signing profiles in your AWS account. Returns only
         * profiles with an <code>ACTIVE</code> status unless the
         * <code>includeCanceled</code> request field is set to <code>true</code>. If
         * additional jobs remain to be listed, AWS Signer returns a <code>nextToken</code>
         * value. Use this value in subsequent calls to <code>ListSigningJobs</code> to
         * fetch the remaining values. You can continue calling
         * <code>ListSigningJobs</code> with your <code>maxResults</code> parameter and
         * with new values that AWS Signer returns in the <code>nextToken</code> parameter
         * until all of your signing jobs have been returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/ListSigningProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSigningProfilesAsync(const Model::ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a signing profile. A signing profile is an AWS Signer template that
         * can be used to carry out a pre-defined signing job. For more information, see <a
         * href="http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html">http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/PutSigningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSigningProfileOutcome PutSigningProfile(const Model::PutSigningProfileRequest& request) const;

        /**
         * <p>Creates a signing profile. A signing profile is an AWS Signer template that
         * can be used to carry out a pre-defined signing job. For more information, see <a
         * href="http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html">http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/PutSigningProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSigningProfileOutcomeCallable PutSigningProfileCallable(const Model::PutSigningProfileRequest& request) const;

        /**
         * <p>Creates a signing profile. A signing profile is an AWS Signer template that
         * can be used to carry out a pre-defined signing job. For more information, see <a
         * href="http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html">http://docs.aws.amazon.com/signer/latest/developerguide/gs-profile.html</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/PutSigningProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSigningProfileAsync(const Model::PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a signing job to be performed on the code provided. Signing jobs
         * are viewable by the <code>ListSigningJobs</code> operation for two years after
         * they are performed. Note the following requirements: </p> <ul> <li> <p> You must
         * create an Amazon S3 source bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/CreatingABucket.html">Create
         * a Bucket</a> in the <i>Amazon S3 Getting Started Guide</i>. </p> </li> <li>
         * <p>Your S3 source bucket must be version enabled.</p> </li> <li> <p>You must
         * create an S3 destination bucket. AWS Signer uses your S3 destination bucket to
         * write your signed code.</p> </li> <li> <p>You specify the name of the source and
         * destination buckets when calling the <code>StartSigningJob</code> operation.</p>
         * </li> <li> <p>You must also specify a request token that identifies your request
         * to AWS Signer. </p> </li> </ul> <p>You can call the <a>DescribeSigningJob</a>
         * and the <a>ListSigningJobs</a> actions after you call
         * <code>StartSigningJob</code>.</p> <p>For a Java example that shows how to use
         * this action, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">http://docs.aws.amazon.com/acm/latest/userguide/</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/StartSigningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSigningJobOutcome StartSigningJob(const Model::StartSigningJobRequest& request) const;

        /**
         * <p>Initiates a signing job to be performed on the code provided. Signing jobs
         * are viewable by the <code>ListSigningJobs</code> operation for two years after
         * they are performed. Note the following requirements: </p> <ul> <li> <p> You must
         * create an Amazon S3 source bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/CreatingABucket.html">Create
         * a Bucket</a> in the <i>Amazon S3 Getting Started Guide</i>. </p> </li> <li>
         * <p>Your S3 source bucket must be version enabled.</p> </li> <li> <p>You must
         * create an S3 destination bucket. AWS Signer uses your S3 destination bucket to
         * write your signed code.</p> </li> <li> <p>You specify the name of the source and
         * destination buckets when calling the <code>StartSigningJob</code> operation.</p>
         * </li> <li> <p>You must also specify a request token that identifies your request
         * to AWS Signer. </p> </li> </ul> <p>You can call the <a>DescribeSigningJob</a>
         * and the <a>ListSigningJobs</a> actions after you call
         * <code>StartSigningJob</code>.</p> <p>For a Java example that shows how to use
         * this action, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">http://docs.aws.amazon.com/acm/latest/userguide/</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/StartSigningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSigningJobOutcomeCallable StartSigningJobCallable(const Model::StartSigningJobRequest& request) const;

        /**
         * <p>Initiates a signing job to be performed on the code provided. Signing jobs
         * are viewable by the <code>ListSigningJobs</code> operation for two years after
         * they are performed. Note the following requirements: </p> <ul> <li> <p> You must
         * create an Amazon S3 source bucket. For more information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/gsg/CreatingABucket.html">Create
         * a Bucket</a> in the <i>Amazon S3 Getting Started Guide</i>. </p> </li> <li>
         * <p>Your S3 source bucket must be version enabled.</p> </li> <li> <p>You must
         * create an S3 destination bucket. AWS Signer uses your S3 destination bucket to
         * write your signed code.</p> </li> <li> <p>You specify the name of the source and
         * destination buckets when calling the <code>StartSigningJob</code> operation.</p>
         * </li> <li> <p>You must also specify a request token that identifies your request
         * to AWS Signer. </p> </li> </ul> <p>You can call the <a>DescribeSigningJob</a>
         * and the <a>ListSigningJobs</a> actions after you call
         * <code>StartSigningJob</code>.</p> <p>For a Java example that shows how to use
         * this action, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">http://docs.aws.amazon.com/acm/latest/userguide/</a>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/StartSigningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSigningJobAsync(const Model::StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelSigningProfileAsyncHelper(const Model::CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSigningJobAsyncHelper(const Model::DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSigningPlatformAsyncHelper(const Model::GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSigningProfileAsyncHelper(const Model::GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningJobsAsyncHelper(const Model::ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningPlatformsAsyncHelper(const Model::ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSigningProfilesAsyncHelper(const Model::ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSigningProfileAsyncHelper(const Model::PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSigningJobAsyncHelper(const Model::StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace signer
} // namespace Aws
