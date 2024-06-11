﻿/**
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
    AWS_DEVOPSGURU_API GetCostEstimationResult();
    AWS_DEVOPSGURU_API GetCostEstimationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API GetCostEstimationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of the Amazon Web Services resources used to create your
     * monthly DevOps Guru cost estimate.</p>
     */
    inline const CostEstimationResourceCollectionFilter& GetResourceCollection() const{ return m_resourceCollection; }
    inline void SetResourceCollection(const CostEstimationResourceCollectionFilter& value) { m_resourceCollection = value; }
    inline void SetResourceCollection(CostEstimationResourceCollectionFilter&& value) { m_resourceCollection = std::move(value); }
    inline GetCostEstimationResult& WithResourceCollection(const CostEstimationResourceCollectionFilter& value) { SetResourceCollection(value); return *this;}
    inline GetCostEstimationResult& WithResourceCollection(CostEstimationResourceCollectionFilter&& value) { SetResourceCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of creating this cost estimate. If it's still in progress, the
     * status <code>ONGOING</code> is returned. If it is finished, the status
     * <code>COMPLETED</code> is returned.</p>
     */
    inline const CostEstimationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CostEstimationStatus& value) { m_status = value; }
    inline void SetStatus(CostEstimationStatus&& value) { m_status = std::move(value); }
    inline GetCostEstimationResult& WithStatus(const CostEstimationStatus& value) { SetStatus(value); return *this;}
    inline GetCostEstimationResult& WithStatus(CostEstimationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceCost</code> objects that each contains details
     * about the monthly cost estimate to analyze one of your Amazon Web Services
     * resources.</p>
     */
    inline const Aws::Vector<ServiceResourceCost>& GetCosts() const{ return m_costs; }
    inline void SetCosts(const Aws::Vector<ServiceResourceCost>& value) { m_costs = value; }
    inline void SetCosts(Aws::Vector<ServiceResourceCost>&& value) { m_costs = std::move(value); }
    inline GetCostEstimationResult& WithCosts(const Aws::Vector<ServiceResourceCost>& value) { SetCosts(value); return *this;}
    inline GetCostEstimationResult& WithCosts(Aws::Vector<ServiceResourceCost>&& value) { SetCosts(std::move(value)); return *this;}
    inline GetCostEstimationResult& AddCosts(const ServiceResourceCost& value) { m_costs.push_back(value); return *this; }
    inline GetCostEstimationResult& AddCosts(ServiceResourceCost&& value) { m_costs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start and end time of the cost estimation.</p>
     */
    inline const CostEstimationTimeRange& GetTimeRange() const{ return m_timeRange; }
    inline void SetTimeRange(const CostEstimationTimeRange& value) { m_timeRange = value; }
    inline void SetTimeRange(CostEstimationTimeRange&& value) { m_timeRange = std::move(value); }
    inline GetCostEstimationResult& WithTimeRange(const CostEstimationTimeRange& value) { SetTimeRange(value); return *this;}
    inline GetCostEstimationResult& WithTimeRange(CostEstimationTimeRange&& value) { SetTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated monthly cost to analyze the Amazon Web Services resources. This
     * value is the sum of the estimated costs to analyze each resource in the
     * <code>Costs</code> object in this response.</p>
     */
    inline double GetTotalCost() const{ return m_totalCost; }
    inline void SetTotalCost(double value) { m_totalCost = value; }
    inline GetCostEstimationResult& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCostEstimationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCostEstimationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCostEstimationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCostEstimationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCostEstimationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCostEstimationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CostEstimationResourceCollectionFilter m_resourceCollection;

    CostEstimationStatus m_status;

    Aws::Vector<ServiceResourceCost> m_costs;

    CostEstimationTimeRange m_timeRange;

    double m_totalCost;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
