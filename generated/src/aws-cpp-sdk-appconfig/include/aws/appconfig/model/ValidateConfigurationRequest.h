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
    AWS_APPCONFIG_API ValidateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateConfiguration"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline ValidateConfigurationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ValidateConfigurationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ValidateConfigurationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The configuration profile ID.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = value; }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::move(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId.assign(value); }

    /**
     * <p>The configuration profile ID.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = value; }

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::move(value); }

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline void SetConfigurationVersion(const char* value) { m_configurationVersionHasBeenSet = true; m_configurationVersion.assign(value); }

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the configuration to validate.</p>
     */
    inline ValidateConfigurationRequest& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}

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
