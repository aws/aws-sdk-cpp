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
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetInvocationStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The complete details of the requested invocation step.</p>
     */
    inline const InvocationStep& GetInvocationStep() const { return m_invocationStep; }
    template<typename InvocationStepT = InvocationStep>
    void SetInvocationStep(InvocationStepT&& value) { m_invocationStepHasBeenSet = true; m_invocationStep = std::forward<InvocationStepT>(value); }
    template<typename InvocationStepT = InvocationStep>
    GetInvocationStepResult& WithInvocationStep(InvocationStepT&& value) { SetInvocationStep(std::forward<InvocationStepT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvocationStepResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InvocationStep m_invocationStep;
    bool m_invocationStepHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
