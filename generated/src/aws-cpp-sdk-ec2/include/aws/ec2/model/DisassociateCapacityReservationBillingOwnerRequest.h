/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DisassociateCapacityReservationBillingOwnerRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisassociateCapacityReservationBillingOwnerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateCapacityReservationBillingOwner"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DisassociateCapacityReservationBillingOwnerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    DisassociateCapacityReservationBillingOwnerRequest& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the consumer account to which the request was sent.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const { return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    void SetUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::forward<UnusedReservationBillingOwnerIdT>(value); }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    DisassociateCapacityReservationBillingOwnerRequest& WithUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { SetUnusedReservationBillingOwnerId(std::forward<UnusedReservationBillingOwnerIdT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
