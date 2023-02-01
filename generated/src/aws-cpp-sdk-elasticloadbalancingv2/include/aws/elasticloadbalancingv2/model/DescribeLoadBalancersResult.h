/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancer.h>
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
  class DescribeLoadBalancersResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeLoadBalancersResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the load balancers.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancers = value; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancers = std::move(value); }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LoadBalancer> m_loadBalancers;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
