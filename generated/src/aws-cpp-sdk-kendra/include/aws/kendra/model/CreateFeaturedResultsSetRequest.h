/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FeaturedDocument.h>
#include <aws/kendra/model/Tag.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class CreateFeaturedResultsSetRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API CreateFeaturedResultsSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFeaturedResultsSet"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that you want to use for featuring results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>A name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const{ return m_featuredResultsSetName; }

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const Aws::String& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = value; }

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(Aws::String&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::move(value); }

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const char* value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName.assign(value); }

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithFeaturedResultsSetName(const Aws::String& value) { SetFeaturedResultsSetName(value); return *this;}

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithFeaturedResultsSetName(Aws::String&& value) { SetFeaturedResultsSetName(std::move(value)); return *this;}

    /**
     * <p>A name for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithFeaturedResultsSetName(const char* value) { SetFeaturedResultsSetName(value); return *this;}


    /**
     * <p>A description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the set of featured results.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create a set of featured
     * results. Multiple calls to the <code>CreateFeaturedResultsSet</code> API with
     * the same client token will create only one featured results set.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline const FeaturedResultsSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const FeaturedResultsSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(FeaturedResultsSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithStatus(const FeaturedResultsSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the set of featured results. When the value is
     * <code>ACTIVE</code>, featured results are ready for use. You can still configure
     * your settings before setting the status to <code>ACTIVE</code>. You can set the
     * status to <code>ACTIVE</code> or <code>INACTIVE</code> using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateFeaturedResultsSet.html">UpdateFeaturedResultsSet</a>
     * API. The queries you specify for featured results must be unique per featured
     * results set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithStatus(FeaturedResultsSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const{ return m_queryTexts; }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetQueryTexts(const Aws::Vector<Aws::String>& value) { m_queryTextsHasBeenSet = true; m_queryTexts = value; }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetQueryTexts(Aws::Vector<Aws::String>&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::move(value); }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithQueryTexts(const Aws::Vector<Aws::String>& value) { SetQueryTexts(value); return *this;}

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithQueryTexts(Aws::Vector<Aws::String>&& value) { SetQueryTexts(std::move(value)); return *this;}

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddQueryTexts(const Aws::String& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddQueryTexts(Aws::String&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddQueryTexts(const char* value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }


    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<FeaturedDocument>& GetFeaturedDocuments() const{ return m_featuredDocuments; }

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline bool FeaturedDocumentsHasBeenSet() const { return m_featuredDocumentsHasBeenSet; }

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = value; }

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline void SetFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = std::move(value); }

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { SetFeaturedDocuments(value); return *this;}

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { SetFeaturedDocuments(std::move(value)); return *this;}

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddFeaturedDocuments(const FeaturedDocument& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(value); return *this; }

    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of documents, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddFeaturedDocuments(FeaturedDocument&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline CreateFeaturedResultsSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs that identify or categorize the featured results
     * set. You can also use tags to help control access to the featured results set.
     * Tag keys and values can consist of Unicode letters, digits, white space, and any
     * of the following symbols:_ . : / = + - @.</p>
     */
    inline CreateFeaturedResultsSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_featuredResultsSetName;
    bool m_featuredResultsSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FeaturedResultsSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryTexts;
    bool m_queryTextsHasBeenSet = false;

    Aws::Vector<FeaturedDocument> m_featuredDocuments;
    bool m_featuredDocumentsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
