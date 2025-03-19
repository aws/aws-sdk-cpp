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
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the resources the trust store is associated to.</p>
     */
    inline const Aws::Vector<TrustStoreAssociation>& GetTrustStoreAssociations() const { return m_trustStoreAssociations; }
    template<typename TrustStoreAssociationsT = Aws::Vector<TrustStoreAssociation>>
    void SetTrustStoreAssociations(TrustStoreAssociationsT&& value) { m_trustStoreAssociationsHasBeenSet = true; m_trustStoreAssociations = std::forward<TrustStoreAssociationsT>(value); }
    template<typename TrustStoreAssociationsT = Aws::Vector<TrustStoreAssociation>>
    DescribeTrustStoreAssociationsResult& WithTrustStoreAssociations(TrustStoreAssociationsT&& value) { SetTrustStoreAssociations(std::forward<TrustStoreAssociationsT>(value)); return *this;}
    template<typename TrustStoreAssociationsT = TrustStoreAssociation>
    DescribeTrustStoreAssociationsResult& AddTrustStoreAssociations(TrustStoreAssociationsT&& value) { m_trustStoreAssociationsHasBeenSet = true; m_trustStoreAssociations.emplace_back(std::forward<TrustStoreAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeTrustStoreAssociationsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrustStoreAssociationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustStoreAssociation> m_trustStoreAssociations;
    bool m_trustStoreAssociationsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
