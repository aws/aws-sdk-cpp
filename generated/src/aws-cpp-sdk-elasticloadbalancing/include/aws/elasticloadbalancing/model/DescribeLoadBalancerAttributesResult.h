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
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult() = default;
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the load balancer attributes.</p>
     */
    inline const LoadBalancerAttributes& GetLoadBalancerAttributes() const { return m_loadBalancerAttributes; }
    template<typename LoadBalancerAttributesT = LoadBalancerAttributes>
    void SetLoadBalancerAttributes(LoadBalancerAttributesT&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::forward<LoadBalancerAttributesT>(value); }
    template<typename LoadBalancerAttributesT = LoadBalancerAttributes>
    DescribeLoadBalancerAttributesResult& WithLoadBalancerAttributes(LoadBalancerAttributesT&& value) { SetLoadBalancerAttributes(std::forward<LoadBalancerAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLoadBalancerAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LoadBalancerAttributes m_loadBalancerAttributes;
    bool m_loadBalancerAttributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
