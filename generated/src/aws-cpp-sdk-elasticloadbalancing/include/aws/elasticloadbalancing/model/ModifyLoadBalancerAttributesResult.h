/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the output of ModifyLoadBalancerAttributes.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ModifyLoadBalancerAttributesOutput">AWS
   * API Reference</a></p>
   */
  class ModifyLoadBalancerAttributesResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API ModifyLoadBalancerAttributesResult();
    AWS_ELASTICLOADBALANCING_API ModifyLoadBalancerAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API ModifyLoadBalancerAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


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
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerAttributes(const LoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}

    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerAttributes(LoadBalancerAttributes&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_loadBalancerName;

    LoadBalancerAttributes m_loadBalancerAttributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
