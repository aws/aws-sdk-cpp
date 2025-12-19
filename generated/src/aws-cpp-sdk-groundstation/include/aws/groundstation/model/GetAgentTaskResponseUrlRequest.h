/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GroundStation {
namespace Model {

/**
 */
class GetAgentTaskResponseUrlRequest : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API GetAgentTaskResponseUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentTaskResponseUrl"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>UUID of agent requesting the response URL.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  GetAgentTaskResponseUrlRequest& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GUID of the agent task for which the response URL is being requested.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetAgentTaskResponseUrlRequest& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentId;

  Aws::String m_taskId;
  bool m_agentIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
