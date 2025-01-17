/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateInput.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateSessionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class RetrieveAndGenerateStreamRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveAndGenerateStream"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const RetrieveAndGenerateStreamHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const RetrieveAndGenerateStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline RetrieveAndGenerateStreamRequest& WithEventStreamHandler(const RetrieveAndGenerateStreamHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>Contains the query to be made to the knowledge base.</p>
     */
    inline const RetrieveAndGenerateInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const RetrieveAndGenerateInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(RetrieveAndGenerateInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline RetrieveAndGenerateStreamRequest& WithInput(const RetrieveAndGenerateInput& value) { SetInput(value); return *this;}
    inline RetrieveAndGenerateStreamRequest& WithInput(RetrieveAndGenerateInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the knowledge base query and retrieval process.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const RetrieveAndGenerateConfiguration& GetRetrieveAndGenerateConfiguration() const{ return m_retrieveAndGenerateConfiguration; }
    inline bool RetrieveAndGenerateConfigurationHasBeenSet() const { return m_retrieveAndGenerateConfigurationHasBeenSet; }
    inline void SetRetrieveAndGenerateConfiguration(const RetrieveAndGenerateConfiguration& value) { m_retrieveAndGenerateConfigurationHasBeenSet = true; m_retrieveAndGenerateConfiguration = value; }
    inline void SetRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfiguration&& value) { m_retrieveAndGenerateConfigurationHasBeenSet = true; m_retrieveAndGenerateConfiguration = std::move(value); }
    inline RetrieveAndGenerateStreamRequest& WithRetrieveAndGenerateConfiguration(const RetrieveAndGenerateConfiguration& value) { SetRetrieveAndGenerateConfiguration(value); return *this;}
    inline RetrieveAndGenerateStreamRequest& WithRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfiguration&& value) { SetRetrieveAndGenerateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the session with the knowledge base.</p>
     */
    inline const RetrieveAndGenerateSessionConfiguration& GetSessionConfiguration() const{ return m_sessionConfiguration; }
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }
    inline void SetSessionConfiguration(const RetrieveAndGenerateSessionConfiguration& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = value; }
    inline void SetSessionConfiguration(RetrieveAndGenerateSessionConfiguration&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::move(value); }
    inline RetrieveAndGenerateStreamRequest& WithSessionConfiguration(const RetrieveAndGenerateSessionConfiguration& value) { SetSessionConfiguration(value); return *this;}
    inline RetrieveAndGenerateStreamRequest& WithSessionConfiguration(RetrieveAndGenerateSessionConfiguration&& value) { SetSessionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session. When you first make a
     * <code>RetrieveAndGenerate</code> request, Amazon Bedrock automatically generates
     * this value. You must reuse this value for all subsequent requests in the same
     * conversational session. This value allows Amazon Bedrock to maintain context and
     * knowledge from previous interactions. You can't explicitly set the
     * <code>sessionId</code> yourself.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline RetrieveAndGenerateStreamRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline RetrieveAndGenerateStreamRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline RetrieveAndGenerateStreamRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    RetrieveAndGenerateInput m_input;
    bool m_inputHasBeenSet = false;

    RetrieveAndGenerateConfiguration m_retrieveAndGenerateConfiguration;
    bool m_retrieveAndGenerateConfigurationHasBeenSet = false;

    RetrieveAndGenerateSessionConfiguration m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
    RetrieveAndGenerateStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
