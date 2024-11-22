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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UpdateWorkloadEstimateResponse">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadEstimateResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UpdateWorkloadEstimateResult();
    AWS_BCMPRICINGCALCULATOR_API UpdateWorkloadEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API UpdateWorkloadEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of the updated workload estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateWorkloadEstimateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWorkloadEstimateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated name of the workload estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateWorkloadEstimateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWorkloadEstimateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate was originally created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated expiration timestamp for the workload estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rates used for the updated estimate. </p>
     */
    inline const WorkloadEstimateRateType& GetRateType() const{ return m_rateType; }
    inline void SetRateType(const WorkloadEstimateRateType& value) { m_rateType = value; }
    inline void SetRateType(WorkloadEstimateRateType&& value) { m_rateType = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithRateType(const WorkloadEstimateRateType& value) { SetRateType(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithRateType(WorkloadEstimateRateType&& value) { SetRateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the pricing rates used for the updated estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetRateTimestamp() const{ return m_rateTimestamp; }
    inline void SetRateTimestamp(const Aws::Utils::DateTime& value) { m_rateTimestamp = value; }
    inline void SetRateTimestamp(Aws::Utils::DateTime&& value) { m_rateTimestamp = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithRateTimestamp(const Aws::Utils::DateTime& value) { SetRateTimestamp(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithRateTimestamp(Aws::Utils::DateTime&& value) { SetRateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the updated workload estimate. </p>
     */
    inline const WorkloadEstimateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkloadEstimateStatus& value) { m_status = value; }
    inline void SetStatus(WorkloadEstimateStatus&& value) { m_status = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithStatus(const WorkloadEstimateStatus& value) { SetStatus(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithStatus(WorkloadEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated total estimated cost for the workload. </p>
     */
    inline double GetTotalCost() const{ return m_totalCost; }
    inline void SetTotalCost(double value) { m_totalCost = value; }
    inline UpdateWorkloadEstimateResult& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the updated estimated cost. </p>
     */
    inline const CurrencyCode& GetCostCurrency() const{ return m_costCurrency; }
    inline void SetCostCurrency(const CurrencyCode& value) { m_costCurrency = value; }
    inline void SetCostCurrency(CurrencyCode&& value) { m_costCurrency = std::move(value); }
    inline UpdateWorkloadEstimateResult& WithCostCurrency(const CurrencyCode& value) { SetCostCurrency(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithCostCurrency(CurrencyCode&& value) { SetCostCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the workload estimate update failed. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline UpdateWorkloadEstimateResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline UpdateWorkloadEstimateResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateWorkloadEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateWorkloadEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateWorkloadEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
