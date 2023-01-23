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
    AWS_DATAEXCHANGE_API RevisionEntry();
    AWS_DATAEXCHANGE_API RevisionEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RevisionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the revision.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the revision.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the revision.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the revision.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the revision.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the revision.</p>
     */
    inline RevisionEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the revision.</p>
     */
    inline RevisionEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the revision.</p>
     */
    inline RevisionEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An optional comment about the revision.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline RevisionEntry& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline RevisionEntry& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline RevisionEntry& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline RevisionEntry& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline RevisionEntry& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline RevisionEntry& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline bool GetFinalized() const{ return m_finalized; }

    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }

    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline void SetFinalized(bool value) { m_finalizedHasBeenSet = true; m_finalized = value; }

    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline RevisionEntry& WithFinalized(bool value) { SetFinalized(value); return *this;}


    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline RevisionEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline RevisionEntry& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline RevisionEntry& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline RevisionEntry& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline const Aws::String& GetRevocationComment() const{ return m_revocationComment; }

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline bool RevocationCommentHasBeenSet() const { return m_revocationCommentHasBeenSet; }

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline void SetRevocationComment(const Aws::String& value) { m_revocationCommentHasBeenSet = true; m_revocationComment = value; }

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline void SetRevocationComment(Aws::String&& value) { m_revocationCommentHasBeenSet = true; m_revocationComment = std::move(value); }

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline void SetRevocationComment(const char* value) { m_revocationCommentHasBeenSet = true; m_revocationComment.assign(value); }

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline RevisionEntry& WithRevocationComment(const Aws::String& value) { SetRevocationComment(value); return *this;}

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline RevisionEntry& WithRevocationComment(Aws::String&& value) { SetRevocationComment(std::move(value)); return *this;}

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline RevisionEntry& WithRevocationComment(const char* value) { SetRevocationComment(value); return *this;}


    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline bool GetRevoked() const{ return m_revoked; }

    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline bool RevokedHasBeenSet() const { return m_revokedHasBeenSet; }

    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline void SetRevoked(bool value) { m_revokedHasBeenSet = true; m_revoked = value; }

    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline RevisionEntry& WithRevoked(bool value) { SetRevoked(value); return *this;}


    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }

    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }

    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }

    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}

    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline RevisionEntry& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    bool m_finalized;
    bool m_finalizedHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_revocationComment;
    bool m_revocationCommentHasBeenSet = false;

    bool m_revoked;
    bool m_revokedHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
