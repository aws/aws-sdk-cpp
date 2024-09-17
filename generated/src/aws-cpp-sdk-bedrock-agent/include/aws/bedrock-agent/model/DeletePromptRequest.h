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
    AWS_BEDROCKAGENT_API DeletePromptRequest();

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
    inline const Aws::String& GetPromptIdentifier() const{ return m_promptIdentifier; }
    inline bool PromptIdentifierHasBeenSet() const { return m_promptIdentifierHasBeenSet; }
    inline void SetPromptIdentifier(const Aws::String& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = value; }
    inline void SetPromptIdentifier(Aws::String&& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = std::move(value); }
    inline void SetPromptIdentifier(const char* value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier.assign(value); }
    inline DeletePromptRequest& WithPromptIdentifier(const Aws::String& value) { SetPromptIdentifier(value); return *this;}
    inline DeletePromptRequest& WithPromptIdentifier(Aws::String&& value) { SetPromptIdentifier(std::move(value)); return *this;}
    inline DeletePromptRequest& WithPromptIdentifier(const char* value) { SetPromptIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the prompt to delete. To delete the prompt, omit this
     * field.</p>
     */
    inline const Aws::String& GetPromptVersion() const{ return m_promptVersion; }
    inline bool PromptVersionHasBeenSet() const { return m_promptVersionHasBeenSet; }
    inline void SetPromptVersion(const Aws::String& value) { m_promptVersionHasBeenSet = true; m_promptVersion = value; }
    inline void SetPromptVersion(Aws::String&& value) { m_promptVersionHasBeenSet = true; m_promptVersion = std::move(value); }
    inline void SetPromptVersion(const char* value) { m_promptVersionHasBeenSet = true; m_promptVersion.assign(value); }
    inline DeletePromptRequest& WithPromptVersion(const Aws::String& value) { SetPromptVersion(value); return *this;}
    inline DeletePromptRequest& WithPromptVersion(Aws::String&& value) { SetPromptVersion(std::move(value)); return *this;}
    inline DeletePromptRequest& WithPromptVersion(const char* value) { SetPromptVersion(value); return *this;}
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
