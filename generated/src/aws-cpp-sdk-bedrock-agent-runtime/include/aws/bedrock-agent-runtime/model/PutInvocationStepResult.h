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
  class PutInvocationStepResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult();
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the invocation step in UUID format.</p>
     */
    inline const Aws::String& GetInvocationStepId() const{ return m_invocationStepId; }
    inline void SetInvocationStepId(const Aws::String& value) { m_invocationStepId = value; }
    inline void SetInvocationStepId(Aws::String&& value) { m_invocationStepId = std::move(value); }
    inline void SetInvocationStepId(const char* value) { m_invocationStepId.assign(value); }
    inline PutInvocationStepResult& WithInvocationStepId(const Aws::String& value) { SetInvocationStepId(value); return *this;}
    inline PutInvocationStepResult& WithInvocationStepId(Aws::String&& value) { SetInvocationStepId(std::move(value)); return *this;}
    inline PutInvocationStepResult& WithInvocationStepId(const char* value) { SetInvocationStepId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutInvocationStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutInvocationStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutInvocationStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationStepId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
