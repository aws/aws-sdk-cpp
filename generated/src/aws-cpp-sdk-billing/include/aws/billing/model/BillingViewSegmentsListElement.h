/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingDomain.h>
#include <aws/billing/model/BillingViewSegmentTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p> A billing view segment. A segment represents a time range during which the
 * billing domain and account relationships for a billing view remained unchanged.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewSegmentsListElement">AWS
 * API Reference</a></p>
 */
class BillingViewSegmentsListElement {
 public:
  AWS_BILLING_API BillingViewSegmentsListElement() = default;
  AWS_BILLING_API BillingViewSegmentsListElement(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingViewSegmentsListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The billing domain for this segment. The following values are valid:</p> <ul>
   * <li> <p> <code>PRO_FORMA</code> - Data shaped by Billing Conductor that doesn't
   * reflect the final charges owed to Amazon Web Services.</p> </li> <li> <p>
   * <code>BILLABLE</code> - Data that represents the final charges owed to Amazon
   * Web Services.</p> </li> </ul>
   */
  inline BillingDomain GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  inline void SetDomain(BillingDomain value) {
    m_domainHasBeenSet = true;
    m_domain = value;
  }
  inline BillingViewSegmentsListElement& WithDomain(BillingDomain value) {
    SetDomain(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The time range during which this segment is effective. </p>
   */
  inline const BillingViewSegmentTimeRange& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = BillingViewSegmentTimeRange>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = BillingViewSegmentTimeRange>
  BillingViewSegmentsListElement& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The billing transfer account ID. The response includes this field only when
   * the caller is a billing transfer source account. The response omits this field
   * for billing group billing views. </p>
   */
  inline const Aws::String& GetBillingTransferAccountId() const { return m_billingTransferAccountId; }
  inline bool BillingTransferAccountIdHasBeenSet() const { return m_billingTransferAccountIdHasBeenSet; }
  template <typename BillingTransferAccountIdT = Aws::String>
  void SetBillingTransferAccountId(BillingTransferAccountIdT&& value) {
    m_billingTransferAccountIdHasBeenSet = true;
    m_billingTransferAccountId = std::forward<BillingTransferAccountIdT>(value);
  }
  template <typename BillingTransferAccountIdT = Aws::String>
  BillingViewSegmentsListElement& WithBillingTransferAccountId(BillingTransferAccountIdT&& value) {
    SetBillingTransferAccountId(std::forward<BillingTransferAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The management account ID of the organization. The response includes this
   * field for organization member accounts. </p>
   */
  inline const Aws::String& GetManagementAccountId() const { return m_managementAccountId; }
  inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }
  template <typename ManagementAccountIdT = Aws::String>
  void SetManagementAccountId(ManagementAccountIdT&& value) {
    m_managementAccountIdHasBeenSet = true;
    m_managementAccountId = std::forward<ManagementAccountIdT>(value);
  }
  template <typename ManagementAccountIdT = Aws::String>
  BillingViewSegmentsListElement& WithManagementAccountId(ManagementAccountIdT&& value) {
    SetManagementAccountId(std::forward<ManagementAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The billing group primary account ID. The response includes this field for
   * billing group members. Compare this value to your own account ID to determine
   * whether you are the primary account. </p>
   */
  inline const Aws::String& GetBillingGroupPrimaryAccountId() const { return m_billingGroupPrimaryAccountId; }
  inline bool BillingGroupPrimaryAccountIdHasBeenSet() const { return m_billingGroupPrimaryAccountIdHasBeenSet; }
  template <typename BillingGroupPrimaryAccountIdT = Aws::String>
  void SetBillingGroupPrimaryAccountId(BillingGroupPrimaryAccountIdT&& value) {
    m_billingGroupPrimaryAccountIdHasBeenSet = true;
    m_billingGroupPrimaryAccountId = std::forward<BillingGroupPrimaryAccountIdT>(value);
  }
  template <typename BillingGroupPrimaryAccountIdT = Aws::String>
  BillingViewSegmentsListElement& WithBillingGroupPrimaryAccountId(BillingGroupPrimaryAccountIdT&& value) {
    SetBillingGroupPrimaryAccountId(std::forward<BillingGroupPrimaryAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  BillingDomain m_domain{BillingDomain::NOT_SET};

  BillingViewSegmentTimeRange m_timeRange;

  Aws::String m_billingTransferAccountId;

  Aws::String m_managementAccountId;

  Aws::String m_billingGroupPrimaryAccountId;
  bool m_domainHasBeenSet = false;
  bool m_timeRangeHasBeenSet = false;
  bool m_billingTransferAccountIdHasBeenSet = false;
  bool m_managementAccountIdHasBeenSet = false;
  bool m_billingGroupPrimaryAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
