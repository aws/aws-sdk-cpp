/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Blueprint Item</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/BlueprintItem">AWS
   * API Reference</a></p>
   */
  class BlueprintItem
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem();
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline BlueprintItem& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline BlueprintItem& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline BlueprintItem& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintVersion() const{ return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    inline void SetBlueprintVersion(const Aws::String& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = value; }
    inline void SetBlueprintVersion(Aws::String&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::move(value); }
    inline void SetBlueprintVersion(const char* value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion.assign(value); }
    inline BlueprintItem& WithBlueprintVersion(const Aws::String& value) { SetBlueprintVersion(value); return *this;}
    inline BlueprintItem& WithBlueprintVersion(Aws::String&& value) { SetBlueprintVersion(std::move(value)); return *this;}
    inline BlueprintItem& WithBlueprintVersion(const char* value) { SetBlueprintVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const BlueprintStage& GetBlueprintStage() const{ return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(const BlueprintStage& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline void SetBlueprintStage(BlueprintStage&& value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = std::move(value); }
    inline BlueprintItem& WithBlueprintStage(const BlueprintStage& value) { SetBlueprintStage(value); return *this;}
    inline BlueprintItem& WithBlueprintStage(BlueprintStage&& value) { SetBlueprintStage(std::move(value)); return *this;}
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
