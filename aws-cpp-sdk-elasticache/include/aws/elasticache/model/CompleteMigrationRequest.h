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
  class CompleteMigrationRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CompleteMigrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteMigration"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline CompleteMigrationRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline CompleteMigrationRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the replication group to which data is being migrated.</p>
     */
    inline CompleteMigrationRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>Forces the migration to stop without ensuring that data is in sync. It is
     * recommended to use this option only to abort the migration and not recommended
     * when application wants to continue migration to ElastiCache.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces the migration to stop without ensuring that data is in sync. It is
     * recommended to use this option only to abort the migration and not recommended
     * when application wants to continue migration to ElastiCache.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces the migration to stop without ensuring that data is in sync. It is
     * recommended to use this option only to abort the migration and not recommended
     * when application wants to continue migration to ElastiCache.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces the migration to stop without ensuring that data is in sync. It is
     * recommended to use this option only to abort the migration and not recommended
     * when application wants to continue migration to ElastiCache.</p>
     */
    inline CompleteMigrationRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
