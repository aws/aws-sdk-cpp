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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{
  class RevokeRevisionResult
  {
  public:
    AWS_DATAEXCHANGE_API RevokeRevisionResult();
    AWS_DATAEXCHANGE_API RevokeRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API RevokeRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the revision.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline RevokeRevisionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RevokeRevisionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the revision.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline void SetComment(const Aws::String& value) { m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_comment.assign(value); }
    inline RevokeRevisionResult& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline RevokeRevisionResult& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline RevokeRevisionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RevokeRevisionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with the data set
     * revision.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }
    inline RevokeRevisionResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline RevokeRevisionResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that changes to the
     * assets in the revision are complete. After it's in this read-only state, you can
     * publish the revision to your products. Finalized revisions can be published
     * through the AWS Data Exchange console or the AWS Marketplace Catalog API, using
     * the StartChangeSet AWS Marketplace Catalog API action. When using the API,
     * revisions are uniquely identified by their ARN.</p>
     */
    inline bool GetFinalized() const{ return m_finalized; }
    inline void SetFinalized(bool value) { m_finalized = value; }
    inline RevokeRevisionResult& WithFinalized(bool value) { SetFinalized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline RevokeRevisionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RevokeRevisionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline void SetSourceId(const Aws::String& value) { m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceId.assign(value); }
    inline RevokeRevisionResult& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline RevokeRevisionResult& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline RevokeRevisionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline RevokeRevisionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline const Aws::String& GetRevocationComment() const{ return m_revocationComment; }
    inline void SetRevocationComment(const Aws::String& value) { m_revocationComment = value; }
    inline void SetRevocationComment(Aws::String&& value) { m_revocationComment = std::move(value); }
    inline void SetRevocationComment(const char* value) { m_revocationComment.assign(value); }
    inline RevokeRevisionResult& WithRevocationComment(const Aws::String& value) { SetRevocationComment(value); return *this;}
    inline RevokeRevisionResult& WithRevocationComment(Aws::String&& value) { SetRevocationComment(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithRevocationComment(const char* value) { SetRevocationComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status indicating that subscribers' access to the revision was revoked.</p>
     */
    inline bool GetRevoked() const{ return m_revoked; }
    inline void SetRevoked(bool value) { m_revoked = value; }
    inline RevokeRevisionResult& WithRevoked(bool value) { SetRevoked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the revision was revoked, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAt = value; }
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAt = std::move(value); }
    inline RevokeRevisionResult& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}
    inline RevokeRevisionResult& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RevokeRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RevokeRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RevokeRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_comment;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_dataSetId;

    bool m_finalized;

    Aws::String m_id;

    Aws::String m_sourceId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_revocationComment;

    bool m_revoked;

    Aws::Utils::DateTime m_revokedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
