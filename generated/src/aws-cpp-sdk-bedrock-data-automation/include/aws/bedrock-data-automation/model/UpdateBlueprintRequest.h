/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
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
    AWS_BEDROCKDATAAUTOMATION_API UpdateBlueprintRequest();

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
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline UpdateBlueprintRequest& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline UpdateBlueprintRequest& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline UpdateBlueprintRequest& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline UpdateBlueprintRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline UpdateBlueprintRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline UpdateBlueprintRequest& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintStage& GetBlueprintStage() const{ return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(const BlueprintStage& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline void SetBlueprintStage(BlueprintStage&& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = std::move(value); }
    inline UpdateBlueprintRequest& WithBlueprintStage(const BlueprintStage& value) { SetBlueprintStage(value); return *this;}
    inline UpdateBlueprintRequest& WithBlueprintStage(BlueprintStage&& value) { SetBlueprintStage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    BlueprintStage m_blueprintStage;
    bool m_blueprintStageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
