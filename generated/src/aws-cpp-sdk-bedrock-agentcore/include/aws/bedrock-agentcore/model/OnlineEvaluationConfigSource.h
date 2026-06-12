/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SessionFilterConfig.h>
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
 * <p>A reference to an existing online evaluation configuration to use as the data
 * source for batch evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/OnlineEvaluationConfigSource">AWS
 * API Reference</a></p>
 */
class OnlineEvaluationConfigSource {
 public:
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationConfigSource() = default;
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationConfigSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API OnlineEvaluationConfigSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the online evaluation configuration to use
   * as the session source.</p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  inline bool OnlineEvaluationConfigArnHasBeenSet() const { return m_onlineEvaluationConfigArnHasBeenSet; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  OnlineEvaluationConfigSource& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional session filter configuration to narrow down which sessions from the
   * online evaluation configuration to include.</p>
   */
  inline const SessionFilterConfig& GetSessionFilterConfig() const { return m_sessionFilterConfig; }
  inline bool SessionFilterConfigHasBeenSet() const { return m_sessionFilterConfigHasBeenSet; }
  template <typename SessionFilterConfigT = SessionFilterConfig>
  void SetSessionFilterConfig(SessionFilterConfigT&& value) {
    m_sessionFilterConfigHasBeenSet = true;
    m_sessionFilterConfig = std::forward<SessionFilterConfigT>(value);
  }
  template <typename SessionFilterConfigT = SessionFilterConfig>
  OnlineEvaluationConfigSource& WithSessionFilterConfig(SessionFilterConfigT&& value) {
    SetSessionFilterConfig(std::forward<SessionFilterConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;

  SessionFilterConfig m_sessionFilterConfig;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;
  bool m_sessionFilterConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
