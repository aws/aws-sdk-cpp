/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class GetAgentRuntimeEndpointRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetAgentRuntimeEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentRuntimeEndpoint"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the AgentCore Runtime associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
    inline bool AgentRuntimeIdHasBeenSet() const { return m_agentRuntimeIdHasBeenSet; }
    template<typename AgentRuntimeIdT = Aws::String>
    void SetAgentRuntimeId(AgentRuntimeIdT&& value) { m_agentRuntimeIdHasBeenSet = true; m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value); }
    template<typename AgentRuntimeIdT = Aws::String>
    GetAgentRuntimeEndpointRequest& WithAgentRuntimeId(AgentRuntimeIdT&& value) { SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AgentCore Runtime endpoint to retrieve.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    GetAgentRuntimeEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentRuntimeId;
    bool m_agentRuntimeIdHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
