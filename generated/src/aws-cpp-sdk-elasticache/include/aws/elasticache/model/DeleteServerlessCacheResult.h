﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/ServerlessCache.h>
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
  class DeleteServerlessCacheResult
  {
  public:
    AWS_ELASTICACHE_API DeleteServerlessCacheResult() = default;
    AWS_ELASTICACHE_API DeleteServerlessCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DeleteServerlessCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides the details of the specified serverless cache that is about to be
     * deleted.</p>
     */
    inline const ServerlessCache& GetServerlessCache() const { return m_serverlessCache; }
    template<typename ServerlessCacheT = ServerlessCache>
    void SetServerlessCache(ServerlessCacheT&& value) { m_serverlessCacheHasBeenSet = true; m_serverlessCache = std::forward<ServerlessCacheT>(value); }
    template<typename ServerlessCacheT = ServerlessCache>
    DeleteServerlessCacheResult& WithServerlessCache(ServerlessCacheT&& value) { SetServerlessCache(std::forward<ServerlessCacheT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteServerlessCacheResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ServerlessCache m_serverlessCache;
    bool m_serverlessCacheHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
