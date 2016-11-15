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
#include <aws/mobileanalytics/MobileAnalytics_EXPORTS.h>
#include <aws/mobileanalytics/MobileAnalyticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace MobileAnalytics
{

namespace Model
{
        class PutEventsRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<MobileAnalyticsErrors>> PutEventsOutcome;

        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
} // namespace Model

  class MobileAnalyticsClient;

    typedef std::function<void(const MobileAnalyticsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;

  /**
   * <p>Amazon Mobile Analytics is a service for collecting, visualizing, and
   * understanding app usage data at scale.</p>
   */
  class AWS_MOBILEANALYTICS_API MobileAnalyticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileAnalyticsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileAnalyticsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileAnalyticsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~MobileAnalyticsClient();

        /**
         * <p>The PutEvents operation records one or more events. You can have up to 1,500
         * unique custom events per app, any combination of up to 40 attributes and metrics
         * per custom event, and any number of attribute or metric values.</p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>The PutEvents operation records one or more events. You can have up to 1,500
         * unique custom events per app, any combination of up to 40 attributes and metrics
         * per custom event, and any number of attribute or metric values.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>The PutEvents operation records one or more events. You can have up to 1,500
         * unique custom events per app, any combination of up to 40 attributes and metrics
         * per custom event, and any number of attribute or metric values.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace MobileAnalytics
} // namespace Aws
