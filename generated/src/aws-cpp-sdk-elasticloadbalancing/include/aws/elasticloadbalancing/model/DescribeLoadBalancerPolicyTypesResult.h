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
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult();
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPolicyTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the policy types.</p>
     */
    inline const Aws::Vector<PolicyTypeDescription>& GetPolicyTypeDescriptions() const{ return m_policyTypeDescriptions; }

    /**
     * <p>Information about the policy types.</p>
     */
    inline void SetPolicyTypeDescriptions(const Aws::Vector<PolicyTypeDescription>& value) { m_policyTypeDescriptions = value; }

    /**
     * <p>Information about the policy types.</p>
     */
    inline void SetPolicyTypeDescriptions(Aws::Vector<PolicyTypeDescription>&& value) { m_policyTypeDescriptions = std::move(value); }

    /**
     * <p>Information about the policy types.</p>
     */
    inline DescribeLoadBalancerPolicyTypesResult& WithPolicyTypeDescriptions(const Aws::Vector<PolicyTypeDescription>& value) { SetPolicyTypeDescriptions(value); return *this;}

    /**
     * <p>Information about the policy types.</p>
     */
    inline DescribeLoadBalancerPolicyTypesResult& WithPolicyTypeDescriptions(Aws::Vector<PolicyTypeDescription>&& value) { SetPolicyTypeDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the policy types.</p>
     */
    inline DescribeLoadBalancerPolicyTypesResult& AddPolicyTypeDescriptions(const PolicyTypeDescription& value) { m_policyTypeDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the policy types.</p>
     */
    inline DescribeLoadBalancerPolicyTypesResult& AddPolicyTypeDescriptions(PolicyTypeDescription&& value) { m_policyTypeDescriptions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancerPolicyTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancerPolicyTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PolicyTypeDescription> m_policyTypeDescriptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
