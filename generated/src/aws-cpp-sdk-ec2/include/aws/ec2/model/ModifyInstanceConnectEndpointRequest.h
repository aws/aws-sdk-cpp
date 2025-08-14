/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceConnectEndpointRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceConnectEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceConnectEndpoint"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceConnectEndpointRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Instance Connect Endpoint to modify.</p>
     */
    inline const Aws::String& GetInstanceConnectEndpointId() const { return m_instanceConnectEndpointId; }
    inline bool InstanceConnectEndpointIdHasBeenSet() const { return m_instanceConnectEndpointIdHasBeenSet; }
    template<typename InstanceConnectEndpointIdT = Aws::String>
    void SetInstanceConnectEndpointId(InstanceConnectEndpointIdT&& value) { m_instanceConnectEndpointIdHasBeenSet = true; m_instanceConnectEndpointId = std::forward<InstanceConnectEndpointIdT>(value); }
    template<typename InstanceConnectEndpointIdT = Aws::String>
    ModifyInstanceConnectEndpointRequest& WithInstanceConnectEndpointId(InstanceConnectEndpointIdT&& value) { SetInstanceConnectEndpointId(std::forward<InstanceConnectEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new IP address type for the EC2 Instance Connect Endpoint.</p>  <p>
     * <code>PreserveClientIp</code> is only supported on IPv4 EC2 Instance Connect
     * Endpoints. To use <code>PreserveClientIp</code>, the value for
     * <code>IpAddressType</code> must be <code>ipv4</code>.</p> 
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline ModifyInstanceConnectEndpointRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the security groups for the EC2 Instance Connect Endpoint. The new
     * set of groups you specify replaces the current set. You must specify at least
     * one group, even if it's just the default security group in the VPC. You must
     * specify the ID of the security group, not the name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyInstanceConnectEndpointRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ModifyInstanceConnectEndpointRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the client IP address is preserved as the source. The
     * following are the possible values.</p> <ul> <li> <p> <code>true</code> - Use the
     * client IP address as the source.</p> </li> <li> <p> <code>false</code> - Use the
     * network interface IP address as the source.</p> </li> </ul>  <p>
     * <code>PreserveClientIp=true</code> is only supported on IPv4 EC2 Instance
     * Connect Endpoints. If modifying <code>PreserveClientIp</code> to
     * <code>true</code>, either the endpoint's existing <code>IpAddressType</code>
     * must be <code>ipv4</code>, or if modifying <code>IpAddressType</code> in the
     * same request, the new value must be <code>ipv4</code>.</p>  <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetPreserveClientIp() const { return m_preserveClientIp; }
    inline bool PreserveClientIpHasBeenSet() const { return m_preserveClientIpHasBeenSet; }
    inline void SetPreserveClientIp(bool value) { m_preserveClientIpHasBeenSet = true; m_preserveClientIp = value; }
    inline ModifyInstanceConnectEndpointRequest& WithPreserveClientIp(bool value) { SetPreserveClientIp(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceConnectEndpointId;
    bool m_instanceConnectEndpointIdHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    bool m_preserveClientIp{false};
    bool m_preserveClientIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
