/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionCategory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionTypeSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactDetails.h>
#include <aws/codepipeline/model/ActionConfigurationProperty.h>
#include <aws/codepipeline/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a CreateCustomActionType operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionTypeInput">AWS
   * API Reference</a></p>
   */
  class CreateCustomActionTypeRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API CreateCustomActionTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomActionType"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p>
     */
    inline ActionCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline CreateCustomActionTypeRequest& WithCategory(ActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the service used in the custom action, such as
     * CodeDeploy.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    CreateCustomActionTypeRequest& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateCustomActionTypeRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline const ActionTypeSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = ActionTypeSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = ActionTypeSettings>
    CreateCustomActionTypeRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the custom action.</p>  <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> 
     */
    inline const Aws::Vector<ActionConfigurationProperty>& GetConfigurationProperties() const { return m_configurationProperties; }
    inline bool ConfigurationPropertiesHasBeenSet() const { return m_configurationPropertiesHasBeenSet; }
    template<typename ConfigurationPropertiesT = Aws::Vector<ActionConfigurationProperty>>
    void SetConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = std::forward<ConfigurationPropertiesT>(value); }
    template<typename ConfigurationPropertiesT = Aws::Vector<ActionConfigurationProperty>>
    CreateCustomActionTypeRequest& WithConfigurationProperties(ConfigurationPropertiesT&& value) { SetConfigurationProperties(std::forward<ConfigurationPropertiesT>(value)); return *this;}
    template<typename ConfigurationPropertiesT = ActionConfigurationProperty>
    CreateCustomActionTypeRequest& AddConfigurationProperties(ConfigurationPropertiesT&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.emplace_back(std::forward<ConfigurationPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetInputArtifactDetails() const { return m_inputArtifactDetails; }
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    void SetInputArtifactDetails(InputArtifactDetailsT&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::forward<InputArtifactDetailsT>(value); }
    template<typename InputArtifactDetailsT = ArtifactDetails>
    CreateCustomActionTypeRequest& WithInputArtifactDetails(InputArtifactDetailsT&& value) { SetInputArtifactDetails(std::forward<InputArtifactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetOutputArtifactDetails() const { return m_outputArtifactDetails; }
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }
    template<typename OutputArtifactDetailsT = ArtifactDetails>
    void SetOutputArtifactDetails(OutputArtifactDetailsT&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::forward<OutputArtifactDetailsT>(value); }
    template<typename OutputArtifactDetailsT = ArtifactDetails>
    CreateCustomActionTypeRequest& WithOutputArtifactDetails(OutputArtifactDetailsT&& value) { SetOutputArtifactDetails(std::forward<OutputArtifactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the custom action.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCustomActionTypeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCustomActionTypeRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ActionCategory m_category{ActionCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    ActionTypeSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<ActionConfigurationProperty> m_configurationProperties;
    bool m_configurationPropertiesHasBeenSet = false;

    ArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet = false;

    ArtifactDetails m_outputArtifactDetails;
    bool m_outputArtifactDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
