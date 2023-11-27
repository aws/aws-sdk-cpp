/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocation.h>
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
  class DescribeTrustStoreRevocationsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline const Aws::Vector<DescribeTrustStoreRevocation>& GetTrustStoreRevocations() const{ return m_trustStoreRevocations; }

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline void SetTrustStoreRevocations(const Aws::Vector<DescribeTrustStoreRevocation>& value) { m_trustStoreRevocations = value; }

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline void SetTrustStoreRevocations(Aws::Vector<DescribeTrustStoreRevocation>&& value) { m_trustStoreRevocations = std::move(value); }

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsResult& WithTrustStoreRevocations(const Aws::Vector<DescribeTrustStoreRevocation>& value) { SetTrustStoreRevocations(value); return *this;}

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsResult& WithTrustStoreRevocations(Aws::Vector<DescribeTrustStoreRevocation>&& value) { SetTrustStoreRevocations(std::move(value)); return *this;}

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsResult& AddTrustStoreRevocations(const DescribeTrustStoreRevocation& value) { m_trustStoreRevocations.push_back(value); return *this; }

    /**
     * <p>Information about the revocation file in the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsResult& AddTrustStoreRevocations(DescribeTrustStoreRevocation&& value) { m_trustStoreRevocations.push_back(std::move(value)); return *this; }


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
    inline DescribeTrustStoreRevocationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoreRevocationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoreRevocationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrustStoreRevocationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrustStoreRevocationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DescribeTrustStoreRevocation> m_trustStoreRevocations;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
