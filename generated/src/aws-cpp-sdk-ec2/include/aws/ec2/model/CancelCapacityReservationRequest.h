/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ApplyCancellationCharges.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CancelCapacityReservationRequest : public EC2Request {
 public:
  AWS_EC2_API CancelCapacityReservationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelCapacityReservation"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the Capacity Reservation to be cancelled.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CancelCapacityReservationRequest& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
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
  inline CancelCapacityReservationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the cancellation charge type to apply when cancelling a
   * future-dated Capacity Reservation during its commitment duration. Possible
   * values include <code>commitment-wind-down</code>, which continues billing for
   * the remaining commitment duration without delivering capacity.</p>
   */
  inline ApplyCancellationCharges GetApplyCancellationCharges() const { return m_applyCancellationCharges; }
  inline bool ApplyCancellationChargesHasBeenSet() const { return m_applyCancellationChargesHasBeenSet; }
  inline void SetApplyCancellationCharges(ApplyCancellationCharges value) {
    m_applyCancellationChargesHasBeenSet = true;
    m_applyCancellationCharges = value;
  }
  inline CancelCapacityReservationRequest& WithApplyCancellationCharges(ApplyCancellationCharges value) {
    SetApplyCancellationCharges(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the cancellation quote to use for the cancellation. You can
   * generate a cancellation quote by using the
   * <code>CreateCapacityReservationCancellationQuote</code> action. The cancellation
   * quote must be in an <code>active</code> state.</p>
   */
  inline const Aws::String& GetQuoteId() const { return m_quoteId; }
  inline bool QuoteIdHasBeenSet() const { return m_quoteIdHasBeenSet; }
  template <typename QuoteIdT = Aws::String>
  void SetQuoteId(QuoteIdT&& value) {
    m_quoteIdHasBeenSet = true;
    m_quoteId = std::forward<QuoteIdT>(value);
  }
  template <typename QuoteIdT = Aws::String>
  CancelCapacityReservationRequest& WithQuoteId(QuoteIdT&& value) {
    SetQuoteId(std::forward<QuoteIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  bool m_dryRun{false};

  ApplyCancellationCharges m_applyCancellationCharges{ApplyCancellationCharges::NOT_SET};

  Aws::String m_quoteId;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_applyCancellationChargesHasBeenSet = false;
  bool m_quoteIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
