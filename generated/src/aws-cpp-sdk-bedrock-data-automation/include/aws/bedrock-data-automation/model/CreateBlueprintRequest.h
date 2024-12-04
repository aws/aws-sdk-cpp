/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/Type.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
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
   * <p>Create Blueprint Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateBlueprintRequest">AWS
   * API Reference</a></p>
   */
  class CreateBlueprintRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API CreateBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBlueprint"; }

    AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }
    inline CreateBlueprintRequest& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline CreateBlueprintRequest& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline CreateBlueprintRequest& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
    ///@}

    ///@{
    
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateBlueprintRequest& WithType(const Type& value) { SetType(value); return *this;}
    inline CreateBlueprintRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintStage& GetBlueprintStage() const{ return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(const BlueprintStage& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline void SetBlueprintStage(BlueprintStage&& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = std::move(value); }
    inline CreateBlueprintRequest& WithBlueprintStage(const BlueprintStage& value) { SetBlueprintStage(value); return *this;}
    inline CreateBlueprintRequest& WithBlueprintStage(BlueprintStage&& value) { SetBlueprintStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline CreateBlueprintRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline CreateBlueprintRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline CreateBlueprintRequest& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateBlueprintRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateBlueprintRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateBlueprintRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline CreateBlueprintRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline CreateBlueprintRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    BlueprintStage m_blueprintStage;
    bool m_blueprintStageHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
