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
  class ModifyIpamResourceCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIpamResourceCidrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamResourceCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyIpamResourceCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource you want to modify.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ModifyIpamResourceCidrRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR of the resource you want to modify.</p>
     */
    inline const Aws::String& GetResourceCidr() const { return m_resourceCidr; }
    inline bool ResourceCidrHasBeenSet() const { return m_resourceCidrHasBeenSet; }
    template<typename ResourceCidrT = Aws::String>
    void SetResourceCidr(ResourceCidrT&& value) { m_resourceCidrHasBeenSet = true; m_resourceCidr = std::forward<ResourceCidrT>(value); }
    template<typename ResourceCidrT = Aws::String>
    ModifyIpamResourceCidrRequest& WithResourceCidr(ResourceCidrT&& value) { SetResourceCidr(std::forward<ResourceCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the resource you want to modify.</p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    ModifyIpamResourceCidrRequest& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the current scope that the resource CIDR is in.</p>
     */
    inline const Aws::String& GetCurrentIpamScopeId() const { return m_currentIpamScopeId; }
    inline bool CurrentIpamScopeIdHasBeenSet() const { return m_currentIpamScopeIdHasBeenSet; }
    template<typename CurrentIpamScopeIdT = Aws::String>
    void SetCurrentIpamScopeId(CurrentIpamScopeIdT&& value) { m_currentIpamScopeIdHasBeenSet = true; m_currentIpamScopeId = std::forward<CurrentIpamScopeIdT>(value); }
    template<typename CurrentIpamScopeIdT = Aws::String>
    ModifyIpamResourceCidrRequest& WithCurrentIpamScopeId(CurrentIpamScopeIdT&& value) { SetCurrentIpamScopeId(std::forward<CurrentIpamScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scope you want to transfer the resource CIDR to.</p>
     */
    inline const Aws::String& GetDestinationIpamScopeId() const { return m_destinationIpamScopeId; }
    inline bool DestinationIpamScopeIdHasBeenSet() const { return m_destinationIpamScopeIdHasBeenSet; }
    template<typename DestinationIpamScopeIdT = Aws::String>
    void SetDestinationIpamScopeId(DestinationIpamScopeIdT&& value) { m_destinationIpamScopeIdHasBeenSet = true; m_destinationIpamScopeId = std::forward<DestinationIpamScopeIdT>(value); }
    template<typename DestinationIpamScopeIdT = Aws::String>
    ModifyIpamResourceCidrRequest& WithDestinationIpamScopeId(DestinationIpamScopeIdT&& value) { SetDestinationIpamScopeId(std::forward<DestinationIpamScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the resource is monitored by IPAM. If a resource is monitored,
     * the resource is discovered by IPAM and you can view details about the resource’s
     * CIDR.</p>
     */
    inline bool GetMonitored() const { return m_monitored; }
    inline bool MonitoredHasBeenSet() const { return m_monitoredHasBeenSet; }
    inline void SetMonitored(bool value) { m_monitoredHasBeenSet = true; m_monitored = value; }
    inline ModifyIpamResourceCidrRequest& WithMonitored(bool value) { SetMonitored(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceCidr;
    bool m_resourceCidrHasBeenSet = false;

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_currentIpamScopeId;
    bool m_currentIpamScopeIdHasBeenSet = false;

    Aws::String m_destinationIpamScopeId;
    bool m_destinationIpamScopeIdHasBeenSet = false;

    bool m_monitored{false};
    bool m_monitoredHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
