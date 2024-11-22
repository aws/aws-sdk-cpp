/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationError.h>
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
  class BatchDeleteBillScenarioUsageModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioUsageModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of errors reason and the usage item keys that cannot be
     * deleted from the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchDeleteBillScenarioUsageModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteBillScenarioUsageModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteBillScenarioUsageModificationError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteBillScenarioUsageModificationResult& WithErrors(const Aws::Vector<BatchDeleteBillScenarioUsageModificationError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteBillScenarioUsageModificationResult& WithErrors(Aws::Vector<BatchDeleteBillScenarioUsageModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioUsageModificationResult& AddErrors(const BatchDeleteBillScenarioUsageModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteBillScenarioUsageModificationResult& AddErrors(BatchDeleteBillScenarioUsageModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteBillScenarioUsageModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteBillScenarioUsageModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioUsageModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteBillScenarioUsageModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
