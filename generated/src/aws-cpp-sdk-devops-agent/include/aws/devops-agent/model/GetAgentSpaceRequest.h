/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/IncludedData.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for retrieving a specific AgentSpace by ID.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetAgentSpaceInput">AWS
 * API Reference</a></p>
 */
class GetAgentSpaceRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API GetAgentSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentSpace"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the AgentSpace</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  GetAgentSpaceRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How much data to include in the response.</p>
   */
  inline IncludedData GetIncludedData() const { return m_includedData; }
  inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
  inline void SetIncludedData(IncludedData value) {
    m_includedDataHasBeenSet = true;
    m_includedData = value;
  }
  inline GetAgentSpaceRequest& WithIncludedData(IncludedData value) {
    SetIncludedData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  IncludedData m_includedData{IncludedData::NOT_SET};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_includedDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
