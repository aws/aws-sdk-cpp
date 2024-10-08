/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateServerlessCacheSnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateServerlessCacheSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServerlessCacheSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name for the snapshot being created. Must be unique for the customer
     * account. Available for Valkey, Redis OSS and Serverless Memcached only. Must be
     * between 1 and 255 characters.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing serverless cache. The snapshot is created from this
     * cache. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the snapshot. Available for Valkey,
     * Redis OSS and Serverless Memcached only. Default: NULL</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateServerlessCacheSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to the snapshot resource. A tag is a key-value
     * pair. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServerlessCacheSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateServerlessCacheSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServerlessCacheSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateServerlessCacheSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
