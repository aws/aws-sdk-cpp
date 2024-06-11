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
    AWS_GLUE_API CancelMLTaskRunResult();
    AWS_GLUE_API CancelMLTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CancelMLTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }
    inline CancelMLTaskRunResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}
    inline CancelMLTaskRunResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}
    inline CancelMLTaskRunResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }
    inline CancelMLTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}
    inline CancelMLTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}
    inline CancelMLTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }
    inline CancelMLTaskRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}
    inline CancelMLTaskRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelMLTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelMLTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelMLTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformId;

    Aws::String m_taskRunId;

    TaskStatusType m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
