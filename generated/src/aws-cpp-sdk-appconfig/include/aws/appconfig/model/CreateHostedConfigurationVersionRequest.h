/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class CreateHostedConfigurationVersionRequest : public StreamingAppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateHostedConfigurationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHostedConfigurationVersion"; }

    AWS_APPCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateHostedConfigurationVersionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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
    inline CreateHostedConfigurationVersionRequest& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>A description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configuration.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An optional locking token used to prevent race conditions from overwriting
     * configuration updates when creating a new version. To ensure your data is not
     * overwritten when creating multiple hosted configuration versions in rapid
     * succession, specify the version number of the latest hosted configuration
     * version.</p>
     */
    inline int GetLatestVersionNumber() const{ return m_latestVersionNumber; }

    /**
     * <p>An optional locking token used to prevent race conditions from overwriting
     * configuration updates when creating a new version. To ensure your data is not
     * overwritten when creating multiple hosted configuration versions in rapid
     * succession, specify the version number of the latest hosted configuration
     * version.</p>
     */
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }

    /**
     * <p>An optional locking token used to prevent race conditions from overwriting
     * configuration updates when creating a new version. To ensure your data is not
     * overwritten when creating multiple hosted configuration versions in rapid
     * succession, specify the version number of the latest hosted configuration
     * version.</p>
     */
    inline void SetLatestVersionNumber(int value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }

    /**
     * <p>An optional locking token used to prevent race conditions from overwriting
     * configuration updates when creating a new version. To ensure your data is not
     * overwritten when creating multiple hosted configuration versions in rapid
     * succession, specify the version number of the latest hosted configuration
     * version.</p>
     */
    inline CreateHostedConfigurationVersionRequest& WithLatestVersionNumber(int value) { SetLatestVersionNumber(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;


    int m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
