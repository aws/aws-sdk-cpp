/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/ToolName.h>
#include <aws/bedrock-agentcore/model/ToolArguments.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class InvokeCodeInterpreterRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API InvokeCodeInterpreterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeCodeInterpreter"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeCodeInterpreterHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeCodeInterpreterHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeCodeInterpreterRequest& WithEventStreamHandler(const InvokeCodeInterpreterHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The unique identifier of the code interpreter associated with the session.
     * This must match the identifier used when creating the session with
     * <code>StartCodeInterpreterSession</code>.</p>
     */
    inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
    inline bool CodeInterpreterIdentifierHasBeenSet() const { return m_codeInterpreterIdentifierHasBeenSet; }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { m_codeInterpreterIdentifierHasBeenSet = true; m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value); }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    InvokeCodeInterpreterRequest& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the code interpreter session to use. This must be an
     * active session created with <code>StartCodeInterpreterSession</code>. If the
     * session has expired or been stopped, the request will fail.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InvokeCodeInterpreterRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the code interpreter to invoke.</p>
     */
    inline ToolName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ToolName value) { m_nameHasBeenSet = true; m_name = value; }
    inline InvokeCodeInterpreterRequest& WithName(ToolName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arguments for the code interpreter. This includes the code to execute and
     * any additional parameters such as the programming language, whether to clear the
     * execution context, and other execution options. The structure of this parameter
     * depends on the specific code interpreter being used.</p>
     */
    inline const ToolArguments& GetArguments() const { return m_arguments; }
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }
    template<typename ArgumentsT = ToolArguments>
    void SetArguments(ArgumentsT&& value) { m_argumentsHasBeenSet = true; m_arguments = std::forward<ArgumentsT>(value); }
    template<typename ArgumentsT = ToolArguments>
    InvokeCodeInterpreterRequest& WithArguments(ArgumentsT&& value) { SetArguments(std::forward<ArgumentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterIdentifier;
    bool m_codeInterpreterIdentifierHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    ToolName m_name{ToolName::NOT_SET};
    bool m_nameHasBeenSet = false;

    ToolArguments m_arguments;
    bool m_argumentsHasBeenSet = false;
    InvokeCodeInterpreterHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
