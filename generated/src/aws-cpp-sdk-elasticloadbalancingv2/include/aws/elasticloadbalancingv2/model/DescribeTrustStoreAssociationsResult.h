/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TrustStoreAssociation.h>
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
  class DescribeTrustStoreAssociationsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline const Aws::Vector<TrustStoreAssociation>& GetTrustStoreAssociations() const{ return m_trustStoreAssociations; }

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline void SetTrustStoreAssociations(const Aws::Vector<TrustStoreAssociation>& value) { m_trustStoreAssociations = value; }

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline void SetTrustStoreAssociations(Aws::Vector<TrustStoreAssociation>&& value) { m_trustStoreAssociations = std::move(value); }

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline DescribeTrustStoreAssociationsResult& WithTrustStoreAssociations(const Aws::Vector<TrustStoreAssociation>& value) { SetTrustStoreAssociations(value); return *this;}

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline DescribeTrustStoreAssociationsResult& WithTrustStoreAssociations(Aws::Vector<TrustStoreAssociation>&& value) { SetTrustStoreAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline DescribeTrustStoreAssociationsResult& AddTrustStoreAssociations(const TrustStoreAssociation& value) { m_trustStoreAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline DescribeTrustStoreAssociationsResult& AddTrustStoreAssociations(TrustStoreAssociation&& value) { m_trustStoreAssociations.push_back(std::move(value)); return *this; }


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
    inline DescribeTrustStoreAssociationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoreAssociationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline DescribeTrustStoreAssociationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrustStoreAssociationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrustStoreAssociationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrustStoreAssociation> m_trustStoreAssociations;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
