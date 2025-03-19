/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TrustStoreRevocation.h>
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
  class AddTrustStoreRevocationsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API AddTrustStoreRevocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the revocation file added to the trust store.</p>
     */
    inline const Aws::Vector<TrustStoreRevocation>& GetTrustStoreRevocations() const { return m_trustStoreRevocations; }
    template<typename TrustStoreRevocationsT = Aws::Vector<TrustStoreRevocation>>
    void SetTrustStoreRevocations(TrustStoreRevocationsT&& value) { m_trustStoreRevocationsHasBeenSet = true; m_trustStoreRevocations = std::forward<TrustStoreRevocationsT>(value); }
    template<typename TrustStoreRevocationsT = Aws::Vector<TrustStoreRevocation>>
    AddTrustStoreRevocationsResult& WithTrustStoreRevocations(TrustStoreRevocationsT&& value) { SetTrustStoreRevocations(std::forward<TrustStoreRevocationsT>(value)); return *this;}
    template<typename TrustStoreRevocationsT = TrustStoreRevocation>
    AddTrustStoreRevocationsResult& AddTrustStoreRevocations(TrustStoreRevocationsT&& value) { m_trustStoreRevocationsHasBeenSet = true; m_trustStoreRevocations.emplace_back(std::forward<TrustStoreRevocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AddTrustStoreRevocationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustStoreRevocation> m_trustStoreRevocations;
    bool m_trustStoreRevocationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
