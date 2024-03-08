/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/model/ServerlessCacheSnapshot.h>
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
  class CopyServerlessCacheSnapshotResult
  {
  public:
    AWS_ELASTICACHE_API CopyServerlessCacheSnapshotResult();
    AWS_ELASTICACHE_API CopyServerlessCacheSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API CopyServerlessCacheSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The response for the attempt to copy the serverless cache snapshot. Available
     * for Redis only.</p>
     */
    inline const ServerlessCacheSnapshot& GetServerlessCacheSnapshot() const{ return m_serverlessCacheSnapshot; }

    /**
     * <p>The response for the attempt to copy the serverless cache snapshot. Available
     * for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshot(const ServerlessCacheSnapshot& value) { m_serverlessCacheSnapshot = value; }

    /**
     * <p>The response for the attempt to copy the serverless cache snapshot. Available
     * for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshot(ServerlessCacheSnapshot&& value) { m_serverlessCacheSnapshot = std::move(value); }

    /**
     * <p>The response for the attempt to copy the serverless cache snapshot. Available
     * for Redis only.</p>
     */
    inline CopyServerlessCacheSnapshotResult& WithServerlessCacheSnapshot(const ServerlessCacheSnapshot& value) { SetServerlessCacheSnapshot(value); return *this;}

    /**
     * <p>The response for the attempt to copy the serverless cache snapshot. Available
     * for Redis only.</p>
     */
    inline CopyServerlessCacheSnapshotResult& WithServerlessCacheSnapshot(ServerlessCacheSnapshot&& value) { SetServerlessCacheSnapshot(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CopyServerlessCacheSnapshotResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CopyServerlessCacheSnapshotResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServerlessCacheSnapshot m_serverlessCacheSnapshot;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
