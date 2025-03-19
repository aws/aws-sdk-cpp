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
    AWS_ELASTICACHE_API CreateServerlessCacheSnapshotRequest() = default;

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
    inline const Aws::String& GetServerlessCacheSnapshotName() const { return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    void SetServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::forward<ServerlessCacheSnapshotNameT>(value); }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    CreateServerlessCacheSnapshotRequest& WithServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { SetServerlessCacheSnapshotName(std::forward<ServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing serverless cache. The snapshot is created from this
     * cache. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    CreateServerlessCacheSnapshotRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the snapshot. Available for Valkey,
     * Redis OSS and Serverless Memcached only. Default: NULL</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateServerlessCacheSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to the snapshot resource. A tag is a key-value
     * pair. Available for Valkey, Redis OSS and Serverless Memcached only.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServerlessCacheSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServerlessCacheSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
