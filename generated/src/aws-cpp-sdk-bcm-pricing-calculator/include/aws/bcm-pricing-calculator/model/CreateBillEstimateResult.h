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
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult() = default;
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API CreateBillEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of your newly created Bill estimate. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateBillEstimateResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of your newly created Bill estimate. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateBillEstimateResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of your newly created Bill estimate. Bill estimate creation can
     * take anywhere between 8 to 12 hours. The status will allow you to identify when
     * the Bill estimate is complete or has failed. </p>
     */
    inline BillEstimateStatus GetStatus() const { return m_status; }
    inline void SetStatus(BillEstimateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateBillEstimateResult& WithStatus(BillEstimateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This attribute provides the reason if a Bill estimate result generation
     * fails. </p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    CreateBillEstimateResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The bill month start and end timestamp that was used to create the Bill
     * estimate. This is set to the last complete anniversary bill month start and end
     * timestamp. </p>
     */
    inline const BillInterval& GetBillInterval() const { return m_billInterval; }
    template<typename BillIntervalT = BillInterval>
    void SetBillInterval(BillIntervalT&& value) { m_billIntervalHasBeenSet = true; m_billInterval = std::forward<BillIntervalT>(value); }
    template<typename BillIntervalT = BillInterval>
    CreateBillEstimateResult& WithBillInterval(BillIntervalT&& value) { SetBillInterval(std::forward<BillIntervalT>(value)); return *this;}
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
    inline const BillEstimateCostSummary& GetCostSummary() const { return m_costSummary; }
    template<typename CostSummaryT = BillEstimateCostSummary>
    void SetCostSummary(CostSummaryT&& value) { m_costSummaryHasBeenSet = true; m_costSummary = std::forward<CostSummaryT>(value); }
    template<typename CostSummaryT = BillEstimateCostSummary>
    CreateBillEstimateResult& WithCostSummary(CostSummaryT&& value) { SetCostSummary(std::forward<CostSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Bill estimate create process was started (not when
     * it successfully completed or failed). </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateBillEstimateResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Bill estimate will expire. A Bill estimate becomes
     * inaccessible after expiration. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    CreateBillEstimateResult& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBillEstimateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BillEstimateStatus m_status{BillEstimateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    BillInterval m_billInterval;
    bool m_billIntervalHasBeenSet = false;

    BillEstimateCostSummary m_costSummary;
    bool m_costSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
