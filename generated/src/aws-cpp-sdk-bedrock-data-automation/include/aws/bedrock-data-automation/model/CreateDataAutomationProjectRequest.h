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
    AWS_BEDROCKDATAAUTOMATION_API CreateDataAutomationProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataAutomationProject"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline CreateDataAutomationProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateDataAutomationProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline CreateDataAutomationProjectRequest& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline CreateDataAutomationProjectRequest& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStageHasBeenSet = true; m_projectStage = std::move(value); }
    inline CreateDataAutomationProjectRequest& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StandardOutputConfiguration& GetStandardOutputConfiguration() const{ return m_standardOutputConfiguration; }
    inline bool StandardOutputConfigurationHasBeenSet() const { return m_standardOutputConfigurationHasBeenSet; }
    inline void SetStandardOutputConfiguration(const StandardOutputConfiguration& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = value; }
    inline void SetStandardOutputConfiguration(StandardOutputConfiguration&& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = std::move(value); }
    inline CreateDataAutomationProjectRequest& WithStandardOutputConfiguration(const StandardOutputConfiguration& value) { SetStandardOutputConfiguration(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithStandardOutputConfiguration(StandardOutputConfiguration&& value) { SetStandardOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const{ return m_customOutputConfiguration; }
    inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
    inline void SetCustomOutputConfiguration(const CustomOutputConfiguration& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = value; }
    inline void SetCustomOutputConfiguration(CustomOutputConfiguration&& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = std::move(value); }
    inline CreateDataAutomationProjectRequest& WithCustomOutputConfiguration(const CustomOutputConfiguration& value) { SetCustomOutputConfiguration(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithCustomOutputConfiguration(CustomOutputConfiguration&& value) { SetCustomOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideConfiguration& GetOverrideConfiguration() const{ return m_overrideConfiguration; }
    inline bool OverrideConfigurationHasBeenSet() const { return m_overrideConfigurationHasBeenSet; }
    inline void SetOverrideConfiguration(const OverrideConfiguration& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = value; }
    inline void SetOverrideConfiguration(OverrideConfiguration&& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = std::move(value); }
    inline CreateDataAutomationProjectRequest& WithOverrideConfiguration(const OverrideConfiguration& value) { SetOverrideConfiguration(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithOverrideConfiguration(OverrideConfiguration&& value) { SetOverrideConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataAutomationProjectRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataAutomationProjectRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline CreateDataAutomationProjectRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline CreateDataAutomationProjectRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    DataAutomationProjectStage m_projectStage;
    bool m_projectStageHasBeenSet = false;

    StandardOutputConfiguration m_standardOutputConfiguration;
    bool m_standardOutputConfigurationHasBeenSet = false;

    CustomOutputConfiguration m_customOutputConfiguration;
    bool m_customOutputConfigurationHasBeenSet = false;

    OverrideConfiguration m_overrideConfiguration;
    bool m_overrideConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
