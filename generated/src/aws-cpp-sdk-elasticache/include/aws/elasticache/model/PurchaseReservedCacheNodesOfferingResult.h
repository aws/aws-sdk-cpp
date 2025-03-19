/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/ReservedCacheNode.h>
#include <aws/elasticache/model/ResponseMetadata.h>
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
namespace ElastiCache
{
namespace Model
{
  class PurchaseReservedCacheNodesOfferingResult
  {
  public:
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult() = default;
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ReservedCacheNode& GetReservedCacheNode() const { return m_reservedCacheNode; }
    template<typename ReservedCacheNodeT = ReservedCacheNode>
    void SetReservedCacheNode(ReservedCacheNodeT&& value) { m_reservedCacheNodeHasBeenSet = true; m_reservedCacheNode = std::forward<ReservedCacheNodeT>(value); }
    template<typename ReservedCacheNodeT = ReservedCacheNode>
    PurchaseReservedCacheNodesOfferingResult& WithReservedCacheNode(ReservedCacheNodeT&& value) { SetReservedCacheNode(std::forward<ReservedCacheNodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PurchaseReservedCacheNodesOfferingResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ReservedCacheNode m_reservedCacheNode;
    bool m_reservedCacheNodeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
