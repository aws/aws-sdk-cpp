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
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem() = default;
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API BlueprintItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    template<typename BlueprintArnT = Aws::String>
    void SetBlueprintArn(BlueprintArnT&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::forward<BlueprintArnT>(value); }
    template<typename BlueprintArnT = Aws::String>
    BlueprintItem& WithBlueprintArn(BlueprintArnT&& value) { SetBlueprintArn(std::forward<BlueprintArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    template<typename BlueprintVersionT = Aws::String>
    void SetBlueprintVersion(BlueprintVersionT&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::forward<BlueprintVersionT>(value); }
    template<typename BlueprintVersionT = Aws::String>
    BlueprintItem& WithBlueprintVersion(BlueprintVersionT&& value) { SetBlueprintVersion(std::forward<BlueprintVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BlueprintStage GetBlueprintStage() const { return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(BlueprintStage value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline BlueprintItem& WithBlueprintStage(BlueprintStage value) { SetBlueprintStage(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;

    BlueprintStage m_blueprintStage{BlueprintStage::NOT_SET};
    bool m_blueprintStageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
