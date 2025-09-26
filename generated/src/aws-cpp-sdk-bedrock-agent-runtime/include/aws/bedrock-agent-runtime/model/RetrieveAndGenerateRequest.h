/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateInput.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateSessionConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   */
  class RetrieveAndGenerateRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveAndGenerate"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the session. When you first make a
     * <code>RetrieveAndGenerate</code> request, Amazon Bedrock automatically generates
     * this value. You must reuse this value for all subsequent requests in the same
     * conversational session. This value allows Amazon Bedrock to maintain context and
     * knowledge from previous interactions. You can't explicitly set the
     * <code>sessionId</code> yourself.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    RetrieveAndGenerateRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the query to be made to the knowledge base.</p>
     */
    inline const RetrieveAndGenerateInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = RetrieveAndGenerateInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = RetrieveAndGenerateInput>
    RetrieveAndGenerateRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configurations for the knowledge base query and retrieval process.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
     * configurations</a>.</p>
     */
    inline const RetrieveAndGenerateConfiguration& GetRetrieveAndGenerateConfiguration() const { return m_retrieveAndGenerateConfiguration; }
    inline bool RetrieveAndGenerateConfigurationHasBeenSet() const { return m_retrieveAndGenerateConfigurationHasBeenSet; }
    template<typename RetrieveAndGenerateConfigurationT = RetrieveAndGenerateConfiguration>
    void SetRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfigurationT&& value) { m_retrieveAndGenerateConfigurationHasBeenSet = true; m_retrieveAndGenerateConfiguration = std::forward<RetrieveAndGenerateConfigurationT>(value); }
    template<typename RetrieveAndGenerateConfigurationT = RetrieveAndGenerateConfiguration>
    RetrieveAndGenerateRequest& WithRetrieveAndGenerateConfiguration(RetrieveAndGenerateConfigurationT&& value) { SetRetrieveAndGenerateConfiguration(std::forward<RetrieveAndGenerateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the session with the knowledge base.</p>
     */
    inline const RetrieveAndGenerateSessionConfiguration& GetSessionConfiguration() const { return m_sessionConfiguration; }
    inline bool SessionConfigurationHasBeenSet() const { return m_sessionConfigurationHasBeenSet; }
    template<typename SessionConfigurationT = RetrieveAndGenerateSessionConfiguration>
    void SetSessionConfiguration(SessionConfigurationT&& value) { m_sessionConfigurationHasBeenSet = true; m_sessionConfiguration = std::forward<SessionConfigurationT>(value); }
    template<typename SessionConfigurationT = RetrieveAndGenerateSessionConfiguration>
    RetrieveAndGenerateRequest& WithSessionConfiguration(SessionConfigurationT&& value) { SetSessionConfiguration(std::forward<SessionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    RetrieveAndGenerateInput m_input;
    bool m_inputHasBeenSet = false;

    RetrieveAndGenerateConfiguration m_retrieveAndGenerateConfiguration;
    bool m_retrieveAndGenerateConfigurationHasBeenSet = false;

    RetrieveAndGenerateSessionConfiguration m_sessionConfiguration;
    bool m_sessionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
