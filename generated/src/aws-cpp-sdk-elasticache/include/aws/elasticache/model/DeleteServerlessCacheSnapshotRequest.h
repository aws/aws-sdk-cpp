/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class DeleteServerlessCacheSnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteServerlessCacheSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServerlessCacheSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Valkey, Redis OSS and
     * Serverless Memcached only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const { return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    void SetServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::forward<ServerlessCacheSnapshotNameT>(value); }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    DeleteServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { SetServerlessCacheSnapshotName(std::forward<ServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
