/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SavingsPlansUtilizationAggregates.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult() = default;
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of cost/commitment that you used your Savings Plans. You can use
     * it to specify date ranges.</p>
     */
    inline const Aws::Vector<SavingsPlansUtilizationByTime>& GetSavingsPlansUtilizationsByTime() const { return m_savingsPlansUtilizationsByTime; }
    template<typename SavingsPlansUtilizationsByTimeT = Aws::Vector<SavingsPlansUtilizationByTime>>
    void SetSavingsPlansUtilizationsByTime(SavingsPlansUtilizationsByTimeT&& value) { m_savingsPlansUtilizationsByTimeHasBeenSet = true; m_savingsPlansUtilizationsByTime = std::forward<SavingsPlansUtilizationsByTimeT>(value); }
    template<typename SavingsPlansUtilizationsByTimeT = Aws::Vector<SavingsPlansUtilizationByTime>>
    GetSavingsPlansUtilizationResult& WithSavingsPlansUtilizationsByTime(SavingsPlansUtilizationsByTimeT&& value) { SetSavingsPlansUtilizationsByTime(std::forward<SavingsPlansUtilizationsByTimeT>(value)); return *this;}
    template<typename SavingsPlansUtilizationsByTimeT = SavingsPlansUtilizationByTime>
    GetSavingsPlansUtilizationResult& AddSavingsPlansUtilizationsByTime(SavingsPlansUtilizationsByTimeT&& value) { m_savingsPlansUtilizationsByTimeHasBeenSet = true; m_savingsPlansUtilizationsByTime.emplace_back(std::forward<SavingsPlansUtilizationsByTimeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total amount of cost/commitment that you used your Savings Plans,
     * regardless of date ranges.</p>
     */
    inline const SavingsPlansUtilizationAggregates& GetTotal() const { return m_total; }
    template<typename TotalT = SavingsPlansUtilizationAggregates>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = SavingsPlansUtilizationAggregates>
    GetSavingsPlansUtilizationResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSavingsPlansUtilizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SavingsPlansUtilizationByTime> m_savingsPlansUtilizationsByTime;
    bool m_savingsPlansUtilizationsByTimeHasBeenSet = false;

    SavingsPlansUtilizationAggregates m_total;
    bool m_totalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
