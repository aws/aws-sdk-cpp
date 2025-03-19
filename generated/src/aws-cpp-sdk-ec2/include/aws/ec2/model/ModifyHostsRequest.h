/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/HostRecovery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostMaintenance.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AutoPlacement.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyHostsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyHostsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyHosts"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Indicates whether to enable or disable host recovery for the Dedicated Host.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-recovery.html">Host
     * recovery</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline HostRecovery GetHostRecovery() const { return m_hostRecovery; }
    inline bool HostRecoveryHasBeenSet() const { return m_hostRecoveryHasBeenSet; }
    inline void SetHostRecovery(HostRecovery value) { m_hostRecoveryHasBeenSet = true; m_hostRecovery = value; }
    inline ModifyHostsRequest& WithHostRecovery(HostRecovery value) { SetHostRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance type to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support only a specific instance
     * type.</p> <p>If you want to modify a Dedicated Host to support multiple instance
     * types in its current instance family, omit this parameter and specify
     * <b>InstanceFamily</b> instead. You cannot specify <b>InstanceType</b> and
     * <b>InstanceFamily</b> in the same request.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ModifyHostsRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance family to be supported by the Dedicated Host. Specify
     * this parameter to modify a Dedicated Host to support multiple instance types
     * within its current instance family.</p> <p>If you want to modify a Dedicated
     * Host to support a specific instance type only, omit this parameter and specify
     * <b>InstanceType</b> instead. You cannot specify <b>InstanceFamily</b> and
     * <b>InstanceType</b> in the same request.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    ModifyHostsRequest& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable host maintenance for the Dedicated
     * Host. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-maintenance.html">Host
     * maintenance</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline HostMaintenance GetHostMaintenance() const { return m_hostMaintenance; }
    inline bool HostMaintenanceHasBeenSet() const { return m_hostMaintenanceHasBeenSet; }
    inline void SetHostMaintenance(HostMaintenance value) { m_hostMaintenanceHasBeenSet = true; m_hostMaintenance = value; }
    inline ModifyHostsRequest& WithHostMaintenance(HostMaintenance value) { SetHostMaintenance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts to modify.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIds() const { return m_hostIds; }
    inline bool HostIdsHasBeenSet() const { return m_hostIdsHasBeenSet; }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    void SetHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds = std::forward<HostIdsT>(value); }
    template<typename HostIdsT = Aws::Vector<Aws::String>>
    ModifyHostsRequest& WithHostIds(HostIdsT&& value) { SetHostIds(std::forward<HostIdsT>(value)); return *this;}
    template<typename HostIdsT = Aws::String>
    ModifyHostsRequest& AddHostIds(HostIdsT&& value) { m_hostIdsHasBeenSet = true; m_hostIds.emplace_back(std::forward<HostIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify whether to enable or disable auto-placement.</p>
     */
    inline AutoPlacement GetAutoPlacement() const { return m_autoPlacement; }
    inline bool AutoPlacementHasBeenSet() const { return m_autoPlacementHasBeenSet; }
    inline void SetAutoPlacement(AutoPlacement value) { m_autoPlacementHasBeenSet = true; m_autoPlacement = value; }
    inline ModifyHostsRequest& WithAutoPlacement(AutoPlacement value) { SetAutoPlacement(value); return *this;}
    ///@}
  private:

    HostRecovery m_hostRecovery{HostRecovery::NOT_SET};
    bool m_hostRecoveryHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    HostMaintenance m_hostMaintenance{HostMaintenance::NOT_SET};
    bool m_hostMaintenanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIds;
    bool m_hostIdsHasBeenSet = false;

    AutoPlacement m_autoPlacement{AutoPlacement::NOT_SET};
    bool m_autoPlacementHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
