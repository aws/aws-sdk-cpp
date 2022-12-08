/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class StartImportLabelsTaskRunResult
  {
  public:
    AWS_GLUE_API StartImportLabelsTaskRunResult();
    AWS_GLUE_API StartImportLabelsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartImportLabelsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StartImportLabelsTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline StartImportLabelsTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline StartImportLabelsTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}

  private:

    Aws::String m_taskRunId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
