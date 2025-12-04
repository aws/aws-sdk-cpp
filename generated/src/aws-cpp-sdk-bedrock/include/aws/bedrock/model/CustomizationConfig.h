/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DistillationConfig.h>
#include <aws/bedrock/model/RFTConfig.h>

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
 * <p>A model customization configuration</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomizationConfig">AWS
 * API Reference</a></p>
 */
class CustomizationConfig {
 public:
  AWS_BEDROCK_API CustomizationConfig() = default;
  AWS_BEDROCK_API CustomizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API CustomizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Distillation configuration for the custom model.</p>
   */
  inline const DistillationConfig& GetDistillationConfig() const { return m_distillationConfig; }
  inline bool DistillationConfigHasBeenSet() const { return m_distillationConfigHasBeenSet; }
  template <typename DistillationConfigT = DistillationConfig>
  void SetDistillationConfig(DistillationConfigT&& value) {
    m_distillationConfigHasBeenSet = true;
    m_distillationConfig = std::forward<DistillationConfigT>(value);
  }
  template <typename DistillationConfigT = DistillationConfig>
  CustomizationConfig& WithDistillationConfig(DistillationConfigT&& value) {
    SetDistillationConfig(std::forward<DistillationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration settings for reinforcement fine-tuning (RFT) model
   * customization, including grader configuration and hyperparameters. </p>
   */
  inline const RFTConfig& GetRftConfig() const { return m_rftConfig; }
  inline bool RftConfigHasBeenSet() const { return m_rftConfigHasBeenSet; }
  template <typename RftConfigT = RFTConfig>
  void SetRftConfig(RftConfigT&& value) {
    m_rftConfigHasBeenSet = true;
    m_rftConfig = std::forward<RftConfigT>(value);
  }
  template <typename RftConfigT = RFTConfig>
  CustomizationConfig& WithRftConfig(RftConfigT&& value) {
    SetRftConfig(std::forward<RftConfigT>(value));
    return *this;
  }
  ///@}
 private:
  DistillationConfig m_distillationConfig;
  bool m_distillationConfigHasBeenSet = false;

  RFTConfig m_rftConfig;
  bool m_rftConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
