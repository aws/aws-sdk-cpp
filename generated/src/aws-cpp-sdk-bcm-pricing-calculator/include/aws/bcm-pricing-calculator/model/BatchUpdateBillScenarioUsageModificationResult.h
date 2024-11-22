/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillScenarioUsageModificationItem.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationError.h>
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
  class BatchUpdateBillScenarioUsageModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful usage line items that were updated for a Bill
     * Scenario. </p>
     */
    inline const Aws::Vector<BillScenarioUsageModificationItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BillScenarioUsageModificationItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BillScenarioUsageModificationItem>&& value) { m_items = std::move(value); }
    inline BatchUpdateBillScenarioUsageModificationResult& WithItems(const Aws::Vector<BillScenarioUsageModificationItem>& value) { SetItems(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& WithItems(Aws::Vector<BillScenarioUsageModificationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& AddItems(const BillScenarioUsageModificationItem& value) { m_items.push_back(value); return *this; }
    inline BatchUpdateBillScenarioUsageModificationResult& AddItems(BillScenarioUsageModificationItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of error reasons and usage line item IDs that could not be
     * updated for the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchUpdateBillScenarioUsageModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchUpdateBillScenarioUsageModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchUpdateBillScenarioUsageModificationError>&& value) { m_errors = std::move(value); }
    inline BatchUpdateBillScenarioUsageModificationResult& WithErrors(const Aws::Vector<BatchUpdateBillScenarioUsageModificationError>& value) { SetErrors(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& WithErrors(Aws::Vector<BatchUpdateBillScenarioUsageModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& AddErrors(const BatchUpdateBillScenarioUsageModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateBillScenarioUsageModificationResult& AddErrors(BatchUpdateBillScenarioUsageModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateBillScenarioUsageModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillScenarioUsageModificationItem> m_items;

    Aws::Vector<BatchUpdateBillScenarioUsageModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
