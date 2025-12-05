/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class GetAgentTaskResponseUrlResult {
 public:
  AWS_GROUNDSTATION_API GetAgentTaskResponseUrlResult() = default;
  AWS_GROUNDSTATION_API GetAgentTaskResponseUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API GetAgentTaskResponseUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>UUID of the agent.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  GetAgentTaskResponseUrlResult& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GUID of the agent task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetAgentTaskResponseUrlResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Presigned URL for uploading agent task response logs.</p>
   */
  inline const Aws::String& GetPresignedLogUrl() const { return m_presignedLogUrl; }
  template <typename PresignedLogUrlT = Aws::String>
  void SetPresignedLogUrl(PresignedLogUrlT&& value) {
    m_presignedLogUrlHasBeenSet = true;
    m_presignedLogUrl = std::forward<PresignedLogUrlT>(value);
  }
  template <typename PresignedLogUrlT = Aws::String>
  GetAgentTaskResponseUrlResult& WithPresignedLogUrl(PresignedLogUrlT&& value) {
    SetPresignedLogUrl(std::forward<PresignedLogUrlT>(value));
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
  GetAgentTaskResponseUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentId;

  Aws::String m_taskId;

  Aws::String m_presignedLogUrl;

  Aws::String m_requestId;
  bool m_agentIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_presignedLogUrlHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
