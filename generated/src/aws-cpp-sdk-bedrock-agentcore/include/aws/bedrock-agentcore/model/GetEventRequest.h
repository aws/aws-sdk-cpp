/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class GetEventRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvent"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the AgentCore Memory resource containing the event.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    GetEventRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session containing the event.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetEventRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the actor associated with the event.</p>
     */
    inline const Aws::String& GetActorId() const { return m_actorId; }
    inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
    template<typename ActorIdT = Aws::String>
    void SetActorId(ActorIdT&& value) { m_actorIdHasBeenSet = true; m_actorId = std::forward<ActorIdT>(value); }
    template<typename ActorIdT = Aws::String>
    GetEventRequest& WithActorId(ActorIdT&& value) { SetActorId(std::forward<ActorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the event to retrieve.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetEventRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_actorId;
    bool m_actorIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
