/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ModifyTrustStoreResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyTrustStoreResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API ModifyTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API ModifyTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the modified trust store.</p>
     */
    inline const Aws::Vector<TrustStore>& GetTrustStores() const { return m_trustStores; }
    template<typename TrustStoresT = Aws::Vector<TrustStore>>
    void SetTrustStores(TrustStoresT&& value) { m_trustStoresHasBeenSet = true; m_trustStores = std::forward<TrustStoresT>(value); }
    template<typename TrustStoresT = Aws::Vector<TrustStore>>
    ModifyTrustStoreResult& WithTrustStores(TrustStoresT&& value) { SetTrustStores(std::forward<TrustStoresT>(value)); return *this;}
    template<typename TrustStoresT = TrustStore>
    ModifyTrustStoreResult& AddTrustStores(TrustStoresT&& value) { m_trustStoresHasBeenSet = true; m_trustStores.emplace_back(std::forward<TrustStoresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyTrustStoreResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustStore> m_trustStores;
    bool m_trustStoresHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
