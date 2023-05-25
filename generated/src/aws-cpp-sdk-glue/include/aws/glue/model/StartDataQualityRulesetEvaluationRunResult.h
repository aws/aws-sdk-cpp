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
  class StartDataQualityRulesetEvaluationRunResult
  {
  public:
    AWS_GLUE_API StartDataQualityRulesetEvaluationRunResult();
    AWS_GLUE_API StartDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartDataQualityRulesetEvaluationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline StartDataQualityRulesetEvaluationRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDataQualityRulesetEvaluationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDataQualityRulesetEvaluationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDataQualityRulesetEvaluationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_runId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
