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
  class UpdateRevisionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API UpdateRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRevision"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


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
    inline UpdateRevisionRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline UpdateRevisionRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline UpdateRevisionRequest& WithComment(const char* value) { SetComment(value); return *this;}


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
    inline UpdateRevisionRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline UpdateRevisionRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline UpdateRevisionRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>Finalizing a revision tells AWS Data Exchange that your changes to the assets
     * in the revision are complete. After it's in this read-only state, you can
     * publish the revision to your products.</p>
     */
    inline bool GetFinalized() const{ return m_finalized; }

    /**
     * <p>Finalizing a revision tells AWS Data Exchange that your changes to the assets
     * in the revision are complete. After it's in this read-only state, you can
     * publish the revision to your products.</p>
     */
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }

    /**
     * <p>Finalizing a revision tells AWS Data Exchange that your changes to the assets
     * in the revision are complete. After it's in this read-only state, you can
     * publish the revision to your products.</p>
     */
    inline void SetFinalized(bool value) { m_finalizedHasBeenSet = true; m_finalized = value; }

    /**
     * <p>Finalizing a revision tells AWS Data Exchange that your changes to the assets
     * in the revision are complete. After it's in this read-only state, you can
     * publish the revision to your products.</p>
     */
    inline UpdateRevisionRequest& WithFinalized(bool value) { SetFinalized(value); return *this;}


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
    inline UpdateRevisionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline UpdateRevisionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a revision.</p>
     */
    inline UpdateRevisionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    bool m_finalized;
    bool m_finalizedHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
