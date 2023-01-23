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
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult();
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ReservedCacheNode& GetReservedCacheNode() const{ return m_reservedCacheNode; }

    
    inline void SetReservedCacheNode(const ReservedCacheNode& value) { m_reservedCacheNode = value; }

    
    inline void SetReservedCacheNode(ReservedCacheNode&& value) { m_reservedCacheNode = std::move(value); }

    
    inline PurchaseReservedCacheNodesOfferingResult& WithReservedCacheNode(const ReservedCacheNode& value) { SetReservedCacheNode(value); return *this;}

    
    inline PurchaseReservedCacheNodesOfferingResult& WithReservedCacheNode(ReservedCacheNode&& value) { SetReservedCacheNode(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PurchaseReservedCacheNodesOfferingResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PurchaseReservedCacheNodesOfferingResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ReservedCacheNode m_reservedCacheNode;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
