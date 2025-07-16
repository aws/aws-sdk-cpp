/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartCodeInterpreterSessionRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API StartCodeInterpreterSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCodeInterpreterSession"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the code interpreter to use for this session. This
     * identifier specifies which code interpreter environment to initialize for the
     * session.</p>
     */
    inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
    inline bool CodeInterpreterIdentifierHasBeenSet() const { return m_codeInterpreterIdentifierHasBeenSet; }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { m_codeInterpreterIdentifierHasBeenSet = true; m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value); }
    template<typename CodeInterpreterIdentifierT = Aws::String>
    StartCodeInterpreterSessionRequest& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) { SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the code interpreter session. This name helps you identify and
     * manage the session. The name does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartCodeInterpreterSessionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in seconds after which the session automatically terminates if there
     * is no activity. The default value is 3600 seconds (1 hour). The minimum allowed
     * value is 60 seconds, and the maximum allowed value is 28800 seconds (8
     * hours).</p>
     */
    inline int GetSessionTimeoutSeconds() const { return m_sessionTimeoutSeconds; }
    inline bool SessionTimeoutSecondsHasBeenSet() const { return m_sessionTimeoutSecondsHasBeenSet; }
    inline void SetSessionTimeoutSeconds(int value) { m_sessionTimeoutSecondsHasBeenSet = true; m_sessionTimeoutSeconds = value; }
    inline StartCodeInterpreterSessionRequest& WithSessionTimeoutSeconds(int value) { SetSessionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. This parameter helps prevent
     * the creation of duplicate sessions if there are temporary network issues.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartCodeInterpreterSessionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterIdentifier;
    bool m_codeInterpreterIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_sessionTimeoutSeconds{0};
    bool m_sessionTimeoutSecondsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
