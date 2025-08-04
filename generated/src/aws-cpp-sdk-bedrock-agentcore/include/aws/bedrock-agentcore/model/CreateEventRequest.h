/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore/model/Branch.h>
#include <aws/bedrock-agentcore/model/PayloadType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class CreateEventRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API CreateEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEvent"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the AgentCore Memory resource in which to create the
     * event.</p>
     */
    inline const Aws::String& GetMemoryId() const { return m_memoryId; }
    inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
    template<typename MemoryIdT = Aws::String>
    void SetMemoryId(MemoryIdT&& value) { m_memoryIdHasBeenSet = true; m_memoryId = std::forward<MemoryIdT>(value); }
    template<typename MemoryIdT = Aws::String>
    CreateEventRequest& WithMemoryId(MemoryIdT&& value) { SetMemoryId(std::forward<MemoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the actor associated with this event. An actor represents
     * an entity that participates in sessions and generates events.</p>
     */
    inline const Aws::String& GetActorId() const { return m_actorId; }
    inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
    template<typename ActorIdT = Aws::String>
    void SetActorId(ActorIdT&& value) { m_actorIdHasBeenSet = true; m_actorId = std::forward<ActorIdT>(value); }
    template<typename ActorIdT = Aws::String>
    CreateEventRequest& WithActorId(ActorIdT&& value) { SetActorId(std::forward<ActorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session in which this event occurs. A session
     * represents a sequence of related events.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    CreateEventRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the event occurred. If not specified, the current time is
     * used.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    CreateEventRequest& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content payload of the event. This can include conversational data or
     * binary content.</p>
     */
    inline const Aws::Vector<PayloadType>& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Vector<PayloadType>>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Vector<PayloadType>>
    CreateEventRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    template<typename PayloadT = PayloadType>
    CreateEventRequest& AddPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload.emplace_back(std::forward<PayloadT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The branch information for this event. Branches allow for organizing events
     * into different conversation threads or paths.</p>
     */
    inline const Branch& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Branch>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Branch>
    CreateEventRequest& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, AgentCore ignores
     * the request, but does not return an error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateEventRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memoryId;
    bool m_memoryIdHasBeenSet = false;

    Aws::String m_actorId;
    bool m_actorIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestamp{};
    bool m_eventTimestampHasBeenSet = false;

    Aws::Vector<PayloadType> m_payload;
    bool m_payloadHasBeenSet = false;

    Branch m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
