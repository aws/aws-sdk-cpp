/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>A revision is a container for one or more assets.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RevisionEntry">AWS
   * API Reference</a></p>
   */
  class RevisionEntry
  {
  public:
    AWS_DATAEXCHANGE_API RevisionEntry() = default;
    AWS_DATAEXCHANGE_API RevisionEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RevisionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the revision.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RevisionEntry& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the revision.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    RevisionEntry& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RevisionEntry& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    RevisionEntry& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline bool GetFinalized() const { return m_finalized; }
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }
    inline void SetFinalized(bool value) { m_finalizedHasBeenSet = true; m_finalized = value; }
    inline RevisionEntry& WithFinalized(bool value) { SetFinalized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RevisionEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    RevisionEntry& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    RevisionEntry& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline const Aws::String& GetRevocationComment() const { return m_revocationComment; }
    inline bool RevocationCommentHasBeenSet() const { return m_revocationCommentHasBeenSet; }
    template<typename RevocationCommentT = Aws::String>
    void SetRevocationComment(RevocationCommentT&& value) { m_revocationCommentHasBeenSet = true; m_revocationComment = std::forward<RevocationCommentT>(value); }
    template<typename RevocationCommentT = Aws::String>
    RevisionEntry& WithRevocationComment(RevocationCommentT&& value) { SetRevocationComment(std::forward<RevocationCommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline bool GetRevoked() const { return m_revoked; }
    inline bool RevokedHasBeenSet() const { return m_revokedHasBeenSet; }
    inline void SetRevoked(bool value) { m_revokedHasBeenSet = true; m_revoked = value; }
    inline RevisionEntry& WithRevoked(bool value) { SetRevoked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    RevisionEntry& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    bool m_finalized{false};
    bool m_finalizedHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_revocationComment;
    bool m_revocationCommentHasBeenSet = false;

    bool m_revoked{false};
    bool m_revokedHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
