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
  class DeleteServerlessCacheRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteServerlessCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServerlessCache"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the serverless cache to be deleted.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }
    inline DeleteServerlessCacheRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}
    inline DeleteServerlessCacheRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}
    inline DeleteServerlessCacheRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the final snapshot to be taken before the serverless cache is
     * deleted. Available for Valkey, Redis OSS and Serverless Memcached only. Default:
     * NULL, i.e. a final snapshot is not taken.</p>
     */
    inline const Aws::String& GetFinalSnapshotName() const{ return m_finalSnapshotName; }
    inline bool FinalSnapshotNameHasBeenSet() const { return m_finalSnapshotNameHasBeenSet; }
    inline void SetFinalSnapshotName(const Aws::String& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = value; }
    inline void SetFinalSnapshotName(Aws::String&& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = std::move(value); }
    inline void SetFinalSnapshotName(const char* value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName.assign(value); }
    inline DeleteServerlessCacheRequest& WithFinalSnapshotName(const Aws::String& value) { SetFinalSnapshotName(value); return *this;}
    inline DeleteServerlessCacheRequest& WithFinalSnapshotName(Aws::String&& value) { SetFinalSnapshotName(std::move(value)); return *this;}
    inline DeleteServerlessCacheRequest& WithFinalSnapshotName(const char* value) { SetFinalSnapshotName(value); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_finalSnapshotName;
    bool m_finalSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
