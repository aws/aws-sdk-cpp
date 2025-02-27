/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{
  class CreateInvocationResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API CreateInvocationResult();
    AWS_BEDROCKAGENTRUNTIME_API CreateInvocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API CreateInvocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp for when the invocation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateInvocationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateInvocationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the invocation.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationId.assign(value); }
    inline CreateInvocationResult& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline CreateInvocationResult& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline CreateInvocationResult& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session associated with the invocation.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline CreateInvocationResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline CreateInvocationResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline CreateInvocationResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateInvocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateInvocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateInvocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_invocationId;

    Aws::String m_sessionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
