/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppConfig
{
namespace Model
{

  /**
   */
  class ValidateConfigurationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API ValidateConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateConfiguration"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ValidateConfigurationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
    template<typename ConfigurationProfileIdT = Aws::String>
    void SetConfigurationProfileId(ConfigurationProfileIdT&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value); }
    template<typename ConfigurationProfileIdT = Aws::String>
    ValidateConfigurationRequest& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const { return m_configurationVersion; }
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }
    template<typename ConfigurationVersionT = Aws::String>
    void SetConfigurationVersion(ConfigurationVersionT&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::forward<ConfigurationVersionT>(value); }
    template<typename ConfigurationVersionT = Aws::String>
    ValidateConfigurationRequest& WithConfigurationVersion(ConfigurationVersionT&& value) { SetConfigurationVersion(std::forward<ConfigurationVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    Aws::String m_configurationVersion;
    bool m_configurationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
