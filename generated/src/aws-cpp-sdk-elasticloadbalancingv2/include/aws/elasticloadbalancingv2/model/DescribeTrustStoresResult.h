/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TrustStore.h>
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
  class DescribeTrustStoresResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoresResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the trust stores.</p>
     */
    inline const Aws::Vector<TrustStore>& GetTrustStores() const{ return m_trustStores; }

    /**
     * <p>Information about the trust stores.</p>
     */
    inline void SetTrustStores(const Aws::Vector<TrustStore>& value) { m_trustStores = value; }

    /**
     * <p>Information about the trust stores.</p>
     */
    inline void SetTrustStores(Aws::Vector<TrustStore>&& value) { m_trustStores = std::move(value); }

    /**
     * <p>Information about the trust stores.</p>
     */
    inline DescribeTrustStoresResult& WithTrustStores(const Aws::Vector<TrustStore>& value) { SetTrustStores(value); return *this;}

    /**
     * <p>Information about the trust stores.</p>
     */
    inline DescribeTrustStoresResult& WithTrustStores(Aws::Vector<TrustStore>&& value) { SetTrustStores(std::move(value)); return *this;}

    /**
     * <p>Information about the trust stores.</p>
     */
    inline DescribeTrustStoresResult& AddTrustStores(const TrustStore& value) { m_trustStores.push_back(value); return *this; }

    /**
     * <p>Information about the trust stores.</p>
     */
    inline DescribeTrustStoresResult& AddTrustStores(TrustStore&& value) { m_trustStores.push_back(std::move(value)); return *this; }


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
    inline DescribeTrustStoresResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoresResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoresResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrustStoresResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrustStoresResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrustStore> m_trustStores;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
