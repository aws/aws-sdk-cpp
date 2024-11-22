/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationItem.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationError.h>
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
  class BatchCreateBillScenarioCommitmentModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful commitment line items that were created for
     * the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>&& value) { m_items = std::move(value); }
    inline BatchCreateBillScenarioCommitmentModificationResult& WithItems(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>& value) { SetItems(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& WithItems(Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& AddItems(const BatchCreateBillScenarioCommitmentModificationItem& value) { m_items.push_back(value); return *this; }
    inline BatchCreateBillScenarioCommitmentModificationResult& AddItems(BatchCreateBillScenarioCommitmentModificationItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of errors reason and the commitment item keys that cannot
     * be created in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>&& value) { m_errors = std::move(value); }
    inline BatchCreateBillScenarioCommitmentModificationResult& WithErrors(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>& value) { SetErrors(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& WithErrors(Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& AddErrors(const BatchCreateBillScenarioCommitmentModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreateBillScenarioCommitmentModificationResult& AddErrors(BatchCreateBillScenarioCommitmentModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem> m_items;

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
