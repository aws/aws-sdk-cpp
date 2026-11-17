/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
#include <aws/core/http/HttpResponse.h>
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
namespace BedrockAgentCore {
namespace Model {
class UpdateAgentInsightResult {
 public:
  AWS_BEDROCKAGENTCORE_API UpdateAgentInsightResult() = default;
  AWS_BEDROCKAGENTCORE_API UpdateAgentInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API UpdateAgentInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated Agent Insight.</p>
   */
  inline const Aws::String& GetAgentInsightId() const { return m_agentInsightId; }
  template <typename AgentInsightIdT = Aws::String>
  void SetAgentInsightId(AgentInsightIdT&& value) {
    m_agentInsightIdHasBeenSet = true;
    m_agentInsightId = std::forward<AgentInsightIdT>(value);
  }
  template <typename AgentInsightIdT = Aws::String>
  UpdateAgentInsightResult& WithAgentInsightId(AgentInsightIdT&& value) {
    SetAgentInsightId(std::forward<AgentInsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The archive status of the updated Agent Insight. Valid values:</p> <ul> <li>
   * <p> <code>ACTIVE</code> - The insight is active.</p> </li> <li> <p>
   * <code>ARCHIVED</code> - The insight is archived.</p> </li> </ul>
   */
  inline AgentInsightArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline void SetArchiveStatus(AgentInsightArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline UpdateAgentInsightResult& WithArchiveStatus(AgentInsightArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateAgentInsightResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateAgentInsightResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentInsightId;

  AgentInsightArchiveStatus m_archiveStatus{AgentInsightArchiveStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentInsightIdHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
