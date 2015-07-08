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
#include <aws/core/utils/Event.h>
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
#include <future>

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

  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateDistribution2015_04_17Request&, const Model::CreateDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> CreateDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateInvalidation2015_04_17Request&, const Model::CreateInvalidation2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> CreateInvalidation2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateStreamingDistribution2015_04_17Request&, const Model::CreateStreamingDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> CreateStreamingDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteDistribution2015_04_17Request&, const Model::DeleteDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> DeleteDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteStreamingDistribution2015_04_17Request&, const Model::DeleteStreamingDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> DeleteStreamingDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::GetCloudFrontOriginAccessIdentity2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetDistribution2015_04_17Request&, const Model::GetDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetDistributionConfig2015_04_17Request&, const Model::GetDistributionConfig2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetDistributionConfig2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetInvalidation2015_04_17Request&, const Model::GetInvalidation2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetInvalidation2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetStreamingDistribution2015_04_17Request&, const Model::GetStreamingDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetStreamingDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetStreamingDistributionConfig2015_04_17Request&, const Model::GetStreamingDistributionConfig2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> GetStreamingDistributionConfig2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request&, const Model::ListCloudFrontOriginAccessIdentities2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> ListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListDistributions2015_04_17Request&, const Model::ListDistributions2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> ListDistributions2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListInvalidations2015_04_17Request&, const Model::ListInvalidations2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> ListInvalidations2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListStreamingDistributions2015_04_17Request&, const Model::ListStreamingDistributions2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> ListStreamingDistributions2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request&, const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateDistribution2015_04_17Request&, const Model::UpdateDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> UpdateDistribution2015_04_17OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateStreamingDistribution2015_04_17Request&, const Model::UpdateStreamingDistribution2015_04_17Outcome&, const Aws::Client::AsyncCallerContext*> UpdateStreamingDistribution2015_04_17OutcomeReceivedEvent;

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

      ~CloudFrontClient();

     /*
       Create a new origin access identity.
     */
     Model::CreateCloudFrontOriginAccessIdentity2015_04_17Outcome CreateCloudFrontOriginAccessIdentity2015_04_17(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Create a new origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CreateCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Create a new origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCloudFrontOriginAccessIdentity2015_04_17Async(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Create a new distribution.
     */
     Model::CreateDistribution2015_04_17Outcome CreateDistribution2015_04_17(const Model::CreateDistribution2015_04_17Request& request) const;

     /*
       Create a new distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDistribution2015_04_17OutcomeCallable CreateDistribution2015_04_17Callable(const Model::CreateDistribution2015_04_17Request& request) const;

     /*
       Create a new distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDistribution2015_04_17Async(const Model::CreateDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Create a new invalidation.
     */
     Model::CreateInvalidation2015_04_17Outcome CreateInvalidation2015_04_17(const Model::CreateInvalidation2015_04_17Request& request) const;

     /*
       Create a new invalidation.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateInvalidation2015_04_17OutcomeCallable CreateInvalidation2015_04_17Callable(const Model::CreateInvalidation2015_04_17Request& request) const;

     /*
       Create a new invalidation.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateInvalidation2015_04_17Async(const Model::CreateInvalidation2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Create a new streaming distribution.
     */
     Model::CreateStreamingDistribution2015_04_17Outcome CreateStreamingDistribution2015_04_17(const Model::CreateStreamingDistribution2015_04_17Request& request) const;

     /*
       Create a new streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateStreamingDistribution2015_04_17OutcomeCallable CreateStreamingDistribution2015_04_17Callable(const Model::CreateStreamingDistribution2015_04_17Request& request) const;

     /*
       Create a new streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateStreamingDistribution2015_04_17Async(const Model::CreateStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Delete an origin access identity.
     */
     Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome DeleteCloudFrontOriginAccessIdentity2015_04_17(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Delete an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable DeleteCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Delete an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCloudFrontOriginAccessIdentity2015_04_17Async(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Delete a distribution.
     */
     Model::DeleteDistribution2015_04_17Outcome DeleteDistribution2015_04_17(const Model::DeleteDistribution2015_04_17Request& request) const;

     /*
       Delete a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDistribution2015_04_17OutcomeCallable DeleteDistribution2015_04_17Callable(const Model::DeleteDistribution2015_04_17Request& request) const;

     /*
       Delete a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDistribution2015_04_17Async(const Model::DeleteDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Delete a streaming distribution.
     */
     Model::DeleteStreamingDistribution2015_04_17Outcome DeleteStreamingDistribution2015_04_17(const Model::DeleteStreamingDistribution2015_04_17Request& request) const;

     /*
       Delete a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteStreamingDistribution2015_04_17OutcomeCallable DeleteStreamingDistribution2015_04_17Callable(const Model::DeleteStreamingDistribution2015_04_17Request& request) const;

     /*
       Delete a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteStreamingDistribution2015_04_17Async(const Model::DeleteStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the information about an origin access identity.
     */
     Model::GetCloudFrontOriginAccessIdentity2015_04_17Outcome GetCloudFrontOriginAccessIdentity2015_04_17(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Get the information about an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable GetCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Get the information about an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCloudFrontOriginAccessIdentity2015_04_17Async(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the configuration information about an origin access identity.
     */
     Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome GetCloudFrontOriginAccessIdentityConfig2015_04_17(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2015_04_17Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCloudFrontOriginAccessIdentityConfig2015_04_17Async(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the information about a distribution.
     */
     Model::GetDistribution2015_04_17Outcome GetDistribution2015_04_17(const Model::GetDistribution2015_04_17Request& request) const;

     /*
       Get the information about a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDistribution2015_04_17OutcomeCallable GetDistribution2015_04_17Callable(const Model::GetDistribution2015_04_17Request& request) const;

     /*
       Get the information about a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDistribution2015_04_17Async(const Model::GetDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the configuration information about a distribution.
     */
     Model::GetDistributionConfig2015_04_17Outcome GetDistributionConfig2015_04_17(const Model::GetDistributionConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDistributionConfig2015_04_17OutcomeCallable GetDistributionConfig2015_04_17Callable(const Model::GetDistributionConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDistributionConfig2015_04_17Async(const Model::GetDistributionConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the information about an invalidation.
     */
     Model::GetInvalidation2015_04_17Outcome GetInvalidation2015_04_17(const Model::GetInvalidation2015_04_17Request& request) const;

     /*
       Get the information about an invalidation.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetInvalidation2015_04_17OutcomeCallable GetInvalidation2015_04_17Callable(const Model::GetInvalidation2015_04_17Request& request) const;

     /*
       Get the information about an invalidation.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetInvalidation2015_04_17Async(const Model::GetInvalidation2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the information about a streaming distribution.
     */
     Model::GetStreamingDistribution2015_04_17Outcome GetStreamingDistribution2015_04_17(const Model::GetStreamingDistribution2015_04_17Request& request) const;

     /*
       Get the information about a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetStreamingDistribution2015_04_17OutcomeCallable GetStreamingDistribution2015_04_17Callable(const Model::GetStreamingDistribution2015_04_17Request& request) const;

     /*
       Get the information about a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetStreamingDistribution2015_04_17Async(const Model::GetStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Get the configuration information about a streaming distribution.
     */
     Model::GetStreamingDistributionConfig2015_04_17Outcome GetStreamingDistributionConfig2015_04_17(const Model::GetStreamingDistributionConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetStreamingDistributionConfig2015_04_17OutcomeCallable GetStreamingDistributionConfig2015_04_17Callable(const Model::GetStreamingDistributionConfig2015_04_17Request& request) const;

     /*
       Get the configuration information about a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetStreamingDistributionConfig2015_04_17Async(const Model::GetStreamingDistributionConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       List origin access identities.
     */
     Model::ListCloudFrontOriginAccessIdentities2015_04_17Outcome ListCloudFrontOriginAccessIdentities2015_04_17(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const;

     /*
       List origin access identities.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListCloudFrontOriginAccessIdentities2015_04_17OutcomeCallable ListCloudFrontOriginAccessIdentities2015_04_17Callable(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const;

     /*
       List origin access identities.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListCloudFrontOriginAccessIdentities2015_04_17Async(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       List distributions.
     */
     Model::ListDistributions2015_04_17Outcome ListDistributions2015_04_17(const Model::ListDistributions2015_04_17Request& request) const;

     /*
       List distributions.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDistributions2015_04_17OutcomeCallable ListDistributions2015_04_17Callable(const Model::ListDistributions2015_04_17Request& request) const;

     /*
       List distributions.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDistributions2015_04_17Async(const Model::ListDistributions2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       List invalidation batches.
     */
     Model::ListInvalidations2015_04_17Outcome ListInvalidations2015_04_17(const Model::ListInvalidations2015_04_17Request& request) const;

     /*
       List invalidation batches.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListInvalidations2015_04_17OutcomeCallable ListInvalidations2015_04_17Callable(const Model::ListInvalidations2015_04_17Request& request) const;

     /*
       List invalidation batches.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListInvalidations2015_04_17Async(const Model::ListInvalidations2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       List streaming distributions.
     */
     Model::ListStreamingDistributions2015_04_17Outcome ListStreamingDistributions2015_04_17(const Model::ListStreamingDistributions2015_04_17Request& request) const;

     /*
       List streaming distributions.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListStreamingDistributions2015_04_17OutcomeCallable ListStreamingDistributions2015_04_17Callable(const Model::ListStreamingDistributions2015_04_17Request& request) const;

     /*
       List streaming distributions.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListStreamingDistributions2015_04_17Async(const Model::ListStreamingDistributions2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Update an origin access identity.
     */
     Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome UpdateCloudFrontOriginAccessIdentity2015_04_17(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Update an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable UpdateCloudFrontOriginAccessIdentity2015_04_17Callable(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const;

     /*
       Update an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateCloudFrontOriginAccessIdentity2015_04_17Async(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Update a distribution.
     */
     Model::UpdateDistribution2015_04_17Outcome UpdateDistribution2015_04_17(const Model::UpdateDistribution2015_04_17Request& request) const;

     /*
       Update a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateDistribution2015_04_17OutcomeCallable UpdateDistribution2015_04_17Callable(const Model::UpdateDistribution2015_04_17Request& request) const;

     /*
       Update a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateDistribution2015_04_17Async(const Model::UpdateDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Update a streaming distribution.
     */
     Model::UpdateStreamingDistribution2015_04_17Outcome UpdateStreamingDistribution2015_04_17(const Model::UpdateStreamingDistribution2015_04_17Request& request) const;

     /*
       Update a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateStreamingDistribution2015_04_17OutcomeCallable UpdateStreamingDistribution2015_04_17Callable(const Model::UpdateStreamingDistribution2015_04_17Request& request) const;

     /*
       Update a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateStreamingDistribution2015_04_17Async(const Model::UpdateStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for CreateCloudFrontOriginAccessIdentity2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use CreateCloudFrontOriginAccessIdentity2015_04_17Async.
    */
    inline void RegisterCreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandler(const CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCloudFrontOriginAccessIdentity2015_04_17.
    */
    inline void ClearAllCreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandlers()
    {
      m_onCreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use CreateDistribution2015_04_17Async.
    */
    inline void RegisterCreateDistribution2015_04_17OutcomeReceivedHandler(const CreateDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDistribution2015_04_17.
    */
    inline void ClearAllCreateDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onCreateDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateInvalidation2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use CreateInvalidation2015_04_17Async.
    */
    inline void RegisterCreateInvalidation2015_04_17OutcomeReceivedHandler(const CreateInvalidation2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateInvalidation2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateInvalidation2015_04_17.
    */
    inline void ClearAllCreateInvalidation2015_04_17OutcomeReceivedHandlers()
    {
      m_onCreateInvalidation2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateStreamingDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use CreateStreamingDistribution2015_04_17Async.
    */
    inline void RegisterCreateStreamingDistribution2015_04_17OutcomeReceivedHandler(const CreateStreamingDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateStreamingDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateStreamingDistribution2015_04_17.
    */
    inline void ClearAllCreateStreamingDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onCreateStreamingDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCloudFrontOriginAccessIdentity2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use DeleteCloudFrontOriginAccessIdentity2015_04_17Async.
    */
    inline void RegisterDeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandler(const DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCloudFrontOriginAccessIdentity2015_04_17.
    */
    inline void ClearAllDeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandlers()
    {
      m_onDeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use DeleteDistribution2015_04_17Async.
    */
    inline void RegisterDeleteDistribution2015_04_17OutcomeReceivedHandler(const DeleteDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDistribution2015_04_17.
    */
    inline void ClearAllDeleteDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onDeleteDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteStreamingDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use DeleteStreamingDistribution2015_04_17Async.
    */
    inline void RegisterDeleteStreamingDistribution2015_04_17OutcomeReceivedHandler(const DeleteStreamingDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteStreamingDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteStreamingDistribution2015_04_17.
    */
    inline void ClearAllDeleteStreamingDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onDeleteStreamingDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCloudFrontOriginAccessIdentity2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetCloudFrontOriginAccessIdentity2015_04_17Async.
    */
    inline void RegisterGetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandler(const GetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCloudFrontOriginAccessIdentity2015_04_17.
    */
    inline void ClearAllGetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCloudFrontOriginAccessIdentityConfig2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetCloudFrontOriginAccessIdentityConfig2015_04_17Async.
    */
    inline void RegisterGetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceivedHandler(const GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCloudFrontOriginAccessIdentityConfig2015_04_17.
    */
    inline void ClearAllGetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetDistribution2015_04_17Async.
    */
    inline void RegisterGetDistribution2015_04_17OutcomeReceivedHandler(const GetDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDistribution2015_04_17.
    */
    inline void ClearAllGetDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDistributionConfig2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetDistributionConfig2015_04_17Async.
    */
    inline void RegisterGetDistributionConfig2015_04_17OutcomeReceivedHandler(const GetDistributionConfig2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDistributionConfig2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDistributionConfig2015_04_17.
    */
    inline void ClearAllGetDistributionConfig2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetDistributionConfig2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetInvalidation2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetInvalidation2015_04_17Async.
    */
    inline void RegisterGetInvalidation2015_04_17OutcomeReceivedHandler(const GetInvalidation2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetInvalidation2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetInvalidation2015_04_17.
    */
    inline void ClearAllGetInvalidation2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetInvalidation2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetStreamingDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetStreamingDistribution2015_04_17Async.
    */
    inline void RegisterGetStreamingDistribution2015_04_17OutcomeReceivedHandler(const GetStreamingDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetStreamingDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetStreamingDistribution2015_04_17.
    */
    inline void ClearAllGetStreamingDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetStreamingDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetStreamingDistributionConfig2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use GetStreamingDistributionConfig2015_04_17Async.
    */
    inline void RegisterGetStreamingDistributionConfig2015_04_17OutcomeReceivedHandler(const GetStreamingDistributionConfig2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetStreamingDistributionConfig2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetStreamingDistributionConfig2015_04_17.
    */
    inline void ClearAllGetStreamingDistributionConfig2015_04_17OutcomeReceivedHandlers()
    {
      m_onGetStreamingDistributionConfig2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListCloudFrontOriginAccessIdentities2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use ListCloudFrontOriginAccessIdentities2015_04_17Async.
    */
    inline void RegisterListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceivedHandler(const ListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListCloudFrontOriginAccessIdentities2015_04_17.
    */
    inline void ClearAllListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceivedHandlers()
    {
      m_onListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDistributions2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use ListDistributions2015_04_17Async.
    */
    inline void RegisterListDistributions2015_04_17OutcomeReceivedHandler(const ListDistributions2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDistributions2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDistributions2015_04_17.
    */
    inline void ClearAllListDistributions2015_04_17OutcomeReceivedHandlers()
    {
      m_onListDistributions2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListInvalidations2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use ListInvalidations2015_04_17Async.
    */
    inline void RegisterListInvalidations2015_04_17OutcomeReceivedHandler(const ListInvalidations2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListInvalidations2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListInvalidations2015_04_17.
    */
    inline void ClearAllListInvalidations2015_04_17OutcomeReceivedHandlers()
    {
      m_onListInvalidations2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListStreamingDistributions2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use ListStreamingDistributions2015_04_17Async.
    */
    inline void RegisterListStreamingDistributions2015_04_17OutcomeReceivedHandler(const ListStreamingDistributions2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListStreamingDistributions2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListStreamingDistributions2015_04_17.
    */
    inline void ClearAllListStreamingDistributions2015_04_17OutcomeReceivedHandlers()
    {
      m_onListStreamingDistributions2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateCloudFrontOriginAccessIdentity2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use UpdateCloudFrontOriginAccessIdentity2015_04_17Async.
    */
    inline void RegisterUpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandler(const UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateCloudFrontOriginAccessIdentity2015_04_17.
    */
    inline void ClearAllUpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedHandlers()
    {
      m_onUpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use UpdateDistribution2015_04_17Async.
    */
    inline void RegisterUpdateDistribution2015_04_17OutcomeReceivedHandler(const UpdateDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateDistribution2015_04_17.
    */
    inline void ClearAllUpdateDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onUpdateDistribution2015_04_17OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateStreamingDistribution2015_04_17Async to call upon completion to the handler chain. You need to call this to
    * use UpdateStreamingDistribution2015_04_17Async.
    */
    inline void RegisterUpdateStreamingDistribution2015_04_17OutcomeReceivedHandler(const UpdateStreamingDistribution2015_04_17OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateStreamingDistribution2015_04_17OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateStreamingDistribution2015_04_17.
    */
    inline void ClearAllUpdateStreamingDistribution2015_04_17OutcomeReceivedHandlers()
    {
      m_onUpdateStreamingDistribution2015_04_17OutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateDistribution2015_04_17AsyncHelper(const Model::CreateDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateInvalidation2015_04_17AsyncHelper(const Model::CreateInvalidation2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateStreamingDistribution2015_04_17AsyncHelper(const Model::CreateStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteDistribution2015_04_17AsyncHelper(const Model::DeleteDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteStreamingDistribution2015_04_17AsyncHelper(const Model::DeleteStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetCloudFrontOriginAccessIdentityConfig2015_04_17AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDistribution2015_04_17AsyncHelper(const Model::GetDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetDistributionConfig2015_04_17AsyncHelper(const Model::GetDistributionConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetInvalidation2015_04_17AsyncHelper(const Model::GetInvalidation2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetStreamingDistribution2015_04_17AsyncHelper(const Model::GetStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetStreamingDistributionConfig2015_04_17AsyncHelper(const Model::GetStreamingDistributionConfig2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListCloudFrontOriginAccessIdentities2015_04_17AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListDistributions2015_04_17AsyncHelper(const Model::ListDistributions2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListInvalidations2015_04_17AsyncHelper(const Model::ListInvalidations2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListStreamingDistributions2015_04_17AsyncHelper(const Model::ListStreamingDistributions2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateDistribution2015_04_17AsyncHelper(const Model::UpdateDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateStreamingDistribution2015_04_17AsyncHelper(const Model::UpdateStreamingDistribution2015_04_17Request& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent m_onCreateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived;
    CreateDistribution2015_04_17OutcomeReceivedEvent m_onCreateDistribution2015_04_17OutcomeReceived;
    CreateInvalidation2015_04_17OutcomeReceivedEvent m_onCreateInvalidation2015_04_17OutcomeReceived;
    CreateStreamingDistribution2015_04_17OutcomeReceivedEvent m_onCreateStreamingDistribution2015_04_17OutcomeReceived;
    DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent m_onDeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived;
    DeleteDistribution2015_04_17OutcomeReceivedEvent m_onDeleteDistribution2015_04_17OutcomeReceived;
    DeleteStreamingDistribution2015_04_17OutcomeReceivedEvent m_onDeleteStreamingDistribution2015_04_17OutcomeReceived;
    GetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent m_onGetCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived;
    GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceivedEvent m_onGetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeReceived;
    GetDistribution2015_04_17OutcomeReceivedEvent m_onGetDistribution2015_04_17OutcomeReceived;
    GetDistributionConfig2015_04_17OutcomeReceivedEvent m_onGetDistributionConfig2015_04_17OutcomeReceived;
    GetInvalidation2015_04_17OutcomeReceivedEvent m_onGetInvalidation2015_04_17OutcomeReceived;
    GetStreamingDistribution2015_04_17OutcomeReceivedEvent m_onGetStreamingDistribution2015_04_17OutcomeReceived;
    GetStreamingDistributionConfig2015_04_17OutcomeReceivedEvent m_onGetStreamingDistributionConfig2015_04_17OutcomeReceived;
    ListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceivedEvent m_onListCloudFrontOriginAccessIdentities2015_04_17OutcomeReceived;
    ListDistributions2015_04_17OutcomeReceivedEvent m_onListDistributions2015_04_17OutcomeReceived;
    ListInvalidations2015_04_17OutcomeReceivedEvent m_onListInvalidations2015_04_17OutcomeReceived;
    ListStreamingDistributions2015_04_17OutcomeReceivedEvent m_onListStreamingDistributions2015_04_17OutcomeReceived;
    UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceivedEvent m_onUpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeReceived;
    UpdateDistribution2015_04_17OutcomeReceivedEvent m_onUpdateDistribution2015_04_17OutcomeReceived;
    UpdateStreamingDistribution2015_04_17OutcomeReceivedEvent m_onUpdateStreamingDistribution2015_04_17OutcomeReceived;
  };

} // namespace CloudFront
} // namespace Aws
