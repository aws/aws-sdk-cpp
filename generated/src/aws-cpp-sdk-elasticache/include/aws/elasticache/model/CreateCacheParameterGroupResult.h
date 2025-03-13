/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheParameterGroup.h>
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
  class CreateCacheParameterGroupResult
  {
  public:
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult() = default;
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateCacheParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const CacheParameterGroup& GetCacheParameterGroup() const { return m_cacheParameterGroup; }
    template<typename CacheParameterGroupT = CacheParameterGroup>
    void SetCacheParameterGroup(CacheParameterGroupT&& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = std::forward<CacheParameterGroupT>(value); }
    template<typename CacheParameterGroupT = CacheParameterGroup>
    CreateCacheParameterGroupResult& WithCacheParameterGroup(CacheParameterGroupT&& value) { SetCacheParameterGroup(std::forward<CacheParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCacheParameterGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CacheParameterGroup m_cacheParameterGroup;
    bool m_cacheParameterGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
