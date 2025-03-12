/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>An IPAM pool is a collection of IP address CIDRs. IPAM pools enable you to
   * organize your IP addresses according to your routing and security
   * needs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/IpamPools">AWS
   * API Reference</a></p>
   */
  class IpamPools
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API IpamPools();
    AWS_ELASTICLOADBALANCINGV2_API IpamPools(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API IpamPools& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the IPv4 IPAM pool.</p>
     */
    inline const Aws::String& GetIpv4IpamPoolId() const{ return m_ipv4IpamPoolId; }
    inline bool Ipv4IpamPoolIdHasBeenSet() const { return m_ipv4IpamPoolIdHasBeenSet; }
    inline void SetIpv4IpamPoolId(const Aws::String& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = value; }
    inline void SetIpv4IpamPoolId(Aws::String&& value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId = std::move(value); }
    inline void SetIpv4IpamPoolId(const char* value) { m_ipv4IpamPoolIdHasBeenSet = true; m_ipv4IpamPoolId.assign(value); }
    inline IpamPools& WithIpv4IpamPoolId(const Aws::String& value) { SetIpv4IpamPoolId(value); return *this;}
    inline IpamPools& WithIpv4IpamPoolId(Aws::String&& value) { SetIpv4IpamPoolId(std::move(value)); return *this;}
    inline IpamPools& WithIpv4IpamPoolId(const char* value) { SetIpv4IpamPoolId(value); return *this;}
    ///@}
  private:

    Aws::String m_ipv4IpamPoolId;
    bool m_ipv4IpamPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
