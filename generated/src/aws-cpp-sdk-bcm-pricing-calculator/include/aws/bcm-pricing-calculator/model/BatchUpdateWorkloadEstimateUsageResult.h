/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateUsageItem.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateWorkloadEstimateUsageError.h>
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
namespace BCMPricingCalculator
{
namespace Model
{
  class BatchUpdateWorkloadEstimateUsageResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageResult();
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful usage line items that were updated for a
     * Workload estimate. </p>
     */
    inline const Aws::Vector<WorkloadEstimateUsageItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<WorkloadEstimateUsageItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<WorkloadEstimateUsageItem>&& value) { m_items = std::move(value); }
    inline BatchUpdateWorkloadEstimateUsageResult& WithItems(const Aws::Vector<WorkloadEstimateUsageItem>& value) { SetItems(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& WithItems(Aws::Vector<WorkloadEstimateUsageItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& AddItems(const WorkloadEstimateUsageItem& value) { m_items.push_back(value); return *this; }
    inline BatchUpdateWorkloadEstimateUsageResult& AddItems(WorkloadEstimateUsageItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of error reasons and usage line item IDs that could not be
     * updated for the Workload estimate. </p>
     */
    inline const Aws::Vector<BatchUpdateWorkloadEstimateUsageError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchUpdateWorkloadEstimateUsageError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchUpdateWorkloadEstimateUsageError>&& value) { m_errors = std::move(value); }
    inline BatchUpdateWorkloadEstimateUsageResult& WithErrors(const Aws::Vector<BatchUpdateWorkloadEstimateUsageError>& value) { SetErrors(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& WithErrors(Aws::Vector<BatchUpdateWorkloadEstimateUsageError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& AddErrors(const BatchUpdateWorkloadEstimateUsageError& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateWorkloadEstimateUsageResult& AddErrors(BatchUpdateWorkloadEstimateUsageError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateWorkloadEstimateUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkloadEstimateUsageItem> m_items;

    Aws::Vector<BatchUpdateWorkloadEstimateUsageError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
