/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class CopyClusterSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API CopyClusterSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyClusterSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target elastic cluster snapshot. The default is <code>false</code>.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CopyClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID for an encrypted elastic cluster snapshot.
     * The Amazon Web Services KMS key ID is the Amazon Resource Name (ARN), Amazon Web
     * Services KMS key identifier, or the Amazon Web Services KMS key alias for the
     * Amazon Web Services KMS encryption key.</p> <p>If you copy an encrypted elastic
     * cluster snapshot from your Amazon Web Services account, you can specify a value
     * for <code>KmsKeyId</code> to encrypt the copy with a new Amazon Web ServicesS
     * KMS encryption key. If you don't specify a value for <code>KmsKeyId</code>, then
     * the copy of the elastic cluster snapshot is encrypted with the same
     * <code>AWS</code> KMS key as the source elastic cluster snapshot.</p> <p>To copy
     * an encrypted elastic cluster snapshot to another Amazon Web Services region, set
     * <code>KmsKeyId</code> to the Amazon Web Services KMS key ID that you want to use
     * to encrypt the copy of the elastic cluster snapshot in the destination region.
     * Amazon Web Services KMS encryption keys are specific to the Amazon Web Services
     * region that they are created in, and you can't use encryption keys from one
     * Amazon Web Services region in another Amazon Web Services region.</p> <p>If you
     * copy an unencrypted elastic cluster snapshot and specify a value for the
     * <code>KmsKeyId</code> parameter, an error is returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyClusterSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) identifier of the elastic cluster
     * snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    CopyClusterSnapshotRequest& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the elastic cluster snapshot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CopyClusterSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CopyClusterSnapshotRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the new elastic cluster snapshot to create from the source
     * cluster snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>elastic-cluster-snapshot-5</code> </p>
     */
    inline const Aws::String& GetTargetSnapshotName() const { return m_targetSnapshotName; }
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }
    template<typename TargetSnapshotNameT = Aws::String>
    void SetTargetSnapshotName(TargetSnapshotNameT&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::forward<TargetSnapshotNameT>(value); }
    template<typename TargetSnapshotNameT = Aws::String>
    CopyClusterSnapshotRequest& WithTargetSnapshotName(TargetSnapshotNameT&& value) { SetTargetSnapshotName(std::forward<TargetSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
