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
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API PutInvocationStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the invocation step in UUID format.</p>
     */
    inline const Aws::String& GetInvocationStepId() const { return m_invocationStepId; }
    template<typename InvocationStepIdT = Aws::String>
    void SetInvocationStepId(InvocationStepIdT&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::forward<InvocationStepIdT>(value); }
    template<typename InvocationStepIdT = Aws::String>
    PutInvocationStepResult& WithInvocationStepId(InvocationStepIdT&& value) { SetInvocationStepId(std::forward<InvocationStepIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutInvocationStepResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
