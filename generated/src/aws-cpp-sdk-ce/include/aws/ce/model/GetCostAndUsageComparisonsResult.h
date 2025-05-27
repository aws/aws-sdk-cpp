/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAndUsageComparison.h>
#include <aws/ce/model/ComparisonMetricValue.h>
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
  class GetCostAndUsageComparisonsResult
  {
  public:
    AWS_COSTEXPLORER_API GetCostAndUsageComparisonsResult() = default;
    AWS_COSTEXPLORER_API GetCostAndUsageComparisonsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostAndUsageComparisonsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of comparison results showing cost and usage metrics between
     * <code>BaselineTimePeriod</code> and <code>ComparisonTimePeriod</code>.</p>
     */
    inline const Aws::Vector<CostAndUsageComparison>& GetCostAndUsageComparisons() const { return m_costAndUsageComparisons; }
    template<typename CostAndUsageComparisonsT = Aws::Vector<CostAndUsageComparison>>
    void SetCostAndUsageComparisons(CostAndUsageComparisonsT&& value) { m_costAndUsageComparisonsHasBeenSet = true; m_costAndUsageComparisons = std::forward<CostAndUsageComparisonsT>(value); }
    template<typename CostAndUsageComparisonsT = Aws::Vector<CostAndUsageComparison>>
    GetCostAndUsageComparisonsResult& WithCostAndUsageComparisons(CostAndUsageComparisonsT&& value) { SetCostAndUsageComparisons(std::forward<CostAndUsageComparisonsT>(value)); return *this;}
    template<typename CostAndUsageComparisonsT = CostAndUsageComparison>
    GetCostAndUsageComparisonsResult& AddCostAndUsageComparisons(CostAndUsageComparisonsT&& value) { m_costAndUsageComparisonsHasBeenSet = true; m_costAndUsageComparisons.emplace_back(std::forward<CostAndUsageComparisonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A summary of the total cost and usage, comparing amounts between
     * <code>BaselineTimePeriod</code> and <code>ComparisonTimePeriod</code> and their
     * differences. This total represents the aggregate total across all paginated
     * results, if the response spans multiple pages.</p>
     */
    inline const Aws::Map<Aws::String, ComparisonMetricValue>& GetTotalCostAndUsage() const { return m_totalCostAndUsage; }
    template<typename TotalCostAndUsageT = Aws::Map<Aws::String, ComparisonMetricValue>>
    void SetTotalCostAndUsage(TotalCostAndUsageT&& value) { m_totalCostAndUsageHasBeenSet = true; m_totalCostAndUsage = std::forward<TotalCostAndUsageT>(value); }
    template<typename TotalCostAndUsageT = Aws::Map<Aws::String, ComparisonMetricValue>>
    GetCostAndUsageComparisonsResult& WithTotalCostAndUsage(TotalCostAndUsageT&& value) { SetTotalCostAndUsage(std::forward<TotalCostAndUsageT>(value)); return *this;}
    template<typename TotalCostAndUsageKeyT = Aws::String, typename TotalCostAndUsageValueT = ComparisonMetricValue>
    GetCostAndUsageComparisonsResult& AddTotalCostAndUsage(TotalCostAndUsageKeyT&& key, TotalCostAndUsageValueT&& value) {
      m_totalCostAndUsageHasBeenSet = true; m_totalCostAndUsage.emplace(std::forward<TotalCostAndUsageKeyT>(key), std::forward<TotalCostAndUsageValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostAndUsageComparisonsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostAndUsageComparisonsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CostAndUsageComparison> m_costAndUsageComparisons;
    bool m_costAndUsageComparisonsHasBeenSet = false;

    Aws::Map<Aws::String, ComparisonMetricValue> m_totalCostAndUsage;
    bool m_totalCostAndUsageHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
