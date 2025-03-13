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
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult() = default;
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the load balancers.</p>
     */
    inline const Aws::Vector<LoadBalancerDescription>& GetLoadBalancerDescriptions() const { return m_loadBalancerDescriptions; }
    template<typename LoadBalancerDescriptionsT = Aws::Vector<LoadBalancerDescription>>
    void SetLoadBalancerDescriptions(LoadBalancerDescriptionsT&& value) { m_loadBalancerDescriptionsHasBeenSet = true; m_loadBalancerDescriptions = std::forward<LoadBalancerDescriptionsT>(value); }
    template<typename LoadBalancerDescriptionsT = Aws::Vector<LoadBalancerDescription>>
    DescribeLoadBalancersResult& WithLoadBalancerDescriptions(LoadBalancerDescriptionsT&& value) { SetLoadBalancerDescriptions(std::forward<LoadBalancerDescriptionsT>(value)); return *this;}
    template<typename LoadBalancerDescriptionsT = LoadBalancerDescription>
    DescribeLoadBalancersResult& AddLoadBalancerDescriptions(LoadBalancerDescriptionsT&& value) { m_loadBalancerDescriptionsHasBeenSet = true; m_loadBalancerDescriptions.emplace_back(std::forward<LoadBalancerDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeLoadBalancersResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLoadBalancersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBalancerDescription> m_loadBalancerDescriptions;
    bool m_loadBalancerDescriptionsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
