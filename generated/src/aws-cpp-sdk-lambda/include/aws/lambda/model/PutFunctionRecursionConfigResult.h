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
  class PutFunctionRecursionConfigResult
  {
  public:
    AWS_LAMBDA_API PutFunctionRecursionConfigResult() = default;
    AWS_LAMBDA_API PutFunctionRecursionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API PutFunctionRecursionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of your function's recursive loop detection configuration.</p>
     * <p>When this value is set to <code>Allow</code>and Lambda detects your function
     * being invoked as part of a recursive loop, it doesn't take any action.</p>
     * <p>When this value is set to <code>Terminate</code> and Lambda detects your
     * function being invoked as part of a recursive loop, it stops your function being
     * invoked and notifies you. </p>
     */
    inline RecursiveLoop GetRecursiveLoop() const { return m_recursiveLoop; }
    inline void SetRecursiveLoop(RecursiveLoop value) { m_recursiveLoopHasBeenSet = true; m_recursiveLoop = value; }
    inline PutFunctionRecursionConfigResult& WithRecursiveLoop(RecursiveLoop value) { SetRecursiveLoop(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutFunctionRecursionConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
