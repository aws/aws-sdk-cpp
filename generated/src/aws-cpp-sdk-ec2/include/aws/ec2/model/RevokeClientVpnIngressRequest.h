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
    AWS_EC2_API RevokeClientVpnIngressRequest();

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
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const{ return m_targetNetworkCidr; }
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }
    inline void SetTargetNetworkCidr(const Aws::String& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = value; }
    inline void SetTargetNetworkCidr(Aws::String&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::move(value); }
    inline void SetTargetNetworkCidr(const char* value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr.assign(value); }
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(const Aws::String& value) { SetTargetNetworkCidr(value); return *this;}
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(Aws::String&& value) { SetTargetNetworkCidr(std::move(value)); return *this;}
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(const char* value) { SetTargetNetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline const Aws::String& GetAccessGroupId() const{ return m_accessGroupId; }
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }
    inline void SetAccessGroupId(const Aws::String& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = value; }
    inline void SetAccessGroupId(Aws::String&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::move(value); }
    inline void SetAccessGroupId(const char* value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId.assign(value); }
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(const Aws::String& value) { SetAccessGroupId(value); return *this;}
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(Aws::String&& value) { SetAccessGroupId(std::move(value)); return *this;}
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(const char* value) { SetAccessGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether access should be revoked for all groups for a single
     * <code>TargetNetworkCidr</code> that earlier authorized ingress for all groups
     * using <code>AuthorizeAllGroups</code>. This does not impact other authorization
     * rules that allowed ingress to the same <code>TargetNetworkCidr</code> with a
     * specific <code>AccessGroupId</code>.</p>
     */
    inline bool GetRevokeAllGroups() const{ return m_revokeAllGroups; }
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
    inline bool GetDryRun() const{ return m_dryRun; }
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

    bool m_revokeAllGroups;
    bool m_revokeAllGroupsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
