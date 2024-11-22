/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillScenarioCommitmentModificationItem.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationError.h>
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
  class BatchUpdateBillScenarioCommitmentModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioCommitmentModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioCommitmentModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioCommitmentModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful commitment line items that were updated for a
     * Bill Scenario. </p>
     */
    inline const Aws::Vector<BillScenarioCommitmentModificationItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BillScenarioCommitmentModificationItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BillScenarioCommitmentModificationItem>&& value) { m_items = std::move(value); }
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithItems(const Aws::Vector<BillScenarioCommitmentModificationItem>& value) { SetItems(value); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithItems(Aws::Vector<BillScenarioCommitmentModificationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& AddItems(const BillScenarioCommitmentModificationItem& value) { m_items.push_back(value); return *this; }
    inline BatchUpdateBillScenarioCommitmentModificationResult& AddItems(BillScenarioCommitmentModificationItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of error reasons and commitment line item IDs that could
     * not be updated for the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError>&& value) { m_errors = std::move(value); }
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithErrors(const Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError>& value) { SetErrors(value); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithErrors(Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& AddErrors(const BatchUpdateBillScenarioCommitmentModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateBillScenarioCommitmentModificationResult& AddErrors(BatchUpdateBillScenarioCommitmentModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioCommitmentModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillScenarioCommitmentModificationItem> m_items;

    Aws::Vector<BatchUpdateBillScenarioCommitmentModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
