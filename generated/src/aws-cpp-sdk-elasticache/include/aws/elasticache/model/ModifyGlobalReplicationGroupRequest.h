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
  class ModifyGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyGlobalReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>This parameter causes the modifications in this request and any pending
     * modifications to be applied, asynchronously and as soon as possible.
     * Modifications to Global Replication Groups cannot be requested to be applied in
     * PreferredMaintenceWindow. </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>This parameter causes the modifications in this request and any pending
     * modifications to be applied, asynchronously and as soon as possible.
     * Modifications to Global Replication Groups cannot be requested to be applied in
     * PreferredMaintenceWindow. </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>This parameter causes the modifications in this request and any pending
     * modifications to be applied, asynchronously and as soon as possible.
     * Modifications to Global Replication Groups cannot be requested to be applied in
     * PreferredMaintenceWindow. </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>This parameter causes the modifications in this request and any pending
     * modifications to be applied, asynchronously and as soon as possible.
     * Modifications to Global Replication Groups cannot be requested to be applied in
     * PreferredMaintenceWindow. </p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this Global datastore to.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * Global datastore. </p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group to use with the Global datastore. It
     * must be compatible with the major engine version used by the Global
     * datastore.</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>A description of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupDescription() const{ return m_globalReplicationGroupDescription; }

    /**
     * <p>A description of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupDescriptionHasBeenSet() const { return m_globalReplicationGroupDescriptionHasBeenSet; }

    /**
     * <p>A description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const Aws::String& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = value; }

    /**
     * <p>A description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(Aws::String&& value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription = std::move(value); }

    /**
     * <p>A description of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupDescription(const char* value) { m_globalReplicationGroupDescriptionHasBeenSet = true; m_globalReplicationGroupDescription.assign(value); }

    /**
     * <p>A description of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const Aws::String& value) { SetGlobalReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(Aws::String&& value) { SetGlobalReplicationGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the Global datastore</p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithGlobalReplicationGroupDescription(const char* value) { SetGlobalReplicationGroupDescription(value); return *this;}


    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure. </p>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure. </p>
     */
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure. </p>
     */
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure. </p>
     */
    inline ModifyGlobalReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_globalReplicationGroupDescription;
    bool m_globalReplicationGroupDescriptionHasBeenSet = false;

    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
