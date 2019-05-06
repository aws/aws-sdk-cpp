/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API RevokeClientVpnIngressRequest : public EC2Request
  {
  public:
    RevokeClientVpnIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeClientVpnIngress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the authorization rule is
     * associated.</p>
     */
    inline RevokeClientVpnIngressRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const{ return m_targetNetworkCidr; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline void SetTargetNetworkCidr(const Aws::String& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline void SetTargetNetworkCidr(Aws::String&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline void SetTargetNetworkCidr(const char* value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(const Aws::String& value) { SetTargetNetworkCidr(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(Aws::String&& value) { SetTargetNetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being removed.</p>
     */
    inline RevokeClientVpnIngressRequest& WithTargetNetworkCidr(const char* value) { SetTargetNetworkCidr(value); return *this;}


    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline const Aws::String& GetAccessGroupId() const{ return m_accessGroupId; }

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline void SetAccessGroupId(const Aws::String& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = value; }

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline void SetAccessGroupId(Aws::String&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::move(value); }

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline void SetAccessGroupId(const char* value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId.assign(value); }

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(const Aws::String& value) { SetAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(Aws::String&& value) { SetAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Active Directory group for which to revoke access. </p>
     */
    inline RevokeClientVpnIngressRequest& WithAccessGroupId(const char* value) { SetAccessGroupId(value); return *this;}


    /**
     * <p>Indicates whether access should be revoked for all clients.</p>
     */
    inline bool GetRevokeAllGroups() const{ return m_revokeAllGroups; }

    /**
     * <p>Indicates whether access should be revoked for all clients.</p>
     */
    inline bool RevokeAllGroupsHasBeenSet() const { return m_revokeAllGroupsHasBeenSet; }

    /**
     * <p>Indicates whether access should be revoked for all clients.</p>
     */
    inline void SetRevokeAllGroups(bool value) { m_revokeAllGroupsHasBeenSet = true; m_revokeAllGroups = value; }

    /**
     * <p>Indicates whether access should be revoked for all clients.</p>
     */
    inline RevokeClientVpnIngressRequest& WithRevokeAllGroups(bool value) { SetRevokeAllGroups(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline RevokeClientVpnIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_targetNetworkCidr;
    bool m_targetNetworkCidrHasBeenSet;

    Aws::String m_accessGroupId;
    bool m_accessGroupIdHasBeenSet;

    bool m_revokeAllGroups;
    bool m_revokeAllGroupsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
