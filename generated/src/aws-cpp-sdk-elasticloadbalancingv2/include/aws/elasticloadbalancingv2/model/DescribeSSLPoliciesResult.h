/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/SslPolicy.h>
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
  class DescribeSSLPoliciesResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeSSLPoliciesResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeSSLPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeSSLPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the security policies.</p>
     */
    inline const Aws::Vector<SslPolicy>& GetSslPolicies() const{ return m_sslPolicies; }
    inline void SetSslPolicies(const Aws::Vector<SslPolicy>& value) { m_sslPolicies = value; }
    inline void SetSslPolicies(Aws::Vector<SslPolicy>&& value) { m_sslPolicies = std::move(value); }
    inline DescribeSSLPoliciesResult& WithSslPolicies(const Aws::Vector<SslPolicy>& value) { SetSslPolicies(value); return *this;}
    inline DescribeSSLPoliciesResult& WithSslPolicies(Aws::Vector<SslPolicy>&& value) { SetSslPolicies(std::move(value)); return *this;}
    inline DescribeSSLPoliciesResult& AddSslPolicies(const SslPolicy& value) { m_sslPolicies.push_back(value); return *this; }
    inline DescribeSSLPoliciesResult& AddSslPolicies(SslPolicy&& value) { m_sslPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline DescribeSSLPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline DescribeSSLPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline DescribeSSLPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSSLPoliciesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSSLPoliciesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SslPolicy> m_sslPolicies;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
