/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>
#include <aws/elasticloadbalancingv2/model/EnablePrefixForIpv6SourceNatEnum.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/AvailabilityZone.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class SetSubnetsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult();
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the subnets.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZones = std::move(value); }
    inline SetSubnetsResult& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}
    inline SetSubnetsResult& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline SetSubnetsResult& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZones.push_back(value); return *this; }
    inline SetSubnetsResult& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressType = std::move(value); }
    inline SetSubnetsResult& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline SetSubnetsResult& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] Indicates whether to use an IPv6 prefix from each
     * subnet for source NAT.</p>
     */
    inline const EnablePrefixForIpv6SourceNatEnum& GetEnablePrefixForIpv6SourceNat() const{ return m_enablePrefixForIpv6SourceNat; }
    inline void SetEnablePrefixForIpv6SourceNat(const EnablePrefixForIpv6SourceNatEnum& value) { m_enablePrefixForIpv6SourceNat = value; }
    inline void SetEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum&& value) { m_enablePrefixForIpv6SourceNat = std::move(value); }
    inline SetSubnetsResult& WithEnablePrefixForIpv6SourceNat(const EnablePrefixForIpv6SourceNatEnum& value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    inline SetSubnetsResult& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum&& value) { SetEnablePrefixForIpv6SourceNat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline SetSubnetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline SetSubnetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;

    IpAddressType m_ipAddressType;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
