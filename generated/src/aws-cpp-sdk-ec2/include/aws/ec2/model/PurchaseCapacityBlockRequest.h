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
    AWS_EC2_API PurchaseCapacityBlockRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline PurchaseCapacityBlockRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Capacity Block during launch.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    PurchaseCapacityBlockRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    PurchaseCapacityBlockRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block offering.</p>
     */
    inline const Aws::String& GetCapacityBlockOfferingId() const { return m_capacityBlockOfferingId; }
    inline bool CapacityBlockOfferingIdHasBeenSet() const { return m_capacityBlockOfferingIdHasBeenSet; }
    template<typename CapacityBlockOfferingIdT = Aws::String>
    void SetCapacityBlockOfferingId(CapacityBlockOfferingIdT&& value) { m_capacityBlockOfferingIdHasBeenSet = true; m_capacityBlockOfferingId = std::forward<CapacityBlockOfferingIdT>(value); }
    template<typename CapacityBlockOfferingIdT = Aws::String>
    PurchaseCapacityBlockRequest& WithCapacityBlockOfferingId(CapacityBlockOfferingIdT&& value) { SetCapacityBlockOfferingId(std::forward<CapacityBlockOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline CapacityReservationInstancePlatform GetInstancePlatform() const { return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline PurchaseCapacityBlockRequest& WithInstancePlatform(CapacityReservationInstancePlatform value) { SetInstancePlatform(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_capacityBlockOfferingId;
    bool m_capacityBlockOfferingIdHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform{CapacityReservationInstancePlatform::NOT_SET};
    bool m_instancePlatformHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
