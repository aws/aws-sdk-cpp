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
    AWS_ELASTICACHE_API DeleteServerlessCacheSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServerlessCacheSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline DeleteServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline DeleteServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}

    /**
     * <p>Idenfitier of the snapshot to be deleted. Available for Redis only.</p>
     */
    inline DeleteServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}

  private:

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
