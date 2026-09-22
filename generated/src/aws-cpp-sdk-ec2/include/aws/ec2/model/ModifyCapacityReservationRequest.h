/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/EndDateType.h>
#include <aws/ec2/model/InstanceMatchCriteria.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyCapacityReservationRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyCapacityReservationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyCapacityReservation"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the Capacity Reservation.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  ModifyCapacityReservationRequest& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances for which to reserve capacity. The number of
   * instances can't be increased or decreased by more than <code>1000</code> in a
   * single request.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline ModifyCapacityReservationRequest& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the Capacity Reservation expires. When a Capacity
   * Reservation expires, the reserved capacity is released and you can no longer
   * launch instances into it. The Capacity Reservation's state changes to
   * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
   * Reservation is cancelled within an hour from the specified time. For example, if
   * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
   * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
   * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
   * Omit <code>EndDate</code> if <code>EndDateType</code> is
   * <code>unlimited</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  ModifyCapacityReservationRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
   * Reservation can have one of the following end types:</p> <ul> <li> <p>
   * <code>unlimited</code> - The Capacity Reservation remains active until you
   * explicitly cancel it. Do not provide an <code>EndDate</code> value if
   * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
   * <code>limited</code> - The Capacity Reservation expires automatically at a
   * specified date and time. You must provide an <code>EndDate</code> value if
   * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
   */
  inline EndDateType GetEndDateType() const { return m_endDateType; }
  inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
  inline void SetEndDateType(EndDateType value) {
    m_endDateTypeHasBeenSet = true;
    m_endDateType = value;
  }
  inline ModifyCapacityReservationRequest& WithEndDateType(EndDateType value) {
    SetEndDateType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved. Capacity Reservations you have created are accepted by default.</p>
   */
  inline bool GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  inline void SetAccept(bool value) {
    m_acceptHasBeenSet = true;
    m_accept = value;
  }
  inline ModifyCapacityReservationRequest& WithAccept(bool value) {
    SetAccept(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyCapacityReservationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reserved for future use.</p>
   */
  inline const Aws::String& GetAdditionalInfo() const { return m_additionalInfo; }
  inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
  template <typename AdditionalInfoT = Aws::String>
  void SetAdditionalInfo(AdditionalInfoT&& value) {
    m_additionalInfoHasBeenSet = true;
    m_additionalInfo = std::forward<AdditionalInfoT>(value);
  }
  template <typename AdditionalInfoT = Aws::String>
  ModifyCapacityReservationRequest& WithAdditionalInfo(AdditionalInfoT&& value) {
    SetAdditionalInfo(std::forward<AdditionalInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The matching criteria (instance eligibility) that you want to use in the
   * modified Capacity Reservation. If you change the instance eligibility of an
   * existing Capacity Reservation from <code>targeted</code> to <code>open</code>,
   * any running instances that match the attributes of the Capacity Reservation,
   * have the <code>CapacityReservationPreference</code> set to <code>open</code>,
   * and are not yet running in the Capacity Reservation, will automatically use the
   * modified Capacity Reservation. </p> <p>To modify the instance eligibility, the
   * Capacity Reservation must be completely idle (zero usage).</p>
   */
  inline InstanceMatchCriteria GetInstanceMatchCriteria() const { return m_instanceMatchCriteria; }
  inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }
  inline void SetInstanceMatchCriteria(InstanceMatchCriteria value) {
    m_instanceMatchCriteriaHasBeenSet = true;
    m_instanceMatchCriteria = value;
  }
  inline ModifyCapacityReservationRequest& WithInstanceMatchCriteria(InstanceMatchCriteria value) {
    SetInstanceMatchCriteria(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that you accept the modification terms of the quote identified by
   * <code>QuoteId</code>. To apply a quoted modification, set this parameter to
   * <code>true</code>.</p>
   */
  inline bool GetAcceptModificationTerms() const { return m_acceptModificationTerms; }
  inline bool AcceptModificationTermsHasBeenSet() const { return m_acceptModificationTermsHasBeenSet; }
  inline void SetAcceptModificationTerms(bool value) {
    m_acceptModificationTermsHasBeenSet = true;
    m_acceptModificationTerms = value;
  }
  inline ModifyCapacityReservationRequest& WithAcceptModificationTerms(bool value) {
    SetAcceptModificationTerms(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new start date for the Capacity Reservation, in the ISO8601 format in the
   * UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>). Applies to future-dated
   * Capacity Reservations only. Requires a quote from
   * <code>CreateCapacityReservationDateChangeQuote</code>; pass the quote ID in
   * <code>QuoteId</code> with <code>AcceptModificationTerms</code> set to
   * <code>true</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  ModifyCapacityReservationRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the quote that describes the modification you want to apply.
   * Generate a quote by using <code>CreateCapacityReservationDateChangeQuote</code>.
   * The quote must be in the <code>active</code> state, and each quote can be used
   * only once.</p>
   */
  inline const Aws::String& GetQuoteId() const { return m_quoteId; }
  inline bool QuoteIdHasBeenSet() const { return m_quoteIdHasBeenSet; }
  template <typename QuoteIdT = Aws::String>
  void SetQuoteId(QuoteIdT&& value) {
    m_quoteIdHasBeenSet = true;
    m_quoteId = std::forward<QuoteIdT>(value);
  }
  template <typename QuoteIdT = Aws::String>
  ModifyCapacityReservationRequest& WithQuoteId(QuoteIdT&& value) {
    SetQuoteId(std::forward<QuoteIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  int m_instanceCount{0};

  Aws::Utils::DateTime m_endDate{};

  EndDateType m_endDateType{EndDateType::NOT_SET};

  bool m_accept{false};

  bool m_dryRun{false};

  Aws::String m_additionalInfo;

  InstanceMatchCriteria m_instanceMatchCriteria{InstanceMatchCriteria::NOT_SET};

  bool m_acceptModificationTerms{false};

  Aws::Utils::DateTime m_startDate{};

  Aws::String m_quoteId;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_endDateTypeHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_additionalInfoHasBeenSet = false;
  bool m_instanceMatchCriteriaHasBeenSet = false;
  bool m_acceptModificationTermsHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_quoteIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
