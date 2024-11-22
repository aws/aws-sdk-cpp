/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioUsageModificationItem.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioUsageModificationError.h>
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
  class BatchCreateBillScenarioUsageModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful usage line items that were created for the
     * Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioUsageModificationItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BatchCreateBillScenarioUsageModificationItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BatchCreateBillScenarioUsageModificationItem>&& value) { m_items = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationResult& WithItems(const Aws::Vector<BatchCreateBillScenarioUsageModificationItem>& value) { SetItems(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& WithItems(Aws::Vector<BatchCreateBillScenarioUsageModificationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& AddItems(const BatchCreateBillScenarioUsageModificationItem& value) { m_items.push_back(value); return *this; }
    inline BatchCreateBillScenarioUsageModificationResult& AddItems(BatchCreateBillScenarioUsageModificationItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of errors reason and the usage item keys that cannot be
     * created in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioUsageModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchCreateBillScenarioUsageModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchCreateBillScenarioUsageModificationError>&& value) { m_errors = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationResult& WithErrors(const Aws::Vector<BatchCreateBillScenarioUsageModificationError>& value) { SetErrors(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& WithErrors(Aws::Vector<BatchCreateBillScenarioUsageModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& AddErrors(const BatchCreateBillScenarioUsageModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreateBillScenarioUsageModificationResult& AddErrors(BatchCreateBillScenarioUsageModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreateBillScenarioUsageModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateBillScenarioUsageModificationItem> m_items;

    Aws::Vector<BatchCreateBillScenarioUsageModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
