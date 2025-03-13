/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/CacheSecurityGroup.h>
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
  class CreateCacheSecurityGroupResult
  {
  public:
    AWS_ELASTICACHE_API CreateCacheSecurityGroupResult() = default;
    AWS_ELASTICACHE_API CreateCacheSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CreateCacheSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const CacheSecurityGroup& GetCacheSecurityGroup() const { return m_cacheSecurityGroup; }
    template<typename CacheSecurityGroupT = CacheSecurityGroup>
    void SetCacheSecurityGroup(CacheSecurityGroupT&& value) { m_cacheSecurityGroupHasBeenSet = true; m_cacheSecurityGroup = std::forward<CacheSecurityGroupT>(value); }
    template<typename CacheSecurityGroupT = CacheSecurityGroup>
    CreateCacheSecurityGroupResult& WithCacheSecurityGroup(CacheSecurityGroupT&& value) { SetCacheSecurityGroup(std::forward<CacheSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCacheSecurityGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CacheSecurityGroup m_cacheSecurityGroup;
    bool m_cacheSecurityGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
