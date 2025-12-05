/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class UpdateInterruptibleCapacityReservationAllocationRequest : public EC2Request {
 public:
  AWS_EC2_API UpdateInterruptibleCapacityReservationAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateInterruptibleCapacityReservationAllocation"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The ID of the source Capacity Reservation containing the interruptible
   * allocation to modify. </p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  UpdateInterruptibleCapacityReservationAllocationRequest& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The new number of instances to allocate. Enter a higher number to add more
   * capacity to share, or a lower number to reclaim capacity to your source Capacity
   * Reservation. </p>
   */
  inline int GetTargetInstanceCount() const { return m_targetInstanceCount; }
  inline bool TargetInstanceCountHasBeenSet() const { return m_targetInstanceCountHasBeenSet; }
  inline void SetTargetInstanceCount(int value) {
    m_targetInstanceCountHasBeenSet = true;
    m_targetInstanceCount = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationRequest& WithTargetInstanceCount(int value) {
    SetTargetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. </p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  int m_targetInstanceCount{0};

  bool m_dryRun{false};
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_targetInstanceCountHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
