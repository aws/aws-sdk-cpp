/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/AppConfigDataErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appconfigdata/model/GetLatestConfigurationResult.h>
#include <aws/appconfigdata/model/StartConfigurationSessionResult.h>
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

namespace AppConfigData
{

namespace Model
{
        class GetLatestConfigurationRequest;
        class StartConfigurationSessionRequest;

        typedef Aws::Utils::Outcome<GetLatestConfigurationResult, AppConfigDataError> GetLatestConfigurationOutcome;
        typedef Aws::Utils::Outcome<StartConfigurationSessionResult, AppConfigDataError> StartConfigurationSessionOutcome;

        typedef std::future<GetLatestConfigurationOutcome> GetLatestConfigurationOutcomeCallable;
        typedef std::future<StartConfigurationSessionOutcome> StartConfigurationSessionOutcomeCallable;
} // namespace Model

  class AppConfigDataClient;

    typedef std::function<void(const AppConfigDataClient*, const Model::GetLatestConfigurationRequest&, Model::GetLatestConfigurationOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLatestConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppConfigDataClient*, const Model::StartConfigurationSessionRequest&, const Model::StartConfigurationSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConfigurationSessionResponseReceivedHandler;

  /**
   * <p>Use the AppConfigData API, a capability of AWS AppConfig, to retrieve
   * deployed configuration.</p>
   */
  class AWS_APPCONFIGDATA_API AppConfigDataClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppConfigDataClient();


        /**
         * <p>Retrieves the latest deployed configuration. This API may return empty
         * Configuration data if the client already has the latest version. See
         * StartConfigurationSession to obtain an InitialConfigurationToken to call this
         * API.</p>  <p>Each call to GetLatestConfiguration returns a new
         * ConfigurationToken (NextPollConfigurationToken in the response). This new token
         * MUST be provided to the next call to GetLatestConfiguration when polling for
         * configuration updates.</p> <p>To avoid excess charges, we recommend that you
         * include the <code>ClientConfigurationVersion</code> value with every call to
         * <code>GetConfiguration</code>. This value must be saved on your client.
         * Subsequent calls to <code>GetConfiguration</code> must pass this value by using
         * the <code>ClientConfigurationVersion</code> parameter. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/GetLatestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLatestConfigurationOutcome GetLatestConfiguration(const Model::GetLatestConfigurationRequest& request) const;

        /**
         * <p>Retrieves the latest deployed configuration. This API may return empty
         * Configuration data if the client already has the latest version. See
         * StartConfigurationSession to obtain an InitialConfigurationToken to call this
         * API.</p>  <p>Each call to GetLatestConfiguration returns a new
         * ConfigurationToken (NextPollConfigurationToken in the response). This new token
         * MUST be provided to the next call to GetLatestConfiguration when polling for
         * configuration updates.</p> <p>To avoid excess charges, we recommend that you
         * include the <code>ClientConfigurationVersion</code> value with every call to
         * <code>GetConfiguration</code>. This value must be saved on your client.
         * Subsequent calls to <code>GetConfiguration</code> must pass this value by using
         * the <code>ClientConfigurationVersion</code> parameter. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/GetLatestConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLatestConfigurationOutcomeCallable GetLatestConfigurationCallable(const Model::GetLatestConfigurationRequest& request) const;

        /**
         * <p>Retrieves the latest deployed configuration. This API may return empty
         * Configuration data if the client already has the latest version. See
         * StartConfigurationSession to obtain an InitialConfigurationToken to call this
         * API.</p>  <p>Each call to GetLatestConfiguration returns a new
         * ConfigurationToken (NextPollConfigurationToken in the response). This new token
         * MUST be provided to the next call to GetLatestConfiguration when polling for
         * configuration updates.</p> <p>To avoid excess charges, we recommend that you
         * include the <code>ClientConfigurationVersion</code> value with every call to
         * <code>GetConfiguration</code>. This value must be saved on your client.
         * Subsequent calls to <code>GetConfiguration</code> must pass this value by using
         * the <code>ClientConfigurationVersion</code> parameter. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/GetLatestConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLatestConfigurationAsync(const Model::GetLatestConfigurationRequest& request, const GetLatestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a configuration session used to retrieve a deployed configuration. See
         * the GetLatestConfiguration API for more details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/StartConfigurationSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationSessionOutcome StartConfigurationSession(const Model::StartConfigurationSessionRequest& request) const;

        /**
         * <p>Starts a configuration session used to retrieve a deployed configuration. See
         * the GetLatestConfiguration API for more details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/StartConfigurationSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigurationSessionOutcomeCallable StartConfigurationSessionCallable(const Model::StartConfigurationSessionRequest& request) const;

        /**
         * <p>Starts a configuration session used to retrieve a deployed configuration. See
         * the GetLatestConfiguration API for more details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/StartConfigurationSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigurationSessionAsync(const Model::StartConfigurationSessionRequest& request, const StartConfigurationSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetLatestConfigurationAsyncHelper(const Model::GetLatestConfigurationRequest& request, const GetLatestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartConfigurationSessionAsyncHelper(const Model::StartConfigurationSessionRequest& request, const StartConfigurationSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppConfigData
} // namespace Aws
