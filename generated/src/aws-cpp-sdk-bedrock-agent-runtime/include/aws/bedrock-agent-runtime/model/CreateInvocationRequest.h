/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
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
  class CreateInvocationRequest : public BedrockAgentRuntimeRequest
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CreateInvocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInvocation"; }

    AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A description for the interactions in the invocation. For example, "User
     * asking about weather in Seattle".</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateInvocationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateInvocationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateInvocationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the invocation in UUID format.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }
    inline CreateInvocationRequest& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline CreateInvocationRequest& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline CreateInvocationRequest& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the associated session for the invocation. You can
     * specify either the session's <code>sessionId</code> or its Amazon Resource Name
     * (ARN). </p>
     */
    inline const Aws::String& GetSessionIdentifier() const{ return m_sessionIdentifier; }
    inline bool SessionIdentifierHasBeenSet() const { return m_sessionIdentifierHasBeenSet; }
    inline void SetSessionIdentifier(const Aws::String& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = value; }
    inline void SetSessionIdentifier(Aws::String&& value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier = std::move(value); }
    inline void SetSessionIdentifier(const char* value) { m_sessionIdentifierHasBeenSet = true; m_sessionIdentifier.assign(value); }
    inline CreateInvocationRequest& WithSessionIdentifier(const Aws::String& value) { SetSessionIdentifier(value); return *this;}
    inline CreateInvocationRequest& WithSessionIdentifier(Aws::String&& value) { SetSessionIdentifier(std::move(value)); return *this;}
    inline CreateInvocationRequest& WithSessionIdentifier(const char* value) { SetSessionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::String m_sessionIdentifier;
    bool m_sessionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
