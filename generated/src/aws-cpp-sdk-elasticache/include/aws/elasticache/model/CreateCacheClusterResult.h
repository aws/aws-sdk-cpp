/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheCluster.h>
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
  class CreateCacheClusterResult
  {
  public:
    AWS_ELASTICACHE_API CreateCacheClusterResult();
    AWS_ELASTICACHE_API CreateCacheClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateCacheClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const CacheCluster& GetCacheCluster() const{ return m_cacheCluster; }

    
    inline void SetCacheCluster(const CacheCluster& value) { m_cacheCluster = value; }

    
    inline void SetCacheCluster(CacheCluster&& value) { m_cacheCluster = std::move(value); }

    
    inline CreateCacheClusterResult& WithCacheCluster(const CacheCluster& value) { SetCacheCluster(value); return *this;}

    
    inline CreateCacheClusterResult& WithCacheCluster(CacheCluster&& value) { SetCacheCluster(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateCacheClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCacheClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CacheCluster m_cacheCluster;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
