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
   * <p>Represents the input of a <code>CreateSnapshot</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CreateSnapshotRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of an existing replication group. The snapshot is created from
     * this replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    CreateSnapshotRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an existing cluster. The snapshot is created from this
     * cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    CreateSnapshotRequest& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the snapshot being created.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    CreateSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
