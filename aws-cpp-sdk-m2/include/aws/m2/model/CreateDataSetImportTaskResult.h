/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
  class CreateDataSetImportTaskResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CreateDataSetImportTaskResult();
    AWS_MAINFRAMEMODERNIZATION_API CreateDataSetImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API CreateDataSetImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline CreateDataSetImportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline CreateDataSetImportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task identifier. This operation is asynchronous. Use this identifier with
     * the <a>GetDataSetImportTask</a> operation to obtain the status of this task.</p>
     */
    inline CreateDataSetImportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
