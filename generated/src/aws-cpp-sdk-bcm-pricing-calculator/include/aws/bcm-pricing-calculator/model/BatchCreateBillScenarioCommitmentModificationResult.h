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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult() = default;
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of successful commitment line items that were created for
     * the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem>>
    BatchCreateBillScenarioCommitmentModificationResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = BatchCreateBillScenarioCommitmentModificationItem>
    BatchCreateBillScenarioCommitmentModificationResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Returns the list of errors reason and the commitment item keys that cannot
     * be created in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationError>>
    BatchCreateBillScenarioCommitmentModificationResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchCreateBillScenarioCommitmentModificationError>
    BatchCreateBillScenarioCommitmentModificationResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
