/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteWorkloadEstimateUsageError.h>
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
  class BatchDeleteWorkloadEstimateUsageResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteWorkloadEstimateUsageResult();
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteWorkloadEstimateUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteWorkloadEstimateUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns the list of errors reason and the usage item keys that cannot be
     * deleted from the Workload estimate. </p>
     */
    inline const Aws::Vector<BatchDeleteWorkloadEstimateUsageError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteWorkloadEstimateUsageError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteWorkloadEstimateUsageError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteWorkloadEstimateUsageResult& WithErrors(const Aws::Vector<BatchDeleteWorkloadEstimateUsageError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteWorkloadEstimateUsageResult& WithErrors(Aws::Vector<BatchDeleteWorkloadEstimateUsageError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteWorkloadEstimateUsageResult& AddErrors(const BatchDeleteWorkloadEstimateUsageError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteWorkloadEstimateUsageResult& AddErrors(BatchDeleteWorkloadEstimateUsageError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteWorkloadEstimateUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteWorkloadEstimateUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteWorkloadEstimateUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteWorkloadEstimateUsageError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
