/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SetSecurityGroupsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The IDs of the security groups associated with the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    SetSecurityGroupsResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    SetSecurityGroupsResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to evaluate inbound security group rules for traffic sent
     * to a Network Load Balancer through Amazon Web Services PrivateLink.</p>
     */
    inline EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum GetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic() const { return m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = value; }
    inline SetSecurityGroupsResult& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SetSecurityGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic{EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum::NOT_SET};
    bool m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
