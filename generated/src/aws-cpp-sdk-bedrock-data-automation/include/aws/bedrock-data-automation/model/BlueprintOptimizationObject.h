/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Structure for single blueprint entity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/BlueprintOptimizationObject">AWS
 * API Reference</a></p>
 */
class BlueprintOptimizationObject {
 public:
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationObject() = default;
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Arn of blueprint.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  BlueprintOptimizationObject& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stage of blueprint.</p>
   */
  inline BlueprintStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(BlueprintStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline BlueprintOptimizationObject& WithStage(BlueprintStage value) {
    SetStage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_blueprintArn;

  BlueprintStage m_stage{BlueprintStage::NOT_SET};
  bool m_blueprintArnHasBeenSet = false;
  bool m_stageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
