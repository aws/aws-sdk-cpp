/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/ModifyMemoryStrategies.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class UpdateMemoryRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateMemoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMemory"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A client token is used for keeping track of idempotent requests. It can
     * contain a session id which can be around 250 chars, combined with a unique AWS
     * identifier.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateMemoryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the memory to update.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    UpdateMemoryRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the AgentCore Memory resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMemoryRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after which memory events will expire, between 7 and 365
     * days.</p>
     */
    inline int GetEventExpiryDuration() const { return m_eventExpiryDuration; }
    inline bool EventExpiryDurationHasBeenSet() const { return m_eventExpiryDurationHasBeenSet; }
    inline void SetEventExpiryDuration(int value) { m_eventExpiryDurationHasBeenSet = true; m_eventExpiryDuration = value; }
    inline UpdateMemoryRequest& WithEventExpiryDuration(int value) { SetEventExpiryDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides permissions for the AgentCore Memory
     * resource.</p>
     */
    inline const Aws::String& GetMemoryExecutionRoleArn() const { return m_memoryExecutionRoleArn; }
    inline bool MemoryExecutionRoleArnHasBeenSet() const { return m_memoryExecutionRoleArnHasBeenSet; }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    void SetMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { m_memoryExecutionRoleArnHasBeenSet = true; m_memoryExecutionRoleArn = std::forward<MemoryExecutionRoleArnT>(value); }
    template<typename MemoryExecutionRoleArnT = Aws::String>
    UpdateMemoryRequest& WithMemoryExecutionRoleArn(MemoryExecutionRoleArnT&& value) { SetMemoryExecutionRoleArn(std::forward<MemoryExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory strategies to add, modify, or delete.</p>
     */
    inline const ModifyMemoryStrategies& GetMemoryStrategies() const { return m_memoryStrategies; }
    inline bool MemoryStrategiesHasBeenSet() const { return m_memoryStrategiesHasBeenSet; }
    template<typename MemoryStrategiesT = ModifyMemoryStrategies>
    void SetMemoryStrategies(MemoryStrategiesT&& value) { m_memoryStrategiesHasBeenSet = true; m_memoryStrategies = std::forward<MemoryStrategiesT>(value); }
    template<typename MemoryStrategiesT = ModifyMemoryStrategies>
    UpdateMemoryRequest& WithMemoryStrategies(MemoryStrategiesT&& value) { SetMemoryStrategies(std::forward<MemoryStrategiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_eventExpiryDuration{0};
    bool m_eventExpiryDurationHasBeenSet = false;

    Aws::String m_memoryExecutionRoleArn;
    bool m_memoryExecutionRoleArnHasBeenSet = false;

    ModifyMemoryStrategies m_memoryStrategies;
    bool m_memoryStrategiesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
