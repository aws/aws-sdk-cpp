/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PublicIpDnsOption.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyPublicIpDnsNameOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyPublicIpDnsNameOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyPublicIpDnsNameOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A network interface ID.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    ModifyPublicIpDnsNameOptionsRequest& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public hostname type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
     * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
     * Guide</i>.</p> <ul> <li> <p> <code>public-dual-stack-dns-name</code>: A
     * dual-stack public hostname for a network interface. Requests from within the VPC
     * resolve to both the private IPv4 address and the IPv6 Global Unicast Address of
     * the network interface. Requests from the internet resolve to both the public
     * IPv4 and the IPv6 GUA address of the network interface.</p> </li> <li> <p>
     * <code>public-ipv4-dns-name</code>: An IPv4-enabled public hostname for a network
     * interface. Requests from within the VPC resolve to the private primary IPv4
     * address of the network interface. Requests from the internet resolve to the
     * public IPv4 address of the network interface.</p> </li> <li> <p>
     * <code>public-ipv6-dns-name</code>: An IPv6-enabled public hostname for a network
     * interface. Requests from within the VPC or from the internet resolve to the IPv6
     * GUA of the network interface. </p> </li> </ul>
     */
    inline PublicIpDnsOption GetHostnameType() const { return m_hostnameType; }
    inline bool HostnameTypeHasBeenSet() const { return m_hostnameTypeHasBeenSet; }
    inline void SetHostnameType(PublicIpDnsOption value) { m_hostnameTypeHasBeenSet = true; m_hostnameType = value; }
    inline ModifyPublicIpDnsNameOptionsRequest& WithHostnameType(PublicIpDnsOption value) { SetHostnameType(value); return *this;}
    ///@}

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
    inline ModifyPublicIpDnsNameOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    PublicIpDnsOption m_hostnameType{PublicIpDnsOption::NOT_SET};
    bool m_hostnameTypeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
