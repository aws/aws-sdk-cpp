/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AiAgentInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about Amazon Connect Wisdom.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WisdomInfo">AWS
 * API Reference</a></p>
 */
class WisdomInfo {
 public:
  AWS_CONNECT_API WisdomInfo() = default;
  AWS_CONNECT_API WisdomInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WisdomInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Wisdom session.</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  WisdomInfo& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The array of AI agents involved in the contact.</p>
   */
  inline const Aws::Vector<AiAgentInfo>& GetAiAgents() const { return m_aiAgents; }
  inline bool AiAgentsHasBeenSet() const { return m_aiAgentsHasBeenSet; }
  template <typename AiAgentsT = Aws::Vector<AiAgentInfo>>
  void SetAiAgents(AiAgentsT&& value) {
    m_aiAgentsHasBeenSet = true;
    m_aiAgents = std::forward<AiAgentsT>(value);
  }
  template <typename AiAgentsT = Aws::Vector<AiAgentInfo>>
  WisdomInfo& WithAiAgents(AiAgentsT&& value) {
    SetAiAgents(std::forward<AiAgentsT>(value));
    return *this;
  }
  template <typename AiAgentsT = AiAgentInfo>
  WisdomInfo& AddAiAgents(AiAgentsT&& value) {
    m_aiAgentsHasBeenSet = true;
    m_aiAgents.emplace_back(std::forward<AiAgentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionArn;

  Aws::Vector<AiAgentInfo> m_aiAgents;
  bool m_sessionArnHasBeenSet = false;
  bool m_aiAgentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
