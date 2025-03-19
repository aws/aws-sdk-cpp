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
  class RevokeClientVpnIngressRequest : public EC2Request
  {
  public:
    AWS_EC2_API RevokeClientVpnIngressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeClientVpnIngress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    RevokeClientVpnIngressRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const { return m_targetNetworkCidr; }
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }
    template<typename TargetNetworkCidrT = Aws::String>
    void SetTargetNetworkCidr(TargetNetworkCidrT&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::forward<TargetNetworkCidrT>(value); }
    template<typename TargetNetworkCidrT = Aws::String>
    RevokeClientVpnIngressRequest& WithTargetNetworkCidr(TargetNetworkCidrT&& value) { SetTargetNetworkCidr(std::forward<TargetNetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline const Aws::String& GetAccessGroupId() const { return m_accessGroupId; }
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }
    template<typename AccessGroupIdT = Aws::String>
    void SetAccessGroupId(AccessGroupIdT&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::forward<AccessGroupIdT>(value); }
    template<typename AccessGroupIdT = Aws::String>
    RevokeClientVpnIngressRequest& WithAccessGroupId(AccessGroupIdT&& value) { SetAccessGroupId(std::forward<AccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether access should be revoked for all groups for a single
     * <code>TargetNetworkCidr</code> that earlier authorized ingress for all groups
     * using <code>AuthorizeAllGroups</code>. This does not impact other authorization
     * rules that allowed ingress to the same <code>TargetNetworkCidr</code> with a
     * specific <code>AccessGroupId</code>.</p>
     */
    inline bool GetRevokeAllGroups() const { return m_revokeAllGroups; }
    inline bool RevokeAllGroupsHasBeenSet() const { return m_revokeAllGroupsHasBeenSet; }
    inline void SetRevokeAllGroups(bool value) { m_revokeAllGroupsHasBeenSet = true; m_revokeAllGroups = value; }
    inline RevokeClientVpnIngressRequest& WithRevokeAllGroups(bool value) { SetRevokeAllGroups(value); return *this;}
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RevokeClientVpnIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_targetNetworkCidr;
    bool m_targetNetworkCidrHasBeenSet = false;

    Aws::String m_accessGroupId;
    bool m_accessGroupIdHasBeenSet = false;

    bool m_revokeAllGroups{false};
    bool m_revokeAllGroupsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
