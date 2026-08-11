/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Contains the configuration for reusing agent traces from an online evaluation
 * configuration for recommendation analysis. Because online evaluation is a
 * continuous stream, a time range specifies which evaluated sessions the
 * recommendation includes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/OnlineEvaluationTraceConfig">AWS
 * API Reference</a></p>
 */
class OnlineEvaluationTraceConfig {
 public:
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationTraceConfig() = default;
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationTraceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationTraceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the online evaluation configuration to reuse sessions from.</p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  inline bool OnlineEvaluationConfigArnHasBeenSet() const { return m_onlineEvaluationConfigArnHasBeenSet; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  OnlineEvaluationTraceConfig& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the time range. Only sessions evaluated at or after this
   * timestamp are included.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  OnlineEvaluationTraceConfig& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the time range. Only sessions evaluated before this timestamp
   * are included.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  OnlineEvaluationTraceConfig& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_onlineEvaluationConfigArnHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
