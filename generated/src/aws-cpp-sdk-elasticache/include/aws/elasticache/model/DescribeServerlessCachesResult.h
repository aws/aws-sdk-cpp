/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ServerlessCache.h>
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
  class DescribeServerlessCachesResult
  {
  public:
    AWS_ELASTICACHE_API DescribeServerlessCachesResult() = default;
    AWS_ELASTICACHE_API DescribeServerlessCachesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServerlessCachesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServerlessCachesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless caches associated with a given description request.</p>
     */
    inline const Aws::Vector<ServerlessCache>& GetServerlessCaches() const { return m_serverlessCaches; }
    template<typename ServerlessCachesT = Aws::Vector<ServerlessCache>>
    void SetServerlessCaches(ServerlessCachesT&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches = std::forward<ServerlessCachesT>(value); }
    template<typename ServerlessCachesT = Aws::Vector<ServerlessCache>>
    DescribeServerlessCachesResult& WithServerlessCaches(ServerlessCachesT&& value) { SetServerlessCaches(std::forward<ServerlessCachesT>(value)); return *this;}
    template<typename ServerlessCachesT = ServerlessCache>
    DescribeServerlessCachesResult& AddServerlessCaches(ServerlessCachesT&& value) { m_serverlessCachesHasBeenSet = true; m_serverlessCaches.emplace_back(std::forward<ServerlessCachesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeServerlessCachesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServerlessCache> m_serverlessCaches;
    bool m_serverlessCachesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
