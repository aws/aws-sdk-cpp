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
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/meteringmarketplace/model/MeterUsageResult.h>
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

namespace MarketplaceMetering
{

namespace Model
{
        class MeterUsageRequest;

        typedef Aws::Utils::Outcome<MeterUsageResult, Aws::Client::AWSError<MarketplaceMeteringErrors>> MeterUsageOutcome;

        typedef std::future<MeterUsageOutcome> MeterUsageOutcomeCallable;
} // namespace Model

  class MarketplaceMeteringClient;

    typedef std::function<void(const MarketplaceMeteringClient*, const Model::MeterUsageRequest&, const Model::MeterUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MeterUsageResponseReceivedHandler;

  /**
   * <fullname>AWS Marketplace Metering Service</fullname> <p>This reference provides
   * descriptions of the low-level AWS Marketplace Metering Service API. </p> <p>AWS
   * Marketplace sellers can use this API to submit usage data for custom usage
   * dimensions.</p> <p><b>Submitting Metering Records</b></p> <ul> <li>
   * <p><i>MeterUsage</i>- Submits the metering record for a Marketplace product.</p>
   * </li> </ul>
   */
  class AWS_MARKETPLACEMETERING_API MarketplaceMeteringClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceMeteringClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~MarketplaceMeteringClient();

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID. </p>
         */
        virtual Model::MeterUsageOutcome MeterUsage(const Model::MeterUsageRequest& request) const;

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MeterUsageOutcomeCallable MeterUsageCallable(const Model::MeterUsageRequest& request) const;

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent.
         * It simply returns the metering record ID. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MeterUsageAsync(const Model::MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void MeterUsageAsyncHelper(const Model::MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceMetering
} // namespace Aws
