/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateCostSummary.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateBillEstimateResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult();
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of your newly created Bill estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateBillEstimateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateBillEstimateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateBillEstimateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of your newly created Bill estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateBillEstimateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateBillEstimateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateBillEstimateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your newly created Bill estimate. Bill estimate creation can
     * take anywhere between 8 to 12 hours. The status will allow you to identify when
     * the Bill estimate is complete or has failed. </p>
     */
    inline const BillEstimateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BillEstimateStatus& value) { m_status = value; }
    inline void SetStatus(BillEstimateStatus&& value) { m_status = std::move(value); }
    inline CreateBillEstimateResult& WithStatus(const BillEstimateStatus& value) { SetStatus(value); return *this;}
    inline CreateBillEstimateResult& WithStatus(BillEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This attribute provides the reason if a Bill estimate result generation
     * fails. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline CreateBillEstimateResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline CreateBillEstimateResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline CreateBillEstimateResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The bill month start and end timestamp that was used to create the Bill
     * estimate. This is set to the last complete anniversary bill month start and end
     * timestamp. </p>
     */
    inline const BillInterval& GetBillInterval() const{ return m_billInterval; }
    inline void SetBillInterval(const BillInterval& value) { m_billInterval = value; }
    inline void SetBillInterval(BillInterval&& value) { m_billInterval = std::move(value); }
    inline CreateBillEstimateResult& WithBillInterval(const BillInterval& value) { SetBillInterval(value); return *this;}
    inline CreateBillEstimateResult& WithBillInterval(BillInterval&& value) { SetBillInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns summary-level cost information once a Bill estimate is successfully
     * generated. This summary includes: 1) the total cost difference, showing the
     * pre-tax cost change for the consolidated billing family between the completed
     * anniversary bill and the estimated bill, and 2) total cost differences per
     * service, detailing the pre-tax cost of each service, comparing the completed
     * anniversary bill to the estimated bill on a per-service basis. </p>
     */
    inline const BillEstimateCostSummary& GetCostSummary() const{ return m_costSummary; }
    inline void SetCostSummary(const BillEstimateCostSummary& value) { m_costSummary = value; }
    inline void SetCostSummary(BillEstimateCostSummary&& value) { m_costSummary = std::move(value); }
    inline CreateBillEstimateResult& WithCostSummary(const BillEstimateCostSummary& value) { SetCostSummary(value); return *this;}
    inline CreateBillEstimateResult& WithCostSummary(BillEstimateCostSummary&& value) { SetCostSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Bill estimate create process was started (not when
     * it successfully completed or failed). </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateBillEstimateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateBillEstimateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Bill estimate will expire. A Bill estimate becomes
     * inaccessible after expiration. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }
    inline CreateBillEstimateResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline CreateBillEstimateResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBillEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBillEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBillEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    BillEstimateStatus m_status;

    Aws::String m_failureMessage;

    BillInterval m_billInterval;

    BillEstimateCostSummary m_costSummary;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_expiresAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
