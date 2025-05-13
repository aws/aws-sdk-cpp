/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
#include <aws/bedrock-data-automation/model/StandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/CustomOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/OverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Create DataAutomationProject Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateDataAutomationProjectRequest">AWS
   * API Reference</a></p>
   */
  class CreateDataAutomationProjectRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataAutomationProject"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateDataAutomationProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    CreateDataAutomationProjectRequest& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStage GetProjectStage() const { return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(DataAutomationProjectStage value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline CreateDataAutomationProjectRequest& WithProjectStage(DataAutomationProjectStage value) { SetProjectStage(value); return *this;}
    ///@}

    ///@{
    
    inline const StandardOutputConfiguration& GetStandardOutputConfiguration() const { return m_standardOutputConfiguration; }
    inline bool StandardOutputConfigurationHasBeenSet() const { return m_standardOutputConfigurationHasBeenSet; }
    template<typename StandardOutputConfigurationT = StandardOutputConfiguration>
    void SetStandardOutputConfiguration(StandardOutputConfigurationT&& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = std::forward<StandardOutputConfigurationT>(value); }
    template<typename StandardOutputConfigurationT = StandardOutputConfiguration>
    CreateDataAutomationProjectRequest& WithStandardOutputConfiguration(StandardOutputConfigurationT&& value) { SetStandardOutputConfiguration(std::forward<StandardOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const { return m_customOutputConfiguration; }
    inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
    template<typename CustomOutputConfigurationT = CustomOutputConfiguration>
    void SetCustomOutputConfiguration(CustomOutputConfigurationT&& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = std::forward<CustomOutputConfigurationT>(value); }
    template<typename CustomOutputConfigurationT = CustomOutputConfiguration>
    CreateDataAutomationProjectRequest& WithCustomOutputConfiguration(CustomOutputConfigurationT&& value) { SetCustomOutputConfiguration(std::forward<CustomOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideConfiguration& GetOverrideConfiguration() const { return m_overrideConfiguration; }
    inline bool OverrideConfigurationHasBeenSet() const { return m_overrideConfigurationHasBeenSet; }
    template<typename OverrideConfigurationT = OverrideConfiguration>
    void SetOverrideConfiguration(OverrideConfigurationT&& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = std::forward<OverrideConfigurationT>(value); }
    template<typename OverrideConfigurationT = OverrideConfiguration>
    CreateDataAutomationProjectRequest& WithOverrideConfiguration(OverrideConfigurationT&& value) { SetOverrideConfiguration(std::forward<OverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataAutomationProjectRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateDataAutomationProjectRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataAutomationProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataAutomationProjectRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    DataAutomationProjectStage m_projectStage{DataAutomationProjectStage::NOT_SET};
    bool m_projectStageHasBeenSet = false;

    StandardOutputConfiguration m_standardOutputConfiguration;
    bool m_standardOutputConfigurationHasBeenSet = false;

    CustomOutputConfiguration m_customOutputConfiguration;
    bool m_customOutputConfigurationHasBeenSet = false;

    OverrideConfiguration m_overrideConfiguration;
    bool m_overrideConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
