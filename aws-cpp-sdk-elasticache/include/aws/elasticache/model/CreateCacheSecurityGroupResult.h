﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/CacheSecurityGroup.h>
#include <aws/elasticache/model/ResponseMetadata.h>

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
  class AWS_ELASTICACHE_API CreateCacheSecurityGroupResult
  {
  public:
    CreateCacheSecurityGroupResult();
    CreateCacheSecurityGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateCacheSecurityGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const CacheSecurityGroup& GetCacheSecurityGroup() const{ return m_cacheSecurityGroup; }

    
    inline void SetCacheSecurityGroup(const CacheSecurityGroup& value) { m_cacheSecurityGroup = value; }

    
    inline void SetCacheSecurityGroup(CacheSecurityGroup&& value) { m_cacheSecurityGroup = value; }

    
    inline CreateCacheSecurityGroupResult& WithCacheSecurityGroup(const CacheSecurityGroup& value) { SetCacheSecurityGroup(value); return *this;}

    
    inline CreateCacheSecurityGroupResult& WithCacheSecurityGroup(CacheSecurityGroup&& value) { SetCacheSecurityGroup(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateCacheSecurityGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCacheSecurityGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    CacheSecurityGroup m_cacheSecurityGroup;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws