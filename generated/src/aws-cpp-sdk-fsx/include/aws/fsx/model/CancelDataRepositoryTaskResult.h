/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryTaskLifecycle.h>
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
namespace FSx
{
namespace Model
{
  class CancelDataRepositoryTaskResult
  {
  public:
    AWS_FSX_API CancelDataRepositoryTaskResult() = default;
    AWS_FSX_API CancelDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CancelDataRepositoryTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline DataRepositoryTaskLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(DataRepositoryTaskLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline CancelDataRepositoryTaskResult& WithLifecycle(DataRepositoryTaskLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    CancelDataRepositoryTaskResult& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelDataRepositoryTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataRepositoryTaskLifecycle m_lifecycle{DataRepositoryTaskLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
