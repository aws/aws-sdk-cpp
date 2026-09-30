/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ServiceQuotaWarningStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>A service quota warning for a plan. Region switch creates a warning when the
 * applied quota value in one Region of a plan is lower than the value for the
 * matching resource in another Region or account in the plan, or when it can't
 * complete a service quota check.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ServiceQuotaWarningSummary">AWS
 * API Reference</a></p>
 */
class ServiceQuotaWarningSummary {
 public:
  AWS_ARCREGIONSWITCH_API ServiceQuotaWarningSummary() = default;
  AWS_ARCREGIONSWITCH_API ServiceQuotaWarningSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API ServiceQuotaWarningSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the plan that the warning
   * applies to.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ServiceQuotaWarningSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region that the quota applies to.</p>
   */
  inline const Aws::String& GetQuotaRegion() const { return m_quotaRegion; }
  inline bool QuotaRegionHasBeenSet() const { return m_quotaRegionHasBeenSet; }
  template <typename QuotaRegionT = Aws::String>
  void SetQuotaRegion(QuotaRegionT&& value) {
    m_quotaRegionHasBeenSet = true;
    m_quotaRegion = std::forward<QuotaRegionT>(value);
  }
  template <typename QuotaRegionT = Aws::String>
  ServiceQuotaWarningSummary& WithQuotaRegion(QuotaRegionT&& value) {
    SetQuotaRegion(std::forward<QuotaRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service code of the service that the quota belongs to, as defined in
   * Service Quotas. For example, <code>ec2</code>.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ServiceQuotaWarningSummary& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The quota code of the quota that the warning applies to, as defined in
   * Service Quotas.</p>
   */
  inline const Aws::String& GetQuotaCode() const { return m_quotaCode; }
  inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
  template <typename QuotaCodeT = Aws::String>
  void SetQuotaCode(QuotaCodeT&& value) {
    m_quotaCodeHasBeenSet = true;
    m_quotaCode = std::forward<QuotaCodeT>(value);
  }
  template <typename QuotaCodeT = Aws::String>
  ServiceQuotaWarningSummary& WithQuotaCode(QuotaCodeT&& value) {
    SetQuotaCode(std::forward<QuotaCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the quota that the warning applies to, as defined in Service
   * Quotas.</p>
   */
  inline const Aws::String& GetQuotaName() const { return m_quotaName; }
  inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
  template <typename QuotaNameT = Aws::String>
  void SetQuotaName(QuotaNameT&& value) {
    m_quotaNameHasBeenSet = true;
    m_quotaName = std::forward<QuotaNameT>(value);
  }
  template <typename QuotaNameT = Aws::String>
  ServiceQuotaWarningSummary& WithQuotaName(QuotaNameT&& value) {
    SetQuotaName(std::forward<QuotaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the service quota warning.</p>
   */
  inline ServiceQuotaWarningStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ServiceQuotaWarningStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ServiceQuotaWarningSummary& WithStatus(ServiceQuotaWarningStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the plan that the warning applies to.</p>
   */
  inline const Aws::String& GetPlanArn() const { return m_planArn; }
  inline bool PlanArnHasBeenSet() const { return m_planArnHasBeenSet; }
  template <typename PlanArnT = Aws::String>
  void SetPlanArn(PlanArnT&& value) {
    m_planArnHasBeenSet = true;
    m_planArn = std::forward<PlanArnT>(value);
  }
  template <typename PlanArnT = Aws::String>
  ServiceQuotaWarningSummary& WithPlanArn(PlanArnT&& value) {
    SetPlanArn(std::forward<PlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the quota increase request that Region switch submitted, if it
   * submitted one for this quota.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ServiceQuotaWarningSummary& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the support case associated with the quota increase request, if
   * Region switch submitted one for this quota.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  ServiceQuotaWarningSummary& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes the service quota warning.</p>
   */
  inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
  inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }
  template <typename WarningMessageT = Aws::String>
  void SetWarningMessage(WarningMessageT&& value) {
    m_warningMessageHasBeenSet = true;
    m_warningMessage = std::forward<WarningMessageT>(value);
  }
  template <typename WarningMessageT = Aws::String>
  ServiceQuotaWarningSummary& WithWarningMessage(WarningMessageT&& value) {
    SetWarningMessage(std::forward<WarningMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time (UTC) when Region switch last checked this quota.</p>
   */
  inline const Aws::Utils::DateTime& GetLastCheckedAt() const { return m_lastCheckedAt; }
  inline bool LastCheckedAtHasBeenSet() const { return m_lastCheckedAtHasBeenSet; }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  void SetLastCheckedAt(LastCheckedAtT&& value) {
    m_lastCheckedAtHasBeenSet = true;
    m_lastCheckedAt = std::forward<LastCheckedAtT>(value);
  }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  ServiceQuotaWarningSummary& WithLastCheckedAt(LastCheckedAtT&& value) {
    SetLastCheckedAt(std::forward<LastCheckedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time (UTC) when Region switch created this warning.</p>
   */
  inline const Aws::Utils::DateTime& GetWarningCreatedAt() const { return m_warningCreatedAt; }
  inline bool WarningCreatedAtHasBeenSet() const { return m_warningCreatedAtHasBeenSet; }
  template <typename WarningCreatedAtT = Aws::Utils::DateTime>
  void SetWarningCreatedAt(WarningCreatedAtT&& value) {
    m_warningCreatedAtHasBeenSet = true;
    m_warningCreatedAt = std::forward<WarningCreatedAtT>(value);
  }
  template <typename WarningCreatedAtT = Aws::Utils::DateTime>
  ServiceQuotaWarningSummary& WithWarningCreatedAt(WarningCreatedAtT&& value) {
    SetWarningCreatedAt(std::forward<WarningCreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_quotaRegion;

  Aws::String m_serviceCode;

  Aws::String m_quotaCode;

  Aws::String m_quotaName;

  ServiceQuotaWarningStatus m_status{ServiceQuotaWarningStatus::NOT_SET};

  Aws::String m_planArn;

  Aws::String m_requestId;

  Aws::String m_caseId;

  Aws::String m_warningMessage;

  Aws::Utils::DateTime m_lastCheckedAt{};

  Aws::Utils::DateTime m_warningCreatedAt{};
  bool m_accountIdHasBeenSet = false;
  bool m_quotaRegionHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
  bool m_quotaCodeHasBeenSet = false;
  bool m_quotaNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_planArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_caseIdHasBeenSet = false;
  bool m_warningMessageHasBeenSet = false;
  bool m_lastCheckedAtHasBeenSet = false;
  bool m_warningCreatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
