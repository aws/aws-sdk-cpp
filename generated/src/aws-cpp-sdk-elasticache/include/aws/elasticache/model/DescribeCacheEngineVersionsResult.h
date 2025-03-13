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
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult() = default;
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCacheEngineVersionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache engine version details. Each element in the list contains
     * detailed information about one cache engine version.</p>
     */
    inline const Aws::Vector<CacheEngineVersion>& GetCacheEngineVersions() const { return m_cacheEngineVersions; }
    template<typename CacheEngineVersionsT = Aws::Vector<CacheEngineVersion>>
    void SetCacheEngineVersions(CacheEngineVersionsT&& value) { m_cacheEngineVersionsHasBeenSet = true; m_cacheEngineVersions = std::forward<CacheEngineVersionsT>(value); }
    template<typename CacheEngineVersionsT = Aws::Vector<CacheEngineVersion>>
    DescribeCacheEngineVersionsResult& WithCacheEngineVersions(CacheEngineVersionsT&& value) { SetCacheEngineVersions(std::forward<CacheEngineVersionsT>(value)); return *this;}
    template<typename CacheEngineVersionsT = CacheEngineVersion>
    DescribeCacheEngineVersionsResult& AddCacheEngineVersions(CacheEngineVersionsT&& value) { m_cacheEngineVersionsHasBeenSet = true; m_cacheEngineVersions.emplace_back(std::forward<CacheEngineVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCacheEngineVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<CacheEngineVersion> m_cacheEngineVersions;
    bool m_cacheEngineVersionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
