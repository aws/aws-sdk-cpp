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
    AWS_ELASTICACHE_API ModifyServerlessCacheRequest() = default;

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
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    ModifyServerlessCacheRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyServerlessCacheRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const { return m_cacheUsageLimits; }
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    void SetCacheUsageLimits(CacheUsageLimitsT&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::forward<CacheUsageLimitsT>(value); }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    ModifyServerlessCacheRequest& WithCacheUsageLimits(CacheUsageLimitsT&& value) { SetCacheUsageLimits(std::forward<CacheUsageLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the UserGroup to be removed from association with the
     * Valkey and Redis OSS serverless cache. Available for Valkey and Redis OSS only.
     * Default is NULL.</p>
     */
    inline bool GetRemoveUserGroup() const { return m_removeUserGroup; }
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
    inline const Aws::String& GetUserGroupId() const { return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    template<typename UserGroupIdT = Aws::String>
    void SetUserGroupId(UserGroupIdT&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::forward<UserGroupIdT>(value); }
    template<typename UserGroupIdT = Aws::String>
    ModifyServerlessCacheRequest& WithUserGroupId(UserGroupIdT&& value) { SetUserGroupId(std::forward<UserGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyServerlessCacheRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ModifyServerlessCacheRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Valkey, Redis OSS and Serverless Memcached only.
     * Default = NULL, i.e. the existing snapshot-retention-limit will not be removed
     * or modified. The maximum value allowed is 35 days.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
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
    inline const Aws::String& GetDailySnapshotTime() const { return m_dailySnapshotTime; }
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }
    template<typename DailySnapshotTimeT = Aws::String>
    void SetDailySnapshotTime(DailySnapshotTimeT&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::forward<DailySnapshotTimeT>(value); }
    template<typename DailySnapshotTimeT = Aws::String>
    ModifyServerlessCacheRequest& WithDailySnapshotTime(DailySnapshotTimeT&& value) { SetDailySnapshotTime(std::forward<DailySnapshotTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed in a serverless cache request. The options are
     * redis, memcached or valkey.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ModifyServerlessCacheRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine vesion listed in a serverless cache request. </p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    ModifyServerlessCacheRequest& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CacheUsageLimits m_cacheUsageLimits;
    bool m_cacheUsageLimitsHasBeenSet = false;

    bool m_removeUserGroup{false};
    bool m_removeUserGroupHasBeenSet = false;

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
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
