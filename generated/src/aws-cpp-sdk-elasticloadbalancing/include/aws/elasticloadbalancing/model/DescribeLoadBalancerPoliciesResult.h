/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/PolicyDescription.h>
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
   * <p>Contains the output of DescribeLoadBalancerPolicies.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeLoadBalancerPoliciesOutput">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBalancerPoliciesResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPoliciesResult() = default;
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the policies.</p>
     */
    inline const Aws::Vector<PolicyDescription>& GetPolicyDescriptions() const { return m_policyDescriptions; }
    template<typename PolicyDescriptionsT = Aws::Vector<PolicyDescription>>
    void SetPolicyDescriptions(PolicyDescriptionsT&& value) { m_policyDescriptionsHasBeenSet = true; m_policyDescriptions = std::forward<PolicyDescriptionsT>(value); }
    template<typename PolicyDescriptionsT = Aws::Vector<PolicyDescription>>
    DescribeLoadBalancerPoliciesResult& WithPolicyDescriptions(PolicyDescriptionsT&& value) { SetPolicyDescriptions(std::forward<PolicyDescriptionsT>(value)); return *this;}
    template<typename PolicyDescriptionsT = PolicyDescription>
    DescribeLoadBalancerPoliciesResult& AddPolicyDescriptions(PolicyDescriptionsT&& value) { m_policyDescriptionsHasBeenSet = true; m_policyDescriptions.emplace_back(std::forward<PolicyDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLoadBalancerPoliciesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyDescription> m_policyDescriptions;
    bool m_policyDescriptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
