/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/model/LoadBalancerAttributes.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeLoadBalancerAttributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerAttributesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancerAttributesResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult();
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline const LoadBalancerAttributes& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline void SetLoadBalancerAttributes(const LoadBalancerAttributes& value) { m_loadBalancerAttributes = value; }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline void SetLoadBalancerAttributes(LoadBalancerAttributes&& value) { m_loadBalancerAttributes = std::move(value); }

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline DescribeLoadBalancerAttributesResult& WithLoadBalancerAttributes(const LoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline DescribeLoadBalancerAttributesResult& WithLoadBalancerAttributes(LoadBalancerAttributes&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancerAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancerAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LoadBalancerAttributes m_loadBalancerAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
