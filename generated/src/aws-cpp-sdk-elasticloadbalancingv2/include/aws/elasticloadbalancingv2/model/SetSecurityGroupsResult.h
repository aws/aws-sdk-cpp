﻿/**
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
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult();
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The IDs of the security groups associated with the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline SetSecurityGroupsResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline SetSecurityGroupsResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline SetSecurityGroupsResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline SetSecurityGroupsResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline SetSecurityGroupsResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to evaluate inbound security group rules for traffic sent
     * to a Network Load Balancer through Amazon Web Services PrivateLink.</p>
     */
    inline const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& GetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic() const{ return m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = value; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum&& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = std::move(value); }
    inline SetSecurityGroupsResult& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(value); return *this;}
    inline SetSecurityGroupsResult& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum&& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline SetSecurityGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline SetSecurityGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_securityGroupIds;

    EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
