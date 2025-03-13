/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Update Blueprint Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/UpdateBlueprintRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBlueprintRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API UpdateBlueprintRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBlueprint"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN generated at the server side when a Blueprint is created</p>
     */
    inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    template<typename BlueprintArnT = Aws::String>
    void SetBlueprintArn(BlueprintArnT&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::forward<BlueprintArnT>(value); }
    template<typename BlueprintArnT = Aws::String>
    UpdateBlueprintRequest& WithBlueprintArn(BlueprintArnT&& value) { SetBlueprintArn(std::forward<BlueprintArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    UpdateBlueprintRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BlueprintStage GetBlueprintStage() const { return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(BlueprintStage value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline UpdateBlueprintRequest& WithBlueprintStage(BlueprintStage value) { SetBlueprintStage(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    UpdateBlueprintRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    BlueprintStage m_blueprintStage{BlueprintStage::NOT_SET};
    bool m_blueprintStageHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
