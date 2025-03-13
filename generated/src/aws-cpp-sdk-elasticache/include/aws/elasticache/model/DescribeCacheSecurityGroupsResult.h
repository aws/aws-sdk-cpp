/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeCacheSecurityGroupsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeCacheSecurityGroupsResult() = default;
    AWS_ELASTICACHE_API DescribeCacheSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeCacheSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeCacheSecurityGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security groups. Each element in the list contains detailed
     * information about one group.</p>
     */
    inline const Aws::Vector<CacheSecurityGroup>& GetCacheSecurityGroups() const { return m_cacheSecurityGroups; }
    template<typename CacheSecurityGroupsT = Aws::Vector<CacheSecurityGroup>>
    void SetCacheSecurityGroups(CacheSecurityGroupsT&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = std::forward<CacheSecurityGroupsT>(value); }
    template<typename CacheSecurityGroupsT = Aws::Vector<CacheSecurityGroup>>
    DescribeCacheSecurityGroupsResult& WithCacheSecurityGroups(CacheSecurityGroupsT&& value) { SetCacheSecurityGroups(std::forward<CacheSecurityGroupsT>(value)); return *this;}
    template<typename CacheSecurityGroupsT = CacheSecurityGroup>
    DescribeCacheSecurityGroupsResult& AddCacheSecurityGroups(CacheSecurityGroupsT&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.emplace_back(std::forward<CacheSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCacheSecurityGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<CacheSecurityGroup> m_cacheSecurityGroups;
    bool m_cacheSecurityGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
