/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class RevokeRevisionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API RevokeRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeRevision"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline RevokeRevisionRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline RevokeRevisionRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline RevokeRevisionRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline RevokeRevisionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline RevokeRevisionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline RevokeRevisionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


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
    inline RevokeRevisionRequest& WithRevocationComment(const Aws::String& value) { SetRevocationComment(value); return *this;}

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline RevokeRevisionRequest& WithRevocationComment(Aws::String&& value) { SetRevocationComment(std::move(value)); return *this;}

    /**
     * <p>A required comment to inform subscribers of the reason their access to the
     * revision was revoked.</p>
     */
    inline RevokeRevisionRequest& WithRevocationComment(const char* value) { SetRevocationComment(value); return *this;}

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_revocationComment;
    bool m_revocationCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
