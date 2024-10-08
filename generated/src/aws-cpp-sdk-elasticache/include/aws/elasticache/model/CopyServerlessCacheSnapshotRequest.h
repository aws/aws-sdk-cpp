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
  class CopyServerlessCacheSnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CopyServerlessCacheSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyServerlessCacheSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the existing serverless cache’s snapshot to be copied.
     * Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetSourceServerlessCacheSnapshotName() const{ return m_sourceServerlessCacheSnapshotName; }
    inline bool SourceServerlessCacheSnapshotNameHasBeenSet() const { return m_sourceServerlessCacheSnapshotNameHasBeenSet; }
    inline void SetSourceServerlessCacheSnapshotName(const Aws::String& value) { m_sourceServerlessCacheSnapshotNameHasBeenSet = true; m_sourceServerlessCacheSnapshotName = value; }
    inline void SetSourceServerlessCacheSnapshotName(Aws::String&& value) { m_sourceServerlessCacheSnapshotNameHasBeenSet = true; m_sourceServerlessCacheSnapshotName = std::move(value); }
    inline void SetSourceServerlessCacheSnapshotName(const char* value) { m_sourceServerlessCacheSnapshotNameHasBeenSet = true; m_sourceServerlessCacheSnapshotName.assign(value); }
    inline CopyServerlessCacheSnapshotRequest& WithSourceServerlessCacheSnapshotName(const Aws::String& value) { SetSourceServerlessCacheSnapshotName(value); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithSourceServerlessCacheSnapshotName(Aws::String&& value) { SetSourceServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithSourceServerlessCacheSnapshotName(const char* value) { SetSourceServerlessCacheSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the snapshot to be created. Available for Valkey, Redis
     * OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetTargetServerlessCacheSnapshotName() const{ return m_targetServerlessCacheSnapshotName; }
    inline bool TargetServerlessCacheSnapshotNameHasBeenSet() const { return m_targetServerlessCacheSnapshotNameHasBeenSet; }
    inline void SetTargetServerlessCacheSnapshotName(const Aws::String& value) { m_targetServerlessCacheSnapshotNameHasBeenSet = true; m_targetServerlessCacheSnapshotName = value; }
    inline void SetTargetServerlessCacheSnapshotName(Aws::String&& value) { m_targetServerlessCacheSnapshotNameHasBeenSet = true; m_targetServerlessCacheSnapshotName = std::move(value); }
    inline void SetTargetServerlessCacheSnapshotName(const char* value) { m_targetServerlessCacheSnapshotNameHasBeenSet = true; m_targetServerlessCacheSnapshotName.assign(value); }
    inline CopyServerlessCacheSnapshotRequest& WithTargetServerlessCacheSnapshotName(const Aws::String& value) { SetTargetServerlessCacheSnapshotName(value); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithTargetServerlessCacheSnapshotName(Aws::String&& value) { SetTargetServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithTargetServerlessCacheSnapshotName(const char* value) { SetTargetServerlessCacheSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key used to encrypt the target snapshot. Available
     * for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CopyServerlessCacheSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to the target snapshot resource. A tag is a
     * key-value pair. Available for Valkey, Redis OSS and Serverless Memcached only.
     * Default: NULL</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CopyServerlessCacheSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CopyServerlessCacheSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CopyServerlessCacheSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CopyServerlessCacheSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceServerlessCacheSnapshotName;
    bool m_sourceServerlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_targetServerlessCacheSnapshotName;
    bool m_targetServerlessCacheSnapshotNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
