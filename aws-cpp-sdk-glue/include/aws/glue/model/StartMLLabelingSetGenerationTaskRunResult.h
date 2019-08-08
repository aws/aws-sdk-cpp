/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API StartMLLabelingSetGenerationTaskRunResult
  {
  public:
    StartMLLabelingSetGenerationTaskRunResult();
    StartMLLabelingSetGenerationTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartMLLabelingSetGenerationTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier that is associated with this task run.</p>
     */
    inline StartMLLabelingSetGenerationTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}

  private:

    Aws::String m_taskRunId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
