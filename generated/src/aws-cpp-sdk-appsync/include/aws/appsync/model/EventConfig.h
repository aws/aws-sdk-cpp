/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/EventLogConfig.h>
#include <aws/appsync/model/AuthProvider.h>
#include <aws/appsync/model/AuthMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes the authorization configuration for connections, message
   * publishing, message subscriptions, and logging for an Event API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/EventConfig">AWS
   * API Reference</a></p>
   */
  class EventConfig
  {
  public:
    AWS_APPSYNC_API EventConfig() = default;
    AWS_APPSYNC_API EventConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EventConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of authorization providers.</p>
     */
    inline const Aws::Vector<AuthProvider>& GetAuthProviders() const { return m_authProviders; }
    inline bool AuthProvidersHasBeenSet() const { return m_authProvidersHasBeenSet; }
    template<typename AuthProvidersT = Aws::Vector<AuthProvider>>
    void SetAuthProviders(AuthProvidersT&& value) { m_authProvidersHasBeenSet = true; m_authProviders = std::forward<AuthProvidersT>(value); }
    template<typename AuthProvidersT = Aws::Vector<AuthProvider>>
    EventConfig& WithAuthProviders(AuthProvidersT&& value) { SetAuthProviders(std::forward<AuthProvidersT>(value)); return *this;}
    template<typename AuthProvidersT = AuthProvider>
    EventConfig& AddAuthProviders(AuthProvidersT&& value) { m_authProvidersHasBeenSet = true; m_authProviders.emplace_back(std::forward<AuthProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API connections.</p>
     */
    inline const Aws::Vector<AuthMode>& GetConnectionAuthModes() const { return m_connectionAuthModes; }
    inline bool ConnectionAuthModesHasBeenSet() const { return m_connectionAuthModesHasBeenSet; }
    template<typename ConnectionAuthModesT = Aws::Vector<AuthMode>>
    void SetConnectionAuthModes(ConnectionAuthModesT&& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes = std::forward<ConnectionAuthModesT>(value); }
    template<typename ConnectionAuthModesT = Aws::Vector<AuthMode>>
    EventConfig& WithConnectionAuthModes(ConnectionAuthModesT&& value) { SetConnectionAuthModes(std::forward<ConnectionAuthModesT>(value)); return *this;}
    template<typename ConnectionAuthModesT = AuthMode>
    EventConfig& AddConnectionAuthModes(ConnectionAuthModesT&& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes.emplace_back(std::forward<ConnectionAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API publishing.</p>
     */
    inline const Aws::Vector<AuthMode>& GetDefaultPublishAuthModes() const { return m_defaultPublishAuthModes; }
    inline bool DefaultPublishAuthModesHasBeenSet() const { return m_defaultPublishAuthModesHasBeenSet; }
    template<typename DefaultPublishAuthModesT = Aws::Vector<AuthMode>>
    void SetDefaultPublishAuthModes(DefaultPublishAuthModesT&& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes = std::forward<DefaultPublishAuthModesT>(value); }
    template<typename DefaultPublishAuthModesT = Aws::Vector<AuthMode>>
    EventConfig& WithDefaultPublishAuthModes(DefaultPublishAuthModesT&& value) { SetDefaultPublishAuthModes(std::forward<DefaultPublishAuthModesT>(value)); return *this;}
    template<typename DefaultPublishAuthModesT = AuthMode>
    EventConfig& AddDefaultPublishAuthModes(DefaultPublishAuthModesT&& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes.emplace_back(std::forward<DefaultPublishAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API subscriptions.</p>
     */
    inline const Aws::Vector<AuthMode>& GetDefaultSubscribeAuthModes() const { return m_defaultSubscribeAuthModes; }
    inline bool DefaultSubscribeAuthModesHasBeenSet() const { return m_defaultSubscribeAuthModesHasBeenSet; }
    template<typename DefaultSubscribeAuthModesT = Aws::Vector<AuthMode>>
    void SetDefaultSubscribeAuthModes(DefaultSubscribeAuthModesT&& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes = std::forward<DefaultSubscribeAuthModesT>(value); }
    template<typename DefaultSubscribeAuthModesT = Aws::Vector<AuthMode>>
    EventConfig& WithDefaultSubscribeAuthModes(DefaultSubscribeAuthModesT&& value) { SetDefaultSubscribeAuthModes(std::forward<DefaultSubscribeAuthModesT>(value)); return *this;}
    template<typename DefaultSubscribeAuthModesT = AuthMode>
    EventConfig& AddDefaultSubscribeAuthModes(DefaultSubscribeAuthModesT&& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes.emplace_back(std::forward<DefaultSubscribeAuthModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CloudWatch Logs configuration for the Event API.</p>
     */
    inline const EventLogConfig& GetLogConfig() const { return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    template<typename LogConfigT = EventLogConfig>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = EventLogConfig>
    EventConfig& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthProvider> m_authProviders;
    bool m_authProvidersHasBeenSet = false;

    Aws::Vector<AuthMode> m_connectionAuthModes;
    bool m_connectionAuthModesHasBeenSet = false;

    Aws::Vector<AuthMode> m_defaultPublishAuthModes;
    bool m_defaultPublishAuthModesHasBeenSet = false;

    Aws::Vector<AuthMode> m_defaultSubscribeAuthModes;
    bool m_defaultSubscribeAuthModesHasBeenSet = false;

    EventLogConfig m_logConfig;
    bool m_logConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
