/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/TagSpecification.h>
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
  class CreateInstanceConnectEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateInstanceConnectEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceConnectEndpoint"; }

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
    inline CreateInstanceConnectEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which to create the EC2 Instance Connect
     * Endpoint.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateInstanceConnectEndpointRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more security groups to associate with the endpoint. If you don't
     * specify a security group, the default security group for your VPC will be
     * associated with the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateInstanceConnectEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateInstanceConnectEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client IP address is preserved as the source. The
     * following are the possible values.</p> <ul> <li> <p> <code>true</code> - Use the
     * client IP address as the source.</p> </li> <li> <p> <code>false</code> - Use the
     * network interface IP address as the source.</p> </li> </ul>  <p>
     * <code>PreserveClientIp</code> is only supported on IPv4 EC2 Instance Connect
     * Endpoints. To use <code>PreserveClientIp</code>, the value for
     * <code>IpAddressType</code> must be <code>ipv4</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetPreserveClientIp() const { return m_preserveClientIp; }
    inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }
    inline void SetPreserveClientIp(bool value) { m_preserveClientIpHasBeenSet = true; m_preserveClientIp = value; }
    inline CreateInstanceConnectEndpointRequest& WithPreserveClientIp(bool value) { SetPreserveClientIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateInstanceConnectEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the EC2 Instance Connect Endpoint during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateInstanceConnectEndpointRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateInstanceConnectEndpointRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type of the endpoint.</p> <p>If no value is specified, the
     * default value is determined by the IP address type of the subnet:</p> <ul> <li>
     * <p> <code>dualstack</code> - If the subnet has both IPv4 and IPv6 CIDRs</p>
     * </li> <li> <p> <code>ipv4</code> - If the subnet has only IPv4 CIDRs</p> </li>
     * <li> <p> <code>ipv6</code> - If the subnet has only IPv6 CIDRs</p> </li> </ul>
     *  <p> <code>PreserveClientIp</code> is only supported on IPv4 EC2 Instance
     * Connect Endpoints. To use <code>PreserveClientIp</code>, the value for
     * <code>IpAddressType</code> must be <code>ipv4</code>.</p> 
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateInstanceConnectEndpointRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    bool m_preserveClientIp{false};
    bool m_preserveClientIpHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
