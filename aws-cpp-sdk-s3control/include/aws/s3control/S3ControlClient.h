/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlEndpointProvider.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/DNS.h>
#include <aws/s3control/S3ControlServiceClientModel.h>

namespace Aws
{
namespace S3Control
{

    /**
     * <p> Amazon Web Services S3 Control provides access to Amazon S3 control plane
   * actions. </p>
     */
    class AWS_S3CONTROL_API S3ControlClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<S3ControlClient>
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;
        static const char* SERVICE_NAME;
        static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration(),
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG),
                        const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3ControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<S3ControlEndpointProviderBase> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG),
                        const Aws::S3Control::S3ControlClientConfiguration& clientConfiguration = Aws::S3Control::S3ControlClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3ControlClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3ControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~S3ControlClient();

        /**
         * <p>Creates an access point and associates it with the specified bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
         * Data Access with Amazon S3 Access Points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p/>  <p>S3 on Outposts only supports VPC-style access
         * points. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">
         * Accessing Amazon S3 on Outposts using virtual private cloud (VPC) only access
         * points</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html#API_control_CreateAccessPoint_Examples">Examples</a>
         * section.</p> <p/> <p>The following actions are related to
         * <code>CreateAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const Model::CreateAccessPointRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPointAsync(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Object Lambda Access Point. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming
         * objects with Object Lambda Access Points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>The following actions are related to
         * <code>CreateAccessPointForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointForObjectLambdaOutcome CreateAccessPointForObjectLambda(const Model::CreateAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPointForObjectLambdaOutcomeCallable CreateAccessPointForObjectLambdaCallable(const Model::CreateAccessPointForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPointForObjectLambdaAsync(const Model::CreateAccessPointForObjectLambdaRequest& request, const CreateAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action creates an Amazon S3 on Outposts bucket. To create an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">Create
         * Bucket</a> in the <i>Amazon S3 API Reference</i>. </p>  <p>Creates a new
         * Outposts bucket. By creating the bucket, you become the bucket owner. To create
         * an Outposts bucket, you must have S3 on Outposts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>Not every
         * string is an acceptable bucket name. For information on bucket naming
         * restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/BucketRestrictions.html#bucketnamingrules">Working
         * with Amazon S3 Buckets</a>.</p> <p>S3 on Outposts buckets support:</p> <ul> <li>
         * <p>Tags</p> </li> <li> <p>LifecycleConfigurations for deleting expired
         * objects</p> </li> </ul> <p>For a complete list of restrictions and Amazon S3
         * feature limitations on S3 on Outposts, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OnOutpostsRestrictionsLimitations.html">
         * Amazon S3 on Outposts Restrictions and Limitations</a>.</p> <p>For an example of
         * the request syntax for Amazon S3 on Outposts that uses the S3 on Outposts
         * endpoint hostname prefix and <code>x-amz-outpost-id</code> in your API request,
         * see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html#API_control_CreateBucket_Examples">Examples</a>
         * section.</p> <p>The following actions are related to <code>CreateBucket</code>
         * for Amazon S3 on Outposts:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

        /**
         * An Async wrapper for CreateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAsync(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You can use S3 Batch Operations to perform large-scale batch actions on
         * Amazon S3 objects. Batch Operations can run a single action on lists of Amazon
         * S3 objects that you specify. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This action
         * creates a S3 Batch Operations job.</p> <p/> <p>Related actions include:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_JobOperation.html">JobOperation</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Multi-Region Access Point and associates it with the specified
         * buckets. For more information about creating Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CreatingMultiRegionAccessPoints.html">Creating
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * action will always be routed to the US West (Oregon) Region. For more
         * information about the restrictions around managing Multi-Region Access Points,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * request is asynchronous, meaning that you might receive a response before the
         * command has completed. When this request provides a response, it provides a
         * token that you can use to monitor the status of the request with
         * <code>DescribeMultiRegionAccessPointOperation</code>.</p> <p>The following
         * actions are related to <code>CreateMultiRegionAccessPoint</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiRegionAccessPointOutcome CreateMultiRegionAccessPoint(const Model::CreateMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultiRegionAccessPointOutcomeCallable CreateMultiRegionAccessPointCallable(const Model::CreateMultiRegionAccessPointRequest& request) const;

        /**
         * An Async wrapper for CreateMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultiRegionAccessPointAsync(const Model::CreateMultiRegionAccessPointRequest& request, const CreateMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified access point.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html#API_control_DeleteAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const Model::DeleteAccessPointRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointAsync(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Object Lambda Access Point.</p> <p>The following
         * actions are related to <code>DeleteAccessPointForObjectLambda</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointForObjectLambdaOutcome DeleteAccessPointForObjectLambda(const Model::DeleteAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointForObjectLambdaOutcomeCallable DeleteAccessPointForObjectLambdaCallable(const Model::DeleteAccessPointForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointForObjectLambdaAsync(const Model::DeleteAccessPointForObjectLambdaRequest& request, const DeleteAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the access point policy for the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html#API_control_DeleteAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyOutcome DeleteAccessPointPolicy(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointPolicyOutcomeCallable DeleteAccessPointPolicyCallable(const Model::DeleteAccessPointPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointPolicyAsync(const Model::DeleteAccessPointPolicyRequest& request, const DeleteAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the resource policy for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>DeleteAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointPolicyForObjectLambdaOutcome DeleteAccessPointPolicyForObjectLambda(const Model::DeleteAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointPolicyForObjectLambdaOutcomeCallable DeleteAccessPointPolicyForObjectLambdaCallable(const Model::DeleteAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointPolicyForObjectLambdaAsync(const Model::DeleteAccessPointPolicyForObjectLambdaRequest& request, const DeleteAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket. To delete an S3
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the Amazon S3 on
         * Outposts bucket. All objects (including all object versions and delete markers)
         * in the bucket must be deleted before the bucket itself can be deleted. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3
         * on Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html#API_control_DeleteBucket_Examples">Examples</a>
         * section.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html">GetBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

        /**
         * An Async wrapper for DeleteBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To delete an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the lifecycle
         * configuration from the specified Outposts bucket. Amazon S3 on Outposts removes
         * all the lifecycle configuration rules in the lifecycle subresource associated
         * with the bucket. Your objects never expire, and Amazon S3 on Outposts no longer
         * automatically deletes any objects on the basis of rules contained in the deleted
         * lifecycle configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the
         * <code>s3-outposts:DeleteLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the Outposts bucket owner can grant this
         * permission to others.</p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html#API_control_DeleteBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>For more information about object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketLifecycleConfigurationOutcome DeleteBucketLifecycleConfiguration(const Model::DeleteBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketLifecycleConfigurationOutcomeCallable DeleteBucketLifecycleConfigurationCallable(const Model::DeleteBucketLifecycleConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketLifecycleConfigurationAsync(const Model::DeleteBucketLifecycleConfigurationRequest& request, const DeleteBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket policy. To delete
         * an S3 bucket policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>This implementation of
         * the DELETE action uses the policy subresource to delete the policy of a
         * specified Amazon S3 on Outposts bucket. If you are using an identity other than
         * the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>s3-outposts:DeleteBucketPolicy</code>
         * permissions on the specified Outposts bucket and belong to the bucket owner's
         * account to use this action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>If you don't
         * have <code>DeleteBucketPolicy</code> permissions, Amazon S3 returns a <code>403
         * Access Denied</code> error. If you have the correct permissions, but you're not
         * using an identity that belongs to the bucket owner's account, Amazon S3 returns
         * a <code>405 Method Not Allowed</code> error. </p>  <p>As a security
         * precaution, the root user of the Amazon Web Services account that owns a bucket
         * can always use this action, even if the policy explicitly denies the root user
         * the ability to perform this action.</p>  <p>For more information
         * about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>. </p> <p>All Amazon S3 on Outposts REST
         * API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html#API_control_DeleteBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketPolicyAsync(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action deletes an Amazon S3 on Outposts bucket's tags. To delete
         * an S3 bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Deletes the tags from the
         * Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the <code>PutBucketTagging</code>
         * action. By default, the bucket owner has this permission and can grant this
         * permission to others. </p> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html#API_control_DeleteBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * An Async wrapper for DeleteBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketTaggingAsync(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the entire tag set from the specified S3 Batch Operations job. To use
         * this operation, you must have permission to perform the
         * <code>s3:DeleteJobTagging</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTaggingOutcome DeleteJobTagging(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTaggingOutcomeCallable DeleteJobTaggingCallable(const Model::DeleteJobTaggingRequest& request) const;

        /**
         * An Async wrapper for DeleteJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTaggingAsync(const Model::DeleteJobTaggingRequest& request, const DeleteJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Multi-Region Access Point. This action does not delete the buckets
         * associated with the Multi-Region Access Point, only the Multi-Region Access
         * Point itself.</p> <p>This action will always be routed to the US West (Oregon)
         * Region. For more information about the restrictions around managing Multi-Region
         * Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * request is asynchronous, meaning that you might receive a response before the
         * command has completed. When this request provides a response, it provides a
         * token that you can use to monitor the status of the request with
         * <code>DescribeMultiRegionAccessPointOperation</code>.</p> <p>The following
         * actions are related to <code>DeleteMultiRegionAccessPoint</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiRegionAccessPointOutcome DeleteMultiRegionAccessPoint(const Model::DeleteMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMultiRegionAccessPointOutcomeCallable DeleteMultiRegionAccessPointCallable(const Model::DeleteMultiRegionAccessPointRequest& request) const;

        /**
         * An Async wrapper for DeleteMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMultiRegionAccessPointAsync(const Model::DeleteMultiRegionAccessPointRequest& request, const DeleteMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicAccessBlockOutcome DeletePublicAccessBlock(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for DeletePublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicAccessBlockOutcomeCallable DeletePublicAccessBlockCallable(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * An Async wrapper for DeletePublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicAccessBlockAsync(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration. For more information about
         * S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:DeleteStorageLensConfiguration</code> action.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationOutcome DeleteStorageLensConfiguration(const Model::DeleteStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStorageLensConfigurationOutcomeCallable DeleteStorageLensConfigurationCallable(const Model::DeleteStorageLensConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStorageLensConfigurationAsync(const Model::DeleteStorageLensConfigurationRequest& request, const DeleteStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon S3 Storage Lens configuration tags. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:DeleteStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DeleteStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageLensConfigurationTaggingOutcome DeleteStorageLensConfigurationTagging(const Model::DeleteStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStorageLensConfigurationTaggingOutcomeCallable DeleteStorageLensConfigurationTaggingCallable(const Model::DeleteStorageLensConfigurationTaggingRequest& request) const;

        /**
         * An Async wrapper for DeleteStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStorageLensConfigurationTaggingAsync(const Model::DeleteStorageLensConfigurationTaggingRequest& request, const DeleteStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration parameters and status for a Batch Operations job.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of an asynchronous request to manage a Multi-Region
         * Access Point. For more information about managing Multi-Region Access Points and
         * how asynchronous requests work, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>GetMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/DescribeMultiRegionAccessPointOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiRegionAccessPointOperationOutcome DescribeMultiRegionAccessPointOperation(const Model::DescribeMultiRegionAccessPointOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiRegionAccessPointOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMultiRegionAccessPointOperationOutcomeCallable DescribeMultiRegionAccessPointOperationCallable(const Model::DescribeMultiRegionAccessPointOperationRequest& request) const;

        /**
         * An Async wrapper for DescribeMultiRegionAccessPointOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMultiRegionAccessPointOperationAsync(const Model::DescribeMultiRegionAccessPointOperationRequest& request, const DescribeMultiRegionAccessPointOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information about the specified access point.</p> <p/>
         * <p>All Amazon S3 on Outposts REST API requests for this action require an
         * additional parameter of <code>x-amz-outpost-id</code> to be passed with the
         * request. In addition, you must use an S3 on Outposts endpoint hostname prefix
         * instead of <code>s3-control</code>. For an example of the request syntax for
         * Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix and
         * the <code>x-amz-outpost-id</code> derived by using the access point ARN, see the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetAccessPoint</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPoints.html">ListAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointOutcome GetAccessPoint(const Model::GetAccessPointRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointOutcomeCallable GetAccessPointCallable(const Model::GetAccessPointRequest& request) const;

        /**
         * An Async wrapper for GetAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointAsync(const Model::GetAccessPointRequest& request, const GetAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration for an Object Lambda Access Point.</p> <p>The following
         * actions are related to
         * <code>GetAccessPointConfigurationForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointConfigurationForObjectLambda.html">PutAccessPointConfigurationForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointConfigurationForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointConfigurationForObjectLambdaOutcome GetAccessPointConfigurationForObjectLambda(const Model::GetAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointConfigurationForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointConfigurationForObjectLambdaOutcomeCallable GetAccessPointConfigurationForObjectLambdaCallable(const Model::GetAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointConfigurationForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointConfigurationForObjectLambdaAsync(const Model::GetAccessPointConfigurationForObjectLambdaRequest& request, const GetAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information about the specified Object Lambda Access
         * Point</p> <p>The following actions are related to
         * <code>GetAccessPointForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListAccessPointsForObjectLambda.html">ListAccessPointsForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointForObjectLambdaOutcome GetAccessPointForObjectLambda(const Model::GetAccessPointForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointForObjectLambdaOutcomeCallable GetAccessPointForObjectLambdaCallable(const Model::GetAccessPointForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointForObjectLambdaAsync(const Model::GetAccessPointForObjectLambdaRequest& request, const GetAccessPointForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access point policy associated with the specified access
         * point.</p> <p>The following actions are related to
         * <code>GetAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html">PutAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyOutcome GetAccessPointPolicy(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyOutcomeCallable GetAccessPointPolicyCallable(const Model::GetAccessPointPolicyRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyAsync(const Model::GetAccessPointPolicyRequest& request, const GetAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource policy for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>GetAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicyForObjectLambda.html">PutAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyForObjectLambdaOutcome GetAccessPointPolicyForObjectLambda(const Model::GetAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyForObjectLambdaOutcomeCallable GetAccessPointPolicyForObjectLambdaCallable(const Model::GetAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyForObjectLambdaAsync(const Model::GetAccessPointPolicyForObjectLambdaRequest& request, const GetAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified access point currently has a policy that
         * allows public access. For more information about public access through access
         * points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">Managing
         * Data Access with Amazon S3 access points</a> in the <i>Amazon S3 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyStatusOutcome GetAccessPointPolicyStatus(const Model::GetAccessPointPolicyStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyStatusOutcomeCallable GetAccessPointPolicyStatusCallable(const Model::GetAccessPointPolicyStatusRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointPolicyStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyStatusAsync(const Model::GetAccessPointPolicyStatusRequest& request, const GetAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the status of the resource policy associated with an Object Lambda
         * Access Point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetAccessPointPolicyStatusForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPointPolicyStatusForObjectLambdaOutcome GetAccessPointPolicyStatusForObjectLambda(const Model::GetAccessPointPolicyStatusForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPointPolicyStatusForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPointPolicyStatusForObjectLambdaOutcomeCallable GetAccessPointPolicyStatusForObjectLambdaCallable(const Model::GetAccessPointPolicyStatusForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for GetAccessPointPolicyStatusForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPointPolicyStatusForObjectLambdaAsync(const Model::GetAccessPointPolicyStatusForObjectLambdaRequest& request, const GetAccessPointPolicyStatusForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Amazon S3 on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">
         * Using Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If
         * you are using an identity other than the root user of the Amazon Web Services
         * account that owns the Outposts bucket, the calling identity must have the
         * <code>s3-outposts:GetBucket</code> permissions on the specified Outposts bucket
         * and belong to the Outposts bucket owner's account in order to use this action.
         * Only users from Outposts bucket owner account with the right permissions can
         * perform actions on an Outposts bucket. </p> <p> If you don't have
         * <code>s3-outposts:GetBucket</code> permissions or you're not using an identity
         * that belongs to the bucket owner's account, Amazon S3 returns a <code>403 Access
         * Denied</code> error.</p> <p>The following actions are related to
         * <code>GetBucket</code> for Amazon S3 on Outposts:</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucket.html#API_control_GetBucket_Examples">Examples</a>
         * section.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketOutcome GetBucket(const Model::GetBucketRequest& request) const;

        /**
         * A Callable wrapper for GetBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketOutcomeCallable GetBucketCallable(const Model::GetBucketRequest& request) const;

        /**
         * An Async wrapper for GetBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAsync(const Model::GetBucketRequest& request, const GetBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's lifecycle
         * configuration. To get an S3 bucket's lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the lifecycle
         * configuration information set on the Outposts bucket. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> and for information about lifecycle configuration, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">
         * Object Lifecycle Management</a> in <i>Amazon S3 User Guide</i>.</p> <p>To use
         * this action, you must have permission to perform the
         * <code>s3-outposts:GetLifecycleConfiguration</code> action. The Outposts bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>All Amazon S3 on
         * Outposts REST API requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html#API_control_GetBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p> <code>GetBucketLifecycleConfiguration</code> has the following
         * special error:</p> <ul> <li> <p>Error code:
         * <code>NoSuchLifecycleConfiguration</code> </p> <ul> <li> <p>Description: The
         * lifecycle configuration does not exist.</p> </li> <li> <p>HTTP Status Code: 404
         * Not Found</p> </li> <li> <p>SOAP Fault Code Prefix: Client</p> </li> </ul> </li>
         * </ul> <p>The following actions are related to
         * <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLifecycleConfigurationOutcome GetBucketLifecycleConfiguration(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLifecycleConfigurationOutcomeCallable GetBucketLifecycleConfigurationCallable(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLifecycleConfigurationAsync(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets a bucket policy for an Amazon S3 on Outposts bucket.
         * To get a policy for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicy.html">GetBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the policy of a
         * specified Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you are
         * using an identity other than the root user of the Amazon Web Services account
         * that owns the bucket, the calling identity must have the
         * <code>GetBucketPolicy</code> permissions on the specified bucket and belong to
         * the bucket owner's account in order to use this action.</p> <p>Only users from
         * Outposts bucket owner account with the right permissions can perform actions on
         * an Outposts bucket. If you don't have <code>s3-outposts:GetBucketPolicy</code>
         * permissions or you're not using an identity that belongs to the bucket owner's
         * account, Amazon S3 returns a <code>403 Access Denied</code> error.</p>
         *  <p>As a security precaution, the root user of the Amazon Web
         * Services account that owns a bucket can always use this action, even if the
         * policy explicitly denies the root user the ability to perform this action.</p>
         *  <p>For more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html#API_control_GetBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html">PutBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const Model::GetBucketPolicyRequest& request) const;

        /**
         * An Async wrapper for GetBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketPolicyAsync(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action gets an Amazon S3 on Outposts bucket's tags. To get an S3
         * bucket tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the tag set
         * associated with the Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>To use this
         * action, you must have permission to perform the <code>GetBucketTagging</code>
         * action. By default, the bucket owner has this permission and can grant this
         * permission to others.</p> <p> <code>GetBucketTagging</code> has the following
         * special error:</p> <ul> <li> <p>Error code: <code>NoSuchTagSetError</code> </p>
         * <ul> <li> <p>Description: There is no tag set associated with the bucket.</p>
         * </li> </ul> </li> </ul> <p>All Amazon S3 on Outposts REST API requests for this
         * action require an additional parameter of <code>x-amz-outpost-id</code> to be
         * passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html#API_control_GetBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const Model::GetBucketTaggingRequest& request) const;

        /**
         * An Async wrapper for GetBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketTaggingAsync(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This operation returns the versioning state only for S3 on Outposts
         * buckets. To return the versioning state for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Returns the versioning
         * state for an S3 on Outposts bucket. With versioning, you can save multiple
         * distinct copies of your data and recover from unintended user actions and
         * application failures.</p> <p>If you've never set versioning on your bucket, it
         * has no versioning state. In that case, the <code>GetBucketVersioning</code>
         * request does not return a versioning state value.</p> <p>For more information
         * about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Versioning.html">Versioning</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html#API_control_GetBucketVersioning_Examples">Examples</a>
         * section.</p> <p>The following operations are related to
         * <code>GetBucketVersioning</code> for S3 on Outposts.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketVersioning.html">PutBucketVersioning</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketVersioningOutcome GetBucketVersioning(const Model::GetBucketVersioningRequest& request) const;

        /**
         * A Callable wrapper for GetBucketVersioning that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketVersioningOutcomeCallable GetBucketVersioningCallable(const Model::GetBucketVersioningRequest& request) const;

        /**
         * An Async wrapper for GetBucketVersioning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketVersioningAsync(const Model::GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags on an S3 Batch Operations job. To use this operation, you
         * must have permission to perform the <code>s3:GetJobTagging</code> action. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p/> <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutJobTagging.html">PutJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTaggingOutcome GetJobTagging(const Model::GetJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobTaggingOutcomeCallable GetJobTaggingCallable(const Model::GetJobTaggingRequest& request) const;

        /**
         * An Async wrapper for GetJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobTaggingAsync(const Model::GetJobTaggingRequest& request, const GetJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration information about the specified Multi-Region Access
         * Point.</p> <p>This action will always be routed to the US West (Oregon) Region.
         * For more information about the restrictions around managing Multi-Region Access
         * Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>GetMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListMultiRegionAccessPoints.html">ListMultiRegionAccessPoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointOutcome GetMultiRegionAccessPoint(const Model::GetMultiRegionAccessPointRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMultiRegionAccessPointOutcomeCallable GetMultiRegionAccessPointCallable(const Model::GetMultiRegionAccessPointRequest& request) const;

        /**
         * An Async wrapper for GetMultiRegionAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMultiRegionAccessPointAsync(const Model::GetMultiRegionAccessPointRequest& request, const GetMultiRegionAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access control policy of the specified Multi-Region Access
         * Point.</p> <p>This action will always be routed to the US West (Oregon) Region.
         * For more information about the restrictions around managing Multi-Region Access
         * Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>GetMultiRegionAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicyStatus.html">GetMultiRegionAccessPointPolicyStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPointPolicy.html">PutMultiRegionAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointPolicyOutcome GetMultiRegionAccessPointPolicy(const Model::GetMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMultiRegionAccessPointPolicyOutcomeCallable GetMultiRegionAccessPointPolicyCallable(const Model::GetMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * An Async wrapper for GetMultiRegionAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMultiRegionAccessPointPolicyAsync(const Model::GetMultiRegionAccessPointPolicyRequest& request, const GetMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates whether the specified Multi-Region Access Point has an access
         * control policy that allows public access.</p> <p>This action will always be
         * routed to the US West (Oregon) Region. For more information about the
         * restrictions around managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>GetMultiRegionAccessPointPolicyStatus</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicy.html">GetMultiRegionAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutMultiRegionAccessPointPolicy.html">PutMultiRegionAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointPolicyStatusOutcome GetMultiRegionAccessPointPolicyStatus(const Model::GetMultiRegionAccessPointPolicyStatusRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointPolicyStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMultiRegionAccessPointPolicyStatusOutcomeCallable GetMultiRegionAccessPointPolicyStatusCallable(const Model::GetMultiRegionAccessPointPolicyStatusRequest& request) const;

        /**
         * An Async wrapper for GetMultiRegionAccessPointPolicyStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMultiRegionAccessPointPolicyStatusAsync(const Model::GetMultiRegionAccessPointPolicyStatusRequest& request, const GetMultiRegionAccessPointPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the routing configuration for a Multi-Region Access Point, indicating
         * which Regions are active or passive.</p> <p>To obtain routing control changes
         * and failover requests, use the Amazon S3 failover control infrastructure
         * endpoints in these five Amazon Web Services Regions:</p> <ul> <li> <p>
         * <code>us-east-1</code> </p> </li> <li> <p> <code>us-west-2</code> </p> </li>
         * <li> <p> <code>ap-southeast-2</code> </p> </li> <li> <p>
         * <code>ap-northeast-1</code> </p> </li> <li> <p> <code>eu-west-1</code> </p>
         * </li> </ul>  <p>Your Amazon S3 bucket does not need to be in these five
         * Regions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetMultiRegionAccessPointRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionAccessPointRoutesOutcome GetMultiRegionAccessPointRoutes(const Model::GetMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionAccessPointRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMultiRegionAccessPointRoutesOutcomeCallable GetMultiRegionAccessPointRoutesCallable(const Model::GetMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * An Async wrapper for GetMultiRegionAccessPointRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMultiRegionAccessPointRoutesAsync(const Model::GetMultiRegionAccessPointRoutesRequest& request, const GetMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon Web
         * Services account. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicAccessBlockOutcome GetPublicAccessBlock(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for GetPublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicAccessBlockOutcomeCallable GetPublicAccessBlockCallable(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * An Async wrapper for GetPublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicAccessBlockAsync(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Amazon S3 Storage Lens configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>. For a complete list of S3 Storage Lens metrics, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
         * Storage Lens metrics glossary</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>To use this action, you must have permission to perform the
         * <code>s3:GetStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationOutcome GetStorageLensConfiguration(const Model::GetStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStorageLensConfigurationOutcomeCallable GetStorageLensConfigurationCallable(const Model::GetStorageLensConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStorageLensConfigurationAsync(const Model::GetStorageLensConfigurationRequest& request, const GetStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags of Amazon S3 Storage Lens configuration. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:GetStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/GetStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageLensConfigurationTaggingOutcome GetStorageLensConfigurationTagging(const Model::GetStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for GetStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStorageLensConfigurationTaggingOutcomeCallable GetStorageLensConfigurationTaggingCallable(const Model::GetStorageLensConfigurationTaggingRequest& request) const;

        /**
         * An Async wrapper for GetStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStorageLensConfigurationTaggingAsync(const Model::GetStorageLensConfigurationTaggingRequest& request, const GetStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the access points owned by the current account associated
         * with the specified bucket. You can retrieve up to 1000 access points per call.
         * If the specified bucket has more than 1,000 access points (or the number
         * specified in <code>maxResults</code>, whichever is less), the response will
         * include a continuation token that you can use to list the additional access
         * points.</p> <p/> <p>All Amazon S3 on Outposts REST API requests for this action
         * require an additional parameter of <code>x-amz-outpost-id</code> to be passed
         * with the request. In addition, you must use an S3 on Outposts endpoint hostname
         * prefix instead of <code>s3-control</code>. For an example of the request syntax
         * for Amazon S3 on Outposts that uses the S3 on Outposts endpoint hostname prefix
         * and the <code>x-amz-outpost-id</code> derived by using the access point ARN, see
         * the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html#API_control_GetAccessPoint_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>ListAccessPoints</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPoint.html">CreateAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPoint.html">DeleteAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPoint.html">GetAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsOutcome ListAccessPoints(const Model::ListAccessPointsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPointsOutcomeCallable ListAccessPointsCallable(const Model::ListAccessPointsRequest& request) const;

        /**
         * An Async wrapper for ListAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPointsAsync(const Model::ListAccessPointsRequest& request, const ListAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns some or all (up to 1,000) access points associated with the Object
         * Lambda Access Point per call. If there are more access points than what can be
         * returned in one call, the response will include a continuation token that you
         * can use to list the additional access points.</p> <p>The following actions are
         * related to <code>ListAccessPointsForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateAccessPointForObjectLambda.html">CreateAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointForObjectLambda.html">DeleteAccessPointForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointForObjectLambda.html">GetAccessPointForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListAccessPointsForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPointsForObjectLambdaOutcome ListAccessPointsForObjectLambda(const Model::ListAccessPointsForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPointsForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPointsForObjectLambdaOutcomeCallable ListAccessPointsForObjectLambdaCallable(const Model::ListAccessPointsForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for ListAccessPointsForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPointsForObjectLambdaAsync(const Model::ListAccessPointsForObjectLambdaRequest& request, const ListAccessPointsForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists current S3 Batch Operations jobs and jobs that have ended within the
         * last 30 days for the Amazon Web Services account making the request. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Related actions
         * include:</p> <p/> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobPriority.html">UpdateJobPriority</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the Multi-Region Access Points currently associated with
         * the specified Amazon Web Services account. Each call can return up to 100
         * Multi-Region Access Points, the maximum number of Multi-Region Access Points
         * that can be associated with a single account.</p> <p>This action will always be
         * routed to the US West (Oregon) Region. For more information about the
         * restrictions around managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to <code>ListMultiRegionAccessPoint</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateMultiRegionAccessPoint.html">CreateMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteMultiRegionAccessPoint.html">DeleteMultiRegionAccessPoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeMultiRegionAccessPointOperation.html">DescribeMultiRegionAccessPointOperation</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPoint.html">GetMultiRegionAccessPoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListMultiRegionAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiRegionAccessPointsOutcome ListMultiRegionAccessPoints(const Model::ListMultiRegionAccessPointsRequest& request) const;

        /**
         * A Callable wrapper for ListMultiRegionAccessPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultiRegionAccessPointsOutcomeCallable ListMultiRegionAccessPointsCallable(const Model::ListMultiRegionAccessPointsRequest& request) const;

        /**
         * An Async wrapper for ListMultiRegionAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultiRegionAccessPointsAsync(const Model::ListMultiRegionAccessPointsRequest& request, const ListMultiRegionAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all Outposts buckets in an Outpost that are owned by the
         * authenticated sender of the request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For an
         * example of the request syntax for Amazon S3 on Outposts that uses the S3 on
         * Outposts endpoint hostname prefix and <code>x-amz-outpost-id</code> in your
         * request, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListRegionalBuckets.html#API_control_ListRegionalBuckets_Examples">Examples</a>
         * section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListRegionalBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegionalBucketsOutcome ListRegionalBuckets(const Model::ListRegionalBucketsRequest& request) const;

        /**
         * A Callable wrapper for ListRegionalBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegionalBucketsOutcomeCallable ListRegionalBucketsCallable(const Model::ListRegionalBucketsRequest& request) const;

        /**
         * An Async wrapper for ListRegionalBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegionalBucketsAsync(const Model::ListRegionalBucketsRequest& request, const ListRegionalBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of Amazon S3 Storage Lens configurations. For more information
         * about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:ListStorageLensConfigurations</code> action.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ListStorageLensConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageLensConfigurationsOutcome ListStorageLensConfigurations(const Model::ListStorageLensConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListStorageLensConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStorageLensConfigurationsOutcomeCallable ListStorageLensConfigurationsCallable(const Model::ListStorageLensConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListStorageLensConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStorageLensConfigurationsAsync(const Model::ListStorageLensConfigurationsRequest& request, const ListStorageLensConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces configuration for an Object Lambda Access Point.</p> <p>The
         * following actions are related to
         * <code>PutAccessPointConfigurationForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointConfigurationForObjectLambda.html">GetAccessPointConfigurationForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointConfigurationForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointConfigurationForObjectLambdaOutcome PutAccessPointConfigurationForObjectLambda(const Model::PutAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointConfigurationForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessPointConfigurationForObjectLambdaOutcomeCallable PutAccessPointConfigurationForObjectLambdaCallable(const Model::PutAccessPointConfigurationForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for PutAccessPointConfigurationForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessPointConfigurationForObjectLambdaAsync(const Model::PutAccessPointConfigurationForObjectLambdaRequest& request, const PutAccessPointConfigurationForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an access policy with the specified access point. Each access
         * point can have only one policy, so a request made to this API replaces any
         * existing policy associated with the specified access point.</p> <p/> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request. In
         * addition, you must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutAccessPointPolicy.html#API_control_PutAccessPointPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicy.html">GetAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicy.html">DeleteAccessPointPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyOutcome PutAccessPointPolicy(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessPointPolicyOutcomeCallable PutAccessPointPolicyCallable(const Model::PutAccessPointPolicyRequest& request) const;

        /**
         * An Async wrapper for PutAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessPointPolicyAsync(const Model::PutAccessPointPolicyRequest& request, const PutAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or replaces resource policy for an Object Lambda Access Point. For an
         * example policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-create.html#olap-create-cli">Creating
         * Object Lambda Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>PutAccessPointPolicyForObjectLambda</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteAccessPointPolicyForObjectLambda.html">DeleteAccessPointPolicyForObjectLambda</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetAccessPointPolicyForObjectLambda.html">GetAccessPointPolicyForObjectLambda</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutAccessPointPolicyForObjectLambda">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessPointPolicyForObjectLambdaOutcome PutAccessPointPolicyForObjectLambda(const Model::PutAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * A Callable wrapper for PutAccessPointPolicyForObjectLambda that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccessPointPolicyForObjectLambdaOutcomeCallable PutAccessPointPolicyForObjectLambdaCallable(const Model::PutAccessPointPolicyForObjectLambdaRequest& request) const;

        /**
         * An Async wrapper for PutAccessPointPolicyForObjectLambda that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccessPointPolicyForObjectLambdaAsync(const Model::PutAccessPointPolicyForObjectLambdaRequest& request, const PutAccessPointPolicyForObjectLambdaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts a lifecycle configuration to an Amazon S3 on Outposts
         * bucket. To put a lifecycle configuration to an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Creates a new lifecycle
         * configuration for the S3 on Outposts bucket or replaces an existing lifecycle
         * configuration. Outposts buckets only support lifecycle configurations that
         * delete/expire objects after a certain period of time and abort incomplete
         * multipart uploads.</p> <p/> <p>All Amazon S3 on Outposts REST API requests for
         * this action require an additional parameter of <code>x-amz-outpost-id</code> to
         * be passed with the request. In addition, you must use an S3 on Outposts endpoint
         * hostname prefix instead of <code>s3-control</code>. For an example of the
         * request syntax for Amazon S3 on Outposts that uses the S3 on Outposts endpoint
         * hostname prefix and the <code>x-amz-outpost-id</code> derived by using the
         * access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html#API_control_PutBucketLifecycleConfiguration_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketLifecycleConfiguration.html">DeleteBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketLifecycleConfigurationOutcome PutBucketLifecycleConfiguration(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutBucketLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLifecycleConfigurationOutcomeCallable PutBucketLifecycleConfigurationCallable(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutBucketLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLifecycleConfigurationAsync(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts a bucket policy to an Amazon S3 on Outposts bucket.
         * To put a policy on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketPolicy.html">PutBucketPolicy</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Applies an Amazon S3
         * bucket policy to an Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you are
         * using an identity other than the root user of the Amazon Web Services account
         * that owns the Outposts bucket, the calling identity must have the
         * <code>PutBucketPolicy</code> permissions on the specified Outposts bucket and
         * belong to the bucket owner's account in order to use this action.</p> <p>If you
         * don't have <code>PutBucketPolicy</code> permissions, Amazon S3 returns a
         * <code>403 Access Denied</code> error. If you have the correct permissions, but
         * you're not using an identity that belongs to the bucket owner's account, Amazon
         * S3 returns a <code>405 Method Not Allowed</code> error.</p>  <p> As a
         * security precaution, the root user of the Amazon Web Services account that owns
         * a bucket can always use this action, even if the policy explicitly denies the
         * root user the ability to perform this action. </p>  <p>For more
         * information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketPolicy.html#API_control_PutBucketPolicy_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketPolicy.html">GetBucketPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketPolicy.html">DeleteBucketPolicy</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutBucketPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const Model::PutBucketPolicyRequest& request) const;

        /**
         * An Async wrapper for PutBucketPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketPolicyAsync(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action puts tags on an Amazon S3 on Outposts bucket. To put tags
         * on an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Sets the tags for an S3
         * on Outposts bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">Using
         * Amazon S3 on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Use tags to
         * organize your Amazon Web Services bill to reflect your own cost structure. To do
         * this, sign up to get your Amazon Web Services account bill with tag key values
         * included. Then, to see the cost of combined resources, organize your billing
         * information according to resources with the same tag key values. For example,
         * you can tag several resources with a specific application name, and then
         * organize your billing information to see the total cost of that application
         * across several services. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * allocation and tagging</a>.</p>  <p>Within a bucket, if you add a tag that
         * has the same key as an existing tag, the new value overwrites the old value. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/CostAllocTagging.html">
         * Using cost allocation in Amazon S3 bucket tags</a>.</p>  <p>To use this
         * action, you must have permissions to perform the
         * <code>s3-outposts:PutBucketTagging</code> action. The Outposts bucket owner has
         * this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * access permissions to your Amazon S3 resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">
         * User-Defined Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">
         * Amazon Web Services-Generated Cost Allocation Tag Restrictions</a>.</p> </li>
         * </ul> </li> <li> <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li>
         * <p>Description: The XML provided does not match the schema.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>OperationAbortedError </code> </p> <ul> <li>
         * <p>Description: A conflicting conditional action is currently in progress
         * against this resource. Try again.</p> </li> </ul> </li> <li> <p>Error code:
         * <code>InternalError</code> </p> <ul> <li> <p>Description: The service was unable
         * to apply the provided tag to the bucket.</p> </li> </ul> </li> </ul> <p>All
         * Amazon S3 on Outposts REST API requests for this action require an additional
         * parameter of <code>x-amz-outpost-id</code> to be passed with the request. In
         * addition, you must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketTagging.html#API_control_PutBucketTagging_Examples">Examples</a>
         * section.</p> <p>The following actions are related to
         * <code>PutBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutBucketTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const Model::PutBucketTaggingRequest& request) const;

        /**
         * An Async wrapper for PutBucketTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketTaggingAsync(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This operation sets the versioning state only for S3 on Outposts
         * buckets. To set the versioning state for an S3 bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>
         * in the <i>Amazon S3 API Reference</i>. </p>  <p>Sets the versioning state
         * for an S3 on Outposts bucket. With versioning, you can save multiple distinct
         * copies of your data and recover from unintended user actions and application
         * failures.</p> <p>You can set the versioning state to one of the following:</p>
         * <ul> <li> <p> <b>Enabled</b> - Enables versioning for the objects in the bucket.
         * All objects added to the bucket receive a unique version ID.</p> </li> <li> <p>
         * <b>Suspended</b> - Suspends versioning for the objects in the bucket. All
         * objects added to the bucket receive the version ID <code>null</code>.</p> </li>
         * </ul> <p>If you've never set versioning on your bucket, it has no versioning
         * state. In that case, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html">
         * GetBucketVersioning</a> request does not return a versioning state value.</p>
         * <p>When you enable S3 Versioning, for each object in your bucket, you have a
         * current version and zero or more noncurrent versions. You can configure your
         * bucket S3 Lifecycle rules to expire noncurrent versions after a specified time
         * period. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsLifecycleManaging.html">
         * Creating and managing a lifecycle configuration for your S3 on Outposts
         * bucket</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If you have an object
         * expiration lifecycle policy in your non-versioned bucket and you want to
         * maintain the same permanent delete behavior when you enable versioning, you must
         * add a noncurrent expiration policy. The noncurrent expiration lifecycle policy
         * will manage the deletes of the noncurrent object versions in the version-enabled
         * bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/Versioning.html">Versioning</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>All Amazon S3 on Outposts REST API
         * requests for this action require an additional parameter of
         * <code>x-amz-outpost-id</code> to be passed with the request. In addition, you
         * must use an S3 on Outposts endpoint hostname prefix instead of
         * <code>s3-control</code>. For an example of the request syntax for Amazon S3 on
         * Outposts that uses the S3 on Outposts endpoint hostname prefix and the
         * <code>x-amz-outpost-id</code> derived by using the access point ARN, see the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketVersioning.html#API_control_PutBucketVersioning_Examples">Examples</a>
         * section.</p> <p>The following operations are related to
         * <code>PutBucketVersioning</code> for S3 on Outposts.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketVersioning.html">GetBucketVersioning</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketVersioningOutcome PutBucketVersioning(const Model::PutBucketVersioningRequest& request) const;

        /**
         * A Callable wrapper for PutBucketVersioning that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketVersioningOutcomeCallable PutBucketVersioningCallable(const Model::PutBucketVersioningRequest& request) const;

        /**
         * An Async wrapper for PutBucketVersioning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketVersioningAsync(const Model::PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the supplied tag-set on an S3 Batch Operations job.</p> <p>A tag is a
         * key-value pair. You can associate S3 Batch Operations tags with any job by
         * sending a PUT request against the tagging subresource that is associated with
         * the job. To modify the existing tag set, you can either replace the existing tag
         * set entirely, or make changes within the existing tag set by retrieving the
         * existing tag set using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>,
         * modify that tag set, and use this action to replace the tag set with the one you
         * modified. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-managing-jobs.html#batch-ops-job-tags">Controlling
         * access and labeling jobs using tags</a> in the <i>Amazon S3 User Guide</i>. </p>
         * <p/>  <ul> <li> <p>If you send this request with an empty tag set, Amazon
         * S3 deletes the existing tag set on the Batch Operations job. If you use this
         * method, you are charged for a Tier 1 Request (PUT). For more information, see <a
         * href="http://aws.amazon.com/s3/pricing/">Amazon S3 pricing</a>.</p> </li> <li>
         * <p>For deleting existing tags for your Batch Operations job, a <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * request is preferred because it achieves the same result without incurring
         * charges.</p> </li> <li> <p>A few things to consider about using tags:</p> <ul>
         * <li> <p>Amazon S3 limits the maximum number of tags to 50 tags per job.</p>
         * </li> <li> <p>You can associate up to 50 tags with a job as long as they have
         * unique tag keys.</p> </li> <li> <p>A tag key can be up to 128 Unicode characters
         * in length, and tag values can be up to 256 Unicode characters in length.</p>
         * </li> <li> <p>The key and values are case sensitive.</p> </li> <li> <p>For
         * tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>Billing and Cost Management User Guide</i>.</p>
         * </li> </ul> </li> </ul>  <p/> <p>To use this action, you must have
         * permission to perform the <code>s3:PutJobTagging</code> action.</p> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetJobTagging.html">GetJobTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeleteJobTagging.html">DeleteJobTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutJobTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutJobTaggingOutcome PutJobTagging(const Model::PutJobTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutJobTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutJobTaggingOutcomeCallable PutJobTaggingCallable(const Model::PutJobTaggingRequest& request) const;

        /**
         * An Async wrapper for PutJobTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutJobTaggingAsync(const Model::PutJobTaggingRequest& request, const PutJobTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an access control policy with the specified Multi-Region Access
         * Point. Each Multi-Region Access Point can have only one policy, so a request
         * made to this action replaces any existing policy that is associated with the
         * specified Multi-Region Access Point.</p> <p>This action will always be routed to
         * the US West (Oregon) Region. For more information about the restrictions around
         * managing Multi-Region Access Points, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ManagingMultiRegionAccessPoints.html">Managing
         * Multi-Region Access Points</a> in the <i>Amazon S3 User Guide</i>.</p> <p>The
         * following actions are related to
         * <code>PutMultiRegionAccessPointPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicy.html">GetMultiRegionAccessPointPolicy</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetMultiRegionAccessPointPolicyStatus.html">GetMultiRegionAccessPointPolicyStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutMultiRegionAccessPointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMultiRegionAccessPointPolicyOutcome PutMultiRegionAccessPointPolicy(const Model::PutMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutMultiRegionAccessPointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMultiRegionAccessPointPolicyOutcomeCallable PutMultiRegionAccessPointPolicyCallable(const Model::PutMultiRegionAccessPointPolicyRequest& request) const;

        /**
         * An Async wrapper for PutMultiRegionAccessPointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMultiRegionAccessPointPolicyAsync(const Model::PutMultiRegionAccessPointPolicyRequest& request, const PutMultiRegionAccessPointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon Web Services account. For this operation, users must have the
         * <code>s3:PutAccountPublicAccessBlock</code> permission. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">
         * Using Amazon S3 block public access</a>.</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPublicAccessBlockOutcome PutPublicAccessBlock(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * A Callable wrapper for PutPublicAccessBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPublicAccessBlockOutcomeCallable PutPublicAccessBlockCallable(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * An Async wrapper for PutPublicAccessBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPublicAccessBlockAsync(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts an Amazon S3 Storage Lens configuration. For more information about S3
         * Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Working
         * with Amazon S3 Storage Lens</a> in the <i>Amazon S3 User Guide</i>. For a
         * complete list of S3 Storage Lens metrics, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
         * Storage Lens metrics glossary</a> in the <i>Amazon S3 User Guide</i>.</p> 
         * <p>To use this action, you must have permission to perform the
         * <code>s3:PutStorageLensConfiguration</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationOutcome PutStorageLensConfiguration(const Model::PutStorageLensConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutStorageLensConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStorageLensConfigurationOutcomeCallable PutStorageLensConfigurationCallable(const Model::PutStorageLensConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutStorageLensConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStorageLensConfigurationAsync(const Model::PutStorageLensConfigurationRequest& request, const PutStorageLensConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Put or replace tags on an existing Amazon S3 Storage Lens configuration. For
         * more information about S3 Storage Lens, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens.html">Assessing
         * your storage activity and usage with Amazon S3 Storage Lens </a> in the
         * <i>Amazon S3 User Guide</i>.</p>  <p>To use this action, you must have
         * permission to perform the <code>s3:PutStorageLensConfigurationTagging</code>
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage_lens_iam_permissions.html">Setting
         * permissions to use Amazon S3 Storage Lens</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PutStorageLensConfigurationTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStorageLensConfigurationTaggingOutcome PutStorageLensConfigurationTagging(const Model::PutStorageLensConfigurationTaggingRequest& request) const;

        /**
         * A Callable wrapper for PutStorageLensConfigurationTagging that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStorageLensConfigurationTaggingOutcomeCallable PutStorageLensConfigurationTaggingCallable(const Model::PutStorageLensConfigurationTaggingRequest& request) const;

        /**
         * An Async wrapper for PutStorageLensConfigurationTagging that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStorageLensConfigurationTaggingAsync(const Model::PutStorageLensConfigurationTaggingRequest& request, const PutStorageLensConfigurationTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits an updated route configuration for a Multi-Region Access Point. This
         * API operation updates the routing status for the specified Regions from active
         * to passive, or from passive to active. A value of <code>0</code> indicates a
         * passive status, which means that traffic won't be routed to the specified
         * Region. A value of <code>100</code> indicates an active status, which means that
         * traffic will be routed to the specified Region. At least one Region must be
         * active at all times.</p> <p>When the routing configuration is changed, any
         * in-progress operations (uploads, copies, deletes, and so on) to formerly active
         * Regions will continue to run to their final completion state (success or
         * failure). The routing configurations of any Regions that aren’t specified remain
         * unchanged.</p>  <p>Updated routing configurations might not be immediately
         * applied. It can take up to 2 minutes for your changes to take effect.</p>
         *  <p>To submit routing control changes and failover requests, use the
         * Amazon S3 failover control infrastructure endpoints in these five Amazon Web
         * Services Regions:</p> <ul> <li> <p> <code>us-east-1</code> </p> </li> <li> <p>
         * <code>us-west-2</code> </p> </li> <li> <p> <code>ap-southeast-2</code> </p>
         * </li> <li> <p> <code>ap-northeast-1</code> </p> </li> <li> <p>
         * <code>eu-west-1</code> </p> </li> </ul>  <p>Your Amazon S3 bucket does not
         * need to be in these five Regions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SubmitMultiRegionAccessPointRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitMultiRegionAccessPointRoutesOutcome SubmitMultiRegionAccessPointRoutes(const Model::SubmitMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * A Callable wrapper for SubmitMultiRegionAccessPointRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubmitMultiRegionAccessPointRoutesOutcomeCallable SubmitMultiRegionAccessPointRoutesCallable(const Model::SubmitMultiRegionAccessPointRoutesRequest& request) const;

        /**
         * An Async wrapper for SubmitMultiRegionAccessPointRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubmitMultiRegionAccessPointRoutesAsync(const Model::SubmitMultiRegionAccessPointRoutesRequest& request, const SubmitMultiRegionAccessPointRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing S3 Batch Operations job's priority. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobPriority">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobPriorityOutcome UpdateJobPriority(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobPriority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobPriorityOutcomeCallable UpdateJobPriorityCallable(const Model::UpdateJobPriorityRequest& request) const;

        /**
         * An Async wrapper for UpdateJobPriority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobPriorityAsync(const Model::UpdateJobPriorityRequest& request, const UpdateJobPriorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status for the specified job. Use this action to confirm that you
         * want to run a job or to cancel an existing job. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/batch-ops.html">S3
         * Batch Operations</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateJob.html">CreateJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_ListJobs.html">ListJobs</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_DescribeJob.html">DescribeJob</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_UpdateJobStatus.html">UpdateJobStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/UpdateJobStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobStatusOutcome UpdateJobStatus(const Model::UpdateJobStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobStatusOutcomeCallable UpdateJobStatusCallable(const Model::UpdateJobStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateJobStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobStatusAsync(const Model::UpdateJobStatusRequest& request, const UpdateJobStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<S3ControlEndpointProviderBase>& accessEndpointProvider();
    private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<S3ControlClient>;
        void init(const S3ControlClientConfiguration& clientConfiguration);
        S3ControlClientConfiguration m_clientConfiguration;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
        std::shared_ptr<S3ControlEndpointProviderBase> m_endpointProvider;
    };

  } // namespace S3Control
} // namespace Aws
