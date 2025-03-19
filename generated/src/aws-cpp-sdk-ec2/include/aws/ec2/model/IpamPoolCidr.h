/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamPoolCidrState.h>
#include <aws/ec2/model/IpamPoolCidrFailureReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A CIDR provisioned to an IPAM pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPoolCidr">AWS
   * API Reference</a></p>
   */
  class IpamPoolCidr
  {
  public:
    AWS_EC2_API IpamPoolCidr() = default;
    AWS_EC2_API IpamPoolCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    IpamPoolCidr& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the CIDR.</p>
     */
    inline IpamPoolCidrState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamPoolCidrState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamPoolCidr& WithState(IpamPoolCidrState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline const IpamPoolCidrFailureReason& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = IpamPoolCidrFailureReason>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = IpamPoolCidrFailureReason>
    IpamPoolCidr& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM pool CIDR ID.</p>
     */
    inline const Aws::String& GetIpamPoolCidrId() const { return m_ipamPoolCidrId; }
    inline bool IpamPoolCidrIdHasBeenSet() const { return m_ipamPoolCidrIdHasBeenSet; }
    template<typename IpamPoolCidrIdT = Aws::String>
    void SetIpamPoolCidrId(IpamPoolCidrIdT&& value) { m_ipamPoolCidrIdHasBeenSet = true; m_ipamPoolCidrId = std::forward<IpamPoolCidrIdT>(value); }
    template<typename IpamPoolCidrIdT = Aws::String>
    IpamPoolCidr& WithIpamPoolCidrId(IpamPoolCidrIdT&& value) { SetIpamPoolCidrId(std::forward<IpamPoolCidrIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask length of the CIDR you'd like to provision to a pool. Can be used
     * for provisioning Amazon-provided IPv6 CIDRs to top-level pools and for
     * provisioning CIDRs to pools with source pools. Cannot be used to provision BYOIP
     * CIDRs to top-level pools. "NetmaskLength" or "Cidr" is required.</p>
     */
    inline int GetNetmaskLength() const { return m_netmaskLength; }
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }
    inline IpamPoolCidr& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    IpamPoolCidrState m_state{IpamPoolCidrState::NOT_SET};
    bool m_stateHasBeenSet = false;

    IpamPoolCidrFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_ipamPoolCidrId;
    bool m_ipamPoolCidrIdHasBeenSet = false;

    int m_netmaskLength{0};
    bool m_netmaskLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
