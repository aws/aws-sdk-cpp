/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageItem.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageError.h>
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
  class BatchCreateWorkloadEstimateUsageResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageResult();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful usage line items that were created for the
     * Workload estimate. </p>
     */
    inline const Aws::Vector<BatchCreateWorkloadEstimateUsageItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BatchCreateWorkloadEstimateUsageItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BatchCreateWorkloadEstimateUsageItem>&& value) { m_items = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageResult& WithItems(const Aws::Vector<BatchCreateWorkloadEstimateUsageItem>& value) { SetItems(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& WithItems(Aws::Vector<BatchCreateWorkloadEstimateUsageItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& AddItems(const BatchCreateWorkloadEstimateUsageItem& value) { m_items.push_back(value); return *this; }
    inline BatchCreateWorkloadEstimateUsageResult& AddItems(BatchCreateWorkloadEstimateUsageItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of errors reason and the usage item keys that cannot be
     * created in the Workload estimate. </p>
     */
    inline const Aws::Vector<BatchCreateWorkloadEstimateUsageError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchCreateWorkloadEstimateUsageError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchCreateWorkloadEstimateUsageError>&& value) { m_errors = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageResult& WithErrors(const Aws::Vector<BatchCreateWorkloadEstimateUsageError>& value) { SetErrors(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& WithErrors(Aws::Vector<BatchCreateWorkloadEstimateUsageError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& AddErrors(const BatchCreateWorkloadEstimateUsageError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreateWorkloadEstimateUsageResult& AddErrors(BatchCreateWorkloadEstimateUsageError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreateWorkloadEstimateUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateWorkloadEstimateUsageItem> m_items;

    Aws::Vector<BatchCreateWorkloadEstimateUsageError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
