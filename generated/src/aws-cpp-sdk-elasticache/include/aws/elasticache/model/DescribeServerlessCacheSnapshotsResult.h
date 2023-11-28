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
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult();
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API DescribeServerlessCacheSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request to support pagination of
     * results from this operation. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * max-results. Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline const Aws::Vector<ServerlessCacheSnapshot>& GetServerlessCacheSnapshots() const{ return m_serverlessCacheSnapshots; }

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshots(const Aws::Vector<ServerlessCacheSnapshot>& value) { m_serverlessCacheSnapshots = value; }

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshots(Aws::Vector<ServerlessCacheSnapshot>&& value) { m_serverlessCacheSnapshots = std::move(value); }

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& WithServerlessCacheSnapshots(const Aws::Vector<ServerlessCacheSnapshot>& value) { SetServerlessCacheSnapshots(value); return *this;}

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& WithServerlessCacheSnapshots(Aws::Vector<ServerlessCacheSnapshot>&& value) { SetServerlessCacheSnapshots(std::move(value)); return *this;}

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& AddServerlessCacheSnapshots(const ServerlessCacheSnapshot& value) { m_serverlessCacheSnapshots.push_back(value); return *this; }

    /**
     * <p>The serverless caches snapshots associated with a given description request.
     * Available for Redis only.</p>
     */
    inline DescribeServerlessCacheSnapshotsResult& AddServerlessCacheSnapshots(ServerlessCacheSnapshot&& value) { m_serverlessCacheSnapshots.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeServerlessCacheSnapshotsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeServerlessCacheSnapshotsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServerlessCacheSnapshot> m_serverlessCacheSnapshots;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
