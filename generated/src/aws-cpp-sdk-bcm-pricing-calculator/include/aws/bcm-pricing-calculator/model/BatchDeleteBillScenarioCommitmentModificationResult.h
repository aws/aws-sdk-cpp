/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioCommitmentModificationError.h>
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
  class BatchDeleteBillScenarioCommitmentModificationResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioCommitmentModificationResult();
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioCommitmentModificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioCommitmentModificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of errors reason and the commitment item keys that cannot
     * be deleted from the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteBillScenarioCommitmentModificationResult& WithErrors(const Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationResult& WithErrors(Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationResult& AddErrors(const BatchDeleteBillScenarioCommitmentModificationError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteBillScenarioCommitmentModificationResult& AddErrors(BatchDeleteBillScenarioCommitmentModificationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteBillScenarioCommitmentModificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteBillScenarioCommitmentModificationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
