﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheSecurityGroup.h>
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
  class AWS_ELASTICACHE_API RevokeCacheSecurityGroupIngressResult
  {
  public:
    RevokeCacheSecurityGroupIngressResult();
    RevokeCacheSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RevokeCacheSecurityGroupIngressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const CacheSecurityGroup& GetCacheSecurityGroup() const{ return m_cacheSecurityGroup; }

    
    inline void SetCacheSecurityGroup(const CacheSecurityGroup& value) { m_cacheSecurityGroup = value; }

    
    inline void SetCacheSecurityGroup(CacheSecurityGroup&& value) { m_cacheSecurityGroup = std::move(value); }

    
    inline RevokeCacheSecurityGroupIngressResult& WithCacheSecurityGroup(const CacheSecurityGroup& value) { SetCacheSecurityGroup(value); return *this;}

    
    inline RevokeCacheSecurityGroupIngressResult& WithCacheSecurityGroup(CacheSecurityGroup&& value) { SetCacheSecurityGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RevokeCacheSecurityGroupIngressResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RevokeCacheSecurityGroupIngressResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CacheSecurityGroup m_cacheSecurityGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
