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
#include <utility>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Update DataAutomationProject Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpdateDataAutomationProjectRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDataAutomationProjectRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API UpdateDataAutomationProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataAutomationProject"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN generated at the server side when a DataAutomationProject is created</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline UpdateDataAutomationProjectRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline UpdateDataAutomationProjectRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStageHasBeenSet = true; m_projectStage = std::move(value); }
    inline UpdateDataAutomationProjectRequest& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline UpdateDataAutomationProjectRequest& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline UpdateDataAutomationProjectRequest& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const StandardOutputConfiguration& GetStandardOutputConfiguration() const{ return m_standardOutputConfiguration; }
    inline bool StandardOutputConfigurationHasBeenSet() const { return m_standardOutputConfigurationHasBeenSet; }
    inline void SetStandardOutputConfiguration(const StandardOutputConfiguration& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = value; }
    inline void SetStandardOutputConfiguration(StandardOutputConfiguration&& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = std::move(value); }
    inline UpdateDataAutomationProjectRequest& WithStandardOutputConfiguration(const StandardOutputConfiguration& value) { SetStandardOutputConfiguration(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithStandardOutputConfiguration(StandardOutputConfiguration&& value) { SetStandardOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const{ return m_customOutputConfiguration; }
    inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
    inline void SetCustomOutputConfiguration(const CustomOutputConfiguration& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = value; }
    inline void SetCustomOutputConfiguration(CustomOutputConfiguration&& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = std::move(value); }
    inline UpdateDataAutomationProjectRequest& WithCustomOutputConfiguration(const CustomOutputConfiguration& value) { SetCustomOutputConfiguration(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithCustomOutputConfiguration(CustomOutputConfiguration&& value) { SetCustomOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideConfiguration& GetOverrideConfiguration() const{ return m_overrideConfiguration; }
    inline bool OverrideConfigurationHasBeenSet() const { return m_overrideConfigurationHasBeenSet; }
    inline void SetOverrideConfiguration(const OverrideConfiguration& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = value; }
    inline void SetOverrideConfiguration(OverrideConfiguration&& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = std::move(value); }
    inline UpdateDataAutomationProjectRequest& WithOverrideConfiguration(const OverrideConfiguration& value) { SetOverrideConfiguration(value); return *this;}
    inline UpdateDataAutomationProjectRequest& WithOverrideConfiguration(OverrideConfiguration&& value) { SetOverrideConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    DataAutomationProjectStage m_projectStage;
    bool m_projectStageHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    StandardOutputConfiguration m_standardOutputConfiguration;
    bool m_standardOutputConfigurationHasBeenSet = false;

    CustomOutputConfiguration m_customOutputConfiguration;
    bool m_customOutputConfigurationHasBeenSet = false;

    OverrideConfiguration m_overrideConfiguration;
    bool m_overrideConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
