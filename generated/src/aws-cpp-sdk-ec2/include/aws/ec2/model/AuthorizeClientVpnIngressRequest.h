/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AuthorizeClientVpnIngressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AuthorizeClientVpnIngressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeClientVpnIngress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const{ return m_targetNetworkCidr; }
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }
    inline void SetTargetNetworkCidr(const Aws::String& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = value; }
    inline void SetTargetNetworkCidr(Aws::String&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::move(value); }
    inline void SetTargetNetworkCidr(const char* value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr.assign(value); }
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(const Aws::String& value) { SetTargetNetworkCidr(value); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(Aws::String&& value) { SetTargetNetworkCidr(std::move(value)); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(const char* value) { SetTargetNetworkCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group to grant access to, for example, the Active Directory
     * group or identity provider (IdP) group. Required if
     * <code>AuthorizeAllGroups</code> is <code>false</code> or not specified.</p>
     */
    inline const Aws::String& GetAccessGroupId() const{ return m_accessGroupId; }
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }
    inline void SetAccessGroupId(const Aws::String& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = value; }
    inline void SetAccessGroupId(Aws::String&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::move(value); }
    inline void SetAccessGroupId(const char* value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId.assign(value); }
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(const Aws::String& value) { SetAccessGroupId(value); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(Aws::String&& value) { SetAccessGroupId(std::move(value)); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithAccessGroupId(const char* value) { SetAccessGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to grant access to all clients. Specify <code>true</code>
     * to grant all clients who successfully establish a VPN connection access to the
     * network. Must be set to <code>true</code> if <code>AccessGroupId</code> is not
     * specified.</p>
     */
    inline bool GetAuthorizeAllGroups() const{ return m_authorizeAllGroups; }
    inline bool AuthorizeAllGroupsHasBeenSet() const { return m_authorizeAllGroupsHasBeenSet; }
    inline void SetAuthorizeAllGroups(bool value) { m_authorizeAllGroupsHasBeenSet = true; m_authorizeAllGroups = value; }
    inline AuthorizeClientVpnIngressRequest& WithAuthorizeAllGroups(bool value) { SetAuthorizeAllGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AuthorizeClientVpnIngressRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AuthorizeClientVpnIngressRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AuthorizeClientVpnIngressRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline AuthorizeClientVpnIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_targetNetworkCidr;
    bool m_targetNetworkCidrHasBeenSet = false;

    Aws::String m_accessGroupId;
    bool m_accessGroupIdHasBeenSet = false;

    bool m_authorizeAllGroups;
    bool m_authorizeAllGroupsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
