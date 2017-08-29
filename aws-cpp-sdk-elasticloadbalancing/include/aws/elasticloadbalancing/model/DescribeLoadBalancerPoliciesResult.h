/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICLOADBALANCING_API DescribeLoadBalancerPoliciesResult
  {
  public:
    DescribeLoadBalancerPoliciesResult();
    DescribeLoadBalancerPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLoadBalancerPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the policies.</p>
     */
    inline const Aws::Vector<PolicyDescription>& GetPolicyDescriptions() const{ return m_policyDescriptions; }

    /**
     * <p>Information about the policies.</p>
     */
    inline void SetPolicyDescriptions(const Aws::Vector<PolicyDescription>& value) { m_policyDescriptions = value; }

    /**
     * <p>Information about the policies.</p>
     */
    inline void SetPolicyDescriptions(Aws::Vector<PolicyDescription>&& value) { m_policyDescriptions = std::move(value); }

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeLoadBalancerPoliciesResult& WithPolicyDescriptions(const Aws::Vector<PolicyDescription>& value) { SetPolicyDescriptions(value); return *this;}

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeLoadBalancerPoliciesResult& WithPolicyDescriptions(Aws::Vector<PolicyDescription>&& value) { SetPolicyDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeLoadBalancerPoliciesResult& AddPolicyDescriptions(const PolicyDescription& value) { m_policyDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the policies.</p>
     */
    inline DescribeLoadBalancerPoliciesResult& AddPolicyDescriptions(PolicyDescription&& value) { m_policyDescriptions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancerPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancerPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PolicyDescription> m_policyDescriptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
