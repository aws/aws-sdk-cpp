/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InvocationStep.h>
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
  class GetInvocationStepResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult();
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The complete details of the requested invocation step.</p>
     */
    inline const InvocationStep& GetInvocationStep() const{ return m_invocationStep; }
    inline void SetInvocationStep(const InvocationStep& value) { m_invocationStep = value; }
    inline void SetInvocationStep(InvocationStep&& value) { m_invocationStep = std::move(value); }
    inline GetInvocationStepResult& WithInvocationStep(const InvocationStep& value) { SetInvocationStep(value); return *this;}
    inline GetInvocationStepResult& WithInvocationStep(InvocationStep&& value) { SetInvocationStep(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInvocationStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInvocationStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInvocationStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InvocationStep m_invocationStep;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
