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
  class AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingResult
  {
  public:
    PurchaseReservedCacheNodesOfferingResult();
    PurchaseReservedCacheNodesOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    PurchaseReservedCacheNodesOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
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
