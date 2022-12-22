/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSetTaskLifecycle.h>
#include <aws/m2/model/DataSetImportSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetDataSetImportTaskResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult();
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the task.</p>
     */
    inline const DataSetTaskLifecycle& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(const DataSetTaskLifecycle& value) { m_status = value; }

    /**
     * <p>The status of the task.</p>
     */
    inline void SetStatus(DataSetTaskLifecycle&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task.</p>
     */
    inline GetDataSetImportTaskResult& WithStatus(const DataSetTaskLifecycle& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task.</p>
     */
    inline GetDataSetImportTaskResult& WithStatus(DataSetTaskLifecycle&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A summary of the status of the task.</p>
     */
    inline const DataSetImportSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>A summary of the status of the task.</p>
     */
    inline void SetSummary(const DataSetImportSummary& value) { m_summary = value; }

    /**
     * <p>A summary of the status of the task.</p>
     */
    inline void SetSummary(DataSetImportSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>A summary of the status of the task.</p>
     */
    inline GetDataSetImportTaskResult& WithSummary(const DataSetImportSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>A summary of the status of the task.</p>
     */
    inline GetDataSetImportTaskResult& WithSummary(DataSetImportSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>The task identifier.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task identifier.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The task identifier.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The task identifier.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The task identifier.</p>
     */
    inline GetDataSetImportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task identifier.</p>
     */
    inline GetDataSetImportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task identifier.</p>
     */
    inline GetDataSetImportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    DataSetTaskLifecycle m_status;

    DataSetImportSummary m_summary;

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
