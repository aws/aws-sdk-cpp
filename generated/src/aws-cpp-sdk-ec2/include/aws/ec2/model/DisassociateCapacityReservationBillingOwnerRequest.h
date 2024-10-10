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
    AWS_EC2_API DisassociateCapacityReservationBillingOwnerRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DisassociateCapacityReservationBillingOwnerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline DisassociateCapacityReservationBillingOwnerRequest& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline DisassociateCapacityReservationBillingOwnerRequest& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline DisassociateCapacityReservationBillingOwnerRequest& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the consumer account to which the request was sent.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const{ return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    inline void SetUnusedReservationBillingOwnerId(const Aws::String& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = value; }
    inline void SetUnusedReservationBillingOwnerId(Aws::String&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::move(value); }
    inline void SetUnusedReservationBillingOwnerId(const char* value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId.assign(value); }
    inline DisassociateCapacityReservationBillingOwnerRequest& WithUnusedReservationBillingOwnerId(const Aws::String& value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    inline DisassociateCapacityReservationBillingOwnerRequest& WithUnusedReservationBillingOwnerId(Aws::String&& value) { SetUnusedReservationBillingOwnerId(std::move(value)); return *this;}
    inline DisassociateCapacityReservationBillingOwnerRequest& WithUnusedReservationBillingOwnerId(const char* value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
