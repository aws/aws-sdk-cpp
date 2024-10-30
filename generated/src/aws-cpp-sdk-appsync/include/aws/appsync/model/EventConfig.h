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
    AWS_APPSYNC_API EventConfig();
    AWS_APPSYNC_API EventConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API EventConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of authorization providers.</p>
     */
    inline const Aws::Vector<AuthProvider>& GetAuthProviders() const{ return m_authProviders; }
    inline bool AuthProvidersHasBeenSet() const { return m_authProvidersHasBeenSet; }
    inline void SetAuthProviders(const Aws::Vector<AuthProvider>& value) { m_authProvidersHasBeenSet = true; m_authProviders = value; }
    inline void SetAuthProviders(Aws::Vector<AuthProvider>&& value) { m_authProvidersHasBeenSet = true; m_authProviders = std::move(value); }
    inline EventConfig& WithAuthProviders(const Aws::Vector<AuthProvider>& value) { SetAuthProviders(value); return *this;}
    inline EventConfig& WithAuthProviders(Aws::Vector<AuthProvider>&& value) { SetAuthProviders(std::move(value)); return *this;}
    inline EventConfig& AddAuthProviders(const AuthProvider& value) { m_authProvidersHasBeenSet = true; m_authProviders.push_back(value); return *this; }
    inline EventConfig& AddAuthProviders(AuthProvider&& value) { m_authProvidersHasBeenSet = true; m_authProviders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API connections.</p>
     */
    inline const Aws::Vector<AuthMode>& GetConnectionAuthModes() const{ return m_connectionAuthModes; }
    inline bool ConnectionAuthModesHasBeenSet() const { return m_connectionAuthModesHasBeenSet; }
    inline void SetConnectionAuthModes(const Aws::Vector<AuthMode>& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes = value; }
    inline void SetConnectionAuthModes(Aws::Vector<AuthMode>&& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes = std::move(value); }
    inline EventConfig& WithConnectionAuthModes(const Aws::Vector<AuthMode>& value) { SetConnectionAuthModes(value); return *this;}
    inline EventConfig& WithConnectionAuthModes(Aws::Vector<AuthMode>&& value) { SetConnectionAuthModes(std::move(value)); return *this;}
    inline EventConfig& AddConnectionAuthModes(const AuthMode& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes.push_back(value); return *this; }
    inline EventConfig& AddConnectionAuthModes(AuthMode&& value) { m_connectionAuthModesHasBeenSet = true; m_connectionAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API publishing.</p>
     */
    inline const Aws::Vector<AuthMode>& GetDefaultPublishAuthModes() const{ return m_defaultPublishAuthModes; }
    inline bool DefaultPublishAuthModesHasBeenSet() const { return m_defaultPublishAuthModesHasBeenSet; }
    inline void SetDefaultPublishAuthModes(const Aws::Vector<AuthMode>& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes = value; }
    inline void SetDefaultPublishAuthModes(Aws::Vector<AuthMode>&& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes = std::move(value); }
    inline EventConfig& WithDefaultPublishAuthModes(const Aws::Vector<AuthMode>& value) { SetDefaultPublishAuthModes(value); return *this;}
    inline EventConfig& WithDefaultPublishAuthModes(Aws::Vector<AuthMode>&& value) { SetDefaultPublishAuthModes(std::move(value)); return *this;}
    inline EventConfig& AddDefaultPublishAuthModes(const AuthMode& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes.push_back(value); return *this; }
    inline EventConfig& AddDefaultPublishAuthModes(AuthMode&& value) { m_defaultPublishAuthModesHasBeenSet = true; m_defaultPublishAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of valid authorization modes for the Event API subscriptions.</p>
     */
    inline const Aws::Vector<AuthMode>& GetDefaultSubscribeAuthModes() const{ return m_defaultSubscribeAuthModes; }
    inline bool DefaultSubscribeAuthModesHasBeenSet() const { return m_defaultSubscribeAuthModesHasBeenSet; }
    inline void SetDefaultSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes = value; }
    inline void SetDefaultSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes = std::move(value); }
    inline EventConfig& WithDefaultSubscribeAuthModes(const Aws::Vector<AuthMode>& value) { SetDefaultSubscribeAuthModes(value); return *this;}
    inline EventConfig& WithDefaultSubscribeAuthModes(Aws::Vector<AuthMode>&& value) { SetDefaultSubscribeAuthModes(std::move(value)); return *this;}
    inline EventConfig& AddDefaultSubscribeAuthModes(const AuthMode& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes.push_back(value); return *this; }
    inline EventConfig& AddDefaultSubscribeAuthModes(AuthMode&& value) { m_defaultSubscribeAuthModesHasBeenSet = true; m_defaultSubscribeAuthModes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CloudWatch Logs configuration for the Event API.</p>
     */
    inline const EventLogConfig& GetLogConfig() const{ return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    inline void SetLogConfig(const EventLogConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }
    inline void SetLogConfig(EventLogConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }
    inline EventConfig& WithLogConfig(const EventLogConfig& value) { SetLogConfig(value); return *this;}
    inline EventConfig& WithLogConfig(EventLogConfig&& value) { SetLogConfig(std::move(value)); return *this;}
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
