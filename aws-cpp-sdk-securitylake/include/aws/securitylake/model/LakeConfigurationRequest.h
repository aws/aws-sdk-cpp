/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securitylake/model/Region.h>
#include <aws/securitylake/model/RetentionSetting.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides details of lake configuration object in Amazon Security
   * Lake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/LakeConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class LakeConfigurationRequest
  {
  public:
    AWS_SECURITYLAKE_API LakeConfigurationRequest();
    AWS_SECURITYLAKE_API LakeConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API LakeConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline LakeConfigurationRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline LakeConfigurationRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The type of encryption key used by Security Lake to encrypt the lake
     * configuration object.</p>
     */
    inline LakeConfigurationRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline const Aws::Vector<Region>& GetReplicationDestinationRegions() const{ return m_replicationDestinationRegions; }

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline bool ReplicationDestinationRegionsHasBeenSet() const { return m_replicationDestinationRegionsHasBeenSet; }

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline void SetReplicationDestinationRegions(const Aws::Vector<Region>& value) { m_replicationDestinationRegionsHasBeenSet = true; m_replicationDestinationRegions = value; }

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline void SetReplicationDestinationRegions(Aws::Vector<Region>&& value) { m_replicationDestinationRegionsHasBeenSet = true; m_replicationDestinationRegions = std::move(value); }

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline LakeConfigurationRequest& WithReplicationDestinationRegions(const Aws::Vector<Region>& value) { SetReplicationDestinationRegions(value); return *this;}

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline LakeConfigurationRequest& WithReplicationDestinationRegions(Aws::Vector<Region>&& value) { SetReplicationDestinationRegions(std::move(value)); return *this;}

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline LakeConfigurationRequest& AddReplicationDestinationRegions(const Region& value) { m_replicationDestinationRegionsHasBeenSet = true; m_replicationDestinationRegions.push_back(value); return *this; }

    /**
     * <p>Replication enables automatic, asynchronous copying of objects across Amazon
     * S3 buckets. Amazon S3 buckets that are configured for object replication can be
     * owned by the same Amazon Web Services account or by different accounts. You can
     * replicate objects to a single destination bucket or to multiple destination
     * buckets. The destination buckets can be in different Amazon Web Services Regions
     * or within the same Region as the source bucket.</p> <p>Set up one or more rollup
     * Regions by providing the Region or Regions that should contribute to the central
     * rollup Region. </p>
     */
    inline LakeConfigurationRequest& AddReplicationDestinationRegions(Region&& value) { m_replicationDestinationRegionsHasBeenSet = true; m_replicationDestinationRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline const Aws::String& GetReplicationRoleArn() const{ return m_replicationRoleArn; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline bool ReplicationRoleArnHasBeenSet() const { return m_replicationRoleArnHasBeenSet; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline void SetReplicationRoleArn(const Aws::String& value) { m_replicationRoleArnHasBeenSet = true; m_replicationRoleArn = value; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline void SetReplicationRoleArn(Aws::String&& value) { m_replicationRoleArnHasBeenSet = true; m_replicationRoleArn = std::move(value); }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline void SetReplicationRoleArn(const char* value) { m_replicationRoleArnHasBeenSet = true; m_replicationRoleArn.assign(value); }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline LakeConfigurationRequest& WithReplicationRoleArn(const Aws::String& value) { SetReplicationRoleArn(value); return *this;}

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline LakeConfigurationRequest& WithReplicationRoleArn(Aws::String&& value) { SetReplicationRoleArn(std::move(value)); return *this;}

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the IAM
     * role created by you that is managed by Security Lake, to ensure the replication
     * setting is correct. </p>
     */
    inline LakeConfigurationRequest& WithReplicationRoleArn(const char* value) { SetReplicationRoleArn(value); return *this;}


    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline const Aws::Vector<RetentionSetting>& GetRetentionSettings() const{ return m_retentionSettings; }

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline bool RetentionSettingsHasBeenSet() const { return m_retentionSettingsHasBeenSet; }

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline void SetRetentionSettings(const Aws::Vector<RetentionSetting>& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings = value; }

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline void SetRetentionSettings(Aws::Vector<RetentionSetting>&& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings = std::move(value); }

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline LakeConfigurationRequest& WithRetentionSettings(const Aws::Vector<RetentionSetting>& value) { SetRetentionSettings(value); return *this;}

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline LakeConfigurationRequest& WithRetentionSettings(Aws::Vector<RetentionSetting>&& value) { SetRetentionSettings(std::move(value)); return *this;}

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline LakeConfigurationRequest& AddRetentionSettings(const RetentionSetting& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings.push_back(value); return *this; }

    /**
     * <p>Retention settings for the destination Amazon S3 buckets. </p>
     */
    inline LakeConfigurationRequest& AddRetentionSettings(RetentionSetting&& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTagsMap() const{ return m_tagsMap; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline bool TagsMapHasBeenSet() const { return m_tagsMapHasBeenSet; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline void SetTagsMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsMapHasBeenSet = true; m_tagsMap = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline void SetTagsMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsMapHasBeenSet = true; m_tagsMap = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& WithTagsMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTagsMap(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& WithTagsMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTagsMap(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(const Aws::String& key, const Aws::String& value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(Aws::String&& key, const Aws::String& value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(const Aws::String& key, Aws::String&& value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(Aws::String&& key, Aws::String&& value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(const char* key, Aws::String&& value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(Aws::String&& key, const char* value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value, both of which you define.</p>
     */
    inline LakeConfigurationRequest& AddTagsMap(const char* key, const char* value) { m_tagsMapHasBeenSet = true; m_tagsMap.emplace(key, value); return *this; }

  private:

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<Region> m_replicationDestinationRegions;
    bool m_replicationDestinationRegionsHasBeenSet = false;

    Aws::String m_replicationRoleArn;
    bool m_replicationRoleArnHasBeenSet = false;

    Aws::Vector<RetentionSetting> m_retentionSettings;
    bool m_retentionSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tagsMap;
    bool m_tagsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
