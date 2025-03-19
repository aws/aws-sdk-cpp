/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/CacheCluster.h>
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
   * <p>Represents the output of a <code>DescribeCacheClusters</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class DescribeCacheClustersResult
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheClustersResult() = default;
    AWS_ELASTICACHE_API DescribeCacheClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCacheClustersResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of clusters. Each item in the list contains detailed information about
     * one cluster.</p>
     */
    inline const Aws::Vector<CacheCluster>& GetCacheClusters() const { return m_cacheClusters; }
    template<typename CacheClustersT = Aws::Vector<CacheCluster>>
    void SetCacheClusters(CacheClustersT&& value) { m_cacheClustersHasBeenSet = true; m_cacheClusters = std::forward<CacheClustersT>(value); }
    template<typename CacheClustersT = Aws::Vector<CacheCluster>>
    DescribeCacheClustersResult& WithCacheClusters(CacheClustersT&& value) { SetCacheClusters(std::forward<CacheClustersT>(value)); return *this;}
    template<typename CacheClustersT = CacheCluster>
    DescribeCacheClustersResult& AddCacheClusters(CacheClustersT&& value) { m_cacheClustersHasBeenSet = true; m_cacheClusters.emplace_back(std::forward<CacheClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCacheClustersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<CacheCluster> m_cacheClusters;
    bool m_cacheClustersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
