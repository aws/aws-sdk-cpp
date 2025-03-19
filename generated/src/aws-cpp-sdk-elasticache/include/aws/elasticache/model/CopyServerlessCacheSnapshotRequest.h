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
    AWS_ELASTICACHE_API CopyServerlessCacheSnapshotRequest() = default;

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
    inline const Aws::String& GetSourceServerlessCacheSnapshotName() const { return m_sourceServerlessCacheSnapshotName; }
    inline bool SourceServerlessCacheSnapshotNameHasBeenSet() const { return m_sourceServerlessCacheSnapshotNameHasBeenSet; }
    template<typename SourceServerlessCacheSnapshotNameT = Aws::String>
    void SetSourceServerlessCacheSnapshotName(SourceServerlessCacheSnapshotNameT&& value) { m_sourceServerlessCacheSnapshotNameHasBeenSet = true; m_sourceServerlessCacheSnapshotName = std::forward<SourceServerlessCacheSnapshotNameT>(value); }
    template<typename SourceServerlessCacheSnapshotNameT = Aws::String>
    CopyServerlessCacheSnapshotRequest& WithSourceServerlessCacheSnapshotName(SourceServerlessCacheSnapshotNameT&& value) { SetSourceServerlessCacheSnapshotName(std::forward<SourceServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the snapshot to be created. Available for Valkey, Redis
     * OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetTargetServerlessCacheSnapshotName() const { return m_targetServerlessCacheSnapshotName; }
    inline bool TargetServerlessCacheSnapshotNameHasBeenSet() const { return m_targetServerlessCacheSnapshotNameHasBeenSet; }
    template<typename TargetServerlessCacheSnapshotNameT = Aws::String>
    void SetTargetServerlessCacheSnapshotName(TargetServerlessCacheSnapshotNameT&& value) { m_targetServerlessCacheSnapshotNameHasBeenSet = true; m_targetServerlessCacheSnapshotName = std::forward<TargetServerlessCacheSnapshotNameT>(value); }
    template<typename TargetServerlessCacheSnapshotNameT = Aws::String>
    CopyServerlessCacheSnapshotRequest& WithTargetServerlessCacheSnapshotName(TargetServerlessCacheSnapshotNameT&& value) { SetTargetServerlessCacheSnapshotName(std::forward<TargetServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key used to encrypt the target snapshot. Available
     * for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyServerlessCacheSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to the target snapshot resource. A tag is a
     * key-value pair. Available for Valkey, Redis OSS and Serverless Memcached only.
     * Default: NULL</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyServerlessCacheSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyServerlessCacheSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
