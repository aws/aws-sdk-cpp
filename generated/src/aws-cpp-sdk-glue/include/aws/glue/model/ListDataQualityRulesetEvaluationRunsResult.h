/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRulesetEvaluationRunDescription.h>
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
  class ListDataQualityRulesetEvaluationRunsResult
  {
  public:
    AWS_GLUE_API ListDataQualityRulesetEvaluationRunsResult() = default;
    AWS_GLUE_API ListDataQualityRulesetEvaluationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityRulesetEvaluationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataQualityRulesetEvaluationRunDescription</code> objects
     * representing data quality ruleset runs.</p>
     */
    inline const Aws::Vector<DataQualityRulesetEvaluationRunDescription>& GetRuns() const { return m_runs; }
    template<typename RunsT = Aws::Vector<DataQualityRulesetEvaluationRunDescription>>
    void SetRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs = std::forward<RunsT>(value); }
    template<typename RunsT = Aws::Vector<DataQualityRulesetEvaluationRunDescription>>
    ListDataQualityRulesetEvaluationRunsResult& WithRuns(RunsT&& value) { SetRuns(std::forward<RunsT>(value)); return *this;}
    template<typename RunsT = DataQualityRulesetEvaluationRunDescription>
    ListDataQualityRulesetEvaluationRunsResult& AddRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs.emplace_back(std::forward<RunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataQualityRulesetEvaluationRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataQualityRulesetEvaluationRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataQualityRulesetEvaluationRunDescription> m_runs;
    bool m_runsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
