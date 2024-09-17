/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class PurchaseCapacityBlockRequest : public EC2Request
  {
  public:
    AWS_EC2_API PurchaseCapacityBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseCapacityBlock"; }

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
    inline PurchaseCapacityBlockRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Capacity Block during launch.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline PurchaseCapacityBlockRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline PurchaseCapacityBlockRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline PurchaseCapacityBlockRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline PurchaseCapacityBlockRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetCapacityBlockOfferingId() const{ return m_capacityBlockOfferingId; }
    inline bool CapacityBlockOfferingIdHasBeenSet() const { return m_capacityBlockOfferingIdHasBeenSet; }
    inline void SetCapacityBlockOfferingId(const Aws::String& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = value; }
    inline void SetCapacityBlockOfferingId(Aws::String&& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = std::move(value); }
    inline void SetCapacityBlockOfferingId(const char* value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId.assign(value); }
    inline PurchaseCapacityBlockRequest& WithCapacityBlockOfferingId(const Aws::String& value) { SetCapacityBlockOfferingId(value); return *this;}
    inline PurchaseCapacityBlockRequest& WithCapacityBlockOfferingId(Aws::String&& value) { SetCapacityBlockOfferingId(std::move(value)); return *this;}
    inline PurchaseCapacityBlockRequest& WithCapacityBlockOfferingId(const char* value) { SetCapacityBlockOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }
    inline PurchaseCapacityBlockRequest& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}
    inline PurchaseCapacityBlockRequest& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_capacityBlockOfferingId;
    bool m_capacityBlockOfferingIdHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
