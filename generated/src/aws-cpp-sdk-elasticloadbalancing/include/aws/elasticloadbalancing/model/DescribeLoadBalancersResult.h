/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/LoadBalancerDescription.h>
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
   * <p>Contains the parameters for DescribeLoadBalancers.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeAccessPointsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancersResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult();
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the load balancers.</p>
     */
    inline const Aws::Vector<LoadBalancerDescription>& GetLoadBalancerDescriptions() const{ return m_loadBalancerDescriptions; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline void SetLoadBalancerDescriptions(const Aws::Vector<LoadBalancerDescription>& value) { m_loadBalancerDescriptions = value; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline void SetLoadBalancerDescriptions(Aws::Vector<LoadBalancerDescription>&& value) { m_loadBalancerDescriptions = std::move(value); }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& WithLoadBalancerDescriptions(const Aws::Vector<LoadBalancerDescription>& value) { SetLoadBalancerDescriptions(value); return *this;}

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& WithLoadBalancerDescriptions(Aws::Vector<LoadBalancerDescription>&& value) { SetLoadBalancerDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& AddLoadBalancerDescriptions(const LoadBalancerDescription& value) { m_loadBalancerDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the load balancers.</p>
     */
    inline DescribeLoadBalancersResult& AddLoadBalancerDescriptions(LoadBalancerDescription&& value) { m_loadBalancerDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeLoadBalancersResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LoadBalancerDescription> m_loadBalancerDescriptions;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
