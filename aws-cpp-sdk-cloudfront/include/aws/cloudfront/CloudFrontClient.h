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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2016_01_28Result.h>
#include <aws/cloudfront/model/CreateDistribution2016_01_28Result.h>
#include <aws/cloudfront/model/CreateInvalidation2016_01_28Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2016_01_28Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2016_01_28Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2016_01_28Result.h>
#include <aws/cloudfront/model/GetDistribution2016_01_28Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2016_01_28Result.h>
#include <aws/cloudfront/model/GetInvalidation2016_01_28Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2016_01_28Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2016_01_28Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2016_01_28Result.h>
#include <aws/cloudfront/model/ListDistributions2016_01_28Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2016_01_28Result.h>
#include <aws/cloudfront/model/ListInvalidations2016_01_28Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2016_01_28Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2016_01_28Result.h>
#include <aws/cloudfront/model/UpdateDistribution2016_01_28Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2016_01_28Result.h>
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
        class CreateCloudFrontOriginAccessIdentity2016_01_28Request;
        class CreateDistribution2016_01_28Request;
        class CreateInvalidation2016_01_28Request;
        class CreateStreamingDistribution2016_01_28Request;
        class DeleteCloudFrontOriginAccessIdentity2016_01_28Request;
        class DeleteDistribution2016_01_28Request;
        class DeleteStreamingDistribution2016_01_28Request;
        class GetCloudFrontOriginAccessIdentity2016_01_28Request;
        class GetCloudFrontOriginAccessIdentityConfig2016_01_28Request;
        class GetDistribution2016_01_28Request;
        class GetDistributionConfig2016_01_28Request;
        class GetInvalidation2016_01_28Request;
        class GetStreamingDistribution2016_01_28Request;
        class GetStreamingDistributionConfig2016_01_28Request;
        class ListCloudFrontOriginAccessIdentities2016_01_28Request;
        class ListDistributions2016_01_28Request;
        class ListDistributionsByWebACLId2016_01_28Request;
        class ListInvalidations2016_01_28Request;
        class ListStreamingDistributions2016_01_28Request;
        class UpdateCloudFrontOriginAccessIdentity2016_01_28Request;
        class UpdateDistribution2016_01_28Request;
        class UpdateStreamingDistribution2016_01_28Request;

        typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2016_01_28Outcome;
        typedef Aws::Utils::Outcome<CreateDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> CreateDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<CreateInvalidation2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> CreateInvalidation2016_01_28Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetDistributionConfig2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetDistributionConfig2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetInvalidation2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetInvalidation2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2016_01_28Outcome;
        typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2016_01_28Outcome;
        typedef Aws::Utils::Outcome<ListDistributions2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributions2016_01_28Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> ListDistributionsByWebACLId2016_01_28Outcome;
        typedef Aws::Utils::Outcome<ListInvalidations2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> ListInvalidations2016_01_28Outcome;
        typedef Aws::Utils::Outcome<ListStreamingDistributions2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2016_01_28Outcome;
        typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome;
        typedef Aws::Utils::Outcome<UpdateDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateDistribution2016_01_28Outcome;
        typedef Aws::Utils::Outcome<UpdateStreamingDistribution2016_01_28Result, Aws::Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2016_01_28Outcome;

        typedef std::future<CreateCloudFrontOriginAccessIdentity2016_01_28Outcome> CreateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable;
        typedef std::future<CreateDistribution2016_01_28Outcome> CreateDistribution2016_01_28OutcomeCallable;
        typedef std::future<CreateInvalidation2016_01_28Outcome> CreateInvalidation2016_01_28OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2016_01_28Outcome> CreateStreamingDistribution2016_01_28OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome> DeleteCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable;
        typedef std::future<DeleteDistribution2016_01_28Outcome> DeleteDistribution2016_01_28OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2016_01_28Outcome> DeleteStreamingDistribution2016_01_28OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2016_01_28Outcome> GetCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome> GetCloudFrontOriginAccessIdentityConfig2016_01_28OutcomeCallable;
        typedef std::future<GetDistribution2016_01_28Outcome> GetDistribution2016_01_28OutcomeCallable;
        typedef std::future<GetDistributionConfig2016_01_28Outcome> GetDistributionConfig2016_01_28OutcomeCallable;
        typedef std::future<GetInvalidation2016_01_28Outcome> GetInvalidation2016_01_28OutcomeCallable;
        typedef std::future<GetStreamingDistribution2016_01_28Outcome> GetStreamingDistribution2016_01_28OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2016_01_28Outcome> GetStreamingDistributionConfig2016_01_28OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2016_01_28Outcome> ListCloudFrontOriginAccessIdentities2016_01_28OutcomeCallable;
        typedef std::future<ListDistributions2016_01_28Outcome> ListDistributions2016_01_28OutcomeCallable;
        typedef std::future<ListDistributionsByWebACLId2016_01_28Outcome> ListDistributionsByWebACLId2016_01_28OutcomeCallable;
        typedef std::future<ListInvalidations2016_01_28Outcome> ListInvalidations2016_01_28OutcomeCallable;
        typedef std::future<ListStreamingDistributions2016_01_28Outcome> ListStreamingDistributions2016_01_28OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome> UpdateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable;
        typedef std::future<UpdateDistribution2016_01_28Outcome> UpdateDistribution2016_01_28OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2016_01_28Outcome> UpdateStreamingDistribution2016_01_28OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Request&, const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2016_01_28Request&, const Model::CreateDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2016_01_28Request&, const Model::CreateInvalidation2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2016_01_28Request&, const Model::CreateStreamingDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Request&, const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2016_01_28Request&, const Model::DeleteDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2016_01_28Request&, const Model::DeleteStreamingDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2016_01_28Request&, const Model::GetCloudFrontOriginAccessIdentity2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2016_01_28Request&, const Model::GetDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2016_01_28Request&, const Model::GetDistributionConfig2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2016_01_28Request&, const Model::GetInvalidation2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2016_01_28Request&, const Model::GetStreamingDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2016_01_28Request&, const Model::GetStreamingDistributionConfig2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2016_01_28Request&, const Model::ListCloudFrontOriginAccessIdentities2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2016_01_28Request&, const Model::ListDistributions2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2016_01_28Request&, const Model::ListDistributionsByWebACLId2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2016_01_28Request&, const Model::ListInvalidations2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2016_01_28Request&, const Model::ListStreamingDistributions2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Request&, const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2016_01_28Request&, const Model::UpdateDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2016_01_28ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2016_01_28Request&, const Model::UpdateStreamingDistribution2016_01_28Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2016_01_28ResponseReceivedHandler;

  class AWS_CLOUDFRONT_API CloudFrontClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~CloudFrontClient();

        /**
         * Create a new origin access identity.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2016_01_28Outcome CreateCloudFrontOriginAccessIdentity2016_01_28(const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Create a new origin access identity.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable CreateCloudFrontOriginAccessIdentity2016_01_28Callable(const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Create a new origin access identity.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFrontOriginAccessIdentity2016_01_28Async(const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Request& request, const CreateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new distribution.
         */
        virtual Model::CreateDistribution2016_01_28Outcome CreateDistribution2016_01_28(const Model::CreateDistribution2016_01_28Request& request) const;

        /**
         * Create a new distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistribution2016_01_28OutcomeCallable CreateDistribution2016_01_28Callable(const Model::CreateDistribution2016_01_28Request& request) const;

        /**
         * Create a new distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistribution2016_01_28Async(const Model::CreateDistribution2016_01_28Request& request, const CreateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new invalidation.
         */
        virtual Model::CreateInvalidation2016_01_28Outcome CreateInvalidation2016_01_28(const Model::CreateInvalidation2016_01_28Request& request) const;

        /**
         * Create a new invalidation.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvalidation2016_01_28OutcomeCallable CreateInvalidation2016_01_28Callable(const Model::CreateInvalidation2016_01_28Request& request) const;

        /**
         * Create a new invalidation.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvalidation2016_01_28Async(const Model::CreateInvalidation2016_01_28Request& request, const CreateInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new streaming distribution.
         */
        virtual Model::CreateStreamingDistribution2016_01_28Outcome CreateStreamingDistribution2016_01_28(const Model::CreateStreamingDistribution2016_01_28Request& request) const;

        /**
         * Create a new streaming distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistribution2016_01_28OutcomeCallable CreateStreamingDistribution2016_01_28Callable(const Model::CreateStreamingDistribution2016_01_28Request& request) const;

        /**
         * Create a new streaming distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistribution2016_01_28Async(const Model::CreateStreamingDistribution2016_01_28Request& request, const CreateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an origin access identity.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome DeleteCloudFrontOriginAccessIdentity2016_01_28(const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Delete an origin access identity.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable DeleteCloudFrontOriginAccessIdentity2016_01_28Callable(const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Delete an origin access identity.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCloudFrontOriginAccessIdentity2016_01_28Async(const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request, const DeleteCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a distribution.
         */
        virtual Model::DeleteDistribution2016_01_28Outcome DeleteDistribution2016_01_28(const Model::DeleteDistribution2016_01_28Request& request) const;

        /**
         * Delete a distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistribution2016_01_28OutcomeCallable DeleteDistribution2016_01_28Callable(const Model::DeleteDistribution2016_01_28Request& request) const;

        /**
         * Delete a distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistribution2016_01_28Async(const Model::DeleteDistribution2016_01_28Request& request, const DeleteDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a streaming distribution.
         */
        virtual Model::DeleteStreamingDistribution2016_01_28Outcome DeleteStreamingDistribution2016_01_28(const Model::DeleteStreamingDistribution2016_01_28Request& request) const;

        /**
         * Delete a streaming distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingDistribution2016_01_28OutcomeCallable DeleteStreamingDistribution2016_01_28Callable(const Model::DeleteStreamingDistribution2016_01_28Request& request) const;

        /**
         * Delete a streaming distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingDistribution2016_01_28Async(const Model::DeleteStreamingDistribution2016_01_28Request& request, const DeleteStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the information about an origin access identity.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2016_01_28Outcome GetCloudFrontOriginAccessIdentity2016_01_28(const Model::GetCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Get the information about an origin access identity.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable GetCloudFrontOriginAccessIdentity2016_01_28Callable(const Model::GetCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Get the information about an origin access identity.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentity2016_01_28Async(const Model::GetCloudFrontOriginAccessIdentity2016_01_28Request& request, const GetCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the configuration information about an origin access identity.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome GetCloudFrontOriginAccessIdentityConfig2016_01_28(const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about an origin access identity.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2016_01_28Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about an origin access identity.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentityConfig2016_01_28Async(const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request, const GetCloudFrontOriginAccessIdentityConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the information about a distribution.
         */
        virtual Model::GetDistribution2016_01_28Outcome GetDistribution2016_01_28(const Model::GetDistribution2016_01_28Request& request) const;

        /**
         * Get the information about a distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistribution2016_01_28OutcomeCallable GetDistribution2016_01_28Callable(const Model::GetDistribution2016_01_28Request& request) const;

        /**
         * Get the information about a distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistribution2016_01_28Async(const Model::GetDistribution2016_01_28Request& request, const GetDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the configuration information about a distribution.
         */
        virtual Model::GetDistributionConfig2016_01_28Outcome GetDistributionConfig2016_01_28(const Model::GetDistributionConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about a distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfig2016_01_28OutcomeCallable GetDistributionConfig2016_01_28Callable(const Model::GetDistributionConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about a distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfig2016_01_28Async(const Model::GetDistributionConfig2016_01_28Request& request, const GetDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the information about an invalidation.
         */
        virtual Model::GetInvalidation2016_01_28Outcome GetInvalidation2016_01_28(const Model::GetInvalidation2016_01_28Request& request) const;

        /**
         * Get the information about an invalidation.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvalidation2016_01_28OutcomeCallable GetInvalidation2016_01_28Callable(const Model::GetInvalidation2016_01_28Request& request) const;

        /**
         * Get the information about an invalidation.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvalidation2016_01_28Async(const Model::GetInvalidation2016_01_28Request& request, const GetInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the information about a streaming distribution.
         */
        virtual Model::GetStreamingDistribution2016_01_28Outcome GetStreamingDistribution2016_01_28(const Model::GetStreamingDistribution2016_01_28Request& request) const;

        /**
         * Get the information about a streaming distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistribution2016_01_28OutcomeCallable GetStreamingDistribution2016_01_28Callable(const Model::GetStreamingDistribution2016_01_28Request& request) const;

        /**
         * Get the information about a streaming distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistribution2016_01_28Async(const Model::GetStreamingDistribution2016_01_28Request& request, const GetStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the configuration information about a streaming distribution.
         */
        virtual Model::GetStreamingDistributionConfig2016_01_28Outcome GetStreamingDistributionConfig2016_01_28(const Model::GetStreamingDistributionConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about a streaming distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistributionConfig2016_01_28OutcomeCallable GetStreamingDistributionConfig2016_01_28Callable(const Model::GetStreamingDistributionConfig2016_01_28Request& request) const;

        /**
         * Get the configuration information about a streaming distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistributionConfig2016_01_28Async(const Model::GetStreamingDistributionConfig2016_01_28Request& request, const GetStreamingDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List origin access identities.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2016_01_28Outcome ListCloudFrontOriginAccessIdentities2016_01_28(const Model::ListCloudFrontOriginAccessIdentities2016_01_28Request& request) const;

        /**
         * List origin access identities.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2016_01_28OutcomeCallable ListCloudFrontOriginAccessIdentities2016_01_28Callable(const Model::ListCloudFrontOriginAccessIdentities2016_01_28Request& request) const;

        /**
         * List origin access identities.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCloudFrontOriginAccessIdentities2016_01_28Async(const Model::ListCloudFrontOriginAccessIdentities2016_01_28Request& request, const ListCloudFrontOriginAccessIdentities2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List distributions.
         */
        virtual Model::ListDistributions2016_01_28Outcome ListDistributions2016_01_28(const Model::ListDistributions2016_01_28Request& request) const;

        /**
         * List distributions.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributions2016_01_28OutcomeCallable ListDistributions2016_01_28Callable(const Model::ListDistributions2016_01_28Request& request) const;

        /**
         * List distributions.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributions2016_01_28Async(const Model::ListDistributions2016_01_28Request& request, const ListDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List the distributions that are associated with a specified AWS WAF web ACL.
         */
        virtual Model::ListDistributionsByWebACLId2016_01_28Outcome ListDistributionsByWebACLId2016_01_28(const Model::ListDistributionsByWebACLId2016_01_28Request& request) const;

        /**
         * List the distributions that are associated with a specified AWS WAF web ACL.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByWebACLId2016_01_28OutcomeCallable ListDistributionsByWebACLId2016_01_28Callable(const Model::ListDistributionsByWebACLId2016_01_28Request& request) const;

        /**
         * List the distributions that are associated with a specified AWS WAF web ACL.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByWebACLId2016_01_28Async(const Model::ListDistributionsByWebACLId2016_01_28Request& request, const ListDistributionsByWebACLId2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List invalidation batches.
         */
        virtual Model::ListInvalidations2016_01_28Outcome ListInvalidations2016_01_28(const Model::ListInvalidations2016_01_28Request& request) const;

        /**
         * List invalidation batches.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvalidations2016_01_28OutcomeCallable ListInvalidations2016_01_28Callable(const Model::ListInvalidations2016_01_28Request& request) const;

        /**
         * List invalidation batches.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvalidations2016_01_28Async(const Model::ListInvalidations2016_01_28Request& request, const ListInvalidations2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List streaming distributions.
         */
        virtual Model::ListStreamingDistributions2016_01_28Outcome ListStreamingDistributions2016_01_28(const Model::ListStreamingDistributions2016_01_28Request& request) const;

        /**
         * List streaming distributions.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingDistributions2016_01_28OutcomeCallable ListStreamingDistributions2016_01_28Callable(const Model::ListStreamingDistributions2016_01_28Request& request) const;

        /**
         * List streaming distributions.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingDistributions2016_01_28Async(const Model::ListStreamingDistributions2016_01_28Request& request, const ListStreamingDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an origin access identity.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome UpdateCloudFrontOriginAccessIdentity2016_01_28(const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Update an origin access identity.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable UpdateCloudFrontOriginAccessIdentity2016_01_28Callable(const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request) const;

        /**
         * Update an origin access identity.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCloudFrontOriginAccessIdentity2016_01_28Async(const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request, const UpdateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a distribution.
         */
        virtual Model::UpdateDistribution2016_01_28Outcome UpdateDistribution2016_01_28(const Model::UpdateDistribution2016_01_28Request& request) const;

        /**
         * Update a distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistribution2016_01_28OutcomeCallable UpdateDistribution2016_01_28Callable(const Model::UpdateDistribution2016_01_28Request& request) const;

        /**
         * Update a distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistribution2016_01_28Async(const Model::UpdateDistribution2016_01_28Request& request, const UpdateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a streaming distribution.
         */
        virtual Model::UpdateStreamingDistribution2016_01_28Outcome UpdateStreamingDistribution2016_01_28(const Model::UpdateStreamingDistribution2016_01_28Request& request) const;

        /**
         * Update a streaming distribution.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingDistribution2016_01_28OutcomeCallable UpdateStreamingDistribution2016_01_28Callable(const Model::UpdateStreamingDistribution2016_01_28Request& request) const;

        /**
         * Update a streaming distribution.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingDistribution2016_01_28Async(const Model::UpdateStreamingDistribution2016_01_28Request& request, const UpdateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2016_01_28Request& request, const CreateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2016_01_28AsyncHelper(const Model::CreateDistribution2016_01_28Request& request, const CreateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2016_01_28AsyncHelper(const Model::CreateInvalidation2016_01_28Request& request, const CreateInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2016_01_28AsyncHelper(const Model::CreateStreamingDistribution2016_01_28Request& request, const CreateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request, const DeleteCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2016_01_28AsyncHelper(const Model::DeleteDistribution2016_01_28Request& request, const DeleteDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2016_01_28AsyncHelper(const Model::DeleteStreamingDistribution2016_01_28Request& request, const DeleteStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2016_01_28Request& request, const GetCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2016_01_28AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request, const GetCloudFrontOriginAccessIdentityConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2016_01_28AsyncHelper(const Model::GetDistribution2016_01_28Request& request, const GetDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2016_01_28AsyncHelper(const Model::GetDistributionConfig2016_01_28Request& request, const GetDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2016_01_28AsyncHelper(const Model::GetInvalidation2016_01_28Request& request, const GetInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2016_01_28AsyncHelper(const Model::GetStreamingDistribution2016_01_28Request& request, const GetStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2016_01_28AsyncHelper(const Model::GetStreamingDistributionConfig2016_01_28Request& request, const GetStreamingDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2016_01_28AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2016_01_28Request& request, const ListCloudFrontOriginAccessIdentities2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2016_01_28AsyncHelper(const Model::ListDistributions2016_01_28Request& request, const ListDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByWebACLId2016_01_28AsyncHelper(const Model::ListDistributionsByWebACLId2016_01_28Request& request, const ListDistributionsByWebACLId2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2016_01_28AsyncHelper(const Model::ListInvalidations2016_01_28Request& request, const ListInvalidations2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2016_01_28AsyncHelper(const Model::ListStreamingDistributions2016_01_28Request& request, const ListStreamingDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request, const UpdateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2016_01_28AsyncHelper(const Model::UpdateDistribution2016_01_28Request& request, const UpdateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2016_01_28AsyncHelper(const Model::UpdateStreamingDistribution2016_01_28Request& request, const UpdateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
