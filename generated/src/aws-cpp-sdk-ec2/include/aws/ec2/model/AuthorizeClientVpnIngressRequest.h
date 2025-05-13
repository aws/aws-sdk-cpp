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
    AWS_EC2_API AuthorizeClientVpnIngressRequest() = default;

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
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    AuthorizeClientVpnIngressRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the network for which access is
     * being authorized.</p>
     */
    inline const Aws::String& GetTargetNetworkCidr() const { return m_targetNetworkCidr; }
    inline bool TargetNetworkCidrHasBeenSet() const { return m_targetNetworkCidrHasBeenSet; }
    template<typename TargetNetworkCidrT = Aws::String>
    void SetTargetNetworkCidr(TargetNetworkCidrT&& value) { m_targetNetworkCidrHasBeenSet = true; m_targetNetworkCidr = std::forward<TargetNetworkCidrT>(value); }
    template<typename TargetNetworkCidrT = Aws::String>
    AuthorizeClientVpnIngressRequest& WithTargetNetworkCidr(TargetNetworkCidrT&& value) { SetTargetNetworkCidr(std::forward<TargetNetworkCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group to grant access to, for example, the Active Directory
     * group or identity provider (IdP) group. Required if
     * <code>AuthorizeAllGroups</code> is <code>false</code> or not specified.</p>
     */
    inline const Aws::String& GetAccessGroupId() const { return m_accessGroupId; }
    inline bool AccessGroupIdHasBeenSet() const { return m_accessGroupIdHasBeenSet; }
    template<typename AccessGroupIdT = Aws::String>
    void SetAccessGroupId(AccessGroupIdT&& value) { m_accessGroupIdHasBeenSet = true; m_accessGroupId = std::forward<AccessGroupIdT>(value); }
    template<typename AccessGroupIdT = Aws::String>
    AuthorizeClientVpnIngressRequest& WithAccessGroupId(AccessGroupIdT&& value) { SetAccessGroupId(std::forward<AccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to grant access to all clients. Specify <code>true</code>
     * to grant all clients who successfully establish a VPN connection access to the
     * network. Must be set to <code>true</code> if <code>AccessGroupId</code> is not
     * specified.</p>
     */
    inline bool GetAuthorizeAllGroups() const { return m_authorizeAllGroups; }
    inline bool AuthorizeAllGroupsHasBeenSet() const { return m_authorizeAllGroupsHasBeenSet; }
    inline void SetAuthorizeAllGroups(bool value) { m_authorizeAllGroupsHasBeenSet = true; m_authorizeAllGroups = value; }
    inline AuthorizeClientVpnIngressRequest& WithAuthorizeAllGroups(bool value) { SetAuthorizeAllGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the authorization rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AuthorizeClientVpnIngressRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AuthorizeClientVpnIngressRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    inline AuthorizeClientVpnIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_targetNetworkCidr;
    bool m_targetNetworkCidrHasBeenSet = false;

    Aws::String m_accessGroupId;
    bool m_accessGroupIdHasBeenSet = false;

    bool m_authorizeAllGroups{false};
    bool m_authorizeAllGroupsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
