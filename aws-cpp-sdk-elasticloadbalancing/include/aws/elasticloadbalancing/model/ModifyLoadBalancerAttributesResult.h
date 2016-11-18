﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/LoadBalancerAttributes.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>

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
   * <p>Contains the output of ModifyLoadBalancerAttributes.</p>
   */
  class AWS_ELASTICLOADBALANCING_API ModifyLoadBalancerAttributesResult
  {
  public:
    ModifyLoadBalancerAttributesResult();
    ModifyLoadBalancerAttributesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyLoadBalancerAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerName = value; }

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
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    
    inline const LoadBalancerAttributes& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }

    
    inline void SetLoadBalancerAttributes(const LoadBalancerAttributes& value) { m_loadBalancerAttributes = value; }

    
    inline void SetLoadBalancerAttributes(LoadBalancerAttributes&& value) { m_loadBalancerAttributes = value; }

    
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerAttributes(const LoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}

    
    inline ModifyLoadBalancerAttributesResult& WithLoadBalancerAttributes(LoadBalancerAttributes&& value) { SetLoadBalancerAttributes(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyLoadBalancerAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_loadBalancerName;
    LoadBalancerAttributes m_loadBalancerAttributes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws