/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CostEstimationResourceCollectionFilter.h>
#include <aws/devops-guru/model/CostEstimationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CostEstimationTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ServiceResourceCost.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class GetCostEstimationResult
  {
  public:
    AWS_DEVOPSGURU_API GetCostEstimationResult() = default;
    AWS_DEVOPSGURU_API GetCostEstimationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API GetCostEstimationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of the Amazon Web Services resources used to create your
     * monthly DevOps Guru cost estimate.</p>
     */
    inline const CostEstimationResourceCollectionFilter& GetResourceCollection() const { return m_resourceCollection; }
    template<typename ResourceCollectionT = CostEstimationResourceCollectionFilter>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = CostEstimationResourceCollectionFilter>
    GetCostEstimationResult& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of creating this cost estimate. If it's still in progress, the
     * status <code>ONGOING</code> is returned. If it is finished, the status
     * <code>COMPLETED</code> is returned.</p>
     */
    inline CostEstimationStatus GetStatus() const { return m_status; }
    inline void SetStatus(CostEstimationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCostEstimationResult& WithStatus(CostEstimationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceCost</code> objects that each contains details
     * about the monthly cost estimate to analyze one of your Amazon Web Services
     * resources.</p>
     */
    inline const Aws::Vector<ServiceResourceCost>& GetCosts() const { return m_costs; }
    template<typename CostsT = Aws::Vector<ServiceResourceCost>>
    void SetCosts(CostsT&& value) { m_costsHasBeenSet = true; m_costs = std::forward<CostsT>(value); }
    template<typename CostsT = Aws::Vector<ServiceResourceCost>>
    GetCostEstimationResult& WithCosts(CostsT&& value) { SetCosts(std::forward<CostsT>(value)); return *this;}
    template<typename CostsT = ServiceResourceCost>
    GetCostEstimationResult& AddCosts(CostsT&& value) { m_costsHasBeenSet = true; m_costs.emplace_back(std::forward<CostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start and end time of the cost estimation.</p>
     */
    inline const CostEstimationTimeRange& GetTimeRange() const { return m_timeRange; }
    template<typename TimeRangeT = CostEstimationTimeRange>
    void SetTimeRange(TimeRangeT&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::forward<TimeRangeT>(value); }
    template<typename TimeRangeT = CostEstimationTimeRange>
    GetCostEstimationResult& WithTimeRange(TimeRangeT&& value) { SetTimeRange(std::forward<TimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost to analyze the Amazon Web Services resources. This
     * value is the sum of the estimated costs to analyze each resource in the
     * <code>Costs</code> object in this response.</p>
     */
    inline double GetTotalCost() const { return m_totalCost; }
    inline void SetTotalCost(double value) { m_totalCostHasBeenSet = true; m_totalCost = value; }
    inline GetCostEstimationResult& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCostEstimationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostEstimationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CostEstimationResourceCollectionFilter m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    CostEstimationStatus m_status{CostEstimationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ServiceResourceCost> m_costs;
    bool m_costsHasBeenSet = false;

    CostEstimationTimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;

    double m_totalCost{0.0};
    bool m_totalCostHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
