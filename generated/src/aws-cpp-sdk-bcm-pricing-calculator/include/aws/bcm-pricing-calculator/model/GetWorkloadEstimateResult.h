/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateRateType.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
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
  /**
   * <p>Mixin for common fields returned by CRUD APIs</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetWorkloadEstimateResponse">AWS
   * API Reference</a></p>
   */
  class GetWorkloadEstimateResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API GetWorkloadEstimateResult();
    AWS_BCMPRICINGCALCULATOR_API GetWorkloadEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API GetWorkloadEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of the retrieved workload estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWorkloadEstimateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWorkloadEstimateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWorkloadEstimateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the retrieved workload estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetWorkloadEstimateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkloadEstimateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkloadEstimateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetWorkloadEstimateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetWorkloadEstimateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }
    inline GetWorkloadEstimateResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline GetWorkloadEstimateResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rates used for the estimate. </p>
     */
    inline const WorkloadEstimateRateType& GetRateType() const{ return m_rateType; }
    inline void SetRateType(const WorkloadEstimateRateType& value) { m_rateType = value; }
    inline void SetRateType(WorkloadEstimateRateType&& value) { m_rateType = std::move(value); }
    inline GetWorkloadEstimateResult& WithRateType(const WorkloadEstimateRateType& value) { SetRateType(value); return *this;}
    inline GetWorkloadEstimateResult& WithRateType(WorkloadEstimateRateType&& value) { SetRateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the pricing rates used for the estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetRateTimestamp() const{ return m_rateTimestamp; }
    inline void SetRateTimestamp(const Aws::Utils::DateTime& value) { m_rateTimestamp = value; }
    inline void SetRateTimestamp(Aws::Utils::DateTime&& value) { m_rateTimestamp = std::move(value); }
    inline GetWorkloadEstimateResult& WithRateTimestamp(const Aws::Utils::DateTime& value) { SetRateTimestamp(value); return *this;}
    inline GetWorkloadEstimateResult& WithRateTimestamp(Aws::Utils::DateTime&& value) { SetRateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the workload estimate. </p>
     */
    inline const WorkloadEstimateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkloadEstimateStatus& value) { m_status = value; }
    inline void SetStatus(WorkloadEstimateStatus&& value) { m_status = std::move(value); }
    inline GetWorkloadEstimateResult& WithStatus(const WorkloadEstimateStatus& value) { SetStatus(value); return *this;}
    inline GetWorkloadEstimateResult& WithStatus(WorkloadEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total estimated cost for the workload. </p>
     */
    inline double GetTotalCost() const{ return m_totalCost; }
    inline void SetTotalCost(double value) { m_totalCost = value; }
    inline GetWorkloadEstimateResult& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the estimated cost. </p>
     */
    inline const CurrencyCode& GetCostCurrency() const{ return m_costCurrency; }
    inline void SetCostCurrency(const CurrencyCode& value) { m_costCurrency = value; }
    inline void SetCostCurrency(CurrencyCode&& value) { m_costCurrency = std::move(value); }
    inline GetWorkloadEstimateResult& WithCostCurrency(const CurrencyCode& value) { SetCostCurrency(value); return *this;}
    inline GetWorkloadEstimateResult& WithCostCurrency(CurrencyCode&& value) { SetCostCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the workload estimate retrieval failed. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetWorkloadEstimateResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetWorkloadEstimateResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetWorkloadEstimateResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkloadEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkloadEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkloadEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_expiresAt;

    WorkloadEstimateRateType m_rateType;

    Aws::Utils::DateTime m_rateTimestamp;

    WorkloadEstimateStatus m_status;

    double m_totalCost;

    CurrencyCode m_costCurrency;

    Aws::String m_failureMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
