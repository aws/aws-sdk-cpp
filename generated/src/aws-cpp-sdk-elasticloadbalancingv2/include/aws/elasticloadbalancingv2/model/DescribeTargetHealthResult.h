/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TargetHealthDescription.h>
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
  class DescribeTargetHealthResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the health of the targets.</p>
     */
    inline const Aws::Vector<TargetHealthDescription>& GetTargetHealthDescriptions() const { return m_targetHealthDescriptions; }
    template<typename TargetHealthDescriptionsT = Aws::Vector<TargetHealthDescription>>
    void SetTargetHealthDescriptions(TargetHealthDescriptionsT&& value) { m_targetHealthDescriptionsHasBeenSet = true; m_targetHealthDescriptions = std::forward<TargetHealthDescriptionsT>(value); }
    template<typename TargetHealthDescriptionsT = Aws::Vector<TargetHealthDescription>>
    DescribeTargetHealthResult& WithTargetHealthDescriptions(TargetHealthDescriptionsT&& value) { SetTargetHealthDescriptions(std::forward<TargetHealthDescriptionsT>(value)); return *this;}
    template<typename TargetHealthDescriptionsT = TargetHealthDescription>
    DescribeTargetHealthResult& AddTargetHealthDescriptions(TargetHealthDescriptionsT&& value) { m_targetHealthDescriptionsHasBeenSet = true; m_targetHealthDescriptions.emplace_back(std::forward<TargetHealthDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTargetHealthResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetHealthDescription> m_targetHealthDescriptions;
    bool m_targetHealthDescriptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
