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
    AWS_APPCONFIG_API StartDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeployment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StartDeploymentRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    StartDeploymentRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const { return m_deploymentStrategyId; }
    inline bool DeploymentStrategyIdHasBeenSet() const { return m_deploymentStrategyIdHasBeenSet; }
    template<typename DeploymentStrategyIdT = Aws::String>
    void SetDeploymentStrategyId(DeploymentStrategyIdT&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::forward<DeploymentStrategyIdT>(value); }
    template<typename DeploymentStrategyIdT = Aws::String>
    StartDeploymentRequest& WithDeploymentStrategyId(DeploymentStrategyIdT&& value) { SetDeploymentStrategyId(std::forward<DeploymentStrategyIdT>(value)); return *this;}
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
    StartDeploymentRequest& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration version to deploy. If deploying an AppConfig hosted
     * configuration version, you can specify either the version number or version
     * label. For all other configurations, you must specify the version number.</p>
     */
    inline const Aws::String& GetConfigurationVersion() const { return m_configurationVersion; }
    inline bool ConfigurationVersionHasBeenSet() const { return m_configurationVersionHasBeenSet; }
    template<typename ConfigurationVersionT = Aws::String>
    void SetConfigurationVersion(ConfigurationVersionT&& value) { m_configurationVersionHasBeenSet = true; m_configurationVersion = std::forward<ConfigurationVersionT>(value); }
    template<typename ConfigurationVersionT = Aws::String>
    StartDeploymentRequest& WithConfigurationVersion(ConfigurationVersionT&& value) { SetConfigurationVersion(std::forward<ConfigurationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the deployment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartDeploymentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata to assign to the deployment. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartDeploymentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartDeploymentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier (key ID, key alias, or key ARN). AppConfig uses this
     * ID to encrypt the configuration data using a customer managed key. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    StartDeploymentRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of dynamic extension parameter names to values to pass to associated
     * extensions with <code>PRE_START_DEPLOYMENT</code> actions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDynamicExtensionParameters() const { return m_dynamicExtensionParameters; }
    inline bool DynamicExtensionParametersHasBeenSet() const { return m_dynamicExtensionParametersHasBeenSet; }
    template<typename DynamicExtensionParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetDynamicExtensionParameters(DynamicExtensionParametersT&& value) { m_dynamicExtensionParametersHasBeenSet = true; m_dynamicExtensionParameters = std::forward<DynamicExtensionParametersT>(value); }
    template<typename DynamicExtensionParametersT = Aws::Map<Aws::String, Aws::String>>
    StartDeploymentRequest& WithDynamicExtensionParameters(DynamicExtensionParametersT&& value) { SetDynamicExtensionParameters(std::forward<DynamicExtensionParametersT>(value)); return *this;}
    template<typename DynamicExtensionParametersKeyT = Aws::String, typename DynamicExtensionParametersValueT = Aws::String>
    StartDeploymentRequest& AddDynamicExtensionParameters(DynamicExtensionParametersKeyT&& key, DynamicExtensionParametersValueT&& value) {
      m_dynamicExtensionParametersHasBeenSet = true; m_dynamicExtensionParameters.emplace(std::forward<DynamicExtensionParametersKeyT>(key), std::forward<DynamicExtensionParametersValueT>(value)); return *this;
    }
    ///@}
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

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dynamicExtensionParameters;
    bool m_dynamicExtensionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
