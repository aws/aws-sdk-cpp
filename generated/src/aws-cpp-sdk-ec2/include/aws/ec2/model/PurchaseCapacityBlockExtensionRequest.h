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
  class PurchaseCapacityBlockExtensionRequest : public EC2Request
  {
  public:
    AWS_EC2_API PurchaseCapacityBlockExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseCapacityBlockExtension"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Capacity Block extension offering to purchase.</p>
     */
    inline const Aws::String& GetCapacityBlockExtensionOfferingId() const{ return m_capacityBlockExtensionOfferingId; }
    inline bool CapacityBlockExtensionOfferingIdHasBeenSet() const { return m_capacityBlockExtensionOfferingIdHasBeenSet; }
    inline void SetCapacityBlockExtensionOfferingId(const Aws::String& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = value; }
    inline void SetCapacityBlockExtensionOfferingId(Aws::String&& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = std::move(value); }
    inline void SetCapacityBlockExtensionOfferingId(const char* value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId.assign(value); }
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityBlockExtensionOfferingId(const Aws::String& value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityBlockExtensionOfferingId(Aws::String&& value) { SetCapacityBlockExtensionOfferingId(std::move(value)); return *this;}
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityBlockExtensionOfferingId(const char* value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity reservation to be extended.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline PurchaseCapacityBlockExtensionRequest& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

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
    inline PurchaseCapacityBlockExtensionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityBlockExtensionOfferingId;
    bool m_capacityBlockExtensionOfferingIdHasBeenSet = false;

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
