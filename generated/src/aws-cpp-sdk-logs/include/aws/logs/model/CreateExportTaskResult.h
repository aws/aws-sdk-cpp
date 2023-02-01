/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class CreateExportTaskResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateExportTaskResult();
    AWS_CLOUDWATCHLOGS_API CreateExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API CreateExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The ID of the export task.</p>
     */
    inline CreateExportTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline CreateExportTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export task.</p>
     */
    inline CreateExportTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
