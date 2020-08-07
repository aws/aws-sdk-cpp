/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/honeycode/model/GetScreenDataResult.h>
#include <aws/honeycode/model/InvokeScreenAutomationResult.h>
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

namespace Honeycode
{

namespace Model
{
        class GetScreenDataRequest;
        class InvokeScreenAutomationRequest;

        typedef Aws::Utils::Outcome<GetScreenDataResult, HoneycodeError> GetScreenDataOutcome;
        typedef Aws::Utils::Outcome<InvokeScreenAutomationResult, HoneycodeError> InvokeScreenAutomationOutcome;

        typedef std::future<GetScreenDataOutcome> GetScreenDataOutcomeCallable;
        typedef std::future<InvokeScreenAutomationOutcome> InvokeScreenAutomationOutcomeCallable;
} // namespace Model

  class HoneycodeClient;

    typedef std::function<void(const HoneycodeClient*, const Model::GetScreenDataRequest&, const Model::GetScreenDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScreenDataResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::InvokeScreenAutomationRequest&, const Model::InvokeScreenAutomationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeScreenAutomationResponseReceivedHandler;

  /**
   * <p> Amazon Honeycode is a fully managed service that allows you to quickly build
   * mobile and web apps for teams—without programming. Build Honeycode apps for
   * managing almost anything, like projects, customers, operations, approvals,
   * resources, and even your team. </p>
   */
  class AWS_HONEYCODE_API HoneycodeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HoneycodeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HoneycodeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~HoneycodeClient();


        /**
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScreenDataOutcome GetScreenData(const Model::GetScreenDataRequest& request) const;

        /**
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScreenDataOutcomeCallable GetScreenDataCallable(const Model::GetScreenDataRequest& request) const;

        /**
         * <p> The GetScreenData API allows retrieval of data from a screen in a Honeycode
         * app. The API allows setting local variables in the screen to filter, sort or
         * otherwise affect what will be displayed on the screen. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/GetScreenData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetScreenDataAsync(const Model::GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeScreenAutomationOutcome InvokeScreenAutomation(const Model::InvokeScreenAutomationRequest& request) const;

        /**
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeScreenAutomationOutcomeCallable InvokeScreenAutomationCallable(const Model::InvokeScreenAutomationRequest& request) const;

        /**
         * <p> The InvokeScreenAutomation API allows invoking an action defined in a screen
         * in a Honeycode app. The API allows setting local variables, which can then be
         * used in the automation being invoked. This allows automating the Honeycode app
         * interactions to write, update or delete data in the workbook. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/InvokeScreenAutomation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeScreenAutomationAsync(const Model::InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetScreenDataAsyncHelper(const Model::GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeScreenAutomationAsyncHelper(const Model::InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Honeycode
} // namespace Aws
