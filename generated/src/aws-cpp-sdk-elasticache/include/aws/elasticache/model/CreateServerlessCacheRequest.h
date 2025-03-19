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
#include <aws/elasticache/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class CreateServerlessCacheRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateServerlessCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServerlessCache"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    CreateServerlessCacheRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServerlessCacheRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateServerlessCacheRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    CreateServerlessCacheRequest& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const { return m_cacheUsageLimits; }
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    void SetCacheUsageLimits(CacheUsageLimitsT&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::forward<CacheUsageLimitsT>(value); }
    template<typename CacheUsageLimitsT = CacheUsageLimits>
    CreateServerlessCacheRequest& WithCacheUsageLimits(CacheUsageLimitsT&& value) { SetCacheUsageLimits(std::forward<CacheUsageLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateServerlessCacheRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateServerlessCacheRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateServerlessCacheRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArnsToRestore() const { return m_snapshotArnsToRestore; }
    inline bool SnapshotArnsToRestoreHasBeenSet() const { return m_snapshotArnsToRestoreHasBeenSet; }
    template<typename SnapshotArnsToRestoreT = Aws::Vector<Aws::String>>
    void SetSnapshotArnsToRestore(SnapshotArnsToRestoreT&& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore = std::forward<SnapshotArnsToRestoreT>(value); }
    template<typename SnapshotArnsToRestoreT = Aws::Vector<Aws::String>>
    CreateServerlessCacheRequest& WithSnapshotArnsToRestore(SnapshotArnsToRestoreT&& value) { SetSnapshotArnsToRestore(std::forward<SnapshotArnsToRestoreT>(value)); return *this;}
    template<typename SnapshotArnsToRestoreT = Aws::String>
    CreateServerlessCacheRequest& AddSnapshotArnsToRestore(SnapshotArnsToRestoreT&& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore.emplace_back(std::forward<SnapshotArnsToRestoreT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServerlessCacheRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServerlessCacheRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Valkey and Redis OSS only. Default is NULL.</p>
     */
    inline const Aws::String& GetUserGroupId() const { return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    template<typename UserGroupIdT = Aws::String>
    void SetUserGroupId(UserGroupIdT&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::forward<UserGroupIdT>(value); }
    template<typename UserGroupIdT = Aws::String>
    CreateServerlessCacheRequest& WithUserGroupId(UserGroupIdT&& value) { SetUserGroupId(std::forward<UserGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateServerlessCacheRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateServerlessCacheRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of snapshots that will be retained for the serverless cache that
     * is being created. As new snapshots beyond this limit are added, the oldest
     * snapshots will be deleted on a rolling basis. Available for Valkey, Redis OSS
     * and Serverless Memcached only.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline CreateServerlessCacheRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Valkey, Redis OSS and Serverless
     * Memcached only.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const { return m_dailySnapshotTime; }
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }
    template<typename DailySnapshotTimeT = Aws::String>
    void SetDailySnapshotTime(DailySnapshotTimeT&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::forward<DailySnapshotTimeT>(value); }
    template<typename DailySnapshotTimeT = Aws::String>
    CreateServerlessCacheRequest& WithDailySnapshotTime(DailySnapshotTimeT&& value) { SetDailySnapshotTime(std::forward<DailySnapshotTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    CacheUsageLimits m_cacheUsageLimits;
    bool m_cacheUsageLimitsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotArnsToRestore;
    bool m_snapshotArnsToRestoreHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_dailySnapshotTime;
    bool m_dailySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
