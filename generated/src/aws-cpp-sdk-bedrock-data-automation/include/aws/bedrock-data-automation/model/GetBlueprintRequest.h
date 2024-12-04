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
   * <p>Get Blueprint Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/GetBlueprintRequest">AWS
   * API Reference</a></p>
   */
  class GetBlueprintRequest : public BedrockDataAutomationRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API GetBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBlueprint"; }

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
    inline GetBlueprintRequest& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline GetBlueprintRequest& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline GetBlueprintRequest& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional field to get a specific Blueprint version</p>
     */
    inline const Aws::String& GetBlueprintVersion() const{ return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    inline void SetBlueprintVersion(const Aws::String& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = value; }
    inline void SetBlueprintVersion(Aws::String&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::move(value); }
    inline void SetBlueprintVersion(const char* value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion.assign(value); }
    inline GetBlueprintRequest& WithBlueprintVersion(const Aws::String& value) { SetBlueprintVersion(value); return *this;}
    inline GetBlueprintRequest& WithBlueprintVersion(Aws::String&& value) { SetBlueprintVersion(std::move(value)); return *this;}
    inline GetBlueprintRequest& WithBlueprintVersion(const char* value) { SetBlueprintVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional field to get a specific Blueprint stage</p>
     */
    inline const BlueprintStage& GetBlueprintStage() const{ return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(const BlueprintStage& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline void SetBlueprintStage(BlueprintStage&& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = std::move(value); }
    inline GetBlueprintRequest& WithBlueprintStage(const BlueprintStage& value) { SetBlueprintStage(value); return *this;}
    inline GetBlueprintRequest& WithBlueprintStage(BlueprintStage&& value) { SetBlueprintStage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;

    BlueprintStage m_blueprintStage;
    bool m_blueprintStageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
