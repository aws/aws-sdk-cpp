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
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API SetSubnetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the subnets.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    SetSubnetsResult& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    SetSubnetsResult& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline SetSubnetsResult& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] Indicates whether to use an IPv6 prefix from each
     * subnet for source NAT.</p>
     */
    inline EnablePrefixForIpv6SourceNatEnum GetEnablePrefixForIpv6SourceNat() const { return m_enablePrefixForIpv6SourceNat; }
    inline void SetEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { m_enablePrefixForIpv6SourceNatHasBeenSet = true; m_enablePrefixForIpv6SourceNat = value; }
    inline SetSubnetsResult& WithEnablePrefixForIpv6SourceNat(EnablePrefixForIpv6SourceNatEnum value) { SetEnablePrefixForIpv6SourceNat(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SetSubnetsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    EnablePrefixForIpv6SourceNatEnum m_enablePrefixForIpv6SourceNat{EnablePrefixForIpv6SourceNatEnum::NOT_SET};
    bool m_enablePrefixForIpv6SourceNatHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
