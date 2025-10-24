﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeEndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class UpdateAgentRuntimeEndpointResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeEndpointResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeEndpointResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The currently deployed version of the AgentCore Runtime on the endpoint.</p>
   */
  inline const Aws::String& GetLiveVersion() const { return m_liveVersion; }
  template <typename LiveVersionT = Aws::String>
  void SetLiveVersion(LiveVersionT&& value) {
    m_liveVersionHasBeenSet = true;
    m_liveVersion = std::forward<LiveVersionT>(value);
  }
  template <typename LiveVersionT = Aws::String>
  UpdateAgentRuntimeEndpointResult& WithLiveVersion(LiveVersionT&& value) {
    SetLiveVersion(std::forward<LiveVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target version of the AgentCore Runtime for the endpoint.</p>
   */
  inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
  template <typename TargetVersionT = Aws::String>
  void SetTargetVersion(TargetVersionT&& value) {
    m_targetVersionHasBeenSet = true;
    m_targetVersion = std::forward<TargetVersionT>(value);
  }
  template <typename TargetVersionT = Aws::String>
  UpdateAgentRuntimeEndpointResult& WithTargetVersion(TargetVersionT&& value) {
    SetTargetVersion(std::forward<TargetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AgentCore Runtime endpoint.</p>
   */
  inline const Aws::String& GetAgentRuntimeEndpointArn() const { return m_agentRuntimeEndpointArn; }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  void SetAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    m_agentRuntimeEndpointArnHasBeenSet = true;
    m_agentRuntimeEndpointArn = std::forward<AgentRuntimeEndpointArnT>(value);
  }
  template <typename AgentRuntimeEndpointArnT = Aws::String>
  UpdateAgentRuntimeEndpointResult& WithAgentRuntimeEndpointArn(AgentRuntimeEndpointArnT&& value) {
    SetAgentRuntimeEndpointArn(std::forward<AgentRuntimeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AgentCore Runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
  template <typename AgentRuntimeArnT = Aws::String>
  void SetAgentRuntimeArn(AgentRuntimeArnT&& value) {
    m_agentRuntimeArnHasBeenSet = true;
    m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value);
  }
  template <typename AgentRuntimeArnT = Aws::String>
  UpdateAgentRuntimeEndpointResult& WithAgentRuntimeArn(AgentRuntimeArnT&& value) {
    SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the updated AgentCore Runtime endpoint.</p>
   */
  inline AgentRuntimeEndpointStatus GetStatus() const { return m_status; }
  inline void SetStatus(AgentRuntimeEndpointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAgentRuntimeEndpointResult& WithStatus(AgentRuntimeEndpointStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the AgentCore Runtime endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateAgentRuntimeEndpointResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the AgentCore Runtime endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  UpdateAgentRuntimeEndpointResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateAgentRuntimeEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_liveVersion;
  bool m_liveVersionHasBeenSet = false;

  Aws::String m_targetVersion;
  bool m_targetVersionHasBeenSet = false;

  Aws::String m_agentRuntimeEndpointArn;
  bool m_agentRuntimeEndpointArnHasBeenSet = false;

  Aws::String m_agentRuntimeArn;
  bool m_agentRuntimeArnHasBeenSet = false;

  AgentRuntimeEndpointStatus m_status{AgentRuntimeEndpointStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_lastUpdatedAtHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
