/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/RecursiveLoop.h>
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
namespace Lambda
{
namespace Model
{
  class GetFunctionRecursionConfigResult
  {
  public:
    AWS_LAMBDA_API GetFunctionRecursionConfigResult() = default;
    AWS_LAMBDA_API GetFunctionRecursionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetFunctionRecursionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If your function's recursive loop detection configuration is
     * <code>Allow</code>, Lambda doesn't take any action when it detects your function
     * being invoked as part of a recursive loop.</p> <p>If your function's recursive
     * loop detection configuration is <code>Terminate</code>, Lambda stops your
     * function being invoked and notifies you when it detects your function being
     * invoked as part of a recursive loop.</p> <p>By default, Lambda sets your
     * function's configuration to <code>Terminate</code>. You can update this
     * configuration using the <a>PutFunctionRecursionConfig</a> action.</p>
     */
    inline RecursiveLoop GetRecursiveLoop() const { return m_recursiveLoop; }
    inline void SetRecursiveLoop(RecursiveLoop value) { m_recursiveLoopHasBeenSet = true; m_recursiveLoop = value; }
    inline GetFunctionRecursionConfigResult& WithRecursiveLoop(RecursiveLoop value) { SetRecursiveLoop(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFunctionRecursionConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecursiveLoop m_recursiveLoop{RecursiveLoop::NOT_SET};
    bool m_recursiveLoopHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
