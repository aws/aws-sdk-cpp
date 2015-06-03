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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2014_11_06Result.h>
#include <aws/cloudfront/model/CreateDistribution2014_11_06Result.h>
#include <aws/cloudfront/model/CreateInvalidation2014_11_06Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2014_11_06Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2014_11_06Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2014_11_06Result.h>
#include <aws/cloudfront/model/GetDistribution2014_11_06Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2014_11_06Result.h>
#include <aws/cloudfront/model/GetInvalidation2014_11_06Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2014_11_06Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2014_11_06Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2014_11_06Result.h>
#include <aws/cloudfront/model/ListDistributions2014_11_06Result.h>
#include <aws/cloudfront/model/ListInvalidations2014_11_06Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2014_11_06Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2014_11_06Result.h>
#include <aws/cloudfront/model/UpdateDistribution2014_11_06Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2014_11_06Result.h>
#include <aws/core/NoResult.h>
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
  class CreateCloudFrontOriginAccessIdentity2014_11_06Request;
  class CreateDistribution2014_11_06Request;
  class CreateInvalidation2014_11_06Request;
  class CreateStreamingDistribution2014_11_06Request;
  class DeleteCloudFrontOriginAccessIdentity2014_11_06Request;
  class DeleteDistribution2014_11_06Request;
  class DeleteStreamingDistribution2014_11_06Request;
  class GetCloudFrontOriginAccessIdentity2014_11_06Request;
  class GetCloudFrontOriginAccessIdentityConfig2014_11_06Request;
  class GetDistribution2014_11_06Request;
  class GetDistributionConfig2014_11_06Request;
  class GetInvalidation2014_11_06Request;
  class GetStreamingDistribution2014_11_06Request;
  class GetStreamingDistributionConfig2014_11_06Request;
  class ListCloudFrontOriginAccessIdentities2014_11_06Request;
  class ListDistributions2014_11_06Request;
  class ListInvalidations2014_11_06Request;
  class ListStreamingDistributions2014_11_06Request;
  class UpdateCloudFrontOriginAccessIdentity2014_11_06Request;
  class UpdateDistribution2014_11_06Request;
  class UpdateStreamingDistribution2014_11_06Request;

  typedef Utils::Outcome<CreateCloudFrontOriginAccessIdentity2014_11_06Result, Client::AWSError<CloudFrontErrors>> CreateCloudFrontOriginAccessIdentity2014_11_06Outcome;
  typedef Utils::Outcome<CreateDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> CreateDistribution2014_11_06Outcome;
  typedef Utils::Outcome<CreateInvalidation2014_11_06Result, Client::AWSError<CloudFrontErrors>> CreateInvalidation2014_11_06Outcome;
  typedef Utils::Outcome<CreateStreamingDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> CreateStreamingDistribution2014_11_06Outcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteDistribution2014_11_06Outcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CloudFrontErrors>> DeleteStreamingDistribution2014_11_06Outcome;
  typedef Utils::Outcome<GetCloudFrontOriginAccessIdentity2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentity2014_11_06Outcome;
  typedef Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome;
  typedef Utils::Outcome<GetDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetDistribution2014_11_06Outcome;
  typedef Utils::Outcome<GetDistributionConfig2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetDistributionConfig2014_11_06Outcome;
  typedef Utils::Outcome<GetInvalidation2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetInvalidation2014_11_06Outcome;
  typedef Utils::Outcome<GetStreamingDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetStreamingDistribution2014_11_06Outcome;
  typedef Utils::Outcome<GetStreamingDistributionConfig2014_11_06Result, Client::AWSError<CloudFrontErrors>> GetStreamingDistributionConfig2014_11_06Outcome;
  typedef Utils::Outcome<ListCloudFrontOriginAccessIdentities2014_11_06Result, Client::AWSError<CloudFrontErrors>> ListCloudFrontOriginAccessIdentities2014_11_06Outcome;
  typedef Utils::Outcome<ListDistributions2014_11_06Result, Client::AWSError<CloudFrontErrors>> ListDistributions2014_11_06Outcome;
  typedef Utils::Outcome<ListInvalidations2014_11_06Result, Client::AWSError<CloudFrontErrors>> ListInvalidations2014_11_06Outcome;
  typedef Utils::Outcome<ListStreamingDistributions2014_11_06Result, Client::AWSError<CloudFrontErrors>> ListStreamingDistributions2014_11_06Outcome;
  typedef Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2014_11_06Result, Client::AWSError<CloudFrontErrors>> UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome;
  typedef Utils::Outcome<UpdateDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> UpdateDistribution2014_11_06Outcome;
  typedef Utils::Outcome<UpdateStreamingDistribution2014_11_06Result, Client::AWSError<CloudFrontErrors>> UpdateStreamingDistribution2014_11_06Outcome;

  typedef std::future<CreateCloudFrontOriginAccessIdentity2014_11_06Outcome> CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable;
  typedef std::future<CreateDistribution2014_11_06Outcome> CreateDistribution2014_11_06OutcomeCallable;
  typedef std::future<CreateInvalidation2014_11_06Outcome> CreateInvalidation2014_11_06OutcomeCallable;
  typedef std::future<CreateStreamingDistribution2014_11_06Outcome> CreateStreamingDistribution2014_11_06OutcomeCallable;
  typedef std::future<DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome> DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable;
  typedef std::future<DeleteDistribution2014_11_06Outcome> DeleteDistribution2014_11_06OutcomeCallable;
  typedef std::future<DeleteStreamingDistribution2014_11_06Outcome> DeleteStreamingDistribution2014_11_06OutcomeCallable;
  typedef std::future<GetCloudFrontOriginAccessIdentity2014_11_06Outcome> GetCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable;
  typedef std::future<GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome> GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeCallable;
  typedef std::future<GetDistribution2014_11_06Outcome> GetDistribution2014_11_06OutcomeCallable;
  typedef std::future<GetDistributionConfig2014_11_06Outcome> GetDistributionConfig2014_11_06OutcomeCallable;
  typedef std::future<GetInvalidation2014_11_06Outcome> GetInvalidation2014_11_06OutcomeCallable;
  typedef std::future<GetStreamingDistribution2014_11_06Outcome> GetStreamingDistribution2014_11_06OutcomeCallable;
  typedef std::future<GetStreamingDistributionConfig2014_11_06Outcome> GetStreamingDistributionConfig2014_11_06OutcomeCallable;
  typedef std::future<ListCloudFrontOriginAccessIdentities2014_11_06Outcome> ListCloudFrontOriginAccessIdentities2014_11_06OutcomeCallable;
  typedef std::future<ListDistributions2014_11_06Outcome> ListDistributions2014_11_06OutcomeCallable;
  typedef std::future<ListInvalidations2014_11_06Outcome> ListInvalidations2014_11_06OutcomeCallable;
  typedef std::future<ListStreamingDistributions2014_11_06Outcome> ListStreamingDistributions2014_11_06OutcomeCallable;
  typedef std::future<UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome> UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable;
  typedef std::future<UpdateDistribution2014_11_06Outcome> UpdateDistribution2014_11_06OutcomeCallable;
  typedef std::future<UpdateStreamingDistribution2014_11_06Outcome> UpdateStreamingDistribution2014_11_06OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Request&, const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Outcome&> CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateDistribution2014_11_06Request&, const Model::CreateDistribution2014_11_06Outcome&> CreateDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateInvalidation2014_11_06Request&, const Model::CreateInvalidation2014_11_06Outcome&> CreateInvalidation2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::CreateStreamingDistribution2014_11_06Request&, const Model::CreateStreamingDistribution2014_11_06Outcome&> CreateStreamingDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Request&, const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome&> DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteDistribution2014_11_06Request&, const Model::DeleteDistribution2014_11_06Outcome&> DeleteDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::DeleteStreamingDistribution2014_11_06Request&, const Model::DeleteStreamingDistribution2014_11_06Outcome&> DeleteStreamingDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetCloudFrontOriginAccessIdentity2014_11_06Request&, const Model::GetCloudFrontOriginAccessIdentity2014_11_06Outcome&> GetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome&> GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetDistribution2014_11_06Request&, const Model::GetDistribution2014_11_06Outcome&> GetDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetDistributionConfig2014_11_06Request&, const Model::GetDistributionConfig2014_11_06Outcome&> GetDistributionConfig2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetInvalidation2014_11_06Request&, const Model::GetInvalidation2014_11_06Outcome&> GetInvalidation2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetStreamingDistribution2014_11_06Request&, const Model::GetStreamingDistribution2014_11_06Outcome&> GetStreamingDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::GetStreamingDistributionConfig2014_11_06Request&, const Model::GetStreamingDistributionConfig2014_11_06Outcome&> GetStreamingDistributionConfig2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListCloudFrontOriginAccessIdentities2014_11_06Request&, const Model::ListCloudFrontOriginAccessIdentities2014_11_06Outcome&> ListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListDistributions2014_11_06Request&, const Model::ListDistributions2014_11_06Outcome&> ListDistributions2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListInvalidations2014_11_06Request&, const Model::ListInvalidations2014_11_06Outcome&> ListInvalidations2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::ListStreamingDistributions2014_11_06Request&, const Model::ListStreamingDistributions2014_11_06Outcome&> ListStreamingDistributions2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Request&, const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome&> UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateDistribution2014_11_06Request&, const Model::UpdateDistribution2014_11_06Outcome&> UpdateDistribution2014_11_06OutcomeReceivedEvent;
  typedef Aws::Utils::Event<CloudFrontClient, const Model::UpdateStreamingDistribution2014_11_06Request&, const Model::UpdateStreamingDistribution2014_11_06Outcome&> UpdateStreamingDistribution2014_11_06OutcomeReceivedEvent;

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
     Model::CreateCloudFrontOriginAccessIdentity2014_11_06Outcome CreateCloudFrontOriginAccessIdentity2014_11_06(const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Create a new origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable CreateCloudFrontOriginAccessIdentity2014_11_06Callable(const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Create a new origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateCloudFrontOriginAccessIdentity2014_11_06Async(const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Create a new distribution.
     */
     Model::CreateDistribution2014_11_06Outcome CreateDistribution2014_11_06(const Model::CreateDistribution2014_11_06Request& request) const;

     /*
       Create a new distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDistribution2014_11_06OutcomeCallable CreateDistribution2014_11_06Callable(const Model::CreateDistribution2014_11_06Request& request) const;

     /*
       Create a new distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDistribution2014_11_06Async(const Model::CreateDistribution2014_11_06Request& request) const;

     /*
       Create a new invalidation.
     */
     Model::CreateInvalidation2014_11_06Outcome CreateInvalidation2014_11_06(const Model::CreateInvalidation2014_11_06Request& request) const;

     /*
       Create a new invalidation.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateInvalidation2014_11_06OutcomeCallable CreateInvalidation2014_11_06Callable(const Model::CreateInvalidation2014_11_06Request& request) const;

     /*
       Create a new invalidation.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateInvalidation2014_11_06Async(const Model::CreateInvalidation2014_11_06Request& request) const;

     /*
       Create a new streaming distribution.
     */
     Model::CreateStreamingDistribution2014_11_06Outcome CreateStreamingDistribution2014_11_06(const Model::CreateStreamingDistribution2014_11_06Request& request) const;

     /*
       Create a new streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateStreamingDistribution2014_11_06OutcomeCallable CreateStreamingDistribution2014_11_06Callable(const Model::CreateStreamingDistribution2014_11_06Request& request) const;

     /*
       Create a new streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateStreamingDistribution2014_11_06Async(const Model::CreateStreamingDistribution2014_11_06Request& request) const;

     /*
       Delete an origin access identity.
     */
     Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome DeleteCloudFrontOriginAccessIdentity2014_11_06(const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Delete an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable DeleteCloudFrontOriginAccessIdentity2014_11_06Callable(const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Delete an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteCloudFrontOriginAccessIdentity2014_11_06Async(const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Delete a distribution.
     */
     Model::DeleteDistribution2014_11_06Outcome DeleteDistribution2014_11_06(const Model::DeleteDistribution2014_11_06Request& request) const;

     /*
       Delete a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteDistribution2014_11_06OutcomeCallable DeleteDistribution2014_11_06Callable(const Model::DeleteDistribution2014_11_06Request& request) const;

     /*
       Delete a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteDistribution2014_11_06Async(const Model::DeleteDistribution2014_11_06Request& request) const;

     /*
       Delete a streaming distribution.
     */
     Model::DeleteStreamingDistribution2014_11_06Outcome DeleteStreamingDistribution2014_11_06(const Model::DeleteStreamingDistribution2014_11_06Request& request) const;

     /*
       Delete a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteStreamingDistribution2014_11_06OutcomeCallable DeleteStreamingDistribution2014_11_06Callable(const Model::DeleteStreamingDistribution2014_11_06Request& request) const;

     /*
       Delete a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteStreamingDistribution2014_11_06Async(const Model::DeleteStreamingDistribution2014_11_06Request& request) const;

     /*
       Get the information about an origin access identity.
     */
     Model::GetCloudFrontOriginAccessIdentity2014_11_06Outcome GetCloudFrontOriginAccessIdentity2014_11_06(const Model::GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Get the information about an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable GetCloudFrontOriginAccessIdentity2014_11_06Callable(const Model::GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Get the information about an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCloudFrontOriginAccessIdentity2014_11_06Async(const Model::GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Get the configuration information about an origin access identity.
     */
     Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome GetCloudFrontOriginAccessIdentityConfig2014_11_06(const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2014_11_06Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCloudFrontOriginAccessIdentityConfig2014_11_06Async(const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const;

     /*
       Get the information about a distribution.
     */
     Model::GetDistribution2014_11_06Outcome GetDistribution2014_11_06(const Model::GetDistribution2014_11_06Request& request) const;

     /*
       Get the information about a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDistribution2014_11_06OutcomeCallable GetDistribution2014_11_06Callable(const Model::GetDistribution2014_11_06Request& request) const;

     /*
       Get the information about a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDistribution2014_11_06Async(const Model::GetDistribution2014_11_06Request& request) const;

     /*
       Get the configuration information about a distribution.
     */
     Model::GetDistributionConfig2014_11_06Outcome GetDistributionConfig2014_11_06(const Model::GetDistributionConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetDistributionConfig2014_11_06OutcomeCallable GetDistributionConfig2014_11_06Callable(const Model::GetDistributionConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetDistributionConfig2014_11_06Async(const Model::GetDistributionConfig2014_11_06Request& request) const;

     /*
       Get the information about an invalidation.
     */
     Model::GetInvalidation2014_11_06Outcome GetInvalidation2014_11_06(const Model::GetInvalidation2014_11_06Request& request) const;

     /*
       Get the information about an invalidation.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetInvalidation2014_11_06OutcomeCallable GetInvalidation2014_11_06Callable(const Model::GetInvalidation2014_11_06Request& request) const;

     /*
       Get the information about an invalidation.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetInvalidation2014_11_06Async(const Model::GetInvalidation2014_11_06Request& request) const;

     /*
       Get the information about a streaming distribution.
     */
     Model::GetStreamingDistribution2014_11_06Outcome GetStreamingDistribution2014_11_06(const Model::GetStreamingDistribution2014_11_06Request& request) const;

     /*
       Get the information about a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetStreamingDistribution2014_11_06OutcomeCallable GetStreamingDistribution2014_11_06Callable(const Model::GetStreamingDistribution2014_11_06Request& request) const;

     /*
       Get the information about a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetStreamingDistribution2014_11_06Async(const Model::GetStreamingDistribution2014_11_06Request& request) const;

     /*
       Get the configuration information about a streaming distribution.
     */
     Model::GetStreamingDistributionConfig2014_11_06Outcome GetStreamingDistributionConfig2014_11_06(const Model::GetStreamingDistributionConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetStreamingDistributionConfig2014_11_06OutcomeCallable GetStreamingDistributionConfig2014_11_06Callable(const Model::GetStreamingDistributionConfig2014_11_06Request& request) const;

     /*
       Get the configuration information about a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetStreamingDistributionConfig2014_11_06Async(const Model::GetStreamingDistributionConfig2014_11_06Request& request) const;

     /*
       List origin access identities.
     */
     Model::ListCloudFrontOriginAccessIdentities2014_11_06Outcome ListCloudFrontOriginAccessIdentities2014_11_06(const Model::ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const;

     /*
       List origin access identities.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListCloudFrontOriginAccessIdentities2014_11_06OutcomeCallable ListCloudFrontOriginAccessIdentities2014_11_06Callable(const Model::ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const;

     /*
       List origin access identities.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListCloudFrontOriginAccessIdentities2014_11_06Async(const Model::ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const;

     /*
       List distributions.
     */
     Model::ListDistributions2014_11_06Outcome ListDistributions2014_11_06(const Model::ListDistributions2014_11_06Request& request) const;

     /*
       List distributions.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListDistributions2014_11_06OutcomeCallable ListDistributions2014_11_06Callable(const Model::ListDistributions2014_11_06Request& request) const;

     /*
       List distributions.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListDistributions2014_11_06Async(const Model::ListDistributions2014_11_06Request& request) const;

     /*
       List invalidation batches.
     */
     Model::ListInvalidations2014_11_06Outcome ListInvalidations2014_11_06(const Model::ListInvalidations2014_11_06Request& request) const;

     /*
       List invalidation batches.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListInvalidations2014_11_06OutcomeCallable ListInvalidations2014_11_06Callable(const Model::ListInvalidations2014_11_06Request& request) const;

     /*
       List invalidation batches.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListInvalidations2014_11_06Async(const Model::ListInvalidations2014_11_06Request& request) const;

     /*
       List streaming distributions.
     */
     Model::ListStreamingDistributions2014_11_06Outcome ListStreamingDistributions2014_11_06(const Model::ListStreamingDistributions2014_11_06Request& request) const;

     /*
       List streaming distributions.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListStreamingDistributions2014_11_06OutcomeCallable ListStreamingDistributions2014_11_06Callable(const Model::ListStreamingDistributions2014_11_06Request& request) const;

     /*
       List streaming distributions.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListStreamingDistributions2014_11_06Async(const Model::ListStreamingDistributions2014_11_06Request& request) const;

     /*
       Update an origin access identity.
     */
     Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome UpdateCloudFrontOriginAccessIdentity2014_11_06(const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Update an origin access identity.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable UpdateCloudFrontOriginAccessIdentity2014_11_06Callable(const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Update an origin access identity.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateCloudFrontOriginAccessIdentity2014_11_06Async(const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;

     /*
       Update a distribution.
     */
     Model::UpdateDistribution2014_11_06Outcome UpdateDistribution2014_11_06(const Model::UpdateDistribution2014_11_06Request& request) const;

     /*
       Update a distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateDistribution2014_11_06OutcomeCallable UpdateDistribution2014_11_06Callable(const Model::UpdateDistribution2014_11_06Request& request) const;

     /*
       Update a distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateDistribution2014_11_06Async(const Model::UpdateDistribution2014_11_06Request& request) const;

     /*
       Update a streaming distribution.
     */
     Model::UpdateStreamingDistribution2014_11_06Outcome UpdateStreamingDistribution2014_11_06(const Model::UpdateStreamingDistribution2014_11_06Request& request) const;

     /*
       Update a streaming distribution.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateStreamingDistribution2014_11_06OutcomeCallable UpdateStreamingDistribution2014_11_06Callable(const Model::UpdateStreamingDistribution2014_11_06Request& request) const;

     /*
       Update a streaming distribution.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateStreamingDistribution2014_11_06Async(const Model::UpdateStreamingDistribution2014_11_06Request& request) const;

   /**
    * Adds an event handler for CreateCloudFrontOriginAccessIdentity2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use CreateCloudFrontOriginAccessIdentity2014_11_06Async.
    */
    inline void RegisterCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandler(const CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateCloudFrontOriginAccessIdentity2014_11_06.
    */
    inline void ClearAllCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandlers()
    {
      m_onCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use CreateDistribution2014_11_06Async.
    */
    inline void RegisterCreateDistribution2014_11_06OutcomeReceivedHandler(const CreateDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDistribution2014_11_06.
    */
    inline void ClearAllCreateDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onCreateDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateInvalidation2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use CreateInvalidation2014_11_06Async.
    */
    inline void RegisterCreateInvalidation2014_11_06OutcomeReceivedHandler(const CreateInvalidation2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateInvalidation2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateInvalidation2014_11_06.
    */
    inline void ClearAllCreateInvalidation2014_11_06OutcomeReceivedHandlers()
    {
      m_onCreateInvalidation2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateStreamingDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use CreateStreamingDistribution2014_11_06Async.
    */
    inline void RegisterCreateStreamingDistribution2014_11_06OutcomeReceivedHandler(const CreateStreamingDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateStreamingDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateStreamingDistribution2014_11_06.
    */
    inline void ClearAllCreateStreamingDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onCreateStreamingDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteCloudFrontOriginAccessIdentity2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use DeleteCloudFrontOriginAccessIdentity2014_11_06Async.
    */
    inline void RegisterDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandler(const DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteCloudFrontOriginAccessIdentity2014_11_06.
    */
    inline void ClearAllDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandlers()
    {
      m_onDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use DeleteDistribution2014_11_06Async.
    */
    inline void RegisterDeleteDistribution2014_11_06OutcomeReceivedHandler(const DeleteDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteDistribution2014_11_06.
    */
    inline void ClearAllDeleteDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onDeleteDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteStreamingDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use DeleteStreamingDistribution2014_11_06Async.
    */
    inline void RegisterDeleteStreamingDistribution2014_11_06OutcomeReceivedHandler(const DeleteStreamingDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteStreamingDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteStreamingDistribution2014_11_06.
    */
    inline void ClearAllDeleteStreamingDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onDeleteStreamingDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCloudFrontOriginAccessIdentity2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetCloudFrontOriginAccessIdentity2014_11_06Async.
    */
    inline void RegisterGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandler(const GetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCloudFrontOriginAccessIdentity2014_11_06.
    */
    inline void ClearAllGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCloudFrontOriginAccessIdentityConfig2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetCloudFrontOriginAccessIdentityConfig2014_11_06Async.
    */
    inline void RegisterGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceivedHandler(const GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCloudFrontOriginAccessIdentityConfig2014_11_06.
    */
    inline void ClearAllGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetDistribution2014_11_06Async.
    */
    inline void RegisterGetDistribution2014_11_06OutcomeReceivedHandler(const GetDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDistribution2014_11_06.
    */
    inline void ClearAllGetDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetDistributionConfig2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetDistributionConfig2014_11_06Async.
    */
    inline void RegisterGetDistributionConfig2014_11_06OutcomeReceivedHandler(const GetDistributionConfig2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetDistributionConfig2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetDistributionConfig2014_11_06.
    */
    inline void ClearAllGetDistributionConfig2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetDistributionConfig2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetInvalidation2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetInvalidation2014_11_06Async.
    */
    inline void RegisterGetInvalidation2014_11_06OutcomeReceivedHandler(const GetInvalidation2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetInvalidation2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetInvalidation2014_11_06.
    */
    inline void ClearAllGetInvalidation2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetInvalidation2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetStreamingDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetStreamingDistribution2014_11_06Async.
    */
    inline void RegisterGetStreamingDistribution2014_11_06OutcomeReceivedHandler(const GetStreamingDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetStreamingDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetStreamingDistribution2014_11_06.
    */
    inline void ClearAllGetStreamingDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetStreamingDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetStreamingDistributionConfig2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use GetStreamingDistributionConfig2014_11_06Async.
    */
    inline void RegisterGetStreamingDistributionConfig2014_11_06OutcomeReceivedHandler(const GetStreamingDistributionConfig2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetStreamingDistributionConfig2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetStreamingDistributionConfig2014_11_06.
    */
    inline void ClearAllGetStreamingDistributionConfig2014_11_06OutcomeReceivedHandlers()
    {
      m_onGetStreamingDistributionConfig2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListCloudFrontOriginAccessIdentities2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use ListCloudFrontOriginAccessIdentities2014_11_06Async.
    */
    inline void RegisterListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceivedHandler(const ListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListCloudFrontOriginAccessIdentities2014_11_06.
    */
    inline void ClearAllListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceivedHandlers()
    {
      m_onListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListDistributions2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use ListDistributions2014_11_06Async.
    */
    inline void RegisterListDistributions2014_11_06OutcomeReceivedHandler(const ListDistributions2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListDistributions2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListDistributions2014_11_06.
    */
    inline void ClearAllListDistributions2014_11_06OutcomeReceivedHandlers()
    {
      m_onListDistributions2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListInvalidations2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use ListInvalidations2014_11_06Async.
    */
    inline void RegisterListInvalidations2014_11_06OutcomeReceivedHandler(const ListInvalidations2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListInvalidations2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListInvalidations2014_11_06.
    */
    inline void ClearAllListInvalidations2014_11_06OutcomeReceivedHandlers()
    {
      m_onListInvalidations2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListStreamingDistributions2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use ListStreamingDistributions2014_11_06Async.
    */
    inline void RegisterListStreamingDistributions2014_11_06OutcomeReceivedHandler(const ListStreamingDistributions2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListStreamingDistributions2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListStreamingDistributions2014_11_06.
    */
    inline void ClearAllListStreamingDistributions2014_11_06OutcomeReceivedHandlers()
    {
      m_onListStreamingDistributions2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateCloudFrontOriginAccessIdentity2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use UpdateCloudFrontOriginAccessIdentity2014_11_06Async.
    */
    inline void RegisterUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandler(const UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateCloudFrontOriginAccessIdentity2014_11_06.
    */
    inline void ClearAllUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedHandlers()
    {
      m_onUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use UpdateDistribution2014_11_06Async.
    */
    inline void RegisterUpdateDistribution2014_11_06OutcomeReceivedHandler(const UpdateDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateDistribution2014_11_06.
    */
    inline void ClearAllUpdateDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onUpdateDistribution2014_11_06OutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateStreamingDistribution2014_11_06Async to call upon completion to the handler chain. You need to call this to
    * use UpdateStreamingDistribution2014_11_06Async.
    */
    inline void RegisterUpdateStreamingDistribution2014_11_06OutcomeReceivedHandler(const UpdateStreamingDistribution2014_11_06OutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateStreamingDistribution2014_11_06OutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateStreamingDistribution2014_11_06.
    */
    inline void ClearAllUpdateStreamingDistribution2014_11_06OutcomeReceivedHandlers()
    {
      m_onUpdateStreamingDistribution2014_11_06OutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;
    void CreateDistribution2014_11_06AsyncHelper(const Model::CreateDistribution2014_11_06Request& request) const;
    void CreateInvalidation2014_11_06AsyncHelper(const Model::CreateInvalidation2014_11_06Request& request) const;
    void CreateStreamingDistribution2014_11_06AsyncHelper(const Model::CreateStreamingDistribution2014_11_06Request& request) const;
    void DeleteCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const;
    void DeleteDistribution2014_11_06AsyncHelper(const Model::DeleteDistribution2014_11_06Request& request) const;
    void DeleteStreamingDistribution2014_11_06AsyncHelper(const Model::DeleteStreamingDistribution2014_11_06Request& request) const;
    void GetCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const;
    void GetCloudFrontOriginAccessIdentityConfig2014_11_06AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const;
    void GetDistribution2014_11_06AsyncHelper(const Model::GetDistribution2014_11_06Request& request) const;
    void GetDistributionConfig2014_11_06AsyncHelper(const Model::GetDistributionConfig2014_11_06Request& request) const;
    void GetInvalidation2014_11_06AsyncHelper(const Model::GetInvalidation2014_11_06Request& request) const;
    void GetStreamingDistribution2014_11_06AsyncHelper(const Model::GetStreamingDistribution2014_11_06Request& request) const;
    void GetStreamingDistributionConfig2014_11_06AsyncHelper(const Model::GetStreamingDistributionConfig2014_11_06Request& request) const;
    void ListCloudFrontOriginAccessIdentities2014_11_06AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const;
    void ListDistributions2014_11_06AsyncHelper(const Model::ListDistributions2014_11_06Request& request) const;
    void ListInvalidations2014_11_06AsyncHelper(const Model::ListInvalidations2014_11_06Request& request) const;
    void ListStreamingDistributions2014_11_06AsyncHelper(const Model::ListStreamingDistributions2014_11_06Request& request) const;
    void UpdateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const;
    void UpdateDistribution2014_11_06AsyncHelper(const Model::UpdateDistribution2014_11_06Request& request) const;
    void UpdateStreamingDistribution2014_11_06AsyncHelper(const Model::UpdateStreamingDistribution2014_11_06Request& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent m_onCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived;
    CreateDistribution2014_11_06OutcomeReceivedEvent m_onCreateDistribution2014_11_06OutcomeReceived;
    CreateInvalidation2014_11_06OutcomeReceivedEvent m_onCreateInvalidation2014_11_06OutcomeReceived;
    CreateStreamingDistribution2014_11_06OutcomeReceivedEvent m_onCreateStreamingDistribution2014_11_06OutcomeReceived;
    DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent m_onDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived;
    DeleteDistribution2014_11_06OutcomeReceivedEvent m_onDeleteDistribution2014_11_06OutcomeReceived;
    DeleteStreamingDistribution2014_11_06OutcomeReceivedEvent m_onDeleteStreamingDistribution2014_11_06OutcomeReceived;
    GetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent m_onGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived;
    GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceivedEvent m_onGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceived;
    GetDistribution2014_11_06OutcomeReceivedEvent m_onGetDistribution2014_11_06OutcomeReceived;
    GetDistributionConfig2014_11_06OutcomeReceivedEvent m_onGetDistributionConfig2014_11_06OutcomeReceived;
    GetInvalidation2014_11_06OutcomeReceivedEvent m_onGetInvalidation2014_11_06OutcomeReceived;
    GetStreamingDistribution2014_11_06OutcomeReceivedEvent m_onGetStreamingDistribution2014_11_06OutcomeReceived;
    GetStreamingDistributionConfig2014_11_06OutcomeReceivedEvent m_onGetStreamingDistributionConfig2014_11_06OutcomeReceived;
    ListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceivedEvent m_onListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceived;
    ListDistributions2014_11_06OutcomeReceivedEvent m_onListDistributions2014_11_06OutcomeReceived;
    ListInvalidations2014_11_06OutcomeReceivedEvent m_onListInvalidations2014_11_06OutcomeReceived;
    ListStreamingDistributions2014_11_06OutcomeReceivedEvent m_onListStreamingDistributions2014_11_06OutcomeReceived;
    UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceivedEvent m_onUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived;
    UpdateDistribution2014_11_06OutcomeReceivedEvent m_onUpdateDistribution2014_11_06OutcomeReceived;
    UpdateStreamingDistribution2014_11_06OutcomeReceivedEvent m_onUpdateStreamingDistribution2014_11_06OutcomeReceived;
  };

} // namespace CloudFront
} // namespace Aws
