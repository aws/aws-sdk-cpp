/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Period.h>

#include <utility>

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
 * <p>Rate configuration for a metric (requests or tokens)</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RateConfig">AWS
 * API Reference</a></p>
 */
class RateConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RateConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RateConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rate value for the limit. For request limits, this is the number of
   * requests allowed per period. For token limits, this is the number of tokens
   * allowed per period. For connection limits, this is the number of concurrent
   * connections allowed.</p>
   */
  inline double GetRate() const { return m_rate; }
  inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
  inline void SetRate(double value) {
    m_rateHasBeenSet = true;
    m_rate = value;
  }
  inline RateConfig& WithRate(double value) {
    SetRate(value);
    return *this;
  }
  ///@}

  ///@{

  inline Period GetPeriod() const { return m_period; }
  inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
  inline void SetPeriod(Period value) {
    m_periodHasBeenSet = true;
    m_period = value;
  }
  inline RateConfig& WithPeriod(Period value) {
    SetPeriod(value);
    return *this;
  }
  ///@}
 private:
  double m_rate{0.0};

  Period m_period{Period::NOT_SET};
  bool m_rateHasBeenSet = false;
  bool m_periodHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
