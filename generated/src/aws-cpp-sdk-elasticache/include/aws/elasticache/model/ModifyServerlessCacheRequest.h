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

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}

    /**
     * <p>User-provided identifier for the serverless cache to be modified.</p>
     */
    inline ModifyServerlessCacheRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}


    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline ModifyServerlessCacheRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline ModifyServerlessCacheRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>User provided description for the serverless cache. Default = NULL, i.e. the
     * existing description is not removed/modified. The description has a maximum
     * length of 255 characters.</p>
     */
    inline ModifyServerlessCacheRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const{ return m_cacheUsageLimits; }

    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }

    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline void SetCacheUsageLimits(const CacheUsageLimits& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = value; }

    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline void SetCacheUsageLimits(CacheUsageLimits&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::move(value); }

    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline ModifyServerlessCacheRequest& WithCacheUsageLimits(const CacheUsageLimits& value) { SetCacheUsageLimits(value); return *this;}

    /**
     * <p>Modify the cache usage limit for the serverless cache.</p>
     */
    inline ModifyServerlessCacheRequest& WithCacheUsageLimits(CacheUsageLimits&& value) { SetCacheUsageLimits(std::move(value)); return *this;}


    /**
     * <p>The identifier of the UserGroup to be removed from association with the Redis
     * serverless cache. Available for Redis only. Default is NULL.</p>
     */
    inline bool GetRemoveUserGroup() const{ return m_removeUserGroup; }

    /**
     * <p>The identifier of the UserGroup to be removed from association with the Redis
     * serverless cache. Available for Redis only. Default is NULL.</p>
     */
    inline bool RemoveUserGroupHasBeenSet() const { return m_removeUserGroupHasBeenSet; }

    /**
     * <p>The identifier of the UserGroup to be removed from association with the Redis
     * serverless cache. Available for Redis only. Default is NULL.</p>
     */
    inline void SetRemoveUserGroup(bool value) { m_removeUserGroupHasBeenSet = true; m_removeUserGroup = value; }

    /**
     * <p>The identifier of the UserGroup to be removed from association with the Redis
     * serverless cache. Available for Redis only. Default is NULL.</p>
     */
    inline ModifyServerlessCacheRequest& WithRemoveUserGroup(bool value) { SetRemoveUserGroup(value); return *this;}


    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL - the existing UserGroup is not
     * removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The new list of VPC security groups to be associated with the serverless
     * cache. Populating this list means the current VPC security groups will be
     * removed. This security group is used to authorize traffic access for the VPC
     * end-point (private-link). Default = NULL - the existing list of VPC security
     * groups is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Redis only. Default = NULL, i.e. the existing
     * snapshot-retention-limit will not be removed or modified. The maximum value
     * allowed is 35 days.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Redis only. Default = NULL, i.e. the existing
     * snapshot-retention-limit will not be removed or modified. The maximum value
     * allowed is 35 days.</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Redis only. Default = NULL, i.e. the existing
     * snapshot-retention-limit will not be removed or modified. The maximum value
     * allowed is 35 days.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which Elasticache retains automatic snapshots before
     * deleting them. Available for Redis only. Default = NULL, i.e. the existing
     * snapshot-retention-limit will not be removed or modified. The maximum value
     * allowed is 35 days.</p>
     */
    inline ModifyServerlessCacheRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const{ return m_dailySnapshotTime; }

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline void SetDailySnapshotTime(const Aws::String& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = value; }

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline void SetDailySnapshotTime(Aws::String&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::move(value); }

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline void SetDailySnapshotTime(const char* value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime.assign(value); }

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(const Aws::String& value) { SetDailySnapshotTime(value); return *this;}

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(Aws::String&& value) { SetDailySnapshotTime(std::move(value)); return *this;}

    /**
     * <p>The daily time during which Elasticache begins taking a daily snapshot of the
     * serverless cache. Available for Redis only. The default is NULL, i.e. the
     * existing snapshot time configured for the cluster is not removed.</p>
     */
    inline ModifyServerlessCacheRequest& WithDailySnapshotTime(const char* value) { SetDailySnapshotTime(value); return *this;}

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
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
