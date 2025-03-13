/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRuleRecommendationRunDescription.h>
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
  class ListDataQualityRuleRecommendationRunsResult
  {
  public:
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult() = default;
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline const Aws::Vector<DataQualityRuleRecommendationRunDescription>& GetRuns() const { return m_runs; }
    template<typename RunsT = Aws::Vector<DataQualityRuleRecommendationRunDescription>>
    void SetRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs = std::forward<RunsT>(value); }
    template<typename RunsT = Aws::Vector<DataQualityRuleRecommendationRunDescription>>
    ListDataQualityRuleRecommendationRunsResult& WithRuns(RunsT&& value) { SetRuns(std::forward<RunsT>(value)); return *this;}
    template<typename RunsT = DataQualityRuleRecommendationRunDescription>
    ListDataQualityRuleRecommendationRunsResult& AddRuns(RunsT&& value) { m_runsHasBeenSet = true; m_runs.emplace_back(std::forward<RunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataQualityRuleRecommendationRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataQualityRuleRecommendationRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataQualityRuleRecommendationRunDescription> m_runs;
    bool m_runsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
