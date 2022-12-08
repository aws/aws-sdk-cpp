/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/AppConfigDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppConfigData
{
namespace Model
{

  /**
   */
  class StartConfigurationSessionRequest : public AppConfigDataRequest
  {
  public:
    AWS_APPCONFIGDATA_API StartConfigurationSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigurationSession"; }

    AWS_APPCONFIGDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The application ID or the application name.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>The application ID or the application name.</p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>The application ID or the application name.</p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>The application ID or the application name.</p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>The application ID or the application name.</p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>The application ID or the application name.</p>
     */
    inline StartConfigurationSessionRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>The application ID or the application name.</p>
     */
    inline StartConfigurationSessionRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The application ID or the application name.</p>
     */
    inline StartConfigurationSessionRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline StartConfigurationSessionRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline StartConfigurationSessionRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline StartConfigurationSessionRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline const Aws::String& GetConfigurationProfileIdentifier() const{ return m_configurationProfileIdentifier; }

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline bool ConfigurationProfileIdentifierHasBeenSet() const { return m_configurationProfileIdentifierHasBeenSet; }

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline void SetConfigurationProfileIdentifier(const Aws::String& value) { m_configurationProfileIdentifierHasBeenSet = true; m_configurationProfileIdentifier = value; }

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline void SetConfigurationProfileIdentifier(Aws::String&& value) { m_configurationProfileIdentifierHasBeenSet = true; m_configurationProfileIdentifier = std::move(value); }

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline void SetConfigurationProfileIdentifier(const char* value) { m_configurationProfileIdentifierHasBeenSet = true; m_configurationProfileIdentifier.assign(value); }

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline StartConfigurationSessionRequest& WithConfigurationProfileIdentifier(const Aws::String& value) { SetConfigurationProfileIdentifier(value); return *this;}

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline StartConfigurationSessionRequest& WithConfigurationProfileIdentifier(Aws::String&& value) { SetConfigurationProfileIdentifier(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline StartConfigurationSessionRequest& WithConfigurationProfileIdentifier(const char* value) { SetConfigurationProfileIdentifier(value); return *this;}


    /**
     * <p>Sets a constraint on a session. If you specify a value of, for example, 60
     * seconds, then the client that established the session can't call
     * <a>GetLatestConfiguration</a> more frequently then every 60 seconds.</p>
     */
    inline int GetRequiredMinimumPollIntervalInSeconds() const{ return m_requiredMinimumPollIntervalInSeconds; }

    /**
     * <p>Sets a constraint on a session. If you specify a value of, for example, 60
     * seconds, then the client that established the session can't call
     * <a>GetLatestConfiguration</a> more frequently then every 60 seconds.</p>
     */
    inline bool RequiredMinimumPollIntervalInSecondsHasBeenSet() const { return m_requiredMinimumPollIntervalInSecondsHasBeenSet; }

    /**
     * <p>Sets a constraint on a session. If you specify a value of, for example, 60
     * seconds, then the client that established the session can't call
     * <a>GetLatestConfiguration</a> more frequently then every 60 seconds.</p>
     */
    inline void SetRequiredMinimumPollIntervalInSeconds(int value) { m_requiredMinimumPollIntervalInSecondsHasBeenSet = true; m_requiredMinimumPollIntervalInSeconds = value; }

    /**
     * <p>Sets a constraint on a session. If you specify a value of, for example, 60
     * seconds, then the client that established the session can't call
     * <a>GetLatestConfiguration</a> more frequently then every 60 seconds.</p>
     */
    inline StartConfigurationSessionRequest& WithRequiredMinimumPollIntervalInSeconds(int value) { SetRequiredMinimumPollIntervalInSeconds(value); return *this;}

  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_configurationProfileIdentifier;
    bool m_configurationProfileIdentifierHasBeenSet = false;

    int m_requiredMinimumPollIntervalInSeconds;
    bool m_requiredMinimumPollIntervalInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
