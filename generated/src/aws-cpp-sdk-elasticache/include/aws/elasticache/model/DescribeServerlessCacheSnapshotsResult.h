/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ServerlessCacheSnapshot.h>
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
  class DescribeServerlessCacheSnapshotsResult
  {
  public:
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult() = default;
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServerlessCacheSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<ServerlessCacheSnapshot>& GetServerlessCacheSnapshots() const { return m_serverlessCacheSnapshots; }
    template<typename ServerlessCacheSnapshotsT = Aws::Vector<ServerlessCacheSnapshot>>
    void SetServerlessCacheSnapshots(ServerlessCacheSnapshotsT&& value) { m_serverlessCacheSnapshotsHasBeenSet = true; m_serverlessCacheSnapshots = std::forward<ServerlessCacheSnapshotsT>(value); }
    template<typename ServerlessCacheSnapshotsT = Aws::Vector<ServerlessCacheSnapshot>>
    DescribeServerlessCacheSnapshotsResult& WithServerlessCacheSnapshots(ServerlessCacheSnapshotsT&& value) { SetServerlessCacheSnapshots(std::forward<ServerlessCacheSnapshotsT>(value)); return *this;}
    template<typename ServerlessCacheSnapshotsT = ServerlessCacheSnapshot>
    DescribeServerlessCacheSnapshotsResult& AddServerlessCacheSnapshots(ServerlessCacheSnapshotsT&& value) { m_serverlessCacheSnapshotsHasBeenSet = true; m_serverlessCacheSnapshots.emplace_back(std::forward<ServerlessCacheSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeServerlessCacheSnapshotsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServerlessCacheSnapshot> m_serverlessCacheSnapshots;
    bool m_serverlessCacheSnapshotsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
