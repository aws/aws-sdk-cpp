/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TaskStatusType.h>
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
namespace Glue
{
namespace Model
{
  class CancelMLTaskRunResult
  {
  public:
    AWS_GLUE_API CancelMLTaskRunResult() = default;
    AWS_GLUE_API CancelMLTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CancelMLTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const { return m_transformId; }
    template<typename TransformIdT = Aws::String>
    void SetTransformId(TransformIdT&& value) { m_transformIdHasBeenSet = true; m_transformId = std::forward<TransformIdT>(value); }
    template<typename TransformIdT = Aws::String>
    CancelMLTaskRunResult& WithTransformId(TransformIdT&& value) { SetTransformId(std::forward<TransformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const { return m_taskRunId; }
    template<typename TaskRunIdT = Aws::String>
    void SetTaskRunId(TaskRunIdT&& value) { m_taskRunIdHasBeenSet = true; m_taskRunId = std::forward<TaskRunIdT>(value); }
    template<typename TaskRunIdT = Aws::String>
    CancelMLTaskRunResult& WithTaskRunId(TaskRunIdT&& value) { SetTaskRunId(std::forward<TaskRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline TaskStatusType GetStatus() const { return m_status; }
    inline void SetStatus(TaskStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline CancelMLTaskRunResult& WithStatus(TaskStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelMLTaskRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_taskRunId;
    bool m_taskRunIdHasBeenSet = false;

    TaskStatusType m_status{TaskStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
