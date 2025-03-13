/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ExecutionStatistics.h>
#include <aws/lakeformation/model/PlanningStatistics.h>
#include <aws/core/utils/DateTime.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetQueryStatisticsResult
  {
  public:
    AWS_LAKEFORMATION_API GetQueryStatisticsResult() = default;
    AWS_LAKEFORMATION_API GetQueryStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetQueryStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline const ExecutionStatistics& GetExecutionStatistics() const { return m_executionStatistics; }
    template<typename ExecutionStatisticsT = ExecutionStatistics>
    void SetExecutionStatistics(ExecutionStatisticsT&& value) { m_executionStatisticsHasBeenSet = true; m_executionStatistics = std::forward<ExecutionStatisticsT>(value); }
    template<typename ExecutionStatisticsT = ExecutionStatistics>
    GetQueryStatisticsResult& WithExecutionStatistics(ExecutionStatisticsT&& value) { SetExecutionStatistics(std::forward<ExecutionStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline const PlanningStatistics& GetPlanningStatistics() const { return m_planningStatistics; }
    template<typename PlanningStatisticsT = PlanningStatistics>
    void SetPlanningStatistics(PlanningStatisticsT&& value) { m_planningStatisticsHasBeenSet = true; m_planningStatistics = std::forward<PlanningStatisticsT>(value); }
    template<typename PlanningStatisticsT = PlanningStatistics>
    GetQueryStatisticsResult& WithPlanningStatistics(PlanningStatisticsT&& value) { SetPlanningStatistics(std::forward<PlanningStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the query was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetQuerySubmissionTime() const { return m_querySubmissionTime; }
    template<typename QuerySubmissionTimeT = Aws::Utils::DateTime>
    void SetQuerySubmissionTime(QuerySubmissionTimeT&& value) { m_querySubmissionTimeHasBeenSet = true; m_querySubmissionTime = std::forward<QuerySubmissionTimeT>(value); }
    template<typename QuerySubmissionTimeT = Aws::Utils::DateTime>
    GetQueryStatisticsResult& WithQuerySubmissionTime(QuerySubmissionTimeT&& value) { SetQuerySubmissionTime(std::forward<QuerySubmissionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExecutionStatistics m_executionStatistics;
    bool m_executionStatisticsHasBeenSet = false;

    PlanningStatistics m_planningStatistics;
    bool m_planningStatisticsHasBeenSet = false;

    Aws::Utils::DateTime m_querySubmissionTime{};
    bool m_querySubmissionTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
