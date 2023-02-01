/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class StartDeploymentRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API StartDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeployment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


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
    inline StartDeploymentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline StartDeploymentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline StartDeploymentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The environment ID.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The environment ID.</p>
     */
    inline StartDeploymentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The environment ID.</p>
     */
    inline StartDeploymentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The environment ID.</p>
     */
    inline StartDeploymentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const{ return m_deploymentStrategyId; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline bool DeploymentStrategyIdHasBeenSet() const { return m_deploymentStrategyIdHasBeenSet; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(const Aws::String& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = value; }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(Aws::String&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::move(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline void SetDeploymentStrategyId(const char* value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId.assign(value); }

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline StartDeploymentRequest& WithDeploymentStrategyId(const Aws::String& value) { SetDeploymentStrategyId(value); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline StartDeploymentRequest& WithDeploymentStrategyId(Aws::String&& value) { SetDeploymentStrategyId(std::move(value)); return *this;}

    /**
     * <p>The deployment strategy ID.</p>
     */
    inline StartDeploymentRequest& WithDeploymentStrategyId(const char* value) { SetDeploymentStrategyId(value); return *this;}


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
    inline StartDeploymentRequest& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline StartDeploymentRequest& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The configuration profile ID.</p>
     */
    inline StartDeploymentRequest& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>The configuration version to deploy.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const{ return m_configurationVersion; }

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline void SetConfigurationVersion(const Aws::String& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = value; }

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline void SetConfigurationVersion(Aws::String&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::move(value); }

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline void SetConfigurationVersion(const char* value) { m_configurationVersionHasBeenSet = true; m_configurationVersion.assign(value); }

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline StartDeploymentRequest& WithConfigurationVersion(const Aws::String& value) { SetConfigurationVersion(value); return *this;}

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline StartDeploymentRequest& WithConfigurationVersion(Aws::String&& value) { SetConfigurationVersion(std::move(value)); return *this;}

    /**
     * <p>The configuration version to deploy.</p>
     */
    inline StartDeploymentRequest& WithConfigurationVersion(const char* value) { SetConfigurationVersion(value); return *this;}


    /**
     * <p>A description of the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the deployment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the deployment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the deployment.</p>
     */
    inline StartDeploymentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the deployment.</p>
     */
    inline StartDeploymentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the deployment.</p>
     */
    inline StartDeploymentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline StartDeploymentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_deploymentStrategyId;
    bool m_deploymentStrategyIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    Aws::String m_configurationVersion;
    bool m_configurationVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
