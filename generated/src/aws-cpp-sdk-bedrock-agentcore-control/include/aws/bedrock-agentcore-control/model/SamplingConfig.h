/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The configuration that controls what percentage of agent traces are sampled
 * for evaluation to manage evaluation volume and costs. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SamplingConfig">AWS
 * API Reference</a></p>
 */
class SamplingConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SamplingConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SamplingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SamplingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The percentage of agent traces to sample for evaluation, ranging from 0.01%
   * to 100%. </p>
   */
  inline double GetSamplingPercentage() const { return m_samplingPercentage; }
  inline bool SamplingPercentageHasBeenSet() const { return m_samplingPercentageHasBeenSet; }
  inline void SetSamplingPercentage(double value) {
    m_samplingPercentageHasBeenSet = true;
    m_samplingPercentage = value;
  }
  inline SamplingConfig& WithSamplingPercentage(double value) {
    SetSamplingPercentage(value);
    return *this;
  }
  ///@}
 private:
  double m_samplingPercentage{0.0};
  bool m_samplingPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
