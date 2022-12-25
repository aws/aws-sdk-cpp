/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class CreateRevisionRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API CreateRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRevision"; }

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
    inline CreateRevisionRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline CreateRevisionRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline CreateRevisionRequest& WithComment(const char* value) { SetComment(value); return *this;}


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
    inline CreateRevisionRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline CreateRevisionRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a data set.</p>
     */
    inline CreateRevisionRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A revision tag is an optional label that you can assign to a revision when
     * you create it. Each tag consists of a key and an optional value, both of which
     * you define. When you use tagging, you can also use tag-based access control in
     * IAM policies to control access to these data sets and revisions.</p>
     */
    inline CreateRevisionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
