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
  class ExportServerlessCacheSnapshotResult
  {
  public:
    AWS_ELASTICACHE_API ExportServerlessCacheSnapshotResult() = default;
    AWS_ELASTICACHE_API ExportServerlessCacheSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ExportServerlessCacheSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The state of a serverless cache at a specific point in time, to the
     * millisecond. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const ServerlessCacheSnapshot& GetServerlessCacheSnapshot() const { return m_serverlessCacheSnapshot; }
    template<typename ServerlessCacheSnapshotT = ServerlessCacheSnapshot>
    void SetServerlessCacheSnapshot(ServerlessCacheSnapshotT&& value) { m_serverlessCacheSnapshotHasBeenSet = true; m_serverlessCacheSnapshot = std::forward<ServerlessCacheSnapshotT>(value); }
    template<typename ServerlessCacheSnapshotT = ServerlessCacheSnapshot>
    ExportServerlessCacheSnapshotResult& WithServerlessCacheSnapshot(ServerlessCacheSnapshotT&& value) { SetServerlessCacheSnapshot(std::forward<ServerlessCacheSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportServerlessCacheSnapshotResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ServerlessCacheSnapshot m_serverlessCacheSnapshot;
    bool m_serverlessCacheSnapshotHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
