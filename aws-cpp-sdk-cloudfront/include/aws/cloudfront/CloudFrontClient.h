/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2015_04_17Result.h>
#include <aws/cloudfront/model/CreateDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/CreateInvalidation2015_04_17Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2015_04_17Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2015_04_17Result.h>
#include <aws/cloudfront/model/GetDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2015_04_17Result.h>
#include <aws/cloudfront/model/GetInvalidation2015_04_17Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2015_04_17Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2015_04_17Result.h>
#include <aws/cloudfront/model/ListDistributions2015_04_17Result.h>
#include <aws/cloudfront/model/ListInvalidations2015_04_17Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2015_04_17Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2015_04_17Result.h>
#include <aws/cloudfront/model/UpdateDistribution2015_04_17Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2015_04_17Result.h>
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
        class CreateCloudFrontOriginAccessIdentity2015_04_17Request;
        class CreateDistribution2015_04_17Request;
        class CreateInvalidation2015_04_17Request;
        class CreateStreamingDistribution2015_04_17Request;
        class DeleteCloudFrontOriginAccessIdentity2015_04_17Request;
        class DeleteDistribution2015_04_17Request;
        class DeleteStreamingDistribution2015_04_17Request;
        class GetCloudFrontOriginAccessIdentity2015_04_17Request;
        class GetCloudFrontOriginAccessIdentityConfig2015_04_17Request;
        class GetDistribution2015_04_17Request;
        class GetDistributionConfig2015_04_17Request;
        class GetInvalidation2015_04_17Request;
        class GetStreamingDistribution2015_04_17Request;
        class GetStreamingDistributionConfig2015_04_17Request;
        class ListCloudFrontOriginAccessIdentities2015_04_17Request;
        class ListDistributions2015_04_17Request;
        class ListInvalidations2015_04_17Request;
        class ListStreamingDistributions2015_04_17Request;
        class UpdateCloudFrontOriginAccessIdentity2015_04_17Request;
        class UpdateDistribution2015_04_17Request;
        class UpdateStreamingDistribution2015_04_17Request;

        typedef Utils::Outcome<CreateCloudFrontOriginAccessIdentity2015_04_17Result, Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2015_04_17Outcome;
        typedef Utils::Outcome<CreateDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> CreateDistribution2015_04_17Outcome;
        typedef Utils::Outcome<CreateInvalidation2015_04_17Result, Client::AWSError<CloudFrontErrors>> CreateInvalidation2015_04_17Outcome;
        typedef Utils::Outcome<CreateStreamingDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2015_04_17Outcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteDistribution2015_04_17Outcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2015_04_17Outcome;
        typedef Utils::Outcome<GetCloudFrontOriginAccessIdentity2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2015_04_17Outcome;
        typedef Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome;
        typedef Utils::Outcome<GetDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetDistribution2015_04_17Outcome;
        typedef Utils::Outcome<GetDistributionConfig2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetDistributionConfig2015_04_17Outcome;
        typedef Utils::Outcome<GetInvalidation2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetInvalidation2015_04_17Outcome;
        typedef Utils::Outcome<GetStreamingDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2015_04_17Outcome;
        typedef Utils::Outcome<GetStreamingDistributionConfig2015_04_17Result, Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2015_04_17Outcome;
        typedef Utils::Outcome<ListCloudFrontOriginAccessIdentities2015_04_17Result, Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2015_04_17Outcome;
        typedef Utils::Outcome<ListDistributions2015_04_17Result, Client::AWSError<CloudFrontErrors>> ListDistributions2015_04_17Outcome;
        typedef Utils::Outcome<ListInvalidations2015_04_17Result, Client::AWSError<CloudFrontErrors>> ListInvalidations2015_04_17Outcome;
        typedef Utils::Outcome<ListStreamingDistributions2015_04_17Result, Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2015_04_17Outcome;
        typedef Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2015_04_17Result, Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome;
        typedef Utils::Outcome<UpdateDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> UpdateDistribution2015_04_17Outcome;
        typedef Utils::Outcome<UpdateStreamingDistribution2015_04_17Result, Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2015_04_17Outcome;

        typedef std::future<CreateCloudFrontOriginAccessIdentity2015_04_17Outcome> CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable;
        typedef std::future<CreateDistribution2015_04_17Outcome> CreateDistribution2015_04_17OutcomeCallable;
        typedef std::future<CreateInvalidation2015_04_17Outcome> CreateInvalidation2015_04_17OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2015_04_17Outcome> CreateStreamingDistribution2015_04_17OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome> DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable;
        typedef std::future<DeleteDistribution2015_04_17Outcome> DeleteDistribution2015_04_17OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2015_04_17Outcome> DeleteStreamingDistribution2015_04_17OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2015_04_17Outcome> GetCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome> GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeCallable;
        typedef std::future<GetDistribution2015_04_17Outcome> GetDistribution2015_04_17OutcomeCallable;
        typedef std::future<GetDistributionConfig2015_04_17Outcome> GetDistributionConfig2015_04_17OutcomeCallable;
        typedef std::future<GetInvalidation2015_04_17Outcome> GetInvalidation2015_04_17OutcomeCallable;
        typedef std::future<GetStreamingDistribution2015_04_17Outcome> GetStreamingDistribution2015_04_17OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2015_04_17Outcome> GetStreamingDistributionConfig2015_04_17OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2015_04_17Outcome> ListCloudFrontOriginAccessIdentities2015_04_17OutcomeCallable;
        typedef std::future<ListDistributions2015_04_17Outcome> ListDistributions2015_04_17OutcomeCallable;
        typedef std::future<ListInvalidations2015_04_17Outcome> ListInvalidations2015_04_17OutcomeCallable;
        typedef std::future<ListStreamingDistributions2015_04_17Outcome> ListStreamingDistributions2015_04_17OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome> UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable;
        typedef std::future<UpdateDistribution2015_04_17Outcome> UpdateDistribution2015_04_17OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2015_04_17Outcome> UpdateStreamingDistribution2015_04_17OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2015_04_17Request&, const Model::CreateDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2015_04_17Request&, const Model::CreateInvalidation2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2015_04_17Request&, const Model::CreateStreamingDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2015_04_17Request&, const Model::DeleteDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2015_04_17Request&, const Model::DeleteStreamingDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::GetCloudFrontOriginAccessIdentity2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2015_04_17Request&, const Model::GetDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2015_04_17Request&, const Model::GetDistributionConfig2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2015_04_17Request&, const Model::GetInvalidation2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2015_04_17Request&, const Model::GetStreamingDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2015_04_17Request&, const Model::GetStreamingDistributionConfig2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request&, const Model::ListCloudFrontOriginAccessIdentities2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2015_04_17Request&, const Model::ListDistributions2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2015_04_17Request&, const Model::ListInvalidations2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2015_04_17Request&, const Model::ListStreamingDistributions2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2015_04_17Request&, const Model::UpdateDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2015_04_17ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2015_04_17Request&, const Model::UpdateStreamingDistribution2015_04_17Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2015_04_17ResponseReceivedHandler;

  /*
    ${serviceModel.documentation}
  */
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
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        virtual ~CloudFrontClient();

        /*
            Create a new origin access identity.
        */
        virtual Model::CreateCloudFrontOriginAccessIdentity2015_04_17Outcome CreateCloudFrontOriginAccessIdentity2015_04_17(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Create a new origin access identity.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CreateCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Create a new origin access identity.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void CreateCloudFrontOriginAccessIdentity2015_04_17Async(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const CreateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Create a new distribution.
        */
        virtual Model::CreateDistribution2015_04_17Outcome CreateDistribution2015_04_17(const Model::CreateDistribution2015_04_17Request& request) const;

        /*
            Create a new distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::CreateDistribution2015_04_17OutcomeCallable CreateDistribution2015_04_17Callable(const Model::CreateDistribution2015_04_17Request& request) const;

        /*
            Create a new distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void CreateDistribution2015_04_17Async(const Model::CreateDistribution2015_04_17Request& request, const CreateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Create a new invalidation.
        */
        virtual Model::CreateInvalidation2015_04_17Outcome CreateInvalidation2015_04_17(const Model::CreateInvalidation2015_04_17Request& request) const;

        /*
            Create a new invalidation.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::CreateInvalidation2015_04_17OutcomeCallable CreateInvalidation2015_04_17Callable(const Model::CreateInvalidation2015_04_17Request& request) const;

        /*
            Create a new invalidation.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void CreateInvalidation2015_04_17Async(const Model::CreateInvalidation2015_04_17Request& request, const CreateInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Create a new streaming distribution.
        */
        virtual Model::CreateStreamingDistribution2015_04_17Outcome CreateStreamingDistribution2015_04_17(const Model::CreateStreamingDistribution2015_04_17Request& request) const;

        /*
            Create a new streaming distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::CreateStreamingDistribution2015_04_17OutcomeCallable CreateStreamingDistribution2015_04_17Callable(const Model::CreateStreamingDistribution2015_04_17Request& request) const;

        /*
            Create a new streaming distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void CreateStreamingDistribution2015_04_17Async(const Model::CreateStreamingDistribution2015_04_17Request& request, const CreateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Delete an origin access identity.
        */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome DeleteCloudFrontOriginAccessIdentity2015_04_17(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Delete an origin access identity.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable DeleteCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Delete an origin access identity.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void DeleteCloudFrontOriginAccessIdentity2015_04_17Async(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const DeleteCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Delete a distribution.
        */
        virtual Model::DeleteDistribution2015_04_17Outcome DeleteDistribution2015_04_17(const Model::DeleteDistribution2015_04_17Request& request) const;

        /*
            Delete a distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::DeleteDistribution2015_04_17OutcomeCallable DeleteDistribution2015_04_17Callable(const Model::DeleteDistribution2015_04_17Request& request) const;

        /*
            Delete a distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void DeleteDistribution2015_04_17Async(const Model::DeleteDistribution2015_04_17Request& request, const DeleteDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Delete a streaming distribution.
        */
        virtual Model::DeleteStreamingDistribution2015_04_17Outcome DeleteStreamingDistribution2015_04_17(const Model::DeleteStreamingDistribution2015_04_17Request& request) const;

        /*
            Delete a streaming distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::DeleteStreamingDistribution2015_04_17OutcomeCallable DeleteStreamingDistribution2015_04_17Callable(const Model::DeleteStreamingDistribution2015_04_17Request& request) const;

        /*
            Delete a streaming distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void DeleteStreamingDistribution2015_04_17Async(const Model::DeleteStreamingDistribution2015_04_17Request& request, const DeleteStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the information about an origin access identity.
        */
        virtual Model::GetCloudFrontOriginAccessIdentity2015_04_17Outcome GetCloudFrontOriginAccessIdentity2015_04_17(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Get the information about an origin access identity.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable GetCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Get the information about an origin access identity.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetCloudFrontOriginAccessIdentity2015_04_17Async(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const GetCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the configuration information about an origin access identity.
        */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome GetCloudFrontOriginAccessIdentityConfig2015_04_17(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about an origin access identity.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2015_04_17Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about an origin access identity.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetCloudFrontOriginAccessIdentityConfig2015_04_17Async(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const GetCloudFrontOriginAccessIdentityConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the information about a distribution.
        */
        virtual Model::GetDistribution2015_04_17Outcome GetDistribution2015_04_17(const Model::GetDistribution2015_04_17Request& request) const;

        /*
            Get the information about a distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetDistribution2015_04_17OutcomeCallable GetDistribution2015_04_17Callable(const Model::GetDistribution2015_04_17Request& request) const;

        /*
            Get the information about a distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetDistribution2015_04_17Async(const Model::GetDistribution2015_04_17Request& request, const GetDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the configuration information about a distribution.
        */
        virtual Model::GetDistributionConfig2015_04_17Outcome GetDistributionConfig2015_04_17(const Model::GetDistributionConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about a distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetDistributionConfig2015_04_17OutcomeCallable GetDistributionConfig2015_04_17Callable(const Model::GetDistributionConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about a distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetDistributionConfig2015_04_17Async(const Model::GetDistributionConfig2015_04_17Request& request, const GetDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the information about an invalidation.
        */
        virtual Model::GetInvalidation2015_04_17Outcome GetInvalidation2015_04_17(const Model::GetInvalidation2015_04_17Request& request) const;

        /*
            Get the information about an invalidation.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetInvalidation2015_04_17OutcomeCallable GetInvalidation2015_04_17Callable(const Model::GetInvalidation2015_04_17Request& request) const;

        /*
            Get the information about an invalidation.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetInvalidation2015_04_17Async(const Model::GetInvalidation2015_04_17Request& request, const GetInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the information about a streaming distribution.
        */
        virtual Model::GetStreamingDistribution2015_04_17Outcome GetStreamingDistribution2015_04_17(const Model::GetStreamingDistribution2015_04_17Request& request) const;

        /*
            Get the information about a streaming distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetStreamingDistribution2015_04_17OutcomeCallable GetStreamingDistribution2015_04_17Callable(const Model::GetStreamingDistribution2015_04_17Request& request) const;

        /*
            Get the information about a streaming distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetStreamingDistribution2015_04_17Async(const Model::GetStreamingDistribution2015_04_17Request& request, const GetStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Get the configuration information about a streaming distribution.
        */
        virtual Model::GetStreamingDistributionConfig2015_04_17Outcome GetStreamingDistributionConfig2015_04_17(const Model::GetStreamingDistributionConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about a streaming distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::GetStreamingDistributionConfig2015_04_17OutcomeCallable GetStreamingDistributionConfig2015_04_17Callable(const Model::GetStreamingDistributionConfig2015_04_17Request& request) const;

        /*
            Get the configuration information about a streaming distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void GetStreamingDistributionConfig2015_04_17Async(const Model::GetStreamingDistributionConfig2015_04_17Request& request, const GetStreamingDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            List origin access identities.
        */
        virtual Model::ListCloudFrontOriginAccessIdentities2015_04_17Outcome ListCloudFrontOriginAccessIdentities2015_04_17(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const;

        /*
            List origin access identities.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::ListCloudFrontOriginAccessIdentities2015_04_17OutcomeCallable ListCloudFrontOriginAccessIdentities2015_04_17Callable(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const;

        /*
            List origin access identities.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void ListCloudFrontOriginAccessIdentities2015_04_17Async(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const ListCloudFrontOriginAccessIdentities2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            List distributions.
        */
        virtual Model::ListDistributions2015_04_17Outcome ListDistributions2015_04_17(const Model::ListDistributions2015_04_17Request& request) const;

        /*
            List distributions.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::ListDistributions2015_04_17OutcomeCallable ListDistributions2015_04_17Callable(const Model::ListDistributions2015_04_17Request& request) const;

        /*
            List distributions.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void ListDistributions2015_04_17Async(const Model::ListDistributions2015_04_17Request& request, const ListDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            List invalidation batches.
        */
        virtual Model::ListInvalidations2015_04_17Outcome ListInvalidations2015_04_17(const Model::ListInvalidations2015_04_17Request& request) const;

        /*
            List invalidation batches.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::ListInvalidations2015_04_17OutcomeCallable ListInvalidations2015_04_17Callable(const Model::ListInvalidations2015_04_17Request& request) const;

        /*
            List invalidation batches.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void ListInvalidations2015_04_17Async(const Model::ListInvalidations2015_04_17Request& request, const ListInvalidations2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            List streaming distributions.
        */
        virtual Model::ListStreamingDistributions2015_04_17Outcome ListStreamingDistributions2015_04_17(const Model::ListStreamingDistributions2015_04_17Request& request) const;

        /*
            List streaming distributions.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::ListStreamingDistributions2015_04_17OutcomeCallable ListStreamingDistributions2015_04_17Callable(const Model::ListStreamingDistributions2015_04_17Request& request) const;

        /*
            List streaming distributions.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void ListStreamingDistributions2015_04_17Async(const Model::ListStreamingDistributions2015_04_17Request& request, const ListStreamingDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Update an origin access identity.
        */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome UpdateCloudFrontOriginAccessIdentity2015_04_17(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Update an origin access identity.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable UpdateCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

        /*
            Update an origin access identity.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void UpdateCloudFrontOriginAccessIdentity2015_04_17Async(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const UpdateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Update a distribution.
        */
        virtual Model::UpdateDistribution2015_04_17Outcome UpdateDistribution2015_04_17(const Model::UpdateDistribution2015_04_17Request& request) const;

        /*
            Update a distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::UpdateDistribution2015_04_17OutcomeCallable UpdateDistribution2015_04_17Callable(const Model::UpdateDistribution2015_04_17Request& request) const;

        /*
            Update a distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void UpdateDistribution2015_04_17Async(const Model::UpdateDistribution2015_04_17Request& request, const UpdateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            Update a streaming distribution.
        */
        virtual Model::UpdateStreamingDistribution2015_04_17Outcome UpdateStreamingDistribution2015_04_17(const Model::UpdateStreamingDistribution2015_04_17Request& request) const;

        /*
            Update a streaming distribution.

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        virtual Model::UpdateStreamingDistribution2015_04_17OutcomeCallable UpdateStreamingDistribution2015_04_17Callable(const Model::UpdateStreamingDistribution2015_04_17Request& request) const;

        /*
            Update a streaming distribution.

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        virtual void UpdateStreamingDistribution2015_04_17Async(const Model::UpdateStreamingDistribution2015_04_17Request& request, const UpdateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

/**Async helpers**/
        void CreateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const CreateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2015_04_17AsyncHelper(const Model::CreateDistribution2015_04_17Request& request, const CreateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2015_04_17AsyncHelper(const Model::CreateInvalidation2015_04_17Request& request, const CreateInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2015_04_17AsyncHelper(const Model::CreateStreamingDistribution2015_04_17Request& request, const CreateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const DeleteCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2015_04_17AsyncHelper(const Model::DeleteDistribution2015_04_17Request& request, const DeleteDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2015_04_17AsyncHelper(const Model::DeleteStreamingDistribution2015_04_17Request& request, const DeleteStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const GetCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2015_04_17AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const GetCloudFrontOriginAccessIdentityConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2015_04_17AsyncHelper(const Model::GetDistribution2015_04_17Request& request, const GetDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2015_04_17AsyncHelper(const Model::GetDistributionConfig2015_04_17Request& request, const GetDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2015_04_17AsyncHelper(const Model::GetInvalidation2015_04_17Request& request, const GetInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2015_04_17AsyncHelper(const Model::GetStreamingDistribution2015_04_17Request& request, const GetStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2015_04_17AsyncHelper(const Model::GetStreamingDistributionConfig2015_04_17Request& request, const GetStreamingDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2015_04_17AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const ListCloudFrontOriginAccessIdentities2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2015_04_17AsyncHelper(const Model::ListDistributions2015_04_17Request& request, const ListDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2015_04_17AsyncHelper(const Model::ListInvalidations2015_04_17Request& request, const ListInvalidations2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2015_04_17AsyncHelper(const Model::ListStreamingDistributions2015_04_17Request& request, const ListStreamingDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const UpdateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2015_04_17AsyncHelper(const Model::UpdateDistribution2015_04_17Request& request, const UpdateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2015_04_17AsyncHelper(const Model::UpdateStreamingDistribution2015_04_17Request& request, const UpdateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
