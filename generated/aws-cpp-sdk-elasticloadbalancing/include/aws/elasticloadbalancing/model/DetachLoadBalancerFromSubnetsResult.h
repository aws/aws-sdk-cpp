﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output of DetachLoadBalancerFromSubnets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DetachLoadBalancerFromSubnetsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API DetachLoadBalancerFromSubnetsResult
  {
  public:
    DetachLoadBalancerFromSubnetsResult();
    DetachLoadBalancerFromSubnetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DetachLoadBalancerFromSubnetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnets = value; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnets = std::move(value); }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(const Aws::String& value) { m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(Aws::String&& value) { m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(const char* value) { m_subnets.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DetachLoadBalancerFromSubnetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DetachLoadBalancerFromSubnetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnets;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
