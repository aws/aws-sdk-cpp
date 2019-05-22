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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AuthorizeClientVpnIngressRequest : public EC2Request
  {
  public:
    AuthorizeClientVpnIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeClientVpnIngress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const{ return m_targetNetworkCidr; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline void SetTargetNetworkCidr(const Aws::String& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline void SetTargetNetworkCidr(Aws::String&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline void SetTargetNetworkCidr(const char* value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(const Aws::String& value) { SetTargetNetworkCidr(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(Aws::String&& value) { SetTargetNetworkCidr(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(const char* value) { SetTargetNetworkCidr(value); return *this;}


    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline const Aws::String& GetAccessGroupId() const{ return m_accessGroupId; }

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline void SetAccessGroupId(const Aws::String& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = value; }

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline void SetAccessGroupId(Aws::String&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::move(value); }

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline void SetAccessGroupId(const char* value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId.assign(value); }

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(const Aws::String& value) { SetAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(Aws::String&& value) { SetAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Active Directory group to grant access.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(const char* value) { SetAccessGroupId(value); return *this;}


    /**
     * <p>Indicates whether to grant access to all clients. Use <code>true</code> to
     * grant all clients who successfully establish a VPN connection access to the
     * network.</p>
     */
    inline bool GetAuthorizeAllGroups() const{ return m_authorizeAllGroups; }

    /**
     * <p>Indicates whether to grant access to all clients. Use <code>true</code> to
     * grant all clients who successfully establish a VPN connection access to the
     * network.</p>
     */
    inline bool AuthorizeAllGroupsHasBeenSet() const { return m_authorizeAllGroupsHasBeenSet; }

    /**
     * <p>Indicates whether to grant access to all clients. Use <code>true</code> to
     * grant all clients who successfully establish a VPN connection access to the
     * network.</p>
     */
    inline void SetAuthorizeAllGroups(bool value) { m_authorizeAllGroupsHasBeenSet = true; m_authorizeAllGroups = value; }

    /**
     * <p>Indicates whether to grant access to all clients. Use <code>true</code> to
     * grant all clients who successfully establish a VPN connection access to the
     * network.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithAuthorizeAllGroups(bool value) { SetAuthorizeAllGroups(value); return *this;}


    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline AuthorizeClientVpnIngressRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline AuthorizeClientVpnIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_targetNetworkCidr;
    bool m_targetNetworkCidrHasBeenSet;

    Aws::String m_accessGroupId;
    bool m_accessGroupIdHasBeenSet;

    bool m_authorizeAllGroups;
    bool m_authorizeAllGroupsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
