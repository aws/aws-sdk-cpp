/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SavingsPlansUtilizationAggregates.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SavingsPlansUtilizationDetail.h>
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
  class GetSavingsPlansUtilizationDetailsResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult() = default;
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline const Aws::Vector<SavingsPlansUtilizationDetail>& GetSavingsPlansUtilizationDetails() const { return m_savingsPlansUtilizationDetails; }
    template<typename SavingsPlansUtilizationDetailsT = Aws::Vector<SavingsPlansUtilizationDetail>>
    void SetSavingsPlansUtilizationDetails(SavingsPlansUtilizationDetailsT&& value) { m_savingsPlansUtilizationDetailsHasBeenSet = true; m_savingsPlansUtilizationDetails = std::forward<SavingsPlansUtilizationDetailsT>(value); }
    template<typename SavingsPlansUtilizationDetailsT = Aws::Vector<SavingsPlansUtilizationDetail>>
    GetSavingsPlansUtilizationDetailsResult& WithSavingsPlansUtilizationDetails(SavingsPlansUtilizationDetailsT&& value) { SetSavingsPlansUtilizationDetails(std::forward<SavingsPlansUtilizationDetailsT>(value)); return *this;}
    template<typename SavingsPlansUtilizationDetailsT = SavingsPlansUtilizationDetail>
    GetSavingsPlansUtilizationDetailsResult& AddSavingsPlansUtilizationDetails(SavingsPlansUtilizationDetailsT&& value) { m_savingsPlansUtilizationDetailsHasBeenSet = true; m_savingsPlansUtilizationDetails.emplace_back(std::forward<SavingsPlansUtilizationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline const SavingsPlansUtilizationAggregates& GetTotal() const { return m_total; }
    template<typename TotalT = SavingsPlansUtilizationAggregates>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = SavingsPlansUtilizationAggregates>
    GetSavingsPlansUtilizationDetailsResult& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    GetSavingsPlansUtilizationDetailsResult& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSavingsPlansUtilizationDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSavingsPlansUtilizationDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SavingsPlansUtilizationDetail> m_savingsPlansUtilizationDetails;
    bool m_savingsPlansUtilizationDetailsHasBeenSet = false;

    SavingsPlansUtilizationAggregates m_total;
    bool m_totalHasBeenSet = false;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
