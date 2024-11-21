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
   * <p>Represents the input of a <code>CopySnapshotMessage</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CopySnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CopySnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CopySnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of an existing snapshot from which to make a copy.</p>
     */
    inline const Aws::String& GetSourceSnapshotName() const{ return m_sourceSnapshotName; }
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }
    inline void SetSourceSnapshotName(const Aws::String& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }
    inline void SetSourceSnapshotName(Aws::String&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::move(value); }
    inline void SetSourceSnapshotName(const char* value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName.assign(value); }
    inline CopySnapshotRequest& WithSourceSnapshotName(const Aws::String& value) { SetSourceSnapshotName(value); return *this;}
    inline CopySnapshotRequest& WithSourceSnapshotName(Aws::String&& value) { SetSourceSnapshotName(std::move(value)); return *this;}
    inline CopySnapshotRequest& WithSourceSnapshotName(const char* value) { SetSourceSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the snapshot copy. ElastiCache does not permit overwriting a
     * snapshot, therefore this name must be unique within its context - ElastiCache or
     * an Amazon S3 bucket if exporting.</p>
     */
    inline const Aws::String& GetTargetSnapshotName() const{ return m_targetSnapshotName; }
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }
    inline void SetTargetSnapshotName(const Aws::String& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }
    inline void SetTargetSnapshotName(Aws::String&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::move(value); }
    inline void SetTargetSnapshotName(const char* value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName.assign(value); }
    inline CopySnapshotRequest& WithTargetSnapshotName(const Aws::String& value) { SetTargetSnapshotName(value); return *this;}
    inline CopySnapshotRequest& WithTargetSnapshotName(Aws::String&& value) { SetTargetSnapshotName(std::move(value)); return *this;}
    inline CopySnapshotRequest& WithTargetSnapshotName(const char* value) { SetTargetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket to which the snapshot is exported. This parameter is
     * used only when exporting a snapshot for external access.</p> <p>When using this
     * parameter to export a snapshot, be sure Amazon ElastiCache has the needed
     * permissions to this S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/backups-exporting.html#backups-exporting-grant-access">Step
     * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the <i>Amazon
     * ElastiCache User Guide</i>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/backups-exporting.html">Exporting
     * a Snapshot</a> in the <i>Amazon ElastiCache User Guide</i>.</p>
     */
    inline const Aws::String& GetTargetBucket() const{ return m_targetBucket; }
    inline bool TargetBucketHasBeenSet() const { return m_targetBucketHasBeenSet; }
    inline void SetTargetBucket(const Aws::String& value) { m_targetBucketHasBeenSet = true; m_targetBucket = value; }
    inline void SetTargetBucket(Aws::String&& value) { m_targetBucketHasBeenSet = true; m_targetBucket = std::move(value); }
    inline void SetTargetBucket(const char* value) { m_targetBucketHasBeenSet = true; m_targetBucket.assign(value); }
    inline CopySnapshotRequest& WithTargetBucket(const Aws::String& value) { SetTargetBucket(value); return *this;}
    inline CopySnapshotRequest& WithTargetBucket(Aws::String&& value) { SetTargetBucket(std::move(value)); return *this;}
    inline CopySnapshotRequest& WithTargetBucket(const char* value) { SetTargetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the target snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CopySnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CopySnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CopySnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CopySnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CopySnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CopySnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CopySnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet = false;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet = false;

    Aws::String m_targetBucket;
    bool m_targetBucketHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
