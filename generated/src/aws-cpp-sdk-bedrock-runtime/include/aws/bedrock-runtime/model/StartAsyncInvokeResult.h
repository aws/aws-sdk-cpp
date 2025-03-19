/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
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
namespace BedrockRuntime
{
namespace Model
{
  class StartAsyncInvokeResult
  {
  public:
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult() = default;
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the invocation.</p>
     */
    inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
    template<typename InvocationArnT = Aws::String>
    void SetInvocationArn(InvocationArnT&& value) { m_invocationArnHasBeenSet = true; m_invocationArn = std::forward<InvocationArnT>(value); }
    template<typename InvocationArnT = Aws::String>
    StartAsyncInvokeResult& WithInvocationArn(InvocationArnT&& value) { SetInvocationArn(std::forward<InvocationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartAsyncInvokeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;
    bool m_invocationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
