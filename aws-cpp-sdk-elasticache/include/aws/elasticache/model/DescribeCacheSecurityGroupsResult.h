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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/CacheSecurityGroup.h>
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
  /**
   * <p>Represents the output of a <code>DescribeCacheSecurityGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeCacheSecurityGroupsResult
  {
  public:
    DescribeCacheSecurityGroupsResult();
    DescribeCacheSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeCacheSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheSecurityGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheSecurityGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheSecurityGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline const Aws::Vector<CacheSecurityGroup>& GetCacheSecurityGroups() const{ return m_cacheSecurityGroups; }

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline void SetCacheSecurityGroups(const Aws::Vector<CacheSecurityGroup>& value) { m_cacheSecurityGroups = value; }

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline void SetCacheSecurityGroups(Aws::Vector<CacheSecurityGroup>&& value) { m_cacheSecurityGroups = std::move(value); }

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeCacheSecurityGroupsResult& WithCacheSecurityGroups(const Aws::Vector<CacheSecurityGroup>& value) { SetCacheSecurityGroups(value); return *this;}

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeCacheSecurityGroupsResult& WithCacheSecurityGroups(Aws::Vector<CacheSecurityGroup>&& value) { SetCacheSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeCacheSecurityGroupsResult& AddCacheSecurityGroups(const CacheSecurityGroup& value) { m_cacheSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline DescribeCacheSecurityGroupsResult& AddCacheSecurityGroups(CacheSecurityGroup&& value) { m_cacheSecurityGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCacheSecurityGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCacheSecurityGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<CacheSecurityGroup> m_cacheSecurityGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
