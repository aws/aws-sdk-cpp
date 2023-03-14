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
  class StartMLEvaluationTaskRunResult
  {
  public:
    AWS_GLUE_API StartMLEvaluationTaskRunResult();
    AWS_GLUE_API StartMLEvaluationTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartMLEvaluationTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline StartMLEvaluationTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline StartMLEvaluationTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier associated with this run.</p>
     */
    inline StartMLEvaluationTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMLEvaluationTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMLEvaluationTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMLEvaluationTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_taskRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
