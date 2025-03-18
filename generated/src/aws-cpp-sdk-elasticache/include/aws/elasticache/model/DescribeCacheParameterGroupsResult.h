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
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult() = default;
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCacheParameterGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache parameter groups. Each element in the list contains detailed
     * information about one cache parameter group.</p>
     */
    inline const Aws::Vector<CacheParameterGroup>& GetCacheParameterGroups() const { return m_cacheParameterGroups; }
    template<typename CacheParameterGroupsT = Aws::Vector<CacheParameterGroup>>
    void SetCacheParameterGroups(CacheParameterGroupsT&& value) { m_cacheParameterGroupsHasBeenSet = true; m_cacheParameterGroups = std::forward<CacheParameterGroupsT>(value); }
    template<typename CacheParameterGroupsT = Aws::Vector<CacheParameterGroup>>
    DescribeCacheParameterGroupsResult& WithCacheParameterGroups(CacheParameterGroupsT&& value) { SetCacheParameterGroups(std::forward<CacheParameterGroupsT>(value)); return *this;}
    template<typename CacheParameterGroupsT = CacheParameterGroup>
    DescribeCacheParameterGroupsResult& AddCacheParameterGroups(CacheParameterGroupsT&& value) { m_cacheParameterGroupsHasBeenSet = true; m_cacheParameterGroups.emplace_back(std::forward<CacheParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCacheParameterGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<CacheParameterGroup> m_cacheParameterGroups;
    bool m_cacheParameterGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
