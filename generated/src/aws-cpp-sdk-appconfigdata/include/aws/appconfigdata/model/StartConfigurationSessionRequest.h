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
    AWS_APPCONFIGDATA_API StartConfigurationSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigurationSession"; }

    AWS_APPCONFIGDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application ID or the application name.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    StartConfigurationSessionRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID or the environment name.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    StartConfigurationSessionRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID or the configuration profile name.</p>
     */
    inline const Aws::String& GetConfigurationProfileIdentifier() const { return m_configurationProfileIdentifier; }
    inline bool ConfigurationProfileIdentifierHasBeenSet() const { return m_configurationProfileIdentifierHasBeenSet; }
    template<typename ConfigurationProfileIdentifierT = Aws::String>
    void SetConfigurationProfileIdentifier(ConfigurationProfileIdentifierT&& value) { m_configurationProfileIdentifierHasBeenSet = true; m_configurationProfileIdentifier = std::forward<ConfigurationProfileIdentifierT>(value); }
    template<typename ConfigurationProfileIdentifierT = Aws::String>
    StartConfigurationSessionRequest& WithConfigurationProfileIdentifier(ConfigurationProfileIdentifierT&& value) { SetConfigurationProfileIdentifier(std::forward<ConfigurationProfileIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets a constraint on a session. If you specify a value of, for example, 60
     * seconds, then the client that established the session can't call
     * <a>GetLatestConfiguration</a> more frequently than every 60 seconds.</p>
     */
    inline int GetRequiredMinimumPollIntervalInSeconds() const { return m_requiredMinimumPollIntervalInSeconds; }
    inline bool RequiredMinimumPollIntervalInSecondsHasBeenSet() const { return m_requiredMinimumPollIntervalInSecondsHasBeenSet; }
    inline void SetRequiredMinimumPollIntervalInSeconds(int value) { m_requiredMinimumPollIntervalInSecondsHasBeenSet = true; m_requiredMinimumPollIntervalInSeconds = value; }
    inline StartConfigurationSessionRequest& WithRequiredMinimumPollIntervalInSeconds(int value) { SetRequiredMinimumPollIntervalInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_configurationProfileIdentifier;
    bool m_configurationProfileIdentifierHasBeenSet = false;

    int m_requiredMinimumPollIntervalInSeconds{0};
    bool m_requiredMinimumPollIntervalInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
