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
    AWS_EC2_API IpamPoolCidr();
    AWS_EC2_API IpamPoolCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPoolCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline IpamPoolCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline IpamPoolCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR provisioned to the IPAM pool. A CIDR is a representation of an IP
     * address and its associated network mask (or netmask) and refers to a range of IP
     * addresses. An IPv4 CIDR example is <code>10.24.34.0/23</code>. An IPv6 CIDR
     * example is <code>2001:DB8::/32</code>.</p>
     */
    inline IpamPoolCidr& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The state of the CIDR.</p>
     */
    inline const IpamPoolCidrState& GetState() const{ return m_state; }

    /**
     * <p>The state of the CIDR.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the CIDR.</p>
     */
    inline void SetState(const IpamPoolCidrState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the CIDR.</p>
     */
    inline void SetState(IpamPoolCidrState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the CIDR.</p>
     */
    inline IpamPoolCidr& WithState(const IpamPoolCidrState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the CIDR.</p>
     */
    inline IpamPoolCidr& WithState(IpamPoolCidrState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline const IpamPoolCidrFailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetFailureReason(const IpamPoolCidrFailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline void SetFailureReason(IpamPoolCidrFailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidr& WithFailureReason(const IpamPoolCidrFailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Details related to why an IPAM pool CIDR failed to be provisioned.</p>
     */
    inline IpamPoolCidr& WithFailureReason(IpamPoolCidrFailureReason&& value) { SetFailureReason(std::move(value)); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    IpamPoolCidrState m_state;
    bool m_stateHasBeenSet = false;

    IpamPoolCidrFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
