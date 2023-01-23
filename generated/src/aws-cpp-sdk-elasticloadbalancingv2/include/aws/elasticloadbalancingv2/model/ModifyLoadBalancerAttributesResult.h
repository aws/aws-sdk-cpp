/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerAttribute.h>
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
  class ModifyLoadBalancerAttributesResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyLoadBalancerAttributesResult();
    AWS_ELASTICLOADBALANCINGV2_API ModifyLoadBalancerAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API ModifyLoadBalancerAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline const Aws::Vector<LoadBalancerAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline void SetAttributes(const Aws::Vector<LoadBalancerAttribute>& value) { m_attributes = value; }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline void SetAttributes(Aws::Vector<LoadBalancerAttribute>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithAttributes(const Aws::Vector<LoadBalancerAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithAttributes(Aws::Vector<LoadBalancerAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline ModifyLoadBalancerAttributesResult& AddAttributes(const LoadBalancerAttribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline ModifyLoadBalancerAttributesResult& AddAttributes(LoadBalancerAttribute&& value) { m_attributes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LoadBalancerAttribute> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
