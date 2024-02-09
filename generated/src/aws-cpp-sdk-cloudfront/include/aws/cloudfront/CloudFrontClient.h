/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudfront/CloudFrontServiceClientModel.h>

namespace Aws
{
namespace CloudFront
{
  /**
   * <fullname>Amazon CloudFront</fullname> <p>This is the <i>Amazon CloudFront API
   * Reference</i>. This guide is for developers who need detailed information about
   * CloudFront API actions, data types, and errors. For detailed information about
   * CloudFront features, see the <i>Amazon CloudFront Developer Guide</i>.</p>
   */
  class AWS_CLOUDFRONT_API CloudFrontClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudFrontClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudFrontClientConfiguration ClientConfigurationType;
      typedef CloudFrontEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::CloudFront::CloudFrontClientConfiguration& clientConfiguration = Aws::CloudFront::CloudFrontClientConfiguration(),
                         std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudFront::CloudFrontClientConfiguration& clientConfiguration = Aws::CloudFront::CloudFrontClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::CloudFront::CloudFrontClientConfiguration& clientConfiguration = Aws::CloudFront::CloudFrontClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudFrontClient();


        /**
         * <p>Associates an alias (also known as a CNAME or an alternate domain name) with
         * a CloudFront distribution.</p> <p>With this operation you can move an alias
         * that's already in use on a CloudFront distribution to a different distribution
         * in one step. This prevents the downtime that could occur if you first remove the
         * alias from one distribution and then separately add the alias to another
         * distribution.</p> <p>To use this operation to associate an alias with a
         * distribution, you provide the alias and the ID of the target distribution for
         * the alias. For more information, including how to set up the target
         * distribution, prerequisites that you must complete, and other restrictions, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/CNAMEs.html#alternate-domain-names-move">Moving
         * an alternate domain name to a different distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/AssociateAlias2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAlias2020_05_31Outcome AssociateAlias2020_05_31(const Model::AssociateAlias2020_05_31Request& request) const;

        /**
         * A Callable wrapper for AssociateAlias2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAlias2020_05_31RequestT = Model::AssociateAlias2020_05_31Request>
        Model::AssociateAlias2020_05_31OutcomeCallable AssociateAlias2020_05_31Callable(const AssociateAlias2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::AssociateAlias2020_05_31, request);
        }

        /**
         * An Async wrapper for AssociateAlias2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAlias2020_05_31RequestT = Model::AssociateAlias2020_05_31Request>
        void AssociateAlias2020_05_31Async(const AssociateAlias2020_05_31RequestT& request, const AssociateAlias2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::AssociateAlias2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a staging distribution using the configuration of the provided
         * primary distribution. A staging distribution is a copy of an existing
         * distribution (called the primary distribution) that you can use in a continuous
         * deployment workflow.</p> <p>After you create a staging distribution, you can use
         * <code>UpdateDistribution</code> to modify the staging distribution's
         * configuration. Then you can use <code>CreateContinuousDeploymentPolicy</code> to
         * incrementally move traffic to the staging distribution.</p> <p>This API
         * operation requires the following IAM permissions:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_CreateDistribution.html">CreateDistribution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_CopyDistribution.html">CopyDistribution</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CopyDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDistribution2020_05_31Outcome CopyDistribution2020_05_31(const Model::CopyDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CopyDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDistribution2020_05_31RequestT = Model::CopyDistribution2020_05_31Request>
        Model::CopyDistribution2020_05_31OutcomeCallable CopyDistribution2020_05_31Callable(const CopyDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CopyDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for CopyDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDistribution2020_05_31RequestT = Model::CopyDistribution2020_05_31Request>
        void CopyDistribution2020_05_31Async(const CopyDistribution2020_05_31RequestT& request, const CopyDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CopyDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a cache policy.</p> <p>After you create a cache policy, you can
         * attach it to one or more cache behaviors. When it's attached to a cache
         * behavior, the cache policy determines the following:</p> <ul> <li> <p>The values
         * that CloudFront includes in the <i>cache key</i>. These values can include HTTP
         * headers, cookies, and URL query strings. CloudFront uses the cache key to find
         * an object in its cache that it can return to the viewer.</p> </li> <li> <p>The
         * default, minimum, and maximum time to live (TTL) values that you want objects to
         * stay in the CloudFront cache.</p> </li> </ul> <p>The headers, cookies, and query
         * strings that are included in the cache key are also included in requests that
         * CloudFront sends to the origin. CloudFront sends a request when it can't find an
         * object in its cache that matches the request's cache key. If you want to send
         * values to the origin but <i>not</i> include them in the cache key, use
         * <code>OriginRequestPolicy</code>.</p> <p>For more information about cache
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">Controlling
         * the cache key</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCachePolicy2020_05_31Outcome CreateCachePolicy2020_05_31(const Model::CreateCachePolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateCachePolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCachePolicy2020_05_31RequestT = Model::CreateCachePolicy2020_05_31Request>
        Model::CreateCachePolicy2020_05_31OutcomeCallable CreateCachePolicy2020_05_31Callable(const CreateCachePolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateCachePolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateCachePolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCachePolicy2020_05_31RequestT = Model::CreateCachePolicy2020_05_31Request>
        void CreateCachePolicy2020_05_31Async(const CreateCachePolicy2020_05_31RequestT& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateCachePolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CreateCloudFrontOriginAccessIdentity2020_05_31(const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateCloudFrontOriginAccessIdentity2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request>
        Model::CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CreateCloudFrontOriginAccessIdentity2020_05_31Callable(const CreateCloudFrontOriginAccessIdentity2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateCloudFrontOriginAccessIdentity2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request>
        void CreateCloudFrontOriginAccessIdentity2020_05_31Async(const CreateCloudFrontOriginAccessIdentity2020_05_31RequestT& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a continuous deployment policy that distributes traffic for a custom
         * domain name to two different CloudFront distributions.</p> <p>To use a
         * continuous deployment policy, first use <code>CopyDistribution</code> to create
         * a staging distribution, then use <code>UpdateDistribution</code> to modify the
         * staging distribution's configuration.</p> <p>After you create and update a
         * staging distribution, you can use a continuous deployment policy to
         * incrementally move traffic to the staging distribution. This workflow enables
         * you to test changes to a distribution's configuration before moving all of your
         * domain's production traffic to the new configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateContinuousDeploymentPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContinuousDeploymentPolicy2020_05_31Outcome CreateContinuousDeploymentPolicy2020_05_31(const Model::CreateContinuousDeploymentPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateContinuousDeploymentPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContinuousDeploymentPolicy2020_05_31RequestT = Model::CreateContinuousDeploymentPolicy2020_05_31Request>
        Model::CreateContinuousDeploymentPolicy2020_05_31OutcomeCallable CreateContinuousDeploymentPolicy2020_05_31Callable(const CreateContinuousDeploymentPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateContinuousDeploymentPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateContinuousDeploymentPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContinuousDeploymentPolicy2020_05_31RequestT = Model::CreateContinuousDeploymentPolicy2020_05_31Request>
        void CreateContinuousDeploymentPolicy2020_05_31Async(const CreateContinuousDeploymentPolicy2020_05_31RequestT& request, const CreateContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateContinuousDeploymentPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a CloudFront distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistribution2020_05_31Outcome CreateDistribution2020_05_31(const Model::CreateDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDistribution2020_05_31RequestT = Model::CreateDistribution2020_05_31Request>
        Model::CreateDistribution2020_05_31OutcomeCallable CreateDistribution2020_05_31Callable(const CreateDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDistribution2020_05_31RequestT = Model::CreateDistribution2020_05_31Request>
        void CreateDistribution2020_05_31Async(const CreateDistribution2020_05_31RequestT& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Create a new distribution with tags. This API operation requires the
         * following IAM permissions:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_CreateDistribution.html">CreateDistribution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_TagResource.html">TagResource</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionWithTags2020_05_31Outcome CreateDistributionWithTags2020_05_31(const Model::CreateDistributionWithTags2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateDistributionWithTags2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDistributionWithTags2020_05_31RequestT = Model::CreateDistributionWithTags2020_05_31Request>
        Model::CreateDistributionWithTags2020_05_31OutcomeCallable CreateDistributionWithTags2020_05_31Callable(const CreateDistributionWithTags2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateDistributionWithTags2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateDistributionWithTags2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDistributionWithTags2020_05_31RequestT = Model::CreateDistributionWithTags2020_05_31Request>
        void CreateDistributionWithTags2020_05_31Async(const CreateDistributionWithTags2020_05_31RequestT& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateDistributionWithTags2020_05_31, request, handler, context);
        }

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionConfig2020_05_31Outcome CreateFieldLevelEncryptionConfig2020_05_31(const Model::CreateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateFieldLevelEncryptionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFieldLevelEncryptionConfig2020_05_31RequestT = Model::CreateFieldLevelEncryptionConfig2020_05_31Request>
        Model::CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CreateFieldLevelEncryptionConfig2020_05_31Callable(const CreateFieldLevelEncryptionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateFieldLevelEncryptionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFieldLevelEncryptionConfig2020_05_31RequestT = Model::CreateFieldLevelEncryptionConfig2020_05_31Request>
        void CreateFieldLevelEncryptionConfig2020_05_31Async(const CreateFieldLevelEncryptionConfig2020_05_31RequestT& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionProfile2020_05_31Outcome CreateFieldLevelEncryptionProfile2020_05_31(const Model::CreateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateFieldLevelEncryptionProfile2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFieldLevelEncryptionProfile2020_05_31RequestT = Model::CreateFieldLevelEncryptionProfile2020_05_31Request>
        Model::CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CreateFieldLevelEncryptionProfile2020_05_31Callable(const CreateFieldLevelEncryptionProfile2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateFieldLevelEncryptionProfile2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFieldLevelEncryptionProfile2020_05_31RequestT = Model::CreateFieldLevelEncryptionProfile2020_05_31Request>
        void CreateFieldLevelEncryptionProfile2020_05_31Async(const CreateFieldLevelEncryptionProfile2020_05_31RequestT& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a CloudFront function.</p> <p>To create a function, you provide the
         * function code and some configuration information about the function. The
         * response contains an Amazon Resource Name (ARN) that uniquely identifies the
         * function.</p> <p>When you create a function, it's in the
         * <code>DEVELOPMENT</code> stage. In this stage, you can test the function with
         * <code>TestFunction</code>, and update it with <code>UpdateFunction</code>.</p>
         * <p>When you're ready to use your function with a CloudFront distribution, use
         * <code>PublishFunction</code> to copy the function from the
         * <code>DEVELOPMENT</code> stage to <code>LIVE</code>. When it's live, you can
         * attach the function to a distribution's cache behavior, using the function's
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunction2020_05_31Outcome CreateFunction2020_05_31(const Model::CreateFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFunction2020_05_31RequestT = Model::CreateFunction2020_05_31Request>
        Model::CreateFunction2020_05_31OutcomeCallable CreateFunction2020_05_31Callable(const CreateFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFunction2020_05_31RequestT = Model::CreateFunction2020_05_31Request>
        void CreateFunction2020_05_31Async(const CreateFunction2020_05_31RequestT& request, const CreateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Create a new invalidation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidation2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvalidation2020_05_31Outcome CreateInvalidation2020_05_31(const Model::CreateInvalidation2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateInvalidation2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInvalidation2020_05_31RequestT = Model::CreateInvalidation2020_05_31Request>
        Model::CreateInvalidation2020_05_31OutcomeCallable CreateInvalidation2020_05_31Callable(const CreateInvalidation2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateInvalidation2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateInvalidation2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInvalidation2020_05_31RequestT = Model::CreateInvalidation2020_05_31Request>
        void CreateInvalidation2020_05_31Async(const CreateInvalidation2020_05_31RequestT& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateInvalidation2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a key group that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
         * signed URLs and signed cookies</a>.</p> <p>To create a key group, you must
         * specify at least one public key for the key group. After you create a key group,
         * you can reference it from one or more cache behaviors. When you reference a key
         * group in a cache behavior, CloudFront requires signed URLs or signed cookies for
         * all requests that match the cache behavior. The URLs or cookies must be signed
         * with a private key whose corresponding public key is in the key group. The
         * signed URL or cookie contains information about which public key CloudFront
         * should use to verify the signature. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * private content</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyGroup2020_05_31Outcome CreateKeyGroup2020_05_31(const Model::CreateKeyGroup2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateKeyGroup2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKeyGroup2020_05_31RequestT = Model::CreateKeyGroup2020_05_31Request>
        Model::CreateKeyGroup2020_05_31OutcomeCallable CreateKeyGroup2020_05_31Callable(const CreateKeyGroup2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateKeyGroup2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateKeyGroup2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeyGroup2020_05_31RequestT = Model::CreateKeyGroup2020_05_31Request>
        void CreateKeyGroup2020_05_31Async(const CreateKeyGroup2020_05_31RequestT& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateKeyGroup2020_05_31, request, handler, context);
        }

        /**
         * <p>Specifies the Key Value Store resource to add to your account. In your
         * account, the Key Value Store names must be unique. You can also import Key Value
         * Store data in JSON format from an S3 bucket by providing a valid
         * <code>ImportSource</code> that you own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateKeyValueStore2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyValueStore2020_05_31Outcome CreateKeyValueStore2020_05_31(const Model::CreateKeyValueStore2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateKeyValueStore2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKeyValueStore2020_05_31RequestT = Model::CreateKeyValueStore2020_05_31Request>
        Model::CreateKeyValueStore2020_05_31OutcomeCallable CreateKeyValueStore2020_05_31Callable(const CreateKeyValueStore2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateKeyValueStore2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateKeyValueStore2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeyValueStore2020_05_31RequestT = Model::CreateKeyValueStore2020_05_31Request>
        void CreateKeyValueStore2020_05_31Async(const CreateKeyValueStore2020_05_31RequestT& request, const CreateKeyValueStore2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateKeyValueStore2020_05_31, request, handler, context);
        }

        /**
         * <p>Enables additional CloudWatch metrics for the specified CloudFront
         * distribution. The additional metrics incur an additional cost.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/viewing-cloudfront-metrics.html#monitoring-console.distributions-additional">Viewing
         * additional CloudFront distribution metrics</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitoringSubscription2020_05_31Outcome CreateMonitoringSubscription2020_05_31(const Model::CreateMonitoringSubscription2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateMonitoringSubscription2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitoringSubscription2020_05_31RequestT = Model::CreateMonitoringSubscription2020_05_31Request>
        Model::CreateMonitoringSubscription2020_05_31OutcomeCallable CreateMonitoringSubscription2020_05_31Callable(const CreateMonitoringSubscription2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateMonitoringSubscription2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateMonitoringSubscription2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitoringSubscription2020_05_31RequestT = Model::CreateMonitoringSubscription2020_05_31Request>
        void CreateMonitoringSubscription2020_05_31Async(const CreateMonitoringSubscription2020_05_31RequestT& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateMonitoringSubscription2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a new origin access control in CloudFront. After you create an origin
         * access control, you can add it to an origin in a CloudFront distribution so that
         * CloudFront sends authenticated (signed) requests to the origin.</p> <p>This
         * makes it possible to block public access to the origin, allowing viewers (users)
         * to access the origin's content only through CloudFront.</p> <p>For more
         * information about using a CloudFront origin access control, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/private-content-restricting-access-to-origin.html">Restricting
         * access to an Amazon Web Services origin</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateOriginAccessControl2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginAccessControl2020_05_31Outcome CreateOriginAccessControl2020_05_31(const Model::CreateOriginAccessControl2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateOriginAccessControl2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOriginAccessControl2020_05_31RequestT = Model::CreateOriginAccessControl2020_05_31Request>
        Model::CreateOriginAccessControl2020_05_31OutcomeCallable CreateOriginAccessControl2020_05_31Callable(const CreateOriginAccessControl2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateOriginAccessControl2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateOriginAccessControl2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOriginAccessControl2020_05_31RequestT = Model::CreateOriginAccessControl2020_05_31Request>
        void CreateOriginAccessControl2020_05_31Async(const CreateOriginAccessControl2020_05_31RequestT& request, const CreateOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateOriginAccessControl2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates an origin request policy.</p> <p>After you create an origin request
         * policy, you can attach it to one or more cache behaviors. When it's attached to
         * a cache behavior, the origin request policy determines the values that
         * CloudFront includes in requests that it sends to the origin. Each request that
         * CloudFront sends to the origin includes the following:</p> <ul> <li> <p>The
         * request body and the URL path (without the domain name) from the viewer
         * request.</p> </li> <li> <p>The headers that CloudFront automatically includes in
         * every origin request, including <code>Host</code>, <code>User-Agent</code>, and
         * <code>X-Amz-Cf-Id</code>.</p> </li> <li> <p>All HTTP headers, cookies, and URL
         * query strings that are specified in the cache policy or the origin request
         * policy. These can include items from the viewer request and, in the case of
         * headers, additional ones that are added by CloudFront.</p> </li> </ul>
         * <p>CloudFront sends a request when it can't find a valid object in its cache
         * that matches the request. If you want to send values to the origin and also
         * include them in the cache key, use <code>CachePolicy</code>.</p> <p>For more
         * information about origin request policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html">Controlling
         * origin requests</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginRequestPolicy2020_05_31Outcome CreateOriginRequestPolicy2020_05_31(const Model::CreateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateOriginRequestPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOriginRequestPolicy2020_05_31RequestT = Model::CreateOriginRequestPolicy2020_05_31Request>
        Model::CreateOriginRequestPolicy2020_05_31OutcomeCallable CreateOriginRequestPolicy2020_05_31Callable(const CreateOriginRequestPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateOriginRequestPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateOriginRequestPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOriginRequestPolicy2020_05_31RequestT = Model::CreateOriginRequestPolicy2020_05_31Request>
        void CreateOriginRequestPolicy2020_05_31Async(const CreateOriginRequestPolicy2020_05_31RequestT& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateOriginRequestPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Uploads a public key to CloudFront that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
         * URLs and signed cookies</a>, or with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
         * encryption</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicKey2020_05_31Outcome CreatePublicKey2020_05_31(const Model::CreatePublicKey2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreatePublicKey2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePublicKey2020_05_31RequestT = Model::CreatePublicKey2020_05_31Request>
        Model::CreatePublicKey2020_05_31OutcomeCallable CreatePublicKey2020_05_31Callable(const CreatePublicKey2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreatePublicKey2020_05_31, request);
        }

        /**
         * An Async wrapper for CreatePublicKey2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePublicKey2020_05_31RequestT = Model::CreatePublicKey2020_05_31Request>
        void CreatePublicKey2020_05_31Async(const CreatePublicKey2020_05_31RequestT& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreatePublicKey2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a real-time log configuration.</p> <p>After you create a real-time
         * log configuration, you can attach it to one or more cache behaviors to send
         * real-time log data to the specified Amazon Kinesis data stream.</p> <p>For more
         * information about real-time log configurations, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
         * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRealtimeLogConfig2020_05_31Outcome CreateRealtimeLogConfig2020_05_31(const Model::CreateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateRealtimeLogConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRealtimeLogConfig2020_05_31RequestT = Model::CreateRealtimeLogConfig2020_05_31Request>
        Model::CreateRealtimeLogConfig2020_05_31OutcomeCallable CreateRealtimeLogConfig2020_05_31Callable(const CreateRealtimeLogConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateRealtimeLogConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateRealtimeLogConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRealtimeLogConfig2020_05_31RequestT = Model::CreateRealtimeLogConfig2020_05_31Request>
        void CreateRealtimeLogConfig2020_05_31Async(const CreateRealtimeLogConfig2020_05_31RequestT& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateRealtimeLogConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Creates a response headers policy.</p> <p>A response headers policy contains
         * information about a set of HTTP headers. To create a response headers policy,
         * you provide some metadata about the policy and a set of configurations that
         * specify the headers.</p> <p>After you create a response headers policy, you can
         * use its ID to attach it to one or more cache behaviors in a CloudFront
         * distribution. When it's attached to a cache behavior, the response headers
         * policy affects the HTTP headers that CloudFront includes in HTTP responses to
         * requests that match the cache behavior. CloudFront adds or removes response
         * headers according to the configuration of the response headers policy.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/modifying-response-headers.html">Adding
         * or removing HTTP headers in CloudFront responses</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateResponseHeadersPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResponseHeadersPolicy2020_05_31Outcome CreateResponseHeadersPolicy2020_05_31(const Model::CreateResponseHeadersPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateResponseHeadersPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResponseHeadersPolicy2020_05_31RequestT = Model::CreateResponseHeadersPolicy2020_05_31Request>
        Model::CreateResponseHeadersPolicy2020_05_31OutcomeCallable CreateResponseHeadersPolicy2020_05_31Callable(const CreateResponseHeadersPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateResponseHeadersPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateResponseHeadersPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResponseHeadersPolicy2020_05_31RequestT = Model::CreateResponseHeadersPolicy2020_05_31Request>
        void CreateResponseHeadersPolicy2020_05_31Async(const CreateResponseHeadersPolicy2020_05_31RequestT& request, const CreateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateResponseHeadersPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>This API is deprecated. Amazon CloudFront is deprecating real-time messaging
         * protocol (RTMP) distributions on December 31, 2020. For more information, <a
         * href="http://forums.aws.amazon.com/ann.jspa?annID=7356">read the
         * announcement</a> on the Amazon CloudFront discussion forum.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistribution2020_05_31Outcome CreateStreamingDistribution2020_05_31(const Model::CreateStreamingDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateStreamingDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingDistribution2020_05_31RequestT = Model::CreateStreamingDistribution2020_05_31Request>
        Model::CreateStreamingDistribution2020_05_31OutcomeCallable CreateStreamingDistribution2020_05_31Callable(const CreateStreamingDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateStreamingDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateStreamingDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingDistribution2020_05_31RequestT = Model::CreateStreamingDistribution2020_05_31Request>
        void CreateStreamingDistribution2020_05_31Async(const CreateStreamingDistribution2020_05_31RequestT& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateStreamingDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>This API is deprecated. Amazon CloudFront is deprecating real-time messaging
         * protocol (RTMP) distributions on December 31, 2020. For more information, <a
         * href="http://forums.aws.amazon.com/ann.jspa?annID=7356">read the
         * announcement</a> on the Amazon CloudFront discussion forum.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistributionWithTags2020_05_31Outcome CreateStreamingDistributionWithTags2020_05_31(const Model::CreateStreamingDistributionWithTags2020_05_31Request& request) const;

        /**
         * A Callable wrapper for CreateStreamingDistributionWithTags2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamingDistributionWithTags2020_05_31RequestT = Model::CreateStreamingDistributionWithTags2020_05_31Request>
        Model::CreateStreamingDistributionWithTags2020_05_31OutcomeCallable CreateStreamingDistributionWithTags2020_05_31Callable(const CreateStreamingDistributionWithTags2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31, request);
        }

        /**
         * An Async wrapper for CreateStreamingDistributionWithTags2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamingDistributionWithTags2020_05_31RequestT = Model::CreateStreamingDistributionWithTags2020_05_31Request>
        void CreateStreamingDistributionWithTags2020_05_31Async(const CreateStreamingDistributionWithTags2020_05_31RequestT& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a cache policy.</p> <p>You cannot delete a cache policy if it's
         * attached to a cache behavior. First update your distributions to remove the
         * cache policy from all cache behaviors, then delete the cache policy.</p> <p>To
         * delete a cache policy, you must provide the policy's identifier and version. To
         * get these values, you can use <code>ListCachePolicies</code> or
         * <code>GetCachePolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCachePolicy2020_05_31Outcome DeleteCachePolicy2020_05_31(const Model::DeleteCachePolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteCachePolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCachePolicy2020_05_31RequestT = Model::DeleteCachePolicy2020_05_31Request>
        Model::DeleteCachePolicy2020_05_31OutcomeCallable DeleteCachePolicy2020_05_31Callable(const DeleteCachePolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteCachePolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteCachePolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCachePolicy2020_05_31RequestT = Model::DeleteCachePolicy2020_05_31Request>
        void DeleteCachePolicy2020_05_31Async(const DeleteCachePolicy2020_05_31RequestT& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteCachePolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Delete an origin access identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome DeleteCloudFrontOriginAccessIdentity2020_05_31(const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteCloudFrontOriginAccessIdentity2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request>
        Model::DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable DeleteCloudFrontOriginAccessIdentity2020_05_31Callable(const DeleteCloudFrontOriginAccessIdentity2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteCloudFrontOriginAccessIdentity2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request>
        void DeleteCloudFrontOriginAccessIdentity2020_05_31Async(const DeleteCloudFrontOriginAccessIdentity2020_05_31RequestT& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a continuous deployment policy.</p> <p>You cannot delete a continuous
         * deployment policy that's attached to a primary distribution. First update your
         * distribution to remove the continuous deployment policy, then you can delete the
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteContinuousDeploymentPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContinuousDeploymentPolicy2020_05_31Outcome DeleteContinuousDeploymentPolicy2020_05_31(const Model::DeleteContinuousDeploymentPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteContinuousDeploymentPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContinuousDeploymentPolicy2020_05_31RequestT = Model::DeleteContinuousDeploymentPolicy2020_05_31Request>
        Model::DeleteContinuousDeploymentPolicy2020_05_31OutcomeCallable DeleteContinuousDeploymentPolicy2020_05_31Callable(const DeleteContinuousDeploymentPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteContinuousDeploymentPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteContinuousDeploymentPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContinuousDeploymentPolicy2020_05_31RequestT = Model::DeleteContinuousDeploymentPolicy2020_05_31Request>
        void DeleteContinuousDeploymentPolicy2020_05_31Async(const DeleteContinuousDeploymentPolicy2020_05_31RequestT& request, const DeleteContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteContinuousDeploymentPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Delete a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistribution2020_05_31Outcome DeleteDistribution2020_05_31(const Model::DeleteDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDistribution2020_05_31RequestT = Model::DeleteDistribution2020_05_31Request>
        Model::DeleteDistribution2020_05_31OutcomeCallable DeleteDistribution2020_05_31Callable(const DeleteDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDistribution2020_05_31RequestT = Model::DeleteDistribution2020_05_31Request>
        void DeleteDistribution2020_05_31Async(const DeleteDistribution2020_05_31RequestT& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2020_05_31Outcome DeleteFieldLevelEncryptionConfig2020_05_31(const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteFieldLevelEncryptionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFieldLevelEncryptionConfig2020_05_31RequestT = Model::DeleteFieldLevelEncryptionConfig2020_05_31Request>
        Model::DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable DeleteFieldLevelEncryptionConfig2020_05_31Callable(const DeleteFieldLevelEncryptionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteFieldLevelEncryptionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFieldLevelEncryptionConfig2020_05_31RequestT = Model::DeleteFieldLevelEncryptionConfig2020_05_31Request>
        void DeleteFieldLevelEncryptionConfig2020_05_31Async(const DeleteFieldLevelEncryptionConfig2020_05_31RequestT& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2020_05_31Outcome DeleteFieldLevelEncryptionProfile2020_05_31(const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteFieldLevelEncryptionProfile2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFieldLevelEncryptionProfile2020_05_31RequestT = Model::DeleteFieldLevelEncryptionProfile2020_05_31Request>
        Model::DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable DeleteFieldLevelEncryptionProfile2020_05_31Callable(const DeleteFieldLevelEncryptionProfile2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteFieldLevelEncryptionProfile2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFieldLevelEncryptionProfile2020_05_31RequestT = Model::DeleteFieldLevelEncryptionProfile2020_05_31Request>
        void DeleteFieldLevelEncryptionProfile2020_05_31Async(const DeleteFieldLevelEncryptionProfile2020_05_31RequestT& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a CloudFront function.</p> <p>You cannot delete a function if it's
         * associated with a cache behavior. First, update your distributions to remove the
         * function association from all cache behaviors, then delete the function.</p>
         * <p>To delete a function, you must provide the function's name and version
         * (<code>ETag</code> value). To get these values, you can use
         * <code>ListFunctions</code> and <code>DescribeFunction</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunction2020_05_31Outcome DeleteFunction2020_05_31(const Model::DeleteFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFunction2020_05_31RequestT = Model::DeleteFunction2020_05_31Request>
        Model::DeleteFunction2020_05_31OutcomeCallable DeleteFunction2020_05_31Callable(const DeleteFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFunction2020_05_31RequestT = Model::DeleteFunction2020_05_31Request>
        void DeleteFunction2020_05_31Async(const DeleteFunction2020_05_31RequestT& request, const DeleteFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a key group.</p> <p>You cannot delete a key group that is referenced
         * in a cache behavior. First update your distributions to remove the key group
         * from all cache behaviors, then delete the key group.</p> <p>To delete a key
         * group, you must provide the key group's identifier and version. To get these
         * values, use <code>ListKeyGroups</code> followed by <code>GetKeyGroup</code> or
         * <code>GetKeyGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyGroup2020_05_31Outcome DeleteKeyGroup2020_05_31(const Model::DeleteKeyGroup2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteKeyGroup2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyGroup2020_05_31RequestT = Model::DeleteKeyGroup2020_05_31Request>
        Model::DeleteKeyGroup2020_05_31OutcomeCallable DeleteKeyGroup2020_05_31Callable(const DeleteKeyGroup2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteKeyGroup2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteKeyGroup2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyGroup2020_05_31RequestT = Model::DeleteKeyGroup2020_05_31Request>
        void DeleteKeyGroup2020_05_31Async(const DeleteKeyGroup2020_05_31RequestT& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteKeyGroup2020_05_31, request, handler, context);
        }

        /**
         * <p>Specifies the Key Value Store to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteKeyValueStore2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyValueStore2020_05_31Outcome DeleteKeyValueStore2020_05_31(const Model::DeleteKeyValueStore2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteKeyValueStore2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyValueStore2020_05_31RequestT = Model::DeleteKeyValueStore2020_05_31Request>
        Model::DeleteKeyValueStore2020_05_31OutcomeCallable DeleteKeyValueStore2020_05_31Callable(const DeleteKeyValueStore2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteKeyValueStore2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteKeyValueStore2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyValueStore2020_05_31RequestT = Model::DeleteKeyValueStore2020_05_31Request>
        void DeleteKeyValueStore2020_05_31Async(const DeleteKeyValueStore2020_05_31RequestT& request, const DeleteKeyValueStore2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteKeyValueStore2020_05_31, request, handler, context);
        }

        /**
         * <p>Disables additional CloudWatch metrics for the specified CloudFront
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitoringSubscription2020_05_31Outcome DeleteMonitoringSubscription2020_05_31(const Model::DeleteMonitoringSubscription2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteMonitoringSubscription2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitoringSubscription2020_05_31RequestT = Model::DeleteMonitoringSubscription2020_05_31Request>
        Model::DeleteMonitoringSubscription2020_05_31OutcomeCallable DeleteMonitoringSubscription2020_05_31Callable(const DeleteMonitoringSubscription2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteMonitoringSubscription2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteMonitoringSubscription2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitoringSubscription2020_05_31RequestT = Model::DeleteMonitoringSubscription2020_05_31Request>
        void DeleteMonitoringSubscription2020_05_31Async(const DeleteMonitoringSubscription2020_05_31RequestT& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteMonitoringSubscription2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a CloudFront origin access control.</p> <p>You cannot delete an
         * origin access control if it's in use. First, update all distributions to remove
         * the origin access control from all origins, then delete the origin access
         * control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteOriginAccessControl2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginAccessControl2020_05_31Outcome DeleteOriginAccessControl2020_05_31(const Model::DeleteOriginAccessControl2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteOriginAccessControl2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOriginAccessControl2020_05_31RequestT = Model::DeleteOriginAccessControl2020_05_31Request>
        Model::DeleteOriginAccessControl2020_05_31OutcomeCallable DeleteOriginAccessControl2020_05_31Callable(const DeleteOriginAccessControl2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteOriginAccessControl2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteOriginAccessControl2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOriginAccessControl2020_05_31RequestT = Model::DeleteOriginAccessControl2020_05_31Request>
        void DeleteOriginAccessControl2020_05_31Async(const DeleteOriginAccessControl2020_05_31RequestT& request, const DeleteOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteOriginAccessControl2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes an origin request policy.</p> <p>You cannot delete an origin request
         * policy if it's attached to any cache behaviors. First update your distributions
         * to remove the origin request policy from all cache behaviors, then delete the
         * origin request policy.</p> <p>To delete an origin request policy, you must
         * provide the policy's identifier and version. To get the identifier, you can use
         * <code>ListOriginRequestPolicies</code> or
         * <code>GetOriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginRequestPolicy2020_05_31Outcome DeleteOriginRequestPolicy2020_05_31(const Model::DeleteOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteOriginRequestPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOriginRequestPolicy2020_05_31RequestT = Model::DeleteOriginRequestPolicy2020_05_31Request>
        Model::DeleteOriginRequestPolicy2020_05_31OutcomeCallable DeleteOriginRequestPolicy2020_05_31Callable(const DeleteOriginRequestPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteOriginRequestPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteOriginRequestPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOriginRequestPolicy2020_05_31RequestT = Model::DeleteOriginRequestPolicy2020_05_31Request>
        void DeleteOriginRequestPolicy2020_05_31Async(const DeleteOriginRequestPolicy2020_05_31RequestT& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteOriginRequestPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeletePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicKey2020_05_31Outcome DeletePublicKey2020_05_31(const Model::DeletePublicKey2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeletePublicKey2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePublicKey2020_05_31RequestT = Model::DeletePublicKey2020_05_31Request>
        Model::DeletePublicKey2020_05_31OutcomeCallable DeletePublicKey2020_05_31Callable(const DeletePublicKey2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeletePublicKey2020_05_31, request);
        }

        /**
         * An Async wrapper for DeletePublicKey2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePublicKey2020_05_31RequestT = Model::DeletePublicKey2020_05_31Request>
        void DeletePublicKey2020_05_31Async(const DeletePublicKey2020_05_31RequestT& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeletePublicKey2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a real-time log configuration.</p> <p>You cannot delete a real-time
         * log configuration if it's attached to a cache behavior. First update your
         * distributions to remove the real-time log configuration from all cache
         * behaviors, then delete the real-time log configuration.</p> <p>To delete a
         * real-time log configuration, you can provide the configuration's name or its
         * Amazon Resource Name (ARN). You must provide at least one. If you provide both,
         * CloudFront uses the name to identify the real-time log configuration to
         * delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRealtimeLogConfig2020_05_31Outcome DeleteRealtimeLogConfig2020_05_31(const Model::DeleteRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteRealtimeLogConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRealtimeLogConfig2020_05_31RequestT = Model::DeleteRealtimeLogConfig2020_05_31Request>
        Model::DeleteRealtimeLogConfig2020_05_31OutcomeCallable DeleteRealtimeLogConfig2020_05_31Callable(const DeleteRealtimeLogConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteRealtimeLogConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteRealtimeLogConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRealtimeLogConfig2020_05_31RequestT = Model::DeleteRealtimeLogConfig2020_05_31Request>
        void DeleteRealtimeLogConfig2020_05_31Async(const DeleteRealtimeLogConfig2020_05_31RequestT& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteRealtimeLogConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Deletes a response headers policy.</p> <p>You cannot delete a response
         * headers policy if it's attached to a cache behavior. First update your
         * distributions to remove the response headers policy from all cache behaviors,
         * then delete the response headers policy.</p> <p>To delete a response headers
         * policy, you must provide the policy's identifier and version. To get these
         * values, you can use <code>ListResponseHeadersPolicies</code> or
         * <code>GetResponseHeadersPolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteResponseHeadersPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResponseHeadersPolicy2020_05_31Outcome DeleteResponseHeadersPolicy2020_05_31(const Model::DeleteResponseHeadersPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteResponseHeadersPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResponseHeadersPolicy2020_05_31RequestT = Model::DeleteResponseHeadersPolicy2020_05_31Request>
        Model::DeleteResponseHeadersPolicy2020_05_31OutcomeCallable DeleteResponseHeadersPolicy2020_05_31Callable(const DeleteResponseHeadersPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteResponseHeadersPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResponseHeadersPolicy2020_05_31RequestT = Model::DeleteResponseHeadersPolicy2020_05_31Request>
        void DeleteResponseHeadersPolicy2020_05_31Async(const DeleteResponseHeadersPolicy2020_05_31RequestT& request, const DeleteResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingDistribution2020_05_31Outcome DeleteStreamingDistribution2020_05_31(const Model::DeleteStreamingDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DeleteStreamingDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamingDistribution2020_05_31RequestT = Model::DeleteStreamingDistribution2020_05_31Request>
        Model::DeleteStreamingDistribution2020_05_31OutcomeCallable DeleteStreamingDistribution2020_05_31Callable(const DeleteStreamingDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DeleteStreamingDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for DeleteStreamingDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamingDistribution2020_05_31RequestT = Model::DeleteStreamingDistribution2020_05_31Request>
        void DeleteStreamingDistribution2020_05_31Async(const DeleteStreamingDistribution2020_05_31RequestT& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DeleteStreamingDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets configuration information and metadata about a CloudFront function, but
         * not the function's code. To get a function's code, use
         * <code>GetFunction</code>.</p> <p>To get configuration information and metadata
         * about a function, you must provide the function's name and stage. To get these
         * values, you can use <code>ListFunctions</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DescribeFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFunction2020_05_31Outcome DescribeFunction2020_05_31(const Model::DescribeFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DescribeFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFunction2020_05_31RequestT = Model::DescribeFunction2020_05_31Request>
        Model::DescribeFunction2020_05_31OutcomeCallable DescribeFunction2020_05_31Callable(const DescribeFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DescribeFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for DescribeFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFunction2020_05_31RequestT = Model::DescribeFunction2020_05_31Request>
        void DescribeFunction2020_05_31Async(const DescribeFunction2020_05_31RequestT& request, const DescribeFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DescribeFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Specifies the Key Value Store and its configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DescribeKeyValueStore2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeyValueStore2020_05_31Outcome DescribeKeyValueStore2020_05_31(const Model::DescribeKeyValueStore2020_05_31Request& request) const;

        /**
         * A Callable wrapper for DescribeKeyValueStore2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeKeyValueStore2020_05_31RequestT = Model::DescribeKeyValueStore2020_05_31Request>
        Model::DescribeKeyValueStore2020_05_31OutcomeCallable DescribeKeyValueStore2020_05_31Callable(const DescribeKeyValueStore2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::DescribeKeyValueStore2020_05_31, request);
        }

        /**
         * An Async wrapper for DescribeKeyValueStore2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeKeyValueStore2020_05_31RequestT = Model::DescribeKeyValueStore2020_05_31Request>
        void DescribeKeyValueStore2020_05_31Async(const DescribeKeyValueStore2020_05_31RequestT& request, const DescribeKeyValueStore2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::DescribeKeyValueStore2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a cache policy, including the following metadata:</p> <ul> <li> <p>The
         * policy's identifier.</p> </li> <li> <p>The date and time when the policy was
         * last modified.</p> </li> </ul> <p>To get a cache policy, you must provide the
         * policy's identifier. If the cache policy is attached to a distribution's cache
         * behavior, you can get the policy's identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the cache
         * policy is not attached to a cache behavior, you can get the identifier using
         * <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCachePolicy2020_05_31Outcome GetCachePolicy2020_05_31(const Model::GetCachePolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetCachePolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCachePolicy2020_05_31RequestT = Model::GetCachePolicy2020_05_31Request>
        Model::GetCachePolicy2020_05_31OutcomeCallable GetCachePolicy2020_05_31Callable(const GetCachePolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetCachePolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for GetCachePolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCachePolicy2020_05_31RequestT = Model::GetCachePolicy2020_05_31Request>
        void GetCachePolicy2020_05_31Async(const GetCachePolicy2020_05_31RequestT& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetCachePolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a cache policy configuration.</p> <p>To get a cache policy
         * configuration, you must provide the policy's identifier. If the cache policy is
         * attached to a distribution's cache behavior, you can get the policy's identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * cache policy is not attached to a cache behavior, you can get the identifier
         * using <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCachePolicyConfig2020_05_31Outcome GetCachePolicyConfig2020_05_31(const Model::GetCachePolicyConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetCachePolicyConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCachePolicyConfig2020_05_31RequestT = Model::GetCachePolicyConfig2020_05_31Request>
        Model::GetCachePolicyConfig2020_05_31OutcomeCallable GetCachePolicyConfig2020_05_31Callable(const GetCachePolicyConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetCachePolicyConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetCachePolicyConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCachePolicyConfig2020_05_31RequestT = Model::GetCachePolicyConfig2020_05_31Request>
        void GetCachePolicyConfig2020_05_31Async(const GetCachePolicyConfig2020_05_31RequestT& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetCachePolicyConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the information about an origin access identity.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2020_05_31Outcome GetCloudFrontOriginAccessIdentity2020_05_31(const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetCloudFrontOriginAccessIdentity2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::GetCloudFrontOriginAccessIdentity2020_05_31Request>
        Model::GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable GetCloudFrontOriginAccessIdentity2020_05_31Callable(const GetCloudFrontOriginAccessIdentity2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31, request);
        }

        /**
         * An Async wrapper for GetCloudFrontOriginAccessIdentity2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::GetCloudFrontOriginAccessIdentity2020_05_31Request>
        void GetCloudFrontOriginAccessIdentity2020_05_31Async(const GetCloudFrontOriginAccessIdentity2020_05_31RequestT& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the configuration information about an origin access
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentityConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome GetCloudFrontOriginAccessIdentityConfig2020_05_31(const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetCloudFrontOriginAccessIdentityConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudFrontOriginAccessIdentityConfig2020_05_31RequestT = Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request>
        Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2020_05_31Callable(const GetCloudFrontOriginAccessIdentityConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetCloudFrontOriginAccessIdentityConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudFrontOriginAccessIdentityConfig2020_05_31RequestT = Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request>
        void GetCloudFrontOriginAccessIdentityConfig2020_05_31Async(const GetCloudFrontOriginAccessIdentityConfig2020_05_31RequestT& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a continuous deployment policy, including metadata (the policy's
         * identifier and the date and time when the policy was last
         * modified).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetContinuousDeploymentPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContinuousDeploymentPolicy2020_05_31Outcome GetContinuousDeploymentPolicy2020_05_31(const Model::GetContinuousDeploymentPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetContinuousDeploymentPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContinuousDeploymentPolicy2020_05_31RequestT = Model::GetContinuousDeploymentPolicy2020_05_31Request>
        Model::GetContinuousDeploymentPolicy2020_05_31OutcomeCallable GetContinuousDeploymentPolicy2020_05_31Callable(const GetContinuousDeploymentPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetContinuousDeploymentPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for GetContinuousDeploymentPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContinuousDeploymentPolicy2020_05_31RequestT = Model::GetContinuousDeploymentPolicy2020_05_31Request>
        void GetContinuousDeploymentPolicy2020_05_31Async(const GetContinuousDeploymentPolicy2020_05_31RequestT& request, const GetContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetContinuousDeploymentPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets configuration information about a continuous deployment
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetContinuousDeploymentPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContinuousDeploymentPolicyConfig2020_05_31Outcome GetContinuousDeploymentPolicyConfig2020_05_31(const Model::GetContinuousDeploymentPolicyConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetContinuousDeploymentPolicyConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContinuousDeploymentPolicyConfig2020_05_31RequestT = Model::GetContinuousDeploymentPolicyConfig2020_05_31Request>
        Model::GetContinuousDeploymentPolicyConfig2020_05_31OutcomeCallable GetContinuousDeploymentPolicyConfig2020_05_31Callable(const GetContinuousDeploymentPolicyConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetContinuousDeploymentPolicyConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetContinuousDeploymentPolicyConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContinuousDeploymentPolicyConfig2020_05_31RequestT = Model::GetContinuousDeploymentPolicyConfig2020_05_31Request>
        void GetContinuousDeploymentPolicyConfig2020_05_31Async(const GetContinuousDeploymentPolicyConfig2020_05_31RequestT& request, const GetContinuousDeploymentPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetContinuousDeploymentPolicyConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistribution2020_05_31Outcome GetDistribution2020_05_31(const Model::GetDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistribution2020_05_31RequestT = Model::GetDistribution2020_05_31Request>
        Model::GetDistribution2020_05_31OutcomeCallable GetDistribution2020_05_31Callable(const GetDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for GetDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistribution2020_05_31RequestT = Model::GetDistribution2020_05_31Request>
        void GetDistribution2020_05_31Async(const GetDistribution2020_05_31RequestT& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the configuration information about a distribution.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfig2020_05_31Outcome GetDistributionConfig2020_05_31(const Model::GetDistributionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetDistributionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionConfig2020_05_31RequestT = Model::GetDistributionConfig2020_05_31Request>
        Model::GetDistributionConfig2020_05_31OutcomeCallable GetDistributionConfig2020_05_31Callable(const GetDistributionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetDistributionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetDistributionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionConfig2020_05_31RequestT = Model::GetDistributionConfig2020_05_31Request>
        void GetDistributionConfig2020_05_31Async(const GetDistributionConfig2020_05_31RequestT& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetDistributionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryption2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryption2020_05_31Outcome GetFieldLevelEncryption2020_05_31(const Model::GetFieldLevelEncryption2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetFieldLevelEncryption2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFieldLevelEncryption2020_05_31RequestT = Model::GetFieldLevelEncryption2020_05_31Request>
        Model::GetFieldLevelEncryption2020_05_31OutcomeCallable GetFieldLevelEncryption2020_05_31Callable(const GetFieldLevelEncryption2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetFieldLevelEncryption2020_05_31, request);
        }

        /**
         * An Async wrapper for GetFieldLevelEncryption2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFieldLevelEncryption2020_05_31RequestT = Model::GetFieldLevelEncryption2020_05_31Request>
        void GetFieldLevelEncryption2020_05_31Async(const GetFieldLevelEncryption2020_05_31RequestT& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetFieldLevelEncryption2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionConfig2020_05_31Outcome GetFieldLevelEncryptionConfig2020_05_31(const Model::GetFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetFieldLevelEncryptionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFieldLevelEncryptionConfig2020_05_31RequestT = Model::GetFieldLevelEncryptionConfig2020_05_31Request>
        Model::GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable GetFieldLevelEncryptionConfig2020_05_31Callable(const GetFieldLevelEncryptionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetFieldLevelEncryptionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFieldLevelEncryptionConfig2020_05_31RequestT = Model::GetFieldLevelEncryptionConfig2020_05_31Request>
        void GetFieldLevelEncryptionConfig2020_05_31Async(const GetFieldLevelEncryptionConfig2020_05_31RequestT& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfile2020_05_31Outcome GetFieldLevelEncryptionProfile2020_05_31(const Model::GetFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetFieldLevelEncryptionProfile2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFieldLevelEncryptionProfile2020_05_31RequestT = Model::GetFieldLevelEncryptionProfile2020_05_31Request>
        Model::GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable GetFieldLevelEncryptionProfile2020_05_31Callable(const GetFieldLevelEncryptionProfile2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31, request);
        }

        /**
         * An Async wrapper for GetFieldLevelEncryptionProfile2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFieldLevelEncryptionProfile2020_05_31RequestT = Model::GetFieldLevelEncryptionProfile2020_05_31Request>
        void GetFieldLevelEncryptionProfile2020_05_31Async(const GetFieldLevelEncryptionProfile2020_05_31RequestT& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfileConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2020_05_31Outcome GetFieldLevelEncryptionProfileConfig2020_05_31(const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetFieldLevelEncryptionProfileConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFieldLevelEncryptionProfileConfig2020_05_31RequestT = Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request>
        Model::GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable GetFieldLevelEncryptionProfileConfig2020_05_31Callable(const GetFieldLevelEncryptionProfileConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetFieldLevelEncryptionProfileConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFieldLevelEncryptionProfileConfig2020_05_31RequestT = Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request>
        void GetFieldLevelEncryptionProfileConfig2020_05_31Async(const GetFieldLevelEncryptionProfileConfig2020_05_31RequestT& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets the code of a CloudFront function. To get configuration information and
         * metadata about a function, use <code>DescribeFunction</code>.</p> <p>To get a
         * function's code, you must provide the function's name and stage. To get these
         * values, you can use <code>ListFunctions</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunction2020_05_31Outcome GetFunction2020_05_31(const Model::GetFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFunction2020_05_31RequestT = Model::GetFunction2020_05_31Request>
        Model::GetFunction2020_05_31OutcomeCallable GetFunction2020_05_31Callable(const GetFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for GetFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFunction2020_05_31RequestT = Model::GetFunction2020_05_31Request>
        void GetFunction2020_05_31Async(const GetFunction2020_05_31RequestT& request, const GetFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the information about an invalidation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetInvalidation2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvalidation2020_05_31Outcome GetInvalidation2020_05_31(const Model::GetInvalidation2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetInvalidation2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvalidation2020_05_31RequestT = Model::GetInvalidation2020_05_31Request>
        Model::GetInvalidation2020_05_31OutcomeCallable GetInvalidation2020_05_31Callable(const GetInvalidation2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetInvalidation2020_05_31, request);
        }

        /**
         * An Async wrapper for GetInvalidation2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvalidation2020_05_31RequestT = Model::GetInvalidation2020_05_31Request>
        void GetInvalidation2020_05_31Async(const GetInvalidation2020_05_31RequestT& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetInvalidation2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a key group, including the date and time when the key group was last
         * modified.</p> <p>To get a key group, you must provide the key group's
         * identifier. If the key group is referenced in a distribution's cache behavior,
         * you can get the key group's identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the key group is not referenced in a cache
         * behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyGroup2020_05_31Outcome GetKeyGroup2020_05_31(const Model::GetKeyGroup2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetKeyGroup2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyGroup2020_05_31RequestT = Model::GetKeyGroup2020_05_31Request>
        Model::GetKeyGroup2020_05_31OutcomeCallable GetKeyGroup2020_05_31Callable(const GetKeyGroup2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetKeyGroup2020_05_31, request);
        }

        /**
         * An Async wrapper for GetKeyGroup2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyGroup2020_05_31RequestT = Model::GetKeyGroup2020_05_31Request>
        void GetKeyGroup2020_05_31Async(const GetKeyGroup2020_05_31RequestT& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetKeyGroup2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a key group configuration.</p> <p>To get a key group configuration, you
         * must provide the key group's identifier. If the key group is referenced in a
         * distribution's cache behavior, you can get the key group's identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the key group
         * is not referenced in a cache behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroupConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyGroupConfig2020_05_31Outcome GetKeyGroupConfig2020_05_31(const Model::GetKeyGroupConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetKeyGroupConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyGroupConfig2020_05_31RequestT = Model::GetKeyGroupConfig2020_05_31Request>
        Model::GetKeyGroupConfig2020_05_31OutcomeCallable GetKeyGroupConfig2020_05_31Callable(const GetKeyGroupConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetKeyGroupConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetKeyGroupConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyGroupConfig2020_05_31RequestT = Model::GetKeyGroupConfig2020_05_31Request>
        void GetKeyGroupConfig2020_05_31Async(const GetKeyGroupConfig2020_05_31RequestT& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetKeyGroupConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets information about whether additional CloudWatch metrics are enabled for
         * the specified CloudFront distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitoringSubscription2020_05_31Outcome GetMonitoringSubscription2020_05_31(const Model::GetMonitoringSubscription2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetMonitoringSubscription2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMonitoringSubscription2020_05_31RequestT = Model::GetMonitoringSubscription2020_05_31Request>
        Model::GetMonitoringSubscription2020_05_31OutcomeCallable GetMonitoringSubscription2020_05_31Callable(const GetMonitoringSubscription2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetMonitoringSubscription2020_05_31, request);
        }

        /**
         * An Async wrapper for GetMonitoringSubscription2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMonitoringSubscription2020_05_31RequestT = Model::GetMonitoringSubscription2020_05_31Request>
        void GetMonitoringSubscription2020_05_31Async(const GetMonitoringSubscription2020_05_31RequestT& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetMonitoringSubscription2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a CloudFront origin access control, including its unique
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginAccessControl2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginAccessControl2020_05_31Outcome GetOriginAccessControl2020_05_31(const Model::GetOriginAccessControl2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetOriginAccessControl2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginAccessControl2020_05_31RequestT = Model::GetOriginAccessControl2020_05_31Request>
        Model::GetOriginAccessControl2020_05_31OutcomeCallable GetOriginAccessControl2020_05_31Callable(const GetOriginAccessControl2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetOriginAccessControl2020_05_31, request);
        }

        /**
         * An Async wrapper for GetOriginAccessControl2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginAccessControl2020_05_31RequestT = Model::GetOriginAccessControl2020_05_31Request>
        void GetOriginAccessControl2020_05_31Async(const GetOriginAccessControl2020_05_31RequestT& request, const GetOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetOriginAccessControl2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a CloudFront origin access control configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginAccessControlConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginAccessControlConfig2020_05_31Outcome GetOriginAccessControlConfig2020_05_31(const Model::GetOriginAccessControlConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetOriginAccessControlConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginAccessControlConfig2020_05_31RequestT = Model::GetOriginAccessControlConfig2020_05_31Request>
        Model::GetOriginAccessControlConfig2020_05_31OutcomeCallable GetOriginAccessControlConfig2020_05_31Callable(const GetOriginAccessControlConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetOriginAccessControlConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetOriginAccessControlConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginAccessControlConfig2020_05_31RequestT = Model::GetOriginAccessControlConfig2020_05_31Request>
        void GetOriginAccessControlConfig2020_05_31Async(const GetOriginAccessControlConfig2020_05_31RequestT& request, const GetOriginAccessControlConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetOriginAccessControlConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets an origin request policy, including the following metadata:</p> <ul>
         * <li> <p>The policy's identifier.</p> </li> <li> <p>The date and time when the
         * policy was last modified.</p> </li> </ul> <p>To get an origin request policy,
         * you must provide the policy's identifier. If the origin request policy is
         * attached to a distribution's cache behavior, you can get the policy's identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * origin request policy is not attached to a cache behavior, you can get the
         * identifier using <code>ListOriginRequestPolicies</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginRequestPolicy2020_05_31Outcome GetOriginRequestPolicy2020_05_31(const Model::GetOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetOriginRequestPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginRequestPolicy2020_05_31RequestT = Model::GetOriginRequestPolicy2020_05_31Request>
        Model::GetOriginRequestPolicy2020_05_31OutcomeCallable GetOriginRequestPolicy2020_05_31Callable(const GetOriginRequestPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetOriginRequestPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for GetOriginRequestPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginRequestPolicy2020_05_31RequestT = Model::GetOriginRequestPolicy2020_05_31Request>
        void GetOriginRequestPolicy2020_05_31Async(const GetOriginRequestPolicy2020_05_31RequestT& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetOriginRequestPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets an origin request policy configuration.</p> <p>To get an origin request
         * policy configuration, you must provide the policy's identifier. If the origin
         * request policy is attached to a distribution's cache behavior, you can get the
         * policy's identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the origin request policy is not attached to a
         * cache behavior, you can get the identifier using
         * <code>ListOriginRequestPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginRequestPolicyConfig2020_05_31Outcome GetOriginRequestPolicyConfig2020_05_31(const Model::GetOriginRequestPolicyConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetOriginRequestPolicyConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginRequestPolicyConfig2020_05_31RequestT = Model::GetOriginRequestPolicyConfig2020_05_31Request>
        Model::GetOriginRequestPolicyConfig2020_05_31OutcomeCallable GetOriginRequestPolicyConfig2020_05_31Callable(const GetOriginRequestPolicyConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetOriginRequestPolicyConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginRequestPolicyConfig2020_05_31RequestT = Model::GetOriginRequestPolicyConfig2020_05_31Request>
        void GetOriginRequestPolicyConfig2020_05_31Async(const GetOriginRequestPolicyConfig2020_05_31RequestT& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKey2020_05_31Outcome GetPublicKey2020_05_31(const Model::GetPublicKey2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetPublicKey2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPublicKey2020_05_31RequestT = Model::GetPublicKey2020_05_31Request>
        Model::GetPublicKey2020_05_31OutcomeCallable GetPublicKey2020_05_31Callable(const GetPublicKey2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetPublicKey2020_05_31, request);
        }

        /**
         * An Async wrapper for GetPublicKey2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPublicKey2020_05_31RequestT = Model::GetPublicKey2020_05_31Request>
        void GetPublicKey2020_05_31Async(const GetPublicKey2020_05_31RequestT& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetPublicKey2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a public key configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKeyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyConfig2020_05_31Outcome GetPublicKeyConfig2020_05_31(const Model::GetPublicKeyConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetPublicKeyConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPublicKeyConfig2020_05_31RequestT = Model::GetPublicKeyConfig2020_05_31Request>
        Model::GetPublicKeyConfig2020_05_31OutcomeCallable GetPublicKeyConfig2020_05_31Callable(const GetPublicKeyConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetPublicKeyConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetPublicKeyConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPublicKeyConfig2020_05_31RequestT = Model::GetPublicKeyConfig2020_05_31Request>
        void GetPublicKeyConfig2020_05_31Async(const GetPublicKeyConfig2020_05_31RequestT& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetPublicKeyConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a real-time log configuration.</p> <p>To get a real-time log
         * configuration, you can provide the configuration's name or its Amazon Resource
         * Name (ARN). You must provide at least one. If you provide both, CloudFront uses
         * the name to identify the real-time log configuration to get.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRealtimeLogConfig2020_05_31Outcome GetRealtimeLogConfig2020_05_31(const Model::GetRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetRealtimeLogConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRealtimeLogConfig2020_05_31RequestT = Model::GetRealtimeLogConfig2020_05_31Request>
        Model::GetRealtimeLogConfig2020_05_31OutcomeCallable GetRealtimeLogConfig2020_05_31Callable(const GetRealtimeLogConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetRealtimeLogConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetRealtimeLogConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRealtimeLogConfig2020_05_31RequestT = Model::GetRealtimeLogConfig2020_05_31Request>
        void GetRealtimeLogConfig2020_05_31Async(const GetRealtimeLogConfig2020_05_31RequestT& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetRealtimeLogConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a response headers policy, including metadata (the policy's identifier
         * and the date and time when the policy was last modified).</p> <p>To get a
         * response headers policy, you must provide the policy's identifier. If the
         * response headers policy is attached to a distribution's cache behavior, you can
         * get the policy's identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the response headers policy is not attached to
         * a cache behavior, you can get the identifier using
         * <code>ListResponseHeadersPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetResponseHeadersPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResponseHeadersPolicy2020_05_31Outcome GetResponseHeadersPolicy2020_05_31(const Model::GetResponseHeadersPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetResponseHeadersPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResponseHeadersPolicy2020_05_31RequestT = Model::GetResponseHeadersPolicy2020_05_31Request>
        Model::GetResponseHeadersPolicy2020_05_31OutcomeCallable GetResponseHeadersPolicy2020_05_31Callable(const GetResponseHeadersPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetResponseHeadersPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for GetResponseHeadersPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResponseHeadersPolicy2020_05_31RequestT = Model::GetResponseHeadersPolicy2020_05_31Request>
        void GetResponseHeadersPolicy2020_05_31Async(const GetResponseHeadersPolicy2020_05_31RequestT& request, const GetResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetResponseHeadersPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a response headers policy configuration.</p> <p>To get a response
         * headers policy configuration, you must provide the policy's identifier. If the
         * response headers policy is attached to a distribution's cache behavior, you can
         * get the policy's identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the response headers policy is not attached to
         * a cache behavior, you can get the identifier using
         * <code>ListResponseHeadersPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetResponseHeadersPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResponseHeadersPolicyConfig2020_05_31Outcome GetResponseHeadersPolicyConfig2020_05_31(const Model::GetResponseHeadersPolicyConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetResponseHeadersPolicyConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResponseHeadersPolicyConfig2020_05_31RequestT = Model::GetResponseHeadersPolicyConfig2020_05_31Request>
        Model::GetResponseHeadersPolicyConfig2020_05_31OutcomeCallable GetResponseHeadersPolicyConfig2020_05_31Callable(const GetResponseHeadersPolicyConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetResponseHeadersPolicyConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResponseHeadersPolicyConfig2020_05_31RequestT = Model::GetResponseHeadersPolicyConfig2020_05_31Request>
        void GetResponseHeadersPolicyConfig2020_05_31Async(const GetResponseHeadersPolicyConfig2020_05_31RequestT& request, const GetResponseHeadersPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistribution2020_05_31Outcome GetStreamingDistribution2020_05_31(const Model::GetStreamingDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetStreamingDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingDistribution2020_05_31RequestT = Model::GetStreamingDistribution2020_05_31Request>
        Model::GetStreamingDistribution2020_05_31OutcomeCallable GetStreamingDistribution2020_05_31Callable(const GetStreamingDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetStreamingDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for GetStreamingDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingDistribution2020_05_31RequestT = Model::GetStreamingDistribution2020_05_31Request>
        void GetStreamingDistribution2020_05_31Async(const GetStreamingDistribution2020_05_31RequestT& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetStreamingDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Get the configuration information about a streaming
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistributionConfig2020_05_31Outcome GetStreamingDistributionConfig2020_05_31(const Model::GetStreamingDistributionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for GetStreamingDistributionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamingDistributionConfig2020_05_31RequestT = Model::GetStreamingDistributionConfig2020_05_31Request>
        Model::GetStreamingDistributionConfig2020_05_31OutcomeCallable GetStreamingDistributionConfig2020_05_31Callable(const GetStreamingDistributionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::GetStreamingDistributionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for GetStreamingDistributionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamingDistributionConfig2020_05_31RequestT = Model::GetStreamingDistributionConfig2020_05_31Request>
        void GetStreamingDistributionConfig2020_05_31Async(const GetStreamingDistributionConfig2020_05_31RequestT& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::GetStreamingDistributionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of cache policies.</p> <p>You can optionally apply a filter to
         * return only the managed policies created by Amazon Web Services, or only the
         * custom policies created in your Amazon Web Services account.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCachePolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCachePolicies2020_05_31Outcome ListCachePolicies2020_05_31(const Model::ListCachePolicies2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListCachePolicies2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCachePolicies2020_05_31RequestT = Model::ListCachePolicies2020_05_31Request>
        Model::ListCachePolicies2020_05_31OutcomeCallable ListCachePolicies2020_05_31Callable(const ListCachePolicies2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListCachePolicies2020_05_31, request);
        }

        /**
         * An Async wrapper for ListCachePolicies2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCachePolicies2020_05_31RequestT = Model::ListCachePolicies2020_05_31Request>
        void ListCachePolicies2020_05_31Async(const ListCachePolicies2020_05_31RequestT& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListCachePolicies2020_05_31, request, handler, context);
        }

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCloudFrontOriginAccessIdentities2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2020_05_31Outcome ListCloudFrontOriginAccessIdentities2020_05_31(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListCloudFrontOriginAccessIdentities2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudFrontOriginAccessIdentities2020_05_31RequestT = Model::ListCloudFrontOriginAccessIdentities2020_05_31Request>
        Model::ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable ListCloudFrontOriginAccessIdentities2020_05_31Callable(const ListCloudFrontOriginAccessIdentities2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31, request);
        }

        /**
         * An Async wrapper for ListCloudFrontOriginAccessIdentities2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudFrontOriginAccessIdentities2020_05_31RequestT = Model::ListCloudFrontOriginAccessIdentities2020_05_31Request>
        void ListCloudFrontOriginAccessIdentities2020_05_31Async(const ListCloudFrontOriginAccessIdentities2020_05_31RequestT& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of aliases (also called CNAMEs or alternate domain names) that
         * conflict or overlap with the provided alias, and the associated CloudFront
         * distributions and Amazon Web Services accounts for each conflicting alias. In
         * the returned list, the distribution and account IDs are partially hidden, which
         * allows you to identify the distributions and accounts that you own, but helps to
         * protect the information of ones that you don't own.</p> <p>Use this operation to
         * find aliases that are in use in CloudFront that conflict or overlap with the
         * provided alias. For example, if you provide <code>www.example.com</code> as
         * input, the returned list can include <code>www.example.com</code> and the
         * overlapping wildcard alternate domain name (<code>*.example.com</code>), if they
         * exist. If you provide <code>*.example.com</code> as input, the returned list can
         * include <code>*.example.com</code> and any alternate domain names covered by
         * that wildcard (for example, <code>www.example.com</code>,
         * <code>test.example.com</code>, <code>dev.example.com</code>, and so on), if they
         * exist.</p> <p>To list conflicting aliases, you provide the alias to search and
         * the ID of a distribution in your account that has an attached SSL/TLS
         * certificate that includes the provided alias. For more information, including
         * how to set up the distribution and certificate, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/CNAMEs.html#alternate-domain-names-move">Moving
         * an alternate domain name to a different distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListConflictingAliases2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConflictingAliases2020_05_31Outcome ListConflictingAliases2020_05_31(const Model::ListConflictingAliases2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListConflictingAliases2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConflictingAliases2020_05_31RequestT = Model::ListConflictingAliases2020_05_31Request>
        Model::ListConflictingAliases2020_05_31OutcomeCallable ListConflictingAliases2020_05_31Callable(const ListConflictingAliases2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListConflictingAliases2020_05_31, request);
        }

        /**
         * An Async wrapper for ListConflictingAliases2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConflictingAliases2020_05_31RequestT = Model::ListConflictingAliases2020_05_31Request>
        void ListConflictingAliases2020_05_31Async(const ListConflictingAliases2020_05_31RequestT& request, const ListConflictingAliases2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListConflictingAliases2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of the continuous deployment policies in your Amazon Web Services
         * account.</p> <p>You can optionally specify the maximum number of items to
         * receive in the response. If the total number of items in the list exceeds the
         * maximum that you specify, or the default maximum, the response is paginated. To
         * get the next page of items, send a subsequent request that specifies the
         * <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListContinuousDeploymentPolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContinuousDeploymentPolicies2020_05_31Outcome ListContinuousDeploymentPolicies2020_05_31(const Model::ListContinuousDeploymentPolicies2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListContinuousDeploymentPolicies2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContinuousDeploymentPolicies2020_05_31RequestT = Model::ListContinuousDeploymentPolicies2020_05_31Request>
        Model::ListContinuousDeploymentPolicies2020_05_31OutcomeCallable ListContinuousDeploymentPolicies2020_05_31Callable(const ListContinuousDeploymentPolicies2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListContinuousDeploymentPolicies2020_05_31, request);
        }

        /**
         * An Async wrapper for ListContinuousDeploymentPolicies2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContinuousDeploymentPolicies2020_05_31RequestT = Model::ListContinuousDeploymentPolicies2020_05_31Request>
        void ListContinuousDeploymentPolicies2020_05_31Async(const ListContinuousDeploymentPolicies2020_05_31RequestT& request, const ListContinuousDeploymentPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListContinuousDeploymentPolicies2020_05_31, request, handler, context);
        }

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributions2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributions2020_05_31Outcome ListDistributions2020_05_31(const Model::ListDistributions2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributions2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributions2020_05_31RequestT = Model::ListDistributions2020_05_31Request>
        Model::ListDistributions2020_05_31OutcomeCallable ListDistributions2020_05_31Callable(const ListDistributions2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributions2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributions2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributions2020_05_31RequestT = Model::ListDistributions2020_05_31Request>
        void ListDistributions2020_05_31Async(const ListDistributions2020_05_31RequestT& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributions2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that's associated with the specified cache policy.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByCachePolicyId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByCachePolicyId2020_05_31Outcome ListDistributionsByCachePolicyId2020_05_31(const Model::ListDistributionsByCachePolicyId2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByCachePolicyId2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByCachePolicyId2020_05_31RequestT = Model::ListDistributionsByCachePolicyId2020_05_31Request>
        Model::ListDistributionsByCachePolicyId2020_05_31OutcomeCallable ListDistributionsByCachePolicyId2020_05_31Callable(const ListDistributionsByCachePolicyId2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByCachePolicyId2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByCachePolicyId2020_05_31RequestT = Model::ListDistributionsByCachePolicyId2020_05_31Request>
        void ListDistributionsByCachePolicyId2020_05_31Async(const ListDistributionsByCachePolicyId2020_05_31RequestT& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that references the specified key group.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByKeyGroup2020_05_31Outcome ListDistributionsByKeyGroup2020_05_31(const Model::ListDistributionsByKeyGroup2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByKeyGroup2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByKeyGroup2020_05_31RequestT = Model::ListDistributionsByKeyGroup2020_05_31Request>
        Model::ListDistributionsByKeyGroup2020_05_31OutcomeCallable ListDistributionsByKeyGroup2020_05_31Callable(const ListDistributionsByKeyGroup2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByKeyGroup2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByKeyGroup2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByKeyGroup2020_05_31RequestT = Model::ListDistributionsByKeyGroup2020_05_31Request>
        void ListDistributionsByKeyGroup2020_05_31Async(const ListDistributionsByKeyGroup2020_05_31RequestT& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByKeyGroup2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that's associated with the specified origin request policy.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByOriginRequestPolicyId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByOriginRequestPolicyId2020_05_31Outcome ListDistributionsByOriginRequestPolicyId2020_05_31(const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByOriginRequestPolicyId2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByOriginRequestPolicyId2020_05_31RequestT = Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request>
        Model::ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable ListDistributionsByOriginRequestPolicyId2020_05_31Callable(const ListDistributionsByOriginRequestPolicyId2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByOriginRequestPolicyId2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByOriginRequestPolicyId2020_05_31RequestT = Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request>
        void ListDistributionsByOriginRequestPolicyId2020_05_31Async(const ListDistributionsByOriginRequestPolicyId2020_05_31RequestT& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of distributions that have a cache behavior that's associated
         * with the specified real-time log configuration.</p> <p>You can specify the
         * real-time log configuration by its name or its Amazon Resource Name (ARN). You
         * must provide at least one. If you provide both, CloudFront uses the name to
         * identify the real-time log configuration to list distributions for.</p> <p>You
         * can optionally specify the maximum number of items to receive in the response.
         * If the total number of items in the list exceeds the maximum that you specify,
         * or the default maximum, the response is paginated. To get the next page of
         * items, send a subsequent request that specifies the <code>NextMarker</code>
         * value from the current response as the <code>Marker</code> value in the
         * subsequent request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByRealtimeLogConfig2020_05_31Outcome ListDistributionsByRealtimeLogConfig2020_05_31(const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByRealtimeLogConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByRealtimeLogConfig2020_05_31RequestT = Model::ListDistributionsByRealtimeLogConfig2020_05_31Request>
        Model::ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable ListDistributionsByRealtimeLogConfig2020_05_31Callable(const ListDistributionsByRealtimeLogConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByRealtimeLogConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByRealtimeLogConfig2020_05_31RequestT = Model::ListDistributionsByRealtimeLogConfig2020_05_31Request>
        void ListDistributionsByRealtimeLogConfig2020_05_31Async(const ListDistributionsByRealtimeLogConfig2020_05_31RequestT& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that's associated with the specified response headers policy.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByResponseHeadersPolicyId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome ListDistributionsByResponseHeadersPolicyId2020_05_31(const Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByResponseHeadersPolicyId2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByResponseHeadersPolicyId2020_05_31RequestT = Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Request>
        Model::ListDistributionsByResponseHeadersPolicyId2020_05_31OutcomeCallable ListDistributionsByResponseHeadersPolicyId2020_05_31Callable(const ListDistributionsByResponseHeadersPolicyId2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByResponseHeadersPolicyId2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByResponseHeadersPolicyId2020_05_31RequestT = Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Request>
        void ListDistributionsByResponseHeadersPolicyId2020_05_31Async(const ListDistributionsByResponseHeadersPolicyId2020_05_31RequestT& request, const ListDistributionsByResponseHeadersPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31, request, handler, context);
        }

        /**
         * <p>List the distributions that are associated with a specified WAF web
         * ACL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByWebACLId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByWebACLId2020_05_31Outcome ListDistributionsByWebACLId2020_05_31(const Model::ListDistributionsByWebACLId2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListDistributionsByWebACLId2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionsByWebACLId2020_05_31RequestT = Model::ListDistributionsByWebACLId2020_05_31Request>
        Model::ListDistributionsByWebACLId2020_05_31OutcomeCallable ListDistributionsByWebACLId2020_05_31Callable(const ListDistributionsByWebACLId2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListDistributionsByWebACLId2020_05_31, request);
        }

        /**
         * An Async wrapper for ListDistributionsByWebACLId2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionsByWebACLId2020_05_31RequestT = Model::ListDistributionsByWebACLId2020_05_31Request>
        void ListDistributionsByWebACLId2020_05_31Async(const ListDistributionsByWebACLId2020_05_31RequestT& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListDistributionsByWebACLId2020_05_31, request, handler, context);
        }

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionConfigs2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionConfigs2020_05_31Outcome ListFieldLevelEncryptionConfigs2020_05_31(const Model::ListFieldLevelEncryptionConfigs2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListFieldLevelEncryptionConfigs2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFieldLevelEncryptionConfigs2020_05_31RequestT = Model::ListFieldLevelEncryptionConfigs2020_05_31Request>
        Model::ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable ListFieldLevelEncryptionConfigs2020_05_31Callable(const ListFieldLevelEncryptionConfigs2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31, request);
        }

        /**
         * An Async wrapper for ListFieldLevelEncryptionConfigs2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFieldLevelEncryptionConfigs2020_05_31RequestT = Model::ListFieldLevelEncryptionConfigs2020_05_31Request>
        void ListFieldLevelEncryptionConfigs2020_05_31Async(const ListFieldLevelEncryptionConfigs2020_05_31RequestT& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31, request, handler, context);
        }

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionProfiles2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionProfiles2020_05_31Outcome ListFieldLevelEncryptionProfiles2020_05_31(const Model::ListFieldLevelEncryptionProfiles2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListFieldLevelEncryptionProfiles2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFieldLevelEncryptionProfiles2020_05_31RequestT = Model::ListFieldLevelEncryptionProfiles2020_05_31Request>
        Model::ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable ListFieldLevelEncryptionProfiles2020_05_31Callable(const ListFieldLevelEncryptionProfiles2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31, request);
        }

        /**
         * An Async wrapper for ListFieldLevelEncryptionProfiles2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFieldLevelEncryptionProfiles2020_05_31RequestT = Model::ListFieldLevelEncryptionProfiles2020_05_31Request>
        void ListFieldLevelEncryptionProfiles2020_05_31Async(const ListFieldLevelEncryptionProfiles2020_05_31RequestT& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of all CloudFront functions in your Amazon Web Services
         * account.</p> <p>You can optionally apply a filter to return only the functions
         * that are in the specified stage, either <code>DEVELOPMENT</code> or
         * <code>LIVE</code>.</p> <p>You can optionally specify the maximum number of items
         * to receive in the response. If the total number of items in the list exceeds the
         * maximum that you specify, or the default maximum, the response is paginated. To
         * get the next page of items, send a subsequent request that specifies the
         * <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFunctions2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctions2020_05_31Outcome ListFunctions2020_05_31(const Model::ListFunctions2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListFunctions2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFunctions2020_05_31RequestT = Model::ListFunctions2020_05_31Request>
        Model::ListFunctions2020_05_31OutcomeCallable ListFunctions2020_05_31Callable(const ListFunctions2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListFunctions2020_05_31, request);
        }

        /**
         * An Async wrapper for ListFunctions2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFunctions2020_05_31RequestT = Model::ListFunctions2020_05_31Request>
        void ListFunctions2020_05_31Async(const ListFunctions2020_05_31RequestT& request, const ListFunctions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListFunctions2020_05_31, request, handler, context);
        }

        /**
         * <p>Lists invalidation batches.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidations2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvalidations2020_05_31Outcome ListInvalidations2020_05_31(const Model::ListInvalidations2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListInvalidations2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvalidations2020_05_31RequestT = Model::ListInvalidations2020_05_31Request>
        Model::ListInvalidations2020_05_31OutcomeCallable ListInvalidations2020_05_31Callable(const ListInvalidations2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListInvalidations2020_05_31, request);
        }

        /**
         * An Async wrapper for ListInvalidations2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvalidations2020_05_31RequestT = Model::ListInvalidations2020_05_31Request>
        void ListInvalidations2020_05_31Async(const ListInvalidations2020_05_31RequestT& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListInvalidations2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of key groups.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListKeyGroups2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyGroups2020_05_31Outcome ListKeyGroups2020_05_31(const Model::ListKeyGroups2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListKeyGroups2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeyGroups2020_05_31RequestT = Model::ListKeyGroups2020_05_31Request>
        Model::ListKeyGroups2020_05_31OutcomeCallable ListKeyGroups2020_05_31Callable(const ListKeyGroups2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListKeyGroups2020_05_31, request);
        }

        /**
         * An Async wrapper for ListKeyGroups2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeyGroups2020_05_31RequestT = Model::ListKeyGroups2020_05_31Request>
        void ListKeyGroups2020_05_31Async(const ListKeyGroups2020_05_31RequestT& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListKeyGroups2020_05_31, request, handler, context);
        }

        /**
         * <p>Specifies the Key Value Stores to list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListKeyValueStores2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyValueStores2020_05_31Outcome ListKeyValueStores2020_05_31(const Model::ListKeyValueStores2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListKeyValueStores2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeyValueStores2020_05_31RequestT = Model::ListKeyValueStores2020_05_31Request>
        Model::ListKeyValueStores2020_05_31OutcomeCallable ListKeyValueStores2020_05_31Callable(const ListKeyValueStores2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListKeyValueStores2020_05_31, request);
        }

        /**
         * An Async wrapper for ListKeyValueStores2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeyValueStores2020_05_31RequestT = Model::ListKeyValueStores2020_05_31Request>
        void ListKeyValueStores2020_05_31Async(const ListKeyValueStores2020_05_31RequestT& request, const ListKeyValueStores2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListKeyValueStores2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets the list of CloudFront origin access controls in this Amazon Web
         * Services account.</p> <p>You can optionally specify the maximum number of items
         * to receive in the response. If the total number of items in the list exceeds the
         * maximum that you specify, or the default maximum, the response is paginated. To
         * get the next page of items, send another request that specifies the
         * <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the next request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListOriginAccessControls2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginAccessControls2020_05_31Outcome ListOriginAccessControls2020_05_31(const Model::ListOriginAccessControls2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListOriginAccessControls2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOriginAccessControls2020_05_31RequestT = Model::ListOriginAccessControls2020_05_31Request>
        Model::ListOriginAccessControls2020_05_31OutcomeCallable ListOriginAccessControls2020_05_31Callable(const ListOriginAccessControls2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListOriginAccessControls2020_05_31, request);
        }

        /**
         * An Async wrapper for ListOriginAccessControls2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOriginAccessControls2020_05_31RequestT = Model::ListOriginAccessControls2020_05_31Request>
        void ListOriginAccessControls2020_05_31Async(const ListOriginAccessControls2020_05_31RequestT& request, const ListOriginAccessControls2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListOriginAccessControls2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of origin request policies.</p> <p>You can optionally apply a
         * filter to return only the managed policies created by Amazon Web Services, or
         * only the custom policies created in your Amazon Web Services account.</p> <p>You
         * can optionally specify the maximum number of items to receive in the response.
         * If the total number of items in the list exceeds the maximum that you specify,
         * or the default maximum, the response is paginated. To get the next page of
         * items, send a subsequent request that specifies the <code>NextMarker</code>
         * value from the current response as the <code>Marker</code> value in the
         * subsequent request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListOriginRequestPolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginRequestPolicies2020_05_31Outcome ListOriginRequestPolicies2020_05_31(const Model::ListOriginRequestPolicies2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListOriginRequestPolicies2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOriginRequestPolicies2020_05_31RequestT = Model::ListOriginRequestPolicies2020_05_31Request>
        Model::ListOriginRequestPolicies2020_05_31OutcomeCallable ListOriginRequestPolicies2020_05_31Callable(const ListOriginRequestPolicies2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListOriginRequestPolicies2020_05_31, request);
        }

        /**
         * An Async wrapper for ListOriginRequestPolicies2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOriginRequestPolicies2020_05_31RequestT = Model::ListOriginRequestPolicies2020_05_31Request>
        void ListOriginRequestPolicies2020_05_31Async(const ListOriginRequestPolicies2020_05_31RequestT& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListOriginRequestPolicies2020_05_31, request, handler, context);
        }

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListPublicKeys2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeys2020_05_31Outcome ListPublicKeys2020_05_31(const Model::ListPublicKeys2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListPublicKeys2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPublicKeys2020_05_31RequestT = Model::ListPublicKeys2020_05_31Request>
        Model::ListPublicKeys2020_05_31OutcomeCallable ListPublicKeys2020_05_31Callable(const ListPublicKeys2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListPublicKeys2020_05_31, request);
        }

        /**
         * An Async wrapper for ListPublicKeys2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPublicKeys2020_05_31RequestT = Model::ListPublicKeys2020_05_31Request>
        void ListPublicKeys2020_05_31Async(const ListPublicKeys2020_05_31RequestT& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListPublicKeys2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of real-time log configurations.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListRealtimeLogConfigs2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeLogConfigs2020_05_31Outcome ListRealtimeLogConfigs2020_05_31(const Model::ListRealtimeLogConfigs2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListRealtimeLogConfigs2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRealtimeLogConfigs2020_05_31RequestT = Model::ListRealtimeLogConfigs2020_05_31Request>
        Model::ListRealtimeLogConfigs2020_05_31OutcomeCallable ListRealtimeLogConfigs2020_05_31Callable(const ListRealtimeLogConfigs2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListRealtimeLogConfigs2020_05_31, request);
        }

        /**
         * An Async wrapper for ListRealtimeLogConfigs2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRealtimeLogConfigs2020_05_31RequestT = Model::ListRealtimeLogConfigs2020_05_31Request>
        void ListRealtimeLogConfigs2020_05_31Async(const ListRealtimeLogConfigs2020_05_31RequestT& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListRealtimeLogConfigs2020_05_31, request, handler, context);
        }

        /**
         * <p>Gets a list of response headers policies.</p> <p>You can optionally apply a
         * filter to get only the managed policies created by Amazon Web Services, or only
         * the custom policies created in your Amazon Web Services account.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListResponseHeadersPolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResponseHeadersPolicies2020_05_31Outcome ListResponseHeadersPolicies2020_05_31(const Model::ListResponseHeadersPolicies2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListResponseHeadersPolicies2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResponseHeadersPolicies2020_05_31RequestT = Model::ListResponseHeadersPolicies2020_05_31Request>
        Model::ListResponseHeadersPolicies2020_05_31OutcomeCallable ListResponseHeadersPolicies2020_05_31Callable(const ListResponseHeadersPolicies2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListResponseHeadersPolicies2020_05_31, request);
        }

        /**
         * An Async wrapper for ListResponseHeadersPolicies2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResponseHeadersPolicies2020_05_31RequestT = Model::ListResponseHeadersPolicies2020_05_31Request>
        void ListResponseHeadersPolicies2020_05_31Async(const ListResponseHeadersPolicies2020_05_31RequestT& request, const ListResponseHeadersPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListResponseHeadersPolicies2020_05_31, request, handler, context);
        }

        /**
         * <p>List streaming distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListStreamingDistributions2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingDistributions2020_05_31Outcome ListStreamingDistributions2020_05_31(const Model::ListStreamingDistributions2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListStreamingDistributions2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamingDistributions2020_05_31RequestT = Model::ListStreamingDistributions2020_05_31Request>
        Model::ListStreamingDistributions2020_05_31OutcomeCallable ListStreamingDistributions2020_05_31Callable(const ListStreamingDistributions2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListStreamingDistributions2020_05_31, request);
        }

        /**
         * An Async wrapper for ListStreamingDistributions2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamingDistributions2020_05_31RequestT = Model::ListStreamingDistributions2020_05_31Request>
        void ListStreamingDistributions2020_05_31Async(const ListStreamingDistributions2020_05_31RequestT& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListStreamingDistributions2020_05_31, request, handler, context);
        }

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListTagsForResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResource2020_05_31Outcome ListTagsForResource2020_05_31(const Model::ListTagsForResource2020_05_31Request& request) const;

        /**
         * A Callable wrapper for ListTagsForResource2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResource2020_05_31RequestT = Model::ListTagsForResource2020_05_31Request>
        Model::ListTagsForResource2020_05_31OutcomeCallable ListTagsForResource2020_05_31Callable(const ListTagsForResource2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::ListTagsForResource2020_05_31, request);
        }

        /**
         * An Async wrapper for ListTagsForResource2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResource2020_05_31RequestT = Model::ListTagsForResource2020_05_31Request>
        void ListTagsForResource2020_05_31Async(const ListTagsForResource2020_05_31RequestT& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::ListTagsForResource2020_05_31, request, handler, context);
        }

        /**
         * <p>Publishes a CloudFront function by copying the function code from the
         * <code>DEVELOPMENT</code> stage to <code>LIVE</code>. This automatically updates
         * all cache behaviors that are using this function to use the newly published copy
         * in the <code>LIVE</code> stage.</p> <p>When a function is published to the
         * <code>LIVE</code> stage, you can attach the function to a distribution's cache
         * behavior, using the function's Amazon Resource Name (ARN).</p> <p>To publish a
         * function, you must provide the function's name and version (<code>ETag</code>
         * value). To get these values, you can use <code>ListFunctions</code> and
         * <code>DescribeFunction</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/PublishFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishFunction2020_05_31Outcome PublishFunction2020_05_31(const Model::PublishFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for PublishFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishFunction2020_05_31RequestT = Model::PublishFunction2020_05_31Request>
        Model::PublishFunction2020_05_31OutcomeCallable PublishFunction2020_05_31Callable(const PublishFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::PublishFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for PublishFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishFunction2020_05_31RequestT = Model::PublishFunction2020_05_31Request>
        void PublishFunction2020_05_31Async(const PublishFunction2020_05_31RequestT& request, const PublishFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::PublishFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TagResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResource2020_05_31Outcome TagResource2020_05_31(const Model::TagResource2020_05_31Request& request) const;

        /**
         * A Callable wrapper for TagResource2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResource2020_05_31RequestT = Model::TagResource2020_05_31Request>
        Model::TagResource2020_05_31OutcomeCallable TagResource2020_05_31Callable(const TagResource2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::TagResource2020_05_31, request);
        }

        /**
         * An Async wrapper for TagResource2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResource2020_05_31RequestT = Model::TagResource2020_05_31Request>
        void TagResource2020_05_31Async(const TagResource2020_05_31RequestT& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::TagResource2020_05_31, request, handler, context);
        }

        /**
         * <p>Tests a CloudFront function.</p> <p>To test a function, you provide an
         * <i>event object</i> that represents an HTTP request or response that your
         * CloudFront distribution could receive in production. CloudFront runs the
         * function, passing it the event object that you provided, and returns the
         * function's result (the modified event object) in the response. The response also
         * contains function logs and error messages, if any exist. For more information
         * about testing functions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/managing-functions.html#test-function">Testing
         * functions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>To test a
         * function, you provide the function's name and version (<code>ETag</code> value)
         * along with the event object. To get the function's name and version, you can use
         * <code>ListFunctions</code> and <code>DescribeFunction</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TestFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::TestFunction2020_05_31Outcome TestFunction2020_05_31(const Model::TestFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for TestFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestFunction2020_05_31RequestT = Model::TestFunction2020_05_31Request>
        Model::TestFunction2020_05_31OutcomeCallable TestFunction2020_05_31Callable(const TestFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::TestFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for TestFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestFunction2020_05_31RequestT = Model::TestFunction2020_05_31Request>
        void TestFunction2020_05_31Async(const TestFunction2020_05_31RequestT& request, const TestFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::TestFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UntagResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResource2020_05_31Outcome UntagResource2020_05_31(const Model::UntagResource2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UntagResource2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResource2020_05_31RequestT = Model::UntagResource2020_05_31Request>
        Model::UntagResource2020_05_31OutcomeCallable UntagResource2020_05_31Callable(const UntagResource2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UntagResource2020_05_31, request);
        }

        /**
         * An Async wrapper for UntagResource2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResource2020_05_31RequestT = Model::UntagResource2020_05_31Request>
        void UntagResource2020_05_31Async(const UntagResource2020_05_31RequestT& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UntagResource2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a cache policy configuration.</p> <p>When you update a cache policy
         * configuration, all the fields are updated with the values provided in the
         * request. You cannot update some fields independent of others. To update a cache
         * policy configuration:</p> <ol> <li> <p>Use <code>GetCachePolicyConfig</code> to
         * get the current configuration.</p> </li> <li> <p>Locally modify the fields in
         * the cache policy configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateCachePolicy</code> by providing the entire cache policy
         * configuration, including the fields that you modified and those that you
         * didn't.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCachePolicy2020_05_31Outcome UpdateCachePolicy2020_05_31(const Model::UpdateCachePolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateCachePolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCachePolicy2020_05_31RequestT = Model::UpdateCachePolicy2020_05_31Request>
        Model::UpdateCachePolicy2020_05_31OutcomeCallable UpdateCachePolicy2020_05_31Callable(const UpdateCachePolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateCachePolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateCachePolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCachePolicy2020_05_31RequestT = Model::UpdateCachePolicy2020_05_31Request>
        void UpdateCachePolicy2020_05_31Async(const UpdateCachePolicy2020_05_31RequestT& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateCachePolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Update an origin access identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome UpdateCloudFrontOriginAccessIdentity2020_05_31(const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateCloudFrontOriginAccessIdentity2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request>
        Model::UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable UpdateCloudFrontOriginAccessIdentity2020_05_31Callable(const UpdateCloudFrontOriginAccessIdentity2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateCloudFrontOriginAccessIdentity2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCloudFrontOriginAccessIdentity2020_05_31RequestT = Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request>
        void UpdateCloudFrontOriginAccessIdentity2020_05_31Async(const UpdateCloudFrontOriginAccessIdentity2020_05_31RequestT& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a continuous deployment policy. You can update a continuous
         * deployment policy to enable or disable it, to change the percentage of traffic
         * that it sends to the staging distribution, or to change the staging distribution
         * that it sends traffic to.</p> <p>When you update a continuous deployment policy
         * configuration, all the fields are updated with the values that are provided in
         * the request. You cannot update some fields independent of others. To update a
         * continuous deployment policy configuration:</p> <ol> <li> <p>Use
         * <code>GetContinuousDeploymentPolicyConfig</code> to get the current
         * configuration.</p> </li> <li> <p>Locally modify the fields in the continuous
         * deployment policy configuration that you want to update.</p> </li> <li> <p>Use
         * <code>UpdateContinuousDeploymentPolicy</code>, providing the entire continuous
         * deployment policy configuration, including the fields that you modified and
         * those that you didn't.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateContinuousDeploymentPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContinuousDeploymentPolicy2020_05_31Outcome UpdateContinuousDeploymentPolicy2020_05_31(const Model::UpdateContinuousDeploymentPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateContinuousDeploymentPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContinuousDeploymentPolicy2020_05_31RequestT = Model::UpdateContinuousDeploymentPolicy2020_05_31Request>
        Model::UpdateContinuousDeploymentPolicy2020_05_31OutcomeCallable UpdateContinuousDeploymentPolicy2020_05_31Callable(const UpdateContinuousDeploymentPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateContinuousDeploymentPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateContinuousDeploymentPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContinuousDeploymentPolicy2020_05_31RequestT = Model::UpdateContinuousDeploymentPolicy2020_05_31Request>
        void UpdateContinuousDeploymentPolicy2020_05_31Async(const UpdateContinuousDeploymentPolicy2020_05_31RequestT& request, const UpdateContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateContinuousDeploymentPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates the configuration for a CloudFront distribution.</p> <p>The update
         * process includes getting the current distribution configuration, updating it to
         * make your changes, and then submitting an <code>UpdateDistribution</code>
         * request to make the updates.</p> <p> <b>To update a web distribution using the
         * CloudFront API</b> </p> <ol> <li> <p>Use <code>GetDistributionConfig</code> to
         * get the current configuration, including the version identifier
         * (<code>ETag</code>).</p> </li> <li> <p>Update the distribution configuration
         * that was returned in the response. Note the following important requirements and
         * restrictions:</p> <ul> <li> <p>You must rename the <code>ETag</code> field to
         * <code>IfMatch</code>, leaving the value unchanged. (Set the value of
         * <code>IfMatch</code> to the value of <code>ETag</code>, then remove the
         * <code>ETag</code> field.)</p> </li> <li> <p>You can't change the value of
         * <code>CallerReference</code>.</p> </li> </ul> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request, providing the distribution
         * configuration. The new configuration replaces the existing configuration. The
         * values that you specify in an <code>UpdateDistribution</code> request are not
         * merged into your existing configuration. Make sure to include all fields: the
         * ones that you modified and also the ones that you didn't.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistribution2020_05_31Outcome UpdateDistribution2020_05_31(const Model::UpdateDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDistribution2020_05_31RequestT = Model::UpdateDistribution2020_05_31Request>
        Model::UpdateDistribution2020_05_31OutcomeCallable UpdateDistribution2020_05_31Callable(const UpdateDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDistribution2020_05_31RequestT = Model::UpdateDistribution2020_05_31Request>
        void UpdateDistribution2020_05_31Async(const UpdateDistribution2020_05_31RequestT& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateDistribution2020_05_31, request, handler, context);
        }

        /**
         * <p>Copies the staging distribution's configuration to its corresponding primary
         * distribution. The primary distribution retains its <code>Aliases</code> (also
         * known as alternate domain names or CNAMEs) and
         * <code>ContinuousDeploymentPolicyId</code> value, but otherwise its configuration
         * is overwritten to match the staging distribution.</p> <p>You can use this
         * operation in a continuous deployment workflow after you have tested
         * configuration changes on the staging distribution. After using a continuous
         * deployment policy to move a portion of your domain name's traffic to the staging
         * distribution and verifying that it works as intended, you can use this operation
         * to copy the staging distribution's configuration to the primary distribution.
         * This action will disable the continuous deployment policy and move your domain's
         * traffic back to the primary distribution.</p> <p>This API operation requires the
         * following IAM permissions:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateDistributionWithStagingConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionWithStagingConfig2020_05_31Outcome UpdateDistributionWithStagingConfig2020_05_31(const Model::UpdateDistributionWithStagingConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateDistributionWithStagingConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDistributionWithStagingConfig2020_05_31RequestT = Model::UpdateDistributionWithStagingConfig2020_05_31Request>
        Model::UpdateDistributionWithStagingConfig2020_05_31OutcomeCallable UpdateDistributionWithStagingConfig2020_05_31Callable(const UpdateDistributionWithStagingConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateDistributionWithStagingConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateDistributionWithStagingConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDistributionWithStagingConfig2020_05_31RequestT = Model::UpdateDistributionWithStagingConfig2020_05_31Request>
        void UpdateDistributionWithStagingConfig2020_05_31Async(const UpdateDistributionWithStagingConfig2020_05_31RequestT& request, const UpdateDistributionWithStagingConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateDistributionWithStagingConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Update a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2020_05_31Outcome UpdateFieldLevelEncryptionConfig2020_05_31(const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateFieldLevelEncryptionConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFieldLevelEncryptionConfig2020_05_31RequestT = Model::UpdateFieldLevelEncryptionConfig2020_05_31Request>
        Model::UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable UpdateFieldLevelEncryptionConfig2020_05_31Callable(const UpdateFieldLevelEncryptionConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateFieldLevelEncryptionConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFieldLevelEncryptionConfig2020_05_31RequestT = Model::UpdateFieldLevelEncryptionConfig2020_05_31Request>
        void UpdateFieldLevelEncryptionConfig2020_05_31Async(const UpdateFieldLevelEncryptionConfig2020_05_31RequestT& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Update a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2020_05_31Outcome UpdateFieldLevelEncryptionProfile2020_05_31(const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateFieldLevelEncryptionProfile2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFieldLevelEncryptionProfile2020_05_31RequestT = Model::UpdateFieldLevelEncryptionProfile2020_05_31Request>
        Model::UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable UpdateFieldLevelEncryptionProfile2020_05_31Callable(const UpdateFieldLevelEncryptionProfile2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateFieldLevelEncryptionProfile2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFieldLevelEncryptionProfile2020_05_31RequestT = Model::UpdateFieldLevelEncryptionProfile2020_05_31Request>
        void UpdateFieldLevelEncryptionProfile2020_05_31Async(const UpdateFieldLevelEncryptionProfile2020_05_31RequestT& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a CloudFront function.</p> <p>You can update a function's code or the
         * comment that describes the function. You cannot update a function's name.</p>
         * <p>To update a function, you provide the function's name and version
         * (<code>ETag</code> value) along with the updated function code. To get the name
         * and version, you can use <code>ListFunctions</code> and
         * <code>DescribeFunction</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFunction2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunction2020_05_31Outcome UpdateFunction2020_05_31(const Model::UpdateFunction2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateFunction2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFunction2020_05_31RequestT = Model::UpdateFunction2020_05_31Request>
        Model::UpdateFunction2020_05_31OutcomeCallable UpdateFunction2020_05_31Callable(const UpdateFunction2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateFunction2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateFunction2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFunction2020_05_31RequestT = Model::UpdateFunction2020_05_31Request>
        void UpdateFunction2020_05_31Async(const UpdateFunction2020_05_31RequestT& request, const UpdateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateFunction2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a key group.</p> <p>When you update a key group, all the fields are
         * updated with the values provided in the request. You cannot update some fields
         * independent of others. To update a key group:</p> <ol> <li> <p>Get the current
         * key group with <code>GetKeyGroup</code> or <code>GetKeyGroupConfig</code>.</p>
         * </li> <li> <p>Locally modify the fields in the key group that you want to
         * update. For example, add or remove public key IDs.</p> </li> <li> <p>Call
         * <code>UpdateKeyGroup</code> with the entire key group object, including the
         * fields that you modified and those that you didn't.</p> </li> </ol><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeyGroup2020_05_31Outcome UpdateKeyGroup2020_05_31(const Model::UpdateKeyGroup2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateKeyGroup2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKeyGroup2020_05_31RequestT = Model::UpdateKeyGroup2020_05_31Request>
        Model::UpdateKeyGroup2020_05_31OutcomeCallable UpdateKeyGroup2020_05_31Callable(const UpdateKeyGroup2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateKeyGroup2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateKeyGroup2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKeyGroup2020_05_31RequestT = Model::UpdateKeyGroup2020_05_31Request>
        void UpdateKeyGroup2020_05_31Async(const UpdateKeyGroup2020_05_31RequestT& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateKeyGroup2020_05_31, request, handler, context);
        }

        /**
         * <p>Specifies the Key Value Store to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateKeyValueStore2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeyValueStore2020_05_31Outcome UpdateKeyValueStore2020_05_31(const Model::UpdateKeyValueStore2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateKeyValueStore2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKeyValueStore2020_05_31RequestT = Model::UpdateKeyValueStore2020_05_31Request>
        Model::UpdateKeyValueStore2020_05_31OutcomeCallable UpdateKeyValueStore2020_05_31Callable(const UpdateKeyValueStore2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateKeyValueStore2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateKeyValueStore2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKeyValueStore2020_05_31RequestT = Model::UpdateKeyValueStore2020_05_31Request>
        void UpdateKeyValueStore2020_05_31Async(const UpdateKeyValueStore2020_05_31RequestT& request, const UpdateKeyValueStore2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateKeyValueStore2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a CloudFront origin access control.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateOriginAccessControl2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginAccessControl2020_05_31Outcome UpdateOriginAccessControl2020_05_31(const Model::UpdateOriginAccessControl2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateOriginAccessControl2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOriginAccessControl2020_05_31RequestT = Model::UpdateOriginAccessControl2020_05_31Request>
        Model::UpdateOriginAccessControl2020_05_31OutcomeCallable UpdateOriginAccessControl2020_05_31Callable(const UpdateOriginAccessControl2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateOriginAccessControl2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateOriginAccessControl2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOriginAccessControl2020_05_31RequestT = Model::UpdateOriginAccessControl2020_05_31Request>
        void UpdateOriginAccessControl2020_05_31Async(const UpdateOriginAccessControl2020_05_31RequestT& request, const UpdateOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateOriginAccessControl2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates an origin request policy configuration.</p> <p>When you update an
         * origin request policy configuration, all the fields are updated with the values
         * provided in the request. You cannot update some fields independent of others. To
         * update an origin request policy configuration:</p> <ol> <li> <p>Use
         * <code>GetOriginRequestPolicyConfig</code> to get the current configuration.</p>
         * </li> <li> <p>Locally modify the fields in the origin request policy
         * configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateOriginRequestPolicy</code> by providing the entire origin request
         * policy configuration, including the fields that you modified and those that you
         * didn't.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginRequestPolicy2020_05_31Outcome UpdateOriginRequestPolicy2020_05_31(const Model::UpdateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateOriginRequestPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOriginRequestPolicy2020_05_31RequestT = Model::UpdateOriginRequestPolicy2020_05_31Request>
        Model::UpdateOriginRequestPolicy2020_05_31OutcomeCallable UpdateOriginRequestPolicy2020_05_31Callable(const UpdateOriginRequestPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateOriginRequestPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateOriginRequestPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOriginRequestPolicy2020_05_31RequestT = Model::UpdateOriginRequestPolicy2020_05_31Request>
        void UpdateOriginRequestPolicy2020_05_31Async(const UpdateOriginRequestPolicy2020_05_31RequestT& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateOriginRequestPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicKey2020_05_31Outcome UpdatePublicKey2020_05_31(const Model::UpdatePublicKey2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdatePublicKey2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePublicKey2020_05_31RequestT = Model::UpdatePublicKey2020_05_31Request>
        Model::UpdatePublicKey2020_05_31OutcomeCallable UpdatePublicKey2020_05_31Callable(const UpdatePublicKey2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdatePublicKey2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdatePublicKey2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePublicKey2020_05_31RequestT = Model::UpdatePublicKey2020_05_31Request>
        void UpdatePublicKey2020_05_31Async(const UpdatePublicKey2020_05_31RequestT& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdatePublicKey2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a real-time log configuration.</p> <p>When you update a real-time log
         * configuration, all the parameters are updated with the values provided in the
         * request. You cannot update some parameters independent of others. To update a
         * real-time log configuration:</p> <ol> <li> <p>Call
         * <code>GetRealtimeLogConfig</code> to get the current real-time log
         * configuration.</p> </li> <li> <p>Locally modify the parameters in the real-time
         * log configuration that you want to update.</p> </li> <li> <p>Call this API
         * (<code>UpdateRealtimeLogConfig</code>) by providing the entire real-time log
         * configuration, including the parameters that you modified and those that you
         * didn't.</p> </li> </ol> <p>You cannot update a real-time log configuration's
         * <code>Name</code> or <code>ARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRealtimeLogConfig2020_05_31Outcome UpdateRealtimeLogConfig2020_05_31(const Model::UpdateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateRealtimeLogConfig2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRealtimeLogConfig2020_05_31RequestT = Model::UpdateRealtimeLogConfig2020_05_31Request>
        Model::UpdateRealtimeLogConfig2020_05_31OutcomeCallable UpdateRealtimeLogConfig2020_05_31Callable(const UpdateRealtimeLogConfig2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateRealtimeLogConfig2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateRealtimeLogConfig2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRealtimeLogConfig2020_05_31RequestT = Model::UpdateRealtimeLogConfig2020_05_31Request>
        void UpdateRealtimeLogConfig2020_05_31Async(const UpdateRealtimeLogConfig2020_05_31RequestT& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateRealtimeLogConfig2020_05_31, request, handler, context);
        }

        /**
         * <p>Updates a response headers policy.</p> <p>When you update a response headers
         * policy, the entire policy is replaced. You cannot update some policy fields
         * independent of others. To update a response headers policy configuration:</p>
         * <ol> <li> <p>Use <code>GetResponseHeadersPolicyConfig</code> to get the current
         * policy's configuration.</p> </li> <li> <p>Modify the fields in the response
         * headers policy configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateResponseHeadersPolicy</code>, providing the entire response headers
         * policy configuration, including the fields that you modified and those that you
         * didn't.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateResponseHeadersPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResponseHeadersPolicy2020_05_31Outcome UpdateResponseHeadersPolicy2020_05_31(const Model::UpdateResponseHeadersPolicy2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateResponseHeadersPolicy2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResponseHeadersPolicy2020_05_31RequestT = Model::UpdateResponseHeadersPolicy2020_05_31Request>
        Model::UpdateResponseHeadersPolicy2020_05_31OutcomeCallable UpdateResponseHeadersPolicy2020_05_31Callable(const UpdateResponseHeadersPolicy2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateResponseHeadersPolicy2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResponseHeadersPolicy2020_05_31RequestT = Model::UpdateResponseHeadersPolicy2020_05_31Request>
        void UpdateResponseHeadersPolicy2020_05_31Async(const UpdateResponseHeadersPolicy2020_05_31RequestT& request, const UpdateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31, request, handler, context);
        }

        /**
         * <p>Update a streaming distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingDistribution2020_05_31Outcome UpdateStreamingDistribution2020_05_31(const Model::UpdateStreamingDistribution2020_05_31Request& request) const;

        /**
         * A Callable wrapper for UpdateStreamingDistribution2020_05_31 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStreamingDistribution2020_05_31RequestT = Model::UpdateStreamingDistribution2020_05_31Request>
        Model::UpdateStreamingDistribution2020_05_31OutcomeCallable UpdateStreamingDistribution2020_05_31Callable(const UpdateStreamingDistribution2020_05_31RequestT& request) const
        {
            return SubmitCallable(&CloudFrontClient::UpdateStreamingDistribution2020_05_31, request);
        }

        /**
         * An Async wrapper for UpdateStreamingDistribution2020_05_31 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamingDistribution2020_05_31RequestT = Model::UpdateStreamingDistribution2020_05_31Request>
        void UpdateStreamingDistribution2020_05_31Async(const UpdateStreamingDistribution2020_05_31RequestT& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudFrontClient::UpdateStreamingDistribution2020_05_31, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<CloudFrontEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudFrontClient>;
        void init(const CloudFrontClientConfiguration& clientConfiguration);

        CloudFrontClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<CloudFrontEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudFront
} // namespace Aws
