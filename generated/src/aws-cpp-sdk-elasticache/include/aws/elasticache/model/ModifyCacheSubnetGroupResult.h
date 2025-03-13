/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheSubnetGroup.h>
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
  class ModifyCacheSubnetGroupResult
  {
  public:
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult() = default;
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ModifyCacheSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const CacheSubnetGroup& GetCacheSubnetGroup() const { return m_cacheSubnetGroup; }
    template<typename CacheSubnetGroupT = CacheSubnetGroup>
    void SetCacheSubnetGroup(CacheSubnetGroupT&& value) { m_cacheSubnetGroupHasBeenSet = true; m_cacheSubnetGroup = std::forward<CacheSubnetGroupT>(value); }
    template<typename CacheSubnetGroupT = CacheSubnetGroup>
    ModifyCacheSubnetGroupResult& WithCacheSubnetGroup(CacheSubnetGroupT&& value) { SetCacheSubnetGroup(std::forward<CacheSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyCacheSubnetGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CacheSubnetGroup m_cacheSubnetGroup;
    bool m_cacheSubnetGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
