/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/UserType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for creating a new chat</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CreateChatRequest">AWS
 * API Reference</a></p>
 */
class CreateChatRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API CreateChatRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateChat"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateChatRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication type of the user</p>
   */
  inline UserType GetUserType() const { return m_userType; }
  inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
  inline void SetUserType(UserType value) {
    m_userTypeHasBeenSet = true;
    m_userType = value;
  }
  inline CreateChatRequest& WithUserType(UserType value) {
    SetUserType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  UserType m_userType{UserType::NOT_SET};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_userTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
