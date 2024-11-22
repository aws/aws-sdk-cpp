/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/HttpTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  class InvokeInlineAgentInitialResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentInitialResponse();
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvokeInlineAgentInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The MIME type of the input data in the request. The default value is
     * application/json. </p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline InvokeInlineAgentInitialResponse& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeInlineAgentInitialResponse& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeInlineAgentInitialResponse& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the session with the agent. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InvokeInlineAgentInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InvokeInlineAgentInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InvokeInlineAgentInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
