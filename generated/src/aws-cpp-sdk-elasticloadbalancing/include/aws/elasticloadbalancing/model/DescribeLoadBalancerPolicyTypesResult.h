/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/PolicyTypeDescription.h>
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
   * <p>Contains the output of DescribeLoadBalancerPolicyTypes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPolicyTypesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancerPolicyTypesResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult() = default;
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the policy types.</p>
     */
    inline const Aws::Vector<PolicyTypeDescription>& GetPolicyTypeDescriptions() const { return m_policyTypeDescriptions; }
    template<typename PolicyTypeDescriptionsT = Aws::Vector<PolicyTypeDescription>>
    void SetPolicyTypeDescriptions(PolicyTypeDescriptionsT&& value) { m_policyTypeDescriptionsHasBeenSet = true; m_policyTypeDescriptions = std::forward<PolicyTypeDescriptionsT>(value); }
    template<typename PolicyTypeDescriptionsT = Aws::Vector<PolicyTypeDescription>>
    DescribeLoadBalancerPolicyTypesResult& WithPolicyTypeDescriptions(PolicyTypeDescriptionsT&& value) { SetPolicyTypeDescriptions(std::forward<PolicyTypeDescriptionsT>(value)); return *this;}
    template<typename PolicyTypeDescriptionsT = PolicyTypeDescription>
    DescribeLoadBalancerPolicyTypesResult& AddPolicyTypeDescriptions(PolicyTypeDescriptionsT&& value) { m_policyTypeDescriptionsHasBeenSet = true; m_policyTypeDescriptions.emplace_back(std::forward<PolicyTypeDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLoadBalancerPolicyTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyTypeDescription> m_policyTypeDescriptions;
    bool m_policyTypeDescriptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
