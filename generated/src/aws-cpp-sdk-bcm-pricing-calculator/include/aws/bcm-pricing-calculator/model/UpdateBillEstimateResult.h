/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateCostSummary.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
#include <aws/bcm-pricing-calculator/model/GroupSharingPreferenceEnum.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {
class UpdateBillEstimateResult {
 public:
  AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult() = default;
  AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The unique identifier of the updated bill estimate. </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateBillEstimateResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated name of the bill estimate. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateBillEstimateResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the updated bill estimate. </p>
   */
  inline BillEstimateStatus GetStatus() const { return m_status; }
  inline void SetStatus(BillEstimateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateBillEstimateResult& WithStatus(BillEstimateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An error message if the bill estimate update failed. </p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  UpdateBillEstimateResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The time period covered by the updated bill estimate. </p>
   */
  inline const BillInterval& GetBillInterval() const { return m_billInterval; }
  template <typename BillIntervalT = BillInterval>
  void SetBillInterval(BillIntervalT&& value) {
    m_billIntervalHasBeenSet = true;
    m_billInterval = std::forward<BillIntervalT>(value);
  }
  template <typename BillIntervalT = BillInterval>
  UpdateBillEstimateResult& WithBillInterval(BillIntervalT&& value) {
    SetBillInterval(std::forward<BillIntervalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A summary of the updated estimated costs. </p>
   */
  inline const BillEstimateCostSummary& GetCostSummary() const { return m_costSummary; }
  template <typename CostSummaryT = BillEstimateCostSummary>
  void SetCostSummary(CostSummaryT&& value) {
    m_costSummaryHasBeenSet = true;
    m_costSummary = std::forward<CostSummaryT>(value);
  }
  template <typename CostSummaryT = BillEstimateCostSummary>
  UpdateBillEstimateResult& WithCostSummary(CostSummaryT&& value) {
    SetCostSummary(std::forward<CostSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the bill estimate was originally created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateBillEstimateResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated expiration timestamp for the bill estimate. </p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  UpdateBillEstimateResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The setting for the reserved instance and savings plan group sharing used in
   * this estimate.</p>
   */
  inline GroupSharingPreferenceEnum GetGroupSharingPreference() const { return m_groupSharingPreference; }
  inline void SetGroupSharingPreference(GroupSharingPreferenceEnum value) {
    m_groupSharingPreferenceHasBeenSet = true;
    m_groupSharingPreference = value;
  }
  inline UpdateBillEstimateResult& WithGroupSharingPreference(GroupSharingPreferenceEnum value) {
    SetGroupSharingPreference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arn of the cost category used in the reserved and prioritized group
   * sharing.</p>
   */
  inline const Aws::String& GetCostCategoryGroupSharingPreferenceArn() const { return m_costCategoryGroupSharingPreferenceArn; }
  template <typename CostCategoryGroupSharingPreferenceArnT = Aws::String>
  void SetCostCategoryGroupSharingPreferenceArn(CostCategoryGroupSharingPreferenceArnT&& value) {
    m_costCategoryGroupSharingPreferenceArnHasBeenSet = true;
    m_costCategoryGroupSharingPreferenceArn = std::forward<CostCategoryGroupSharingPreferenceArnT>(value);
  }
  template <typename CostCategoryGroupSharingPreferenceArnT = Aws::String>
  UpdateBillEstimateResult& WithCostCategoryGroupSharingPreferenceArn(CostCategoryGroupSharingPreferenceArnT&& value) {
    SetCostCategoryGroupSharingPreferenceArn(std::forward<CostCategoryGroupSharingPreferenceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp of the effective date of the cost category used in the group
   * sharing settings.</p>
   */
  inline const Aws::Utils::DateTime& GetCostCategoryGroupSharingPreferenceEffectiveDate() const {
    return m_costCategoryGroupSharingPreferenceEffectiveDate;
  }
  template <typename CostCategoryGroupSharingPreferenceEffectiveDateT = Aws::Utils::DateTime>
  void SetCostCategoryGroupSharingPreferenceEffectiveDate(CostCategoryGroupSharingPreferenceEffectiveDateT&& value) {
    m_costCategoryGroupSharingPreferenceEffectiveDateHasBeenSet = true;
    m_costCategoryGroupSharingPreferenceEffectiveDate = std::forward<CostCategoryGroupSharingPreferenceEffectiveDateT>(value);
  }
  template <typename CostCategoryGroupSharingPreferenceEffectiveDateT = Aws::Utils::DateTime>
  UpdateBillEstimateResult& WithCostCategoryGroupSharingPreferenceEffectiveDate(CostCategoryGroupSharingPreferenceEffectiveDateT&& value) {
    SetCostCategoryGroupSharingPreferenceEffectiveDate(std::forward<CostCategoryGroupSharingPreferenceEffectiveDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateBillEstimateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
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

  GroupSharingPreferenceEnum m_groupSharingPreference{GroupSharingPreferenceEnum::NOT_SET};
  bool m_groupSharingPreferenceHasBeenSet = false;

  Aws::String m_costCategoryGroupSharingPreferenceArn;
  bool m_costCategoryGroupSharingPreferenceArnHasBeenSet = false;

  Aws::Utils::DateTime m_costCategoryGroupSharingPreferenceEffectiveDate{};
  bool m_costCategoryGroupSharingPreferenceEffectiveDateHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
