/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appconfigdata/AppConfigDataServiceClientModel.h>

namespace Aws
{
namespace AppConfigData
{
  /**
   * <p>AppConfig Data provides the data plane APIs your application uses to retrieve
   * configuration data. Here's how it works:</p> <p>Your application retrieves
   * configuration data by first establishing a configuration session using the
   * AppConfig Data <a>StartConfigurationSession</a> API action. Your session's
   * client then makes periodic calls to <a>GetLatestConfiguration</a> to check for
   * and retrieve the latest data available.</p> <p>When calling
   * <code>StartConfigurationSession</code>, your code sends the following
   * information:</p> <ul> <li> <p>Identifiers (ID or name) of an AppConfig
   * application, environment, and configuration profile that the session tracks.</p>
   * </li> <li> <p>(Optional) The minimum amount of time the session's client must
   * wait between calls to <code>GetLatestConfiguration</code>.</p> </li> </ul> <p>In
   * response, AppConfig provides an <code>InitialConfigurationToken</code> to be
   * given to the session's client and used the first time it calls
   * <code>GetLatestConfiguration</code> for that session.</p> <p>When calling
   * <code>GetLatestConfiguration</code>, your client code sends the most recent
   * <code>ConfigurationToken</code> value it has and receives in response:</p> <ul>
   * <li> <p> <code>NextPollConfigurationToken</code>: the
   * <code>ConfigurationToken</code> value to use on the next call to
   * <code>GetLatestConfiguration</code>.</p> </li> <li> <p>
   * <code>NextPollIntervalInSeconds</code>: the duration the client should wait
   * before making its next call to <code>GetLatestConfiguration</code>. This
   * duration may vary over the course of the session, so it should be used instead
   * of the value sent on the <code>StartConfigurationSession</code> call.</p> </li>
   * <li> <p>The configuration: the latest data intended for the session. This may be
   * empty if the client already has the latest version of the configuration.</p>
   * </li> </ul> <p>For more information and to view example CLI commands that show
   * how to retrieve a configuration using the AppConfig Data
   * <code>StartConfigurationSession</code> and <code>GetLatestConfiguration</code>
   * API actions, see <a
   * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving
   * the configuration</a> in the <i>AppConfig User Guide</i>.</p>
   */
  class AWS_APPCONFIGDATA_API AppConfigDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppConfigDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::AppConfigData::AppConfigDataClientConfiguration& clientConfiguration = Aws::AppConfigData::AppConfigDataClientConfiguration(),
                            std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider = Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider = Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG),
                            const Aws::AppConfigData::AppConfigDataClientConfiguration& clientConfiguration = Aws::AppConfigData::AppConfigDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider = Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG),
                            const Aws::AppConfigData::AppConfigDataClientConfiguration& clientConfiguration = Aws::AppConfigData::AppConfigDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigDataClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppConfigDataClient();

        /**
         * <p>Retrieves the latest deployed configuration. This API may return empty
         * configuration data if the client already has the latest version. For more
         * information about this API action and to view example CLI commands that show how
         * to use it with the <a>StartConfigurationSession</a> API action, see <a
         * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving
         * the configuration</a> in the <i>AppConfig User Guide</i>. </p> 
         * <p>Note the following important information.</p> <ul> <li> <p>Each configuration
         * token is only valid for one call to <code>GetLatestConfiguration</code>. The
         * <code>GetLatestConfiguration</code> response includes a
         * <code>NextPollConfigurationToken</code> that should always replace the token
         * used for the just-completed call in preparation for the next one. </p> </li>
         * <li> <p> <code>GetLatestConfiguration</code> is a priced call. For more
         * information, see <a
         * href="https://aws.amazon.com/systems-manager/pricing/">Pricing</a>.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/GetLatestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLatestConfigurationOutcome GetLatestConfiguration(const Model::GetLatestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLatestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLatestConfigurationOutcomeCallable GetLatestConfigurationCallable(const Model::GetLatestConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLatestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLatestConfigurationAsync(const Model::GetLatestConfigurationRequest& request, const GetLatestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a configuration session used to retrieve a deployed configuration. For
         * more information about this API action and to view example CLI commands that
         * show how to use it with the <a>GetLatestConfiguration</a> API action, see <a
         * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving
         * the configuration</a> in the <i>AppConfig User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/StartConfigurationSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationSessionOutcome StartConfigurationSession(const Model::StartConfigurationSessionRequest& request) const;

        /**
         * A Callable wrapper for StartConfigurationSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConfigurationSessionOutcomeCallable StartConfigurationSessionCallable(const Model::StartConfigurationSessionRequest& request) const;

        /**
         * An Async wrapper for StartConfigurationSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConfigurationSessionAsync(const Model::StartConfigurationSessionRequest& request, const StartConfigurationSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppConfigDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppConfigDataClient>;
      void init(const AppConfigDataClientConfiguration& clientConfiguration);

      AppConfigDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppConfigDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppConfigData
} // namespace Aws
