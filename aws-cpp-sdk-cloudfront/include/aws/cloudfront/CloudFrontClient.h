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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2017_03_25Result.h>
#include <aws/cloudfront/model/CreateDistribution2017_03_25Result.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2017_03_25Result.h>
#include <aws/cloudfront/model/CreateInvalidation2017_03_25Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2017_03_25Result.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2017_03_25Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2017_03_25Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2017_03_25Result.h>
#include <aws/cloudfront/model/GetDistribution2017_03_25Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2017_03_25Result.h>
#include <aws/cloudfront/model/GetInvalidation2017_03_25Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2017_03_25Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2017_03_25Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2017_03_25Result.h>
#include <aws/cloudfront/model/ListDistributions2017_03_25Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2017_03_25Result.h>
#include <aws/cloudfront/model/ListInvalidations2017_03_25Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2017_03_25Result.h>
#include <aws/cloudfront/model/ListTagsForResource2017_03_25Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2017_03_25Result.h>
#include <aws/cloudfront/model/UpdateDistribution2017_03_25Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2017_03_25Result.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace CloudFront
{

namespace Model
{
        class CreateCloudFrontOriginAccessIdentity2017_03_25Request;
        class CreateDistribution2017_03_25Request;
        class CreateDistributionWithTags2017_03_25Request;
        class CreateInvalidation2017_03_25Request;
        class CreateStreamingDistribution2017_03_25Request;
        class CreateStreamingDistributionWithTags2017_03_25Request;
        class DeleteCloudFrontOriginAccessIdentity2017_03_25Request;
        class DeleteDistribution2017_03_25Request;
        class DeleteServiceLinkedRole2017_03_25Request;
        class DeleteStreamingDistribution2017_03_25Request;
        class GetCloudFrontOriginAccessIdentity2017_03_25Request;
        class GetCloudFrontOriginAccessIdentityConfig2017_03_25Request;
        class GetDistribution2017_03_25Request;
        class GetDistributionConfig2017_03_25Request;
        class GetInvalidation2017_03_25Request;
        class GetStreamingDistribution2017_03_25Request;
        class GetStreamingDistributionConfig2017_03_25Request;
        class ListCloudFrontOriginAccessIdentities2017_03_25Request;
        class ListDistributions2017_03_25Request;
        class ListDistributionsByWebACLId2017_03_25Request;
        class ListInvalidations2017_03_25Request;
        class ListStreamingDistributions2017_03_25Request;
        class ListTagsForResource2017_03_25Request;
        class TagResource2017_03_25Request;
        class UntagResource2017_03_25Request;
        class UpdateCloudFrontOriginAccessIdentity2017_03_25Request;
        class UpdateDistribution2017_03_25Request;
        class UpdateStreamingDistribution2017_03_25Request;

        typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2017_03_25Outcome;
        typedef Aws::Utils::Outcome<CreateDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<CreateDistributionWithTags2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistributionWithTags2017_03_25Outcome;
        typedef Aws::Utils::Outcome<CreateInvalidation2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateInvalidation2017_03_25Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistributionWithTags2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistributionWithTags2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteServiceLinkedRole2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetDistributionConfig2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistributionConfig2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetInvalidation2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetInvalidation2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListDistributions2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributions2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributionsByWebACLId2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListInvalidations2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListInvalidations2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListStreamingDistributions2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2017_03_25Outcome;
        typedef Aws::Utils::Outcome<ListTagsForResource2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> ListTagsForResource2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> TagResource2017_03_25Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CloudFrontErrors>> UntagResource2017_03_25Outcome;
        typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome;
        typedef Aws::Utils::Outcome<UpdateDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateDistribution2017_03_25Outcome;
        typedef Aws::Utils::Outcome<UpdateStreamingDistribution2017_03_25Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2017_03_25Outcome;

        typedef std::future<CreateCloudFrontOriginAccessIdentity2017_03_25Outcome> CreateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable;
        typedef std::future<CreateDistribution2017_03_25Outcome> CreateDistribution2017_03_25OutcomeCallable;
        typedef std::future<CreateDistributionWithTags2017_03_25Outcome> CreateDistributionWithTags2017_03_25OutcomeCallable;
        typedef std::future<CreateInvalidation2017_03_25Outcome> CreateInvalidation2017_03_25OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2017_03_25Outcome> CreateStreamingDistribution2017_03_25OutcomeCallable;
        typedef std::future<CreateStreamingDistributionWithTags2017_03_25Outcome> CreateStreamingDistributionWithTags2017_03_25OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome> DeleteCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable;
        typedef std::future<DeleteDistribution2017_03_25Outcome> DeleteDistribution2017_03_25OutcomeCallable;
        typedef std::future<DeleteServiceLinkedRole2017_03_25Outcome> DeleteServiceLinkedRole2017_03_25OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2017_03_25Outcome> DeleteStreamingDistribution2017_03_25OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2017_03_25Outcome> GetCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome> GetCloudFrontOriginAccessIdentityConfig2017_03_25OutcomeCallable;
        typedef std::future<GetDistribution2017_03_25Outcome> GetDistribution2017_03_25OutcomeCallable;
        typedef std::future<GetDistributionConfig2017_03_25Outcome> GetDistributionConfig2017_03_25OutcomeCallable;
        typedef std::future<GetInvalidation2017_03_25Outcome> GetInvalidation2017_03_25OutcomeCallable;
        typedef std::future<GetStreamingDistribution2017_03_25Outcome> GetStreamingDistribution2017_03_25OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2017_03_25Outcome> GetStreamingDistributionConfig2017_03_25OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2017_03_25Outcome> ListCloudFrontOriginAccessIdentities2017_03_25OutcomeCallable;
        typedef std::future<ListDistributions2017_03_25Outcome> ListDistributions2017_03_25OutcomeCallable;
        typedef std::future<ListDistributionsByWebACLId2017_03_25Outcome> ListDistributionsByWebACLId2017_03_25OutcomeCallable;
        typedef std::future<ListInvalidations2017_03_25Outcome> ListInvalidations2017_03_25OutcomeCallable;
        typedef std::future<ListStreamingDistributions2017_03_25Outcome> ListStreamingDistributions2017_03_25OutcomeCallable;
        typedef std::future<ListTagsForResource2017_03_25Outcome> ListTagsForResource2017_03_25OutcomeCallable;
        typedef std::future<TagResource2017_03_25Outcome> TagResource2017_03_25OutcomeCallable;
        typedef std::future<UntagResource2017_03_25Outcome> UntagResource2017_03_25OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome> UpdateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable;
        typedef std::future<UpdateDistribution2017_03_25Outcome> UpdateDistribution2017_03_25OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2017_03_25Outcome> UpdateStreamingDistribution2017_03_25OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Request&, const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2017_03_25Request&, const Model::CreateDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistributionWithTags2017_03_25Request&, const Model::CreateDistributionWithTags2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionWithTags2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2017_03_25Request&, const Model::CreateInvalidation2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2017_03_25Request&, const Model::CreateStreamingDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistributionWithTags2017_03_25Request&, const Model::CreateStreamingDistributionWithTags2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistributionWithTags2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Request&, const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2017_03_25Request&, const Model::DeleteDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteServiceLinkedRole2017_03_25Request&, const Model::DeleteServiceLinkedRole2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceLinkedRole2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2017_03_25Request&, const Model::DeleteStreamingDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2017_03_25Request&, const Model::GetCloudFrontOriginAccessIdentity2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2017_03_25Request&, const Model::GetDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2017_03_25Request&, const Model::GetDistributionConfig2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2017_03_25Request&, const Model::GetInvalidation2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2017_03_25Request&, const Model::GetStreamingDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2017_03_25Request&, const Model::GetStreamingDistributionConfig2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2017_03_25Request&, const Model::ListCloudFrontOriginAccessIdentities2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2017_03_25Request&, const Model::ListDistributions2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2017_03_25Request&, const Model::ListDistributionsByWebACLId2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2017_03_25Request&, const Model::ListInvalidations2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2017_03_25Request&, const Model::ListStreamingDistributions2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListTagsForResource2017_03_25Request&, const Model::ListTagsForResource2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResource2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TagResource2017_03_25Request&, const Model::TagResource2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResource2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UntagResource2017_03_25Request&, const Model::UntagResource2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResource2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Request&, const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2017_03_25Request&, const Model::UpdateDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2017_03_25ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2017_03_25Request&, const Model::UpdateStreamingDistribution2017_03_25Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2017_03_25ResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudFront</fullname> <p>This is the <i>Amazon CloudFront API
   * Reference</i>. This guide is for developers who need detailed information about
   * CloudFront API actions, data types, and errors. For detailed information about
   * CloudFront features, see the <i>Amazon CloudFront Developer Guide</i>.</p>
   */
  class AWS_CLOUDFRONT_API CloudFrontClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudFrontClient();

        inline virtual const char* GetServiceClientName() const override { return "cloudfront"; }


        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2017_03_25Outcome CreateCloudFrontOriginAccessIdentity2017_03_25(const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable CreateCloudFrontOriginAccessIdentity2017_03_25Callable(const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFrontOriginAccessIdentity2017_03_25Async(const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Request& request, const CreateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new web distribution. Send a <code>POST</code> request to the
         * <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistribution2017_03_25Outcome CreateDistribution2017_03_25(const Model::CreateDistribution2017_03_25Request& request) const;

        /**
         * <p>Creates a new web distribution. Send a <code>POST</code> request to the
         * <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistribution2017_03_25OutcomeCallable CreateDistribution2017_03_25Callable(const Model::CreateDistribution2017_03_25Request& request) const;

        /**
         * <p>Creates a new web distribution. Send a <code>POST</code> request to the
         * <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistribution2017_03_25Async(const Model::CreateDistribution2017_03_25Request& request, const CreateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionWithTags2017_03_25Outcome CreateDistributionWithTags2017_03_25(const Model::CreateDistributionWithTags2017_03_25Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionWithTags2017_03_25OutcomeCallable CreateDistributionWithTags2017_03_25Callable(const Model::CreateDistributionWithTags2017_03_25Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionWithTags2017_03_25Async(const Model::CreateDistributionWithTags2017_03_25Request& request, const CreateDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateInvalidation2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvalidation2017_03_25Outcome CreateInvalidation2017_03_25(const Model::CreateInvalidation2017_03_25Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateInvalidation2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvalidation2017_03_25OutcomeCallable CreateInvalidation2017_03_25Callable(const Model::CreateInvalidation2017_03_25Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateInvalidation2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvalidation2017_03_25Async(const Model::CreateInvalidation2017_03_25Request& request, const CreateInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistribution2017_03_25Outcome CreateStreamingDistribution2017_03_25(const Model::CreateStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistribution2017_03_25OutcomeCallable CreateStreamingDistribution2017_03_25Callable(const Model::CreateStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Creates a new RMTP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new web distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         * <important> <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistribution2017_03_25Async(const Model::CreateStreamingDistribution2017_03_25Request& request, const CreateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistributionWithTags2017_03_25Outcome CreateStreamingDistributionWithTags2017_03_25(const Model::CreateStreamingDistributionWithTags2017_03_25Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistributionWithTags2017_03_25OutcomeCallable CreateStreamingDistributionWithTags2017_03_25Callable(const Model::CreateStreamingDistributionWithTags2017_03_25Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/CreateStreamingDistributionWithTags2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistributionWithTags2017_03_25Async(const Model::CreateStreamingDistributionWithTags2017_03_25Request& request, const CreateStreamingDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome DeleteCloudFrontOriginAccessIdentity2017_03_25(const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable DeleteCloudFrontOriginAccessIdentity2017_03_25Callable(const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCloudFrontOriginAccessIdentity2017_03_25Async(const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request, const DeleteCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistribution2017_03_25Outcome DeleteDistribution2017_03_25(const Model::DeleteDistribution2017_03_25Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistribution2017_03_25OutcomeCallable DeleteDistribution2017_03_25Callable(const Model::DeleteDistribution2017_03_25Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistribution2017_03_25Async(const Model::DeleteDistribution2017_03_25Request& request, const DeleteDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteServiceLinkedRole2017_03_25Outcome DeleteServiceLinkedRole2017_03_25(const Model::DeleteServiceLinkedRole2017_03_25Request& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceLinkedRole2017_03_25OutcomeCallable DeleteServiceLinkedRole2017_03_25Callable(const Model::DeleteServiceLinkedRole2017_03_25Request& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceLinkedRole2017_03_25Async(const Model::DeleteServiceLinkedRole2017_03_25Request& request, const DeleteServiceLinkedRole2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingDistribution2017_03_25Outcome DeleteStreamingDistribution2017_03_25(const Model::DeleteStreamingDistribution2017_03_25Request& request) const;

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
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingDistribution2017_03_25OutcomeCallable DeleteStreamingDistribution2017_03_25Callable(const Model::DeleteStreamingDistribution2017_03_25Request& request) const;

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
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/DeleteStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingDistribution2017_03_25Async(const Model::DeleteStreamingDistribution2017_03_25Request& request, const DeleteStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2017_03_25Outcome GetCloudFrontOriginAccessIdentity2017_03_25(const Model::GetCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable GetCloudFrontOriginAccessIdentity2017_03_25Callable(const Model::GetCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentity2017_03_25Async(const Model::GetCloudFrontOriginAccessIdentity2017_03_25Request& request, const GetCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentityConfig2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome GetCloudFrontOriginAccessIdentityConfig2017_03_25(const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentityConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2017_03_25Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetCloudFrontOriginAccessIdentityConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentityConfig2017_03_25Async(const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistribution2017_03_25Outcome GetDistribution2017_03_25(const Model::GetDistribution2017_03_25Request& request) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistribution2017_03_25OutcomeCallable GetDistribution2017_03_25Callable(const Model::GetDistribution2017_03_25Request& request) const;

        /**
         * <p>Get the information about a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistribution2017_03_25Async(const Model::GetDistribution2017_03_25Request& request, const GetDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfig2017_03_25Outcome GetDistributionConfig2017_03_25(const Model::GetDistributionConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfig2017_03_25OutcomeCallable GetDistributionConfig2017_03_25Callable(const Model::GetDistributionConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfig2017_03_25Async(const Model::GetDistributionConfig2017_03_25Request& request, const GetDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetInvalidation2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvalidation2017_03_25Outcome GetInvalidation2017_03_25(const Model::GetInvalidation2017_03_25Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetInvalidation2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvalidation2017_03_25OutcomeCallable GetInvalidation2017_03_25Callable(const Model::GetInvalidation2017_03_25Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetInvalidation2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvalidation2017_03_25Async(const Model::GetInvalidation2017_03_25Request& request, const GetInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistribution2017_03_25Outcome GetStreamingDistribution2017_03_25(const Model::GetStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistribution2017_03_25OutcomeCallable GetStreamingDistribution2017_03_25Callable(const Model::GetStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistribution2017_03_25Async(const Model::GetStreamingDistribution2017_03_25Request& request, const GetStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistributionConfig2017_03_25Outcome GetStreamingDistributionConfig2017_03_25(const Model::GetStreamingDistributionConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistributionConfig2017_03_25OutcomeCallable GetStreamingDistributionConfig2017_03_25Callable(const Model::GetStreamingDistributionConfig2017_03_25Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetStreamingDistributionConfig2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistributionConfig2017_03_25Async(const Model::GetStreamingDistributionConfig2017_03_25Request& request, const GetStreamingDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListCloudFrontOriginAccessIdentities2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2017_03_25Outcome ListCloudFrontOriginAccessIdentities2017_03_25(const Model::ListCloudFrontOriginAccessIdentities2017_03_25Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListCloudFrontOriginAccessIdentities2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2017_03_25OutcomeCallable ListCloudFrontOriginAccessIdentities2017_03_25Callable(const Model::ListCloudFrontOriginAccessIdentities2017_03_25Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListCloudFrontOriginAccessIdentities2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCloudFrontOriginAccessIdentities2017_03_25Async(const Model::ListCloudFrontOriginAccessIdentities2017_03_25Request& request, const ListCloudFrontOriginAccessIdentities2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributions2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributions2017_03_25Outcome ListDistributions2017_03_25(const Model::ListDistributions2017_03_25Request& request) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributions2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributions2017_03_25OutcomeCallable ListDistributions2017_03_25Callable(const Model::ListDistributions2017_03_25Request& request) const;

        /**
         * <p>List distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributions2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributions2017_03_25Async(const Model::ListDistributions2017_03_25Request& request, const ListDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributionsByWebACLId2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByWebACLId2017_03_25Outcome ListDistributionsByWebACLId2017_03_25(const Model::ListDistributionsByWebACLId2017_03_25Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributionsByWebACLId2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByWebACLId2017_03_25OutcomeCallable ListDistributionsByWebACLId2017_03_25Callable(const Model::ListDistributionsByWebACLId2017_03_25Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListDistributionsByWebACLId2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByWebACLId2017_03_25Async(const Model::ListDistributionsByWebACLId2017_03_25Request& request, const ListDistributionsByWebACLId2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListInvalidations2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvalidations2017_03_25Outcome ListInvalidations2017_03_25(const Model::ListInvalidations2017_03_25Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListInvalidations2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvalidations2017_03_25OutcomeCallable ListInvalidations2017_03_25Callable(const Model::ListInvalidations2017_03_25Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListInvalidations2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvalidations2017_03_25Async(const Model::ListInvalidations2017_03_25Request& request, const ListInvalidations2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListStreamingDistributions2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingDistributions2017_03_25Outcome ListStreamingDistributions2017_03_25(const Model::ListStreamingDistributions2017_03_25Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListStreamingDistributions2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingDistributions2017_03_25OutcomeCallable ListStreamingDistributions2017_03_25Callable(const Model::ListStreamingDistributions2017_03_25Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListStreamingDistributions2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingDistributions2017_03_25Async(const Model::ListStreamingDistributions2017_03_25Request& request, const ListStreamingDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListTagsForResource2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResource2017_03_25Outcome ListTagsForResource2017_03_25(const Model::ListTagsForResource2017_03_25Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListTagsForResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResource2017_03_25OutcomeCallable ListTagsForResource2017_03_25Callable(const Model::ListTagsForResource2017_03_25Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/ListTagsForResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResource2017_03_25Async(const Model::ListTagsForResource2017_03_25Request& request, const ListTagsForResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/TagResource2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResource2017_03_25Outcome TagResource2017_03_25(const Model::TagResource2017_03_25Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/TagResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResource2017_03_25OutcomeCallable TagResource2017_03_25Callable(const Model::TagResource2017_03_25Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/TagResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResource2017_03_25Async(const Model::TagResource2017_03_25Request& request, const TagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UntagResource2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResource2017_03_25Outcome UntagResource2017_03_25(const Model::UntagResource2017_03_25Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UntagResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResource2017_03_25OutcomeCallable UntagResource2017_03_25Callable(const Model::UntagResource2017_03_25Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UntagResource2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResource2017_03_25Async(const Model::UntagResource2017_03_25Request& request, const UntagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome UpdateCloudFrontOriginAccessIdentity2017_03_25(const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable UpdateCloudFrontOriginAccessIdentity2017_03_25Callable(const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateCloudFrontOriginAccessIdentity2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCloudFrontOriginAccessIdentity2017_03_25Async(const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request, const UpdateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a web distribution. Perform the following
         * steps.</p> <p>For information about updating a distribution using the CloudFront
         * console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * or Updating a Web Distribution Using the CloudFront Console </a> in the
         * <i>Amazon CloudFront Developer Guide</i>.</p> <p> <b>To update a web
         * distribution using the CloudFront API</b> </p> <ol> <li> <p>Submit a
         * <a>GetDistributionConfig</a> request to get the current configuration and an
         * <code>Etag</code> header for the distribution.</p> <note> <p>If you update the
         * distribution again, you need to get a new <code>Etag</code> header.</p> </note>
         * </li> <li> <p>Update the XML document that was returned in the response to your
         * <code>GetDistributionConfig</code> request to include the desired changes. You
         * can't change the value of <code>CallerReference</code>. If you try to change
         * this value, CloudFront returns an <code>IllegalUpdate</code> error.</p>
         * <important> <p>The new configuration replaces the existing configuration; the
         * values that you specify in an <code>UpdateDistribution</code> request are not
         * merged into the existing configuration. When you add, delete, or replace values
         * in an element that allows multiple values (for example, <code>CNAME</code>), you
         * must specify all of the values that you want to appear in the updated
         * distribution. In addition, you must update the corresponding
         * <code>Quantity</code> element.</p> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a>GetDistribution</a> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> <important> <p>Beginning with the 2012-05-05 version
         * of the CloudFront API, we made substantial changes to the format of the XML
         * document that you include in the request body when you create or update a
         * distribution. With previous versions of the API, we discovered that it was too
         * easy to accidentally delete one or more values for an element that accepts
         * multiple values, for example, CNAMEs and trusted signers. Our changes for the
         * 2012-05-05 release are intended to prevent these accidental deletions and to
         * notify you when there's a mismatch between the number of values you say you're
         * specifying in the <code>Quantity</code> element and the number of values you're
         * actually specifying.</p> </important> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistribution2017_03_25Outcome UpdateDistribution2017_03_25(const Model::UpdateDistribution2017_03_25Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. Perform the following
         * steps.</p> <p>For information about updating a distribution using the CloudFront
         * console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * or Updating a Web Distribution Using the CloudFront Console </a> in the
         * <i>Amazon CloudFront Developer Guide</i>.</p> <p> <b>To update a web
         * distribution using the CloudFront API</b> </p> <ol> <li> <p>Submit a
         * <a>GetDistributionConfig</a> request to get the current configuration and an
         * <code>Etag</code> header for the distribution.</p> <note> <p>If you update the
         * distribution again, you need to get a new <code>Etag</code> header.</p> </note>
         * </li> <li> <p>Update the XML document that was returned in the response to your
         * <code>GetDistributionConfig</code> request to include the desired changes. You
         * can't change the value of <code>CallerReference</code>. If you try to change
         * this value, CloudFront returns an <code>IllegalUpdate</code> error.</p>
         * <important> <p>The new configuration replaces the existing configuration; the
         * values that you specify in an <code>UpdateDistribution</code> request are not
         * merged into the existing configuration. When you add, delete, or replace values
         * in an element that allows multiple values (for example, <code>CNAME</code>), you
         * must specify all of the values that you want to appear in the updated
         * distribution. In addition, you must update the corresponding
         * <code>Quantity</code> element.</p> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a>GetDistribution</a> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> <important> <p>Beginning with the 2012-05-05 version
         * of the CloudFront API, we made substantial changes to the format of the XML
         * document that you include in the request body when you create or update a
         * distribution. With previous versions of the API, we discovered that it was too
         * easy to accidentally delete one or more values for an element that accepts
         * multiple values, for example, CNAMEs and trusted signers. Our changes for the
         * 2012-05-05 release are intended to prevent these accidental deletions and to
         * notify you when there's a mismatch between the number of values you say you're
         * specifying in the <code>Quantity</code> element and the number of values you're
         * actually specifying.</p> </important> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistribution2017_03_25OutcomeCallable UpdateDistribution2017_03_25Callable(const Model::UpdateDistribution2017_03_25Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. Perform the following
         * steps.</p> <p>For information about updating a distribution using the CloudFront
         * console, see <a
         * href="http://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * or Updating a Web Distribution Using the CloudFront Console </a> in the
         * <i>Amazon CloudFront Developer Guide</i>.</p> <p> <b>To update a web
         * distribution using the CloudFront API</b> </p> <ol> <li> <p>Submit a
         * <a>GetDistributionConfig</a> request to get the current configuration and an
         * <code>Etag</code> header for the distribution.</p> <note> <p>If you update the
         * distribution again, you need to get a new <code>Etag</code> header.</p> </note>
         * </li> <li> <p>Update the XML document that was returned in the response to your
         * <code>GetDistributionConfig</code> request to include the desired changes. You
         * can't change the value of <code>CallerReference</code>. If you try to change
         * this value, CloudFront returns an <code>IllegalUpdate</code> error.</p>
         * <important> <p>The new configuration replaces the existing configuration; the
         * values that you specify in an <code>UpdateDistribution</code> request are not
         * merged into the existing configuration. When you add, delete, or replace values
         * in an element that allows multiple values (for example, <code>CNAME</code>), you
         * must specify all of the values that you want to appear in the updated
         * distribution. In addition, you must update the corresponding
         * <code>Quantity</code> element.</p> </important> </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a>GetDistribution</a> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> <important> <p>Beginning with the 2012-05-05 version
         * of the CloudFront API, we made substantial changes to the format of the XML
         * document that you include in the request body when you create or update a
         * distribution. With previous versions of the API, we discovered that it was too
         * easy to accidentally delete one or more values for an element that accepts
         * multiple values, for example, CNAMEs and trusted signers. Our changes for the
         * 2012-05-05 release are intended to prevent these accidental deletions and to
         * notify you when there's a mismatch between the number of values you say you're
         * specifying in the <code>Quantity</code> element and the number of values you're
         * actually specifying.</p> </important> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistribution2017_03_25Async(const Model::UpdateDistribution2017_03_25Request& request, const UpdateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingDistribution2017_03_25Outcome UpdateStreamingDistribution2017_03_25(const Model::UpdateStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingDistribution2017_03_25OutcomeCallable UpdateStreamingDistribution2017_03_25Callable(const Model::UpdateStreamingDistribution2017_03_25Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/UpdateStreamingDistribution2017_03_25">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingDistribution2017_03_25Async(const Model::UpdateStreamingDistribution2017_03_25Request& request, const UpdateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2017_03_25Request& request, const CreateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2017_03_25AsyncHelper(const Model::CreateDistribution2017_03_25Request& request, const CreateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionWithTags2017_03_25AsyncHelper(const Model::CreateDistributionWithTags2017_03_25Request& request, const CreateDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2017_03_25AsyncHelper(const Model::CreateInvalidation2017_03_25Request& request, const CreateInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2017_03_25AsyncHelper(const Model::CreateStreamingDistribution2017_03_25Request& request, const CreateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistributionWithTags2017_03_25AsyncHelper(const Model::CreateStreamingDistributionWithTags2017_03_25Request& request, const CreateStreamingDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request, const DeleteCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2017_03_25AsyncHelper(const Model::DeleteDistribution2017_03_25Request& request, const DeleteDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceLinkedRole2017_03_25AsyncHelper(const Model::DeleteServiceLinkedRole2017_03_25Request& request, const DeleteServiceLinkedRole2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2017_03_25AsyncHelper(const Model::DeleteStreamingDistribution2017_03_25Request& request, const DeleteStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2017_03_25Request& request, const GetCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2017_03_25AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2017_03_25AsyncHelper(const Model::GetDistribution2017_03_25Request& request, const GetDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2017_03_25AsyncHelper(const Model::GetDistributionConfig2017_03_25Request& request, const GetDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2017_03_25AsyncHelper(const Model::GetInvalidation2017_03_25Request& request, const GetInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2017_03_25AsyncHelper(const Model::GetStreamingDistribution2017_03_25Request& request, const GetStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2017_03_25AsyncHelper(const Model::GetStreamingDistributionConfig2017_03_25Request& request, const GetStreamingDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2017_03_25AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2017_03_25Request& request, const ListCloudFrontOriginAccessIdentities2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2017_03_25AsyncHelper(const Model::ListDistributions2017_03_25Request& request, const ListDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByWebACLId2017_03_25AsyncHelper(const Model::ListDistributionsByWebACLId2017_03_25Request& request, const ListDistributionsByWebACLId2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2017_03_25AsyncHelper(const Model::ListInvalidations2017_03_25Request& request, const ListInvalidations2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2017_03_25AsyncHelper(const Model::ListStreamingDistributions2017_03_25Request& request, const ListStreamingDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResource2017_03_25AsyncHelper(const Model::ListTagsForResource2017_03_25Request& request, const ListTagsForResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResource2017_03_25AsyncHelper(const Model::TagResource2017_03_25Request& request, const TagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResource2017_03_25AsyncHelper(const Model::UntagResource2017_03_25Request& request, const UntagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request, const UpdateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2017_03_25AsyncHelper(const Model::UpdateDistribution2017_03_25Request& request, const UpdateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2017_03_25AsyncHelper(const Model::UpdateStreamingDistribution2017_03_25Request& request, const UpdateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
