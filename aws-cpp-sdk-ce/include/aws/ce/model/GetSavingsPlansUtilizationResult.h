/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SavingsPlansUtilizationAggregates.h>
#include <aws/ce/model/SavingsPlansUtilizationByTime.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlansUtilizationResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult();
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline const Aws::Vector<SavingsPlansUtilizationByTime>& GetSavingsPlansUtilizationsByTime() const{ return m_savingsPlansUtilizationsByTime; }

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline void SetSavingsPlansUtilizationsByTime(const Aws::Vector<SavingsPlansUtilizationByTime>& value) { m_savingsPlansUtilizationsByTime = value; }

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline void SetSavingsPlansUtilizationsByTime(Aws::Vector<SavingsPlansUtilizationByTime>&& value) { m_savingsPlansUtilizationsByTime = std::move(value); }

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& WithSavingsPlansUtilizationsByTime(const Aws::Vector<SavingsPlansUtilizationByTime>& value) { SetSavingsPlansUtilizationsByTime(value); return *this;}

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& WithSavingsPlansUtilizationsByTime(Aws::Vector<SavingsPlansUtilizationByTime>&& value) { SetSavingsPlansUtilizationsByTime(std::move(value)); return *this;}

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& AddSavingsPlansUtilizationsByTime(const SavingsPlansUtilizationByTime& value) { m_savingsPlansUtilizationsByTime.push_back(value); return *this; }

    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& AddSavingsPlansUtilizationsByTime(SavingsPlansUtilizationByTime&& value) { m_savingsPlansUtilizationsByTime.push_back(std::move(value)); return *this; }


    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline const SavingsPlansUtilizationAggregates& GetTotal() const{ return m_total; }

    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline void SetTotal(const SavingsPlansUtilizationAggregates& value) { m_total = value; }

    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline void SetTotal(SavingsPlansUtilizationAggregates&& value) { m_total = std::move(value); }

    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& WithTotal(const SavingsPlansUtilizationAggregates& value) { SetTotal(value); return *this;}

    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline GetSavingsPlansUtilizationResult& WithTotal(SavingsPlansUtilizationAggregates&& value) { SetTotal(std::move(value)); return *this;}

  private:

    Aws::Vector<SavingsPlansUtilizationByTime> m_savingsPlansUtilizationsByTime;

    SavingsPlansUtilizationAggregates m_total;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
