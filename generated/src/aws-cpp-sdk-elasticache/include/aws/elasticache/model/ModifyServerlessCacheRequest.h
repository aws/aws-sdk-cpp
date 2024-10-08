/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/CacheUsageLimits.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class ModifyServerlessCacheRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyServerlessCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyServerlessCache"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyServerlessCacheRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyServerlessCacheRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const{ return m_cacheUsageLimits; }
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }
    inline void SetCacheUsageLimits(const CacheUsageLimits& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = value; }
    inline void SetCacheUsageLimits(CacheUsageLimits&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::move(value); }
    inline ModifyServerlessCacheRequest& WithCacheUsageLimits(const CacheUsageLimits& value) { SetCacheUsageLimits(value); return *this;}
    inline ModifyServerlessCacheRequest& WithCacheUsageLimits(CacheUsageLimits&& value) { SetCacheUsageLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the UserGroup to be removed from association with the
     * Valkey and Redis OSS serverless cache. Available for Valkey and Redis OSS only.
     * Default is NULL.</p>
     */
    inline bool GetRemoveUserGroup() const{ return m_removeUserGroup; }
    inline bool RemoveUserGroupHasBeenSet() const { return m_removeUserGroupHasBeenSet; }
    inline void SetRemoveUserGroup(bool value) { m_removeUserGroupHasBeenSet = true; m_removeUserGroup = value; }
    inline ModifyServerlessCacheRequest& WithRemoveUserGroup(bool value) { SetRemoveUserGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Valkey and Redis OSS only. Default is NULL - the existing
     * UserGroup is not removed.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }
    inline ModifyServerlessCacheRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}
    inline ModifyServerlessCacheRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline ModifyServerlessCacheRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline ModifyServerlessCacheRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Valkey, Redis OSS and Serverless Memcached only.
     * Default = NULL, i.e. the existing snapshot-retention-limit will not be removed
     * or modified. The maximum value allowed is 35 days.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ModifyServerlessCacheRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Valkey, Redis OSS and Serverless Memcached only.
     * The default is NULL, i.e. the existing snapshot time configured for the cluster
     * is not removed.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const{ return m_dailySnapshotTime; }
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }
    inline void SetDailySnapshotTime(const Aws::String& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = value; }
    inline void SetDailySnapshotTime(Aws::String&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::move(value); }
    inline void SetDailySnapshotTime(const char* value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime.assign(value); }
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(const Aws::String& value) { SetDailySnapshotTime(value); return *this;}
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(Aws::String&& value) { SetDailySnapshotTime(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(const char* value) { SetDailySnapshotTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed in a serverless cache request. The options are
     * redis, memcached or valkey.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ModifyServerlessCacheRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyServerlessCacheRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine vesion listed in a serverless cache request. </p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }
    inline ModifyServerlessCacheRequest& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}
    inline ModifyServerlessCacheRequest& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}
    inline ModifyServerlessCacheRequest& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CacheUsageLimits m_cacheUsageLimits;
    bool m_cacheUsageLimitsHasBeenSet = false;

    bool m_removeUserGroup;
    bool m_removeUserGroupHasBeenSet = false;

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_dailySnapshotTime;
    bool m_dailySnapshotTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
