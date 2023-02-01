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


    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline CancelMLTaskRunResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline CancelMLTaskRunResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline CancelMLTaskRunResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline CancelMLTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline CancelMLTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline CancelMLTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}


    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status for this run.</p>
     */
    inline CancelMLTaskRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for this run.</p>
     */
    inline CancelMLTaskRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_transformId;

    Aws::String m_taskRunId;

    TaskStatusType m_status;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
