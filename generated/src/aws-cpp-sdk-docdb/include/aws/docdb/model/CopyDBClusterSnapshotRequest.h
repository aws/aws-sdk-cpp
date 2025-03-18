/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>CopyDBClusterSnapshot</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CopyDBClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CopyDBClusterSnapshotRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API CopyDBClusterSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBClusterSnapshot"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the cluster snapshot to copy. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must specify a valid system
     * snapshot in the <i>available</i> state.</p> </li> <li> <p>If the source snapshot
     * is in the same Amazon Web Services Region as the copy, specify a valid snapshot
     * identifier.</p> </li> <li> <p>If the source snapshot is in a different Amazon
     * Web Services Region than the copy, specify a valid cluster snapshot ARN.</p>
     * </li> </ul> <p>Example: <code>my-cluster-snapshot1</code> </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const { return m_sourceDBClusterSnapshotIdentifier; }
    inline bool SourceDBClusterSnapshotIdentifierHasBeenSet() const { return m_sourceDBClusterSnapshotIdentifierHasBeenSet; }
    template<typename SourceDBClusterSnapshotIdentifierT = Aws::String>
    void SetSourceDBClusterSnapshotIdentifier(SourceDBClusterSnapshotIdentifierT&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = std::forward<SourceDBClusterSnapshotIdentifierT>(value); }
    template<typename SourceDBClusterSnapshotIdentifierT = Aws::String>
    CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(SourceDBClusterSnapshotIdentifierT&& value) { SetSourceDBClusterSnapshotIdentifier(std::forward<SourceDBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the new cluster snapshot to create from the source cluster
     * snapshot. This parameter is not case sensitive.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens. </p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens. </p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const { return m_targetDBClusterSnapshotIdentifier; }
    inline bool TargetDBClusterSnapshotIdentifierHasBeenSet() const { return m_targetDBClusterSnapshotIdentifierHasBeenSet; }
    template<typename TargetDBClusterSnapshotIdentifierT = Aws::String>
    void SetTargetDBClusterSnapshotIdentifier(TargetDBClusterSnapshotIdentifierT&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = std::forward<TargetDBClusterSnapshotIdentifierT>(value); }
    template<typename TargetDBClusterSnapshotIdentifierT = Aws::String>
    CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(TargetDBClusterSnapshotIdentifierT&& value) { SetTargetDBClusterSnapshotIdentifier(std::forward<TargetDBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ID for an encrypted cluster snapshot. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you copy an encrypted cluster snapshot from your
     * Amazon Web Services account, you can specify a value for <code>KmsKeyId</code>
     * to encrypt the copy with a new KMS encryption key. If you don't specify a value
     * for <code>KmsKeyId</code>, then the copy of the cluster snapshot is encrypted
     * with the same KMS key as the source cluster snapshot.</p> <p>If you copy an
     * encrypted cluster snapshot that is shared from another Amazon Web Services
     * account, then you must specify a value for <code>KmsKeyId</code>.</p> <p>To copy
     * an encrypted cluster snapshot to another Amazon Web Services Region, set
     * <code>KmsKeyId</code> to the KMS key ID that you want to use to encrypt the copy
     * of the cluster snapshot in the destination Region. KMS encryption keys are
     * specific to the Amazon Web Services Region that they are created in, and you
     * can't use encryption keys from one Amazon Web Services Region in another Amazon
     * Web Services Region.</p> <p>If you copy an unencrypted cluster snapshot and
     * specify a value for the <code>KmsKeyId</code> parameter, an error is
     * returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyDBClusterSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that contains a Signature Version 4 signed request for
     * the<code>CopyDBClusterSnapshot</code> API action in the Amazon Web Services
     * Region that contains the source cluster snapshot to copy. You must use the
     * <code>PreSignedUrl</code> parameter when copying a cluster snapshot from another
     * Amazon Web Services Region.</p> <p>If you are using an Amazon Web Services SDK
     * tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a pre-signed URL that is a valid request for the operation that
     * can be executed in the source Amazon Web Services Region.</p> <p>The presigned
     * URL must be a valid request for the <code>CopyDBClusterSnapshot</code> API
     * action that can be executed in the source Amazon Web Services Region that
     * contains the cluster snapshot to be copied. The presigned URL request must
     * contain the following parameter values:</p> <ul> <li> <p>
     * <code>SourceRegion</code> - The ID of the region that contains the snapshot to
     * be copied.</p> </li> <li> <p> <code>SourceDBClusterSnapshotIdentifier</code> -
     * The identifier for the the encrypted cluster snapshot to be copied. This
     * identifier must be in the Amazon Resource Name (ARN) format for the source
     * Amazon Web Services Region. For example, if you are copying an encrypted cluster
     * snapshot from the us-east-1 Amazon Web Services Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks something like the
     * following:
     * <code>arn:aws:rds:us-east-1:12345678012:sample-cluster:sample-cluster-snapshot</code>.</p>
     * </li> <li> <p> <code>TargetDBClusterSnapshotIdentifier</code> - The identifier
     * for the new cluster snapshot to be created. This parameter isn't case
     * sensitive.</p> </li> </ul>
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    CopyDBClusterSnapshotRequest& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to copy all tags from the source cluster snapshot to
     * the target cluster snapshot, and otherwise <code>false</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CopyDBClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyDBClusterSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyDBClusterSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CopyDBClusterSnapshotRequest& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBClusterSnapshotIdentifier;
    bool m_sourceDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_targetDBClusterSnapshotIdentifier;
    bool m_targetDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
