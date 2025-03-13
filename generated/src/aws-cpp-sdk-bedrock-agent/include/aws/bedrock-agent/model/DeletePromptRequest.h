/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class DeletePromptRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeletePromptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePrompt"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the prompt.</p>
     */
    inline const Aws::String& GetPromptIdentifier() const { return m_promptIdentifier; }
    inline bool PromptIdentifierHasBeenSet() const { return m_promptIdentifierHasBeenSet; }
    template<typename PromptIdentifierT = Aws::String>
    void SetPromptIdentifier(PromptIdentifierT&& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = std::forward<PromptIdentifierT>(value); }
    template<typename PromptIdentifierT = Aws::String>
    DeletePromptRequest& WithPromptIdentifier(PromptIdentifierT&& value) { SetPromptIdentifier(std::forward<PromptIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the prompt to delete. To delete the prompt, omit this
     * field.</p>
     */
    inline const Aws::String& GetPromptVersion() const { return m_promptVersion; }
    inline bool PromptVersionHasBeenSet() const { return m_promptVersionHasBeenSet; }
    template<typename PromptVersionT = Aws::String>
    void SetPromptVersion(PromptVersionT&& value) { m_promptVersionHasBeenSet = true; m_promptVersion = std::forward<PromptVersionT>(value); }
    template<typename PromptVersionT = Aws::String>
    DeletePromptRequest& WithPromptVersion(PromptVersionT&& value) { SetPromptVersion(std::forward<PromptVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptIdentifier;
    bool m_promptIdentifierHasBeenSet = false;

    Aws::String m_promptVersion;
    bool m_promptVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
