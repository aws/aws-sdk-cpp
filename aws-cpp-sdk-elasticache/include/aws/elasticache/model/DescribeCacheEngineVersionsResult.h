/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/CacheEngineVersion.h>
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
   * <p>Represents the output of a <a>DescribeCacheEngineVersions</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheEngineVersionMessage">AWS
   * API Reference</a></p>
   */
  class DescribeCacheEngineVersionsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult();
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeCacheEngineVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheEngineVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeCacheEngineVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline const Aws::Vector<CacheEngineVersion>& GetCacheEngineVersions() const{ return m_cacheEngineVersions; }

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline void SetCacheEngineVersions(const Aws::Vector<CacheEngineVersion>& value) { m_cacheEngineVersions = value; }

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline void SetCacheEngineVersions(Aws::Vector<CacheEngineVersion>&& value) { m_cacheEngineVersions = std::move(value); }

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline DescribeCacheEngineVersionsResult& WithCacheEngineVersions(const Aws::Vector<CacheEngineVersion>& value) { SetCacheEngineVersions(value); return *this;}

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline DescribeCacheEngineVersionsResult& WithCacheEngineVersions(Aws::Vector<CacheEngineVersion>&& value) { SetCacheEngineVersions(std::move(value)); return *this;}

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline DescribeCacheEngineVersionsResult& AddCacheEngineVersions(const CacheEngineVersion& value) { m_cacheEngineVersions.push_back(value); return *this; }

    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline DescribeCacheEngineVersionsResult& AddCacheEngineVersions(CacheEngineVersion&& value) { m_cacheEngineVersions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCacheEngineVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCacheEngineVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<CacheEngineVersion> m_cacheEngineVersions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
