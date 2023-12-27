/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class InvokeAgentInitialResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentInitialResponse();
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvokeAgentInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>streaming response mimetype of the model</p>
     */
    inline InvokeAgentInitialResponse& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
