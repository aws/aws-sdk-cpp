/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEPIPELINE_API CreateCustomActionTypeRequest : public CodePipelineRequest
  {
  public:
    CreateCustomActionTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomActionType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline CreateCustomActionTypeRequest& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the custom action, such as a build action or a test
     * action.</p> <note> <p>Although <code>Source</code> and <code>Approval</code> are
     * listed as valid values, they are not currently functional. These values are
     * reserved for future use.</p> </note>
     */
    inline CreateCustomActionTypeRequest& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline CreateCustomActionTypeRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline CreateCustomActionTypeRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline CreateCustomActionTypeRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version identifier of the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline const ActionTypeSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline void SetSettings(const ActionTypeSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline void SetSettings(ActionTypeSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithSettings(const ActionTypeSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>URLs that provide users information about this custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithSettings(ActionTypeSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline const Aws::Vector<ActionConfigurationProperty>& GetConfigurationProperties() const{ return m_configurationProperties; }

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline bool ConfigurationPropertiesHasBeenSet() const { return m_configurationPropertiesHasBeenSet; }

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline void SetConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = value; }

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline void SetConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties = std::move(value); }

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline CreateCustomActionTypeRequest& WithConfigurationProperties(const Aws::Vector<ActionConfigurationProperty>& value) { SetConfigurationProperties(value); return *this;}

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline CreateCustomActionTypeRequest& WithConfigurationProperties(Aws::Vector<ActionConfigurationProperty>&& value) { SetConfigurationProperties(std::move(value)); return *this;}

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline CreateCustomActionTypeRequest& AddConfigurationProperties(const ActionConfigurationProperty& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.push_back(value); return *this; }

    /**
     * <p>The configuration properties for the custom action.</p> <note> <p>You can
     * refer to a name in the configuration properties of the custom action within the
     * URL templates by following the format of {Config:name}, as long as the
     * configuration property is both required and not secret. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/how-to-create-custom-action.html">Create
     * a Custom Action for a Pipeline</a>.</p> </note>
     */
    inline CreateCustomActionTypeRequest& AddConfigurationProperties(ActionConfigurationProperty&& value) { m_configurationPropertiesHasBeenSet = true; m_configurationProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetInputArtifactDetails() const{ return m_inputArtifactDetails; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline bool InputArtifactDetailsHasBeenSet() const { return m_inputArtifactDetailsHasBeenSet; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline void SetInputArtifactDetails(const ArtifactDetails& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = value; }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline void SetInputArtifactDetails(ArtifactDetails&& value) { m_inputArtifactDetailsHasBeenSet = true; m_inputArtifactDetails = std::move(value); }

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline CreateCustomActionTypeRequest& WithInputArtifactDetails(const ArtifactDetails& value) { SetInputArtifactDetails(value); return *this;}

    /**
     * <p>The details of the input artifact for the action, such as its commit ID.</p>
     */
    inline CreateCustomActionTypeRequest& WithInputArtifactDetails(ArtifactDetails&& value) { SetInputArtifactDetails(std::move(value)); return *this;}


    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline const ArtifactDetails& GetOutputArtifactDetails() const{ return m_outputArtifactDetails; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline bool OutputArtifactDetailsHasBeenSet() const { return m_outputArtifactDetailsHasBeenSet; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline void SetOutputArtifactDetails(const ArtifactDetails& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = value; }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline void SetOutputArtifactDetails(ArtifactDetails&& value) { m_outputArtifactDetailsHasBeenSet = true; m_outputArtifactDetails = std::move(value); }

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline CreateCustomActionTypeRequest& WithOutputArtifactDetails(const ArtifactDetails& value) { SetOutputArtifactDetails(value); return *this;}

    /**
     * <p>The details of the output artifact of the action, such as its commit ID.</p>
     */
    inline CreateCustomActionTypeRequest& WithOutputArtifactDetails(ArtifactDetails&& value) { SetOutputArtifactDetails(std::move(value)); return *this;}


    /**
     * <p>The tags for the custom action.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the custom action.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the custom action.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the custom action.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the custom action.</p>
     */
    inline CreateCustomActionTypeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ActionCategory m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_provider;
    bool m_providerHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    ActionTypeSettings m_settings;
    bool m_settingsHasBeenSet;

    Aws::Vector<ActionConfigurationProperty> m_configurationProperties;
    bool m_configurationPropertiesHasBeenSet;

    ArtifactDetails m_inputArtifactDetails;
    bool m_inputArtifactDetailsHasBeenSet;

    ArtifactDetails m_outputArtifactDetails;
    bool m_outputArtifactDetailsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
