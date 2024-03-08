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
    AWS_ELASTICACHE_API CreateServerlessCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServerlessCache"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline CreateServerlessCacheRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline CreateServerlessCacheRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}

    /**
     * <p>User-provided identifier for the serverless cache. This parameter is stored
     * as a lowercase string.</p>
     */
    inline CreateServerlessCacheRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}


    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline CreateServerlessCacheRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline CreateServerlessCacheRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>User-provided description for the serverless cache. The default is NULL, i.e.
     * if no description is provided then an empty string will be returned. The maximum
     * length is 255 characters. </p>
     */
    inline CreateServerlessCacheRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the cache engine to be used for creating the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the cache engine that will be used to create the serverless
     * cache.</p>
     */
    inline CreateServerlessCacheRequest& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline const CacheUsageLimits& GetCacheUsageLimits() const{ return m_cacheUsageLimits; }

    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline bool CacheUsageLimitsHasBeenSet() const { return m_cacheUsageLimitsHasBeenSet; }

    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline void SetCacheUsageLimits(const CacheUsageLimits& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = value; }

    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline void SetCacheUsageLimits(CacheUsageLimits&& value) { m_cacheUsageLimitsHasBeenSet = true; m_cacheUsageLimits = std::move(value); }

    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline CreateServerlessCacheRequest& WithCacheUsageLimits(const CacheUsageLimits& value) { SetCacheUsageLimits(value); return *this;}

    /**
     * <p>Sets the cache usage limits for storage and ElastiCache Processing Units for
     * the cache.</p>
     */
    inline CreateServerlessCacheRequest& WithCacheUsageLimits(CacheUsageLimits&& value) { SetCacheUsageLimits(std::move(value)); return *this;}


    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline CreateServerlessCacheRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline CreateServerlessCacheRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ARN of the customer managed key for encrypting the data at rest. If no KMS
     * key is provided, a default service key is used.</p>
     */
    inline CreateServerlessCacheRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline CreateServerlessCacheRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline CreateServerlessCacheRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline CreateServerlessCacheRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline CreateServerlessCacheRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the one or more VPC security groups to be associated with the
     * serverless cache. The security group will authorize traffic access for the VPC
     * end-point (private-link). If no other information is given this will be the
     * VPC’s Default Security Group that is associated with the cluster VPC
     * end-point.</p>
     */
    inline CreateServerlessCacheRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArnsToRestore() const{ return m_snapshotArnsToRestore; }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline bool SnapshotArnsToRestoreHasBeenSet() const { return m_snapshotArnsToRestoreHasBeenSet; }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline void SetSnapshotArnsToRestore(const Aws::Vector<Aws::String>& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore = value; }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline void SetSnapshotArnsToRestore(Aws::Vector<Aws::String>&& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore = std::move(value); }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithSnapshotArnsToRestore(const Aws::Vector<Aws::String>& value) { SetSnapshotArnsToRestore(value); return *this;}

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithSnapshotArnsToRestore(Aws::Vector<Aws::String>&& value) { SetSnapshotArnsToRestore(std::move(value)); return *this;}

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& AddSnapshotArnsToRestore(const Aws::String& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore.push_back(value); return *this; }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& AddSnapshotArnsToRestore(Aws::String&& value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN(s) of the snapshot that the new serverless cache will be created
     * from. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& AddSnapshotArnsToRestore(const char* value) { m_snapshotArnsToRestoreHasBeenSet = true; m_snapshotArnsToRestore.push_back(value); return *this; }


    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags (key, value) pairs to be added to the serverless cache
     * resource. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the UserGroup to be associated with the serverless cache.
     * Available for Redis only. Default is NULL.</p>
     */
    inline CreateServerlessCacheRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline CreateServerlessCacheRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline CreateServerlessCacheRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline CreateServerlessCacheRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline CreateServerlessCacheRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the identifiers of the subnets where the VPC endpoint for the
     * serverless cache will be deployed. All the subnetIds must belong to the same
     * VPC.</p>
     */
    inline CreateServerlessCacheRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The number of snapshots that will be retained for the serverless cache that
     * is being created. As new snapshots beyond this limit are added, the oldest
     * snapshots will be deleted on a rolling basis. Available for Redis only.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of snapshots that will be retained for the serverless cache that
     * is being created. As new snapshots beyond this limit are added, the oldest
     * snapshots will be deleted on a rolling basis. Available for Redis only.</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of snapshots that will be retained for the serverless cache that
     * is being created. As new snapshots beyond this limit are added, the oldest
     * snapshots will be deleted on a rolling basis. Available for Redis only.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of snapshots that will be retained for the serverless cache that
     * is being created. As new snapshots beyond this limit are added, the oldest
     * snapshots will be deleted on a rolling basis. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline const Aws::String& GetDailySnapshotTime() const{ return m_dailySnapshotTime; }

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline bool DailySnapshotTimeHasBeenSet() const { return m_dailySnapshotTimeHasBeenSet; }

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline void SetDailySnapshotTime(const Aws::String& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = value; }

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline void SetDailySnapshotTime(Aws::String&& value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime = std::move(value); }

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline void SetDailySnapshotTime(const char* value) { m_dailySnapshotTimeHasBeenSet = true; m_dailySnapshotTime.assign(value); }

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithDailySnapshotTime(const Aws::String& value) { SetDailySnapshotTime(value); return *this;}

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithDailySnapshotTime(Aws::String&& value) { SetDailySnapshotTime(std::move(value)); return *this;}

    /**
     * <p>The daily time that snapshots will be created from the new serverless cache.
     * By default this number is populated with 0, i.e. no snapshots will be created on
     * an automatic daily basis. Available for Redis only.</p>
     */
    inline CreateServerlessCacheRequest& WithDailySnapshotTime(const char* value) { SetDailySnapshotTime(value); return *this;}

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

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_dailySnapshotTime;
    bool m_dailySnapshotTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
