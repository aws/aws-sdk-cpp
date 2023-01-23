/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheParameterGroup.h>
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
  class CreateCacheParameterGroupResult
  {
  public:
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult();
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const CacheParameterGroup& GetCacheParameterGroup() const{ return m_cacheParameterGroup; }

    
    inline void SetCacheParameterGroup(const CacheParameterGroup& value) { m_cacheParameterGroup = value; }

    
    inline void SetCacheParameterGroup(CacheParameterGroup&& value) { m_cacheParameterGroup = std::move(value); }

    
    inline CreateCacheParameterGroupResult& WithCacheParameterGroup(const CacheParameterGroup& value) { SetCacheParameterGroup(value); return *this;}

    
    inline CreateCacheParameterGroupResult& WithCacheParameterGroup(CacheParameterGroup&& value) { SetCacheParameterGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateCacheParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCacheParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CacheParameterGroup m_cacheParameterGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
