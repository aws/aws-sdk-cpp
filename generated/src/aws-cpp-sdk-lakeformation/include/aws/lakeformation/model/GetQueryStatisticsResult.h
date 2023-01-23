/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ExecutionStatistics.h>
#include <aws/lakeformation/model/PlanningStatistics.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_LAKEFORMATION_API GetQueryStatisticsResult();
    AWS_LAKEFORMATION_API GetQueryStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetQueryStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline const ExecutionStatistics& GetExecutionStatistics() const{ return m_executionStatistics; }

    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline void SetExecutionStatistics(const ExecutionStatistics& value) { m_executionStatistics = value; }

    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline void SetExecutionStatistics(ExecutionStatistics&& value) { m_executionStatistics = std::move(value); }

    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline GetQueryStatisticsResult& WithExecutionStatistics(const ExecutionStatistics& value) { SetExecutionStatistics(value); return *this;}

    /**
     * <p>An <code>ExecutionStatistics</code> structure containing execution
     * statistics.</p>
     */
    inline GetQueryStatisticsResult& WithExecutionStatistics(ExecutionStatistics&& value) { SetExecutionStatistics(std::move(value)); return *this;}


    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline const PlanningStatistics& GetPlanningStatistics() const{ return m_planningStatistics; }

    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline void SetPlanningStatistics(const PlanningStatistics& value) { m_planningStatistics = value; }

    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline void SetPlanningStatistics(PlanningStatistics&& value) { m_planningStatistics = std::move(value); }

    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline GetQueryStatisticsResult& WithPlanningStatistics(const PlanningStatistics& value) { SetPlanningStatistics(value); return *this;}

    /**
     * <p>A <code>PlanningStatistics</code> structure containing query planning
     * statistics.</p>
     */
    inline GetQueryStatisticsResult& WithPlanningStatistics(PlanningStatistics&& value) { SetPlanningStatistics(std::move(value)); return *this;}


    /**
     * <p>The time that the query was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetQuerySubmissionTime() const{ return m_querySubmissionTime; }

    /**
     * <p>The time that the query was submitted.</p>
     */
    inline void SetQuerySubmissionTime(const Aws::Utils::DateTime& value) { m_querySubmissionTime = value; }

    /**
     * <p>The time that the query was submitted.</p>
     */
    inline void SetQuerySubmissionTime(Aws::Utils::DateTime&& value) { m_querySubmissionTime = std::move(value); }

    /**
     * <p>The time that the query was submitted.</p>
     */
    inline GetQueryStatisticsResult& WithQuerySubmissionTime(const Aws::Utils::DateTime& value) { SetQuerySubmissionTime(value); return *this;}

    /**
     * <p>The time that the query was submitted.</p>
     */
    inline GetQueryStatisticsResult& WithQuerySubmissionTime(Aws::Utils::DateTime&& value) { SetQuerySubmissionTime(std::move(value)); return *this;}

  private:

    ExecutionStatistics m_executionStatistics;

    PlanningStatistics m_planningStatistics;

    Aws::Utils::DateTime m_querySubmissionTime;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
