/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GraderConfig.h>
#include <aws/bedrock/model/RFTHyperParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p> Configuration settings for reinforcement fine-tuning (RFT), including grader
 * configuration and training hyperparameters. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RFTConfig">AWS
 * API Reference</a></p>
 */
class RFTConfig {
 public:
  AWS_BEDROCK_API RFTConfig() = default;
  AWS_BEDROCK_API RFTConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API RFTConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Configuration for the grader that evaluates model responses and provides
   * reward signals during RFT training. </p>
   */
  inline const GraderConfig& GetGraderConfig() const { return m_graderConfig; }
  inline bool GraderConfigHasBeenSet() const { return m_graderConfigHasBeenSet; }
  template <typename GraderConfigT = GraderConfig>
  void SetGraderConfig(GraderConfigT&& value) {
    m_graderConfigHasBeenSet = true;
    m_graderConfig = std::forward<GraderConfigT>(value);
  }
  template <typename GraderConfigT = GraderConfig>
  RFTConfig& WithGraderConfig(GraderConfigT&& value) {
    SetGraderConfig(std::forward<GraderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Hyperparameters that control the reinforcement fine-tuning training process,
   * including learning rate, batch size, and epoch count. </p>
   */
  inline const RFTHyperParameters& GetHyperParameters() const { return m_hyperParameters; }
  inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }
  template <typename HyperParametersT = RFTHyperParameters>
  void SetHyperParameters(HyperParametersT&& value) {
    m_hyperParametersHasBeenSet = true;
    m_hyperParameters = std::forward<HyperParametersT>(value);
  }
  template <typename HyperParametersT = RFTHyperParameters>
  RFTConfig& WithHyperParameters(HyperParametersT&& value) {
    SetHyperParameters(std::forward<HyperParametersT>(value));
    return *this;
  }
  ///@}
 private:
  GraderConfig m_graderConfig;
  bool m_graderConfigHasBeenSet = false;

  RFTHyperParameters m_hyperParameters;
  bool m_hyperParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
