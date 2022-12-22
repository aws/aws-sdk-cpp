/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheSubnetGroup.h>
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
  class ModifyCacheSubnetGroupResult
  {
  public:
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult();
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const CacheSubnetGroup& GetCacheSubnetGroup() const{ return m_cacheSubnetGroup; }

    
    inline void SetCacheSubnetGroup(const CacheSubnetGroup& value) { m_cacheSubnetGroup = value; }

    
    inline void SetCacheSubnetGroup(CacheSubnetGroup&& value) { m_cacheSubnetGroup = std::move(value); }

    
    inline ModifyCacheSubnetGroupResult& WithCacheSubnetGroup(const CacheSubnetGroup& value) { SetCacheSubnetGroup(value); return *this;}

    
    inline ModifyCacheSubnetGroupResult& WithCacheSubnetGroup(CacheSubnetGroup&& value) { SetCacheSubnetGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyCacheSubnetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyCacheSubnetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CacheSubnetGroup m_cacheSubnetGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
