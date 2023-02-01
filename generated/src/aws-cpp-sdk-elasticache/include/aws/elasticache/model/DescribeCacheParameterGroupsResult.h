/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/CacheParameterGroup.h>
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
   * <p>Represents the output of a <code>DescribeCacheParameterGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheParameterGroupsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeCacheParameterGroupsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult();
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeCacheParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline const Aws::Vector<CacheParameterGroup>& GetCacheParameterGroups() const{ return m_cacheParameterGroups; }

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline void SetCacheParameterGroups(const Aws::Vector<CacheParameterGroup>& value) { m_cacheParameterGroups = value; }

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline void SetCacheParameterGroups(Aws::Vector<CacheParameterGroup>&& value) { m_cacheParameterGroups = std::move(value); }

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline DescribeCacheParameterGroupsResult& WithCacheParameterGroups(const Aws::Vector<CacheParameterGroup>& value) { SetCacheParameterGroups(value); return *this;}

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline DescribeCacheParameterGroupsResult& WithCacheParameterGroups(Aws::Vector<CacheParameterGroup>&& value) { SetCacheParameterGroups(std::move(value)); return *this;}

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline DescribeCacheParameterGroupsResult& AddCacheParameterGroups(const CacheParameterGroup& value) { m_cacheParameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline DescribeCacheParameterGroupsResult& AddCacheParameterGroups(CacheParameterGroup&& value) { m_cacheParameterGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCacheParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCacheParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<CacheParameterGroup> m_cacheParameterGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
