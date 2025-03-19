/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  class PutLifecycleEventHookExecutionStatusResult
  {
  public:
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult() = default;
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline const Aws::String& GetLifecycleEventHookExecutionId() const { return m_lifecycleEventHookExecutionId; }
    template<typename LifecycleEventHookExecutionIdT = Aws::String>
    void SetLifecycleEventHookExecutionId(LifecycleEventHookExecutionIdT&& value) { m_lifecycleEventHookExecutionIdHasBeenSet = true; m_lifecycleEventHookExecutionId = std::forward<LifecycleEventHookExecutionIdT>(value); }
    template<typename LifecycleEventHookExecutionIdT = Aws::String>
    PutLifecycleEventHookExecutionStatusResult& WithLifecycleEventHookExecutionId(LifecycleEventHookExecutionIdT&& value) { SetLifecycleEventHookExecutionId(std::forward<LifecycleEventHookExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutLifecycleEventHookExecutionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleEventHookExecutionId;
    bool m_lifecycleEventHookExecutionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
