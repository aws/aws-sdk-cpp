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
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class UpdateFeaturedResultsSetRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API UpdateFeaturedResultsSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeaturedResultsSet"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index used for featuring results.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline UpdateFeaturedResultsSetRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the set of featured results that you want to update.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const{ return m_featuredResultsSetId; }
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }
    inline void SetFeaturedResultsSetId(const Aws::String& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = value; }
    inline void SetFeaturedResultsSetId(Aws::String&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::move(value); }
    inline void SetFeaturedResultsSetId(const char* value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId.assign(value); }
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetId(const Aws::String& value) { SetFeaturedResultsSetId(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetId(Aws::String&& value) { SetFeaturedResultsSetId(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetId(const char* value) { SetFeaturedResultsSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const{ return m_featuredResultsSetName; }
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }
    inline void SetFeaturedResultsSetName(const Aws::String& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = value; }
    inline void SetFeaturedResultsSetName(Aws::String&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::move(value); }
    inline void SetFeaturedResultsSetName(const char* value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName.assign(value); }
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetName(const Aws::String& value) { SetFeaturedResultsSetName(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetName(Aws::String&& value) { SetFeaturedResultsSetName(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetName(const char* value) { SetFeaturedResultsSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFeaturedResultsSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can set the status to <code>ACTIVE</code> or <code>INACTIVE</code>. When
     * the value is <code>ACTIVE</code>, featured results are ready for use. You can
     * still configure your settings before setting the status to <code>ACTIVE</code>.
     * The queries you specify for featured results must be unique per featured results
     * set for each index, whether the status is <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline const FeaturedResultsSetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FeaturedResultsSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FeaturedResultsSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateFeaturedResultsSetRequest& WithStatus(const FeaturedResultsSetStatus& value) { SetStatus(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithStatus(FeaturedResultsSetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const{ return m_queryTexts; }
    inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }
    inline void SetQueryTexts(const Aws::Vector<Aws::String>& value) { m_queryTextsHasBeenSet = true; m_queryTexts = value; }
    inline void SetQueryTexts(Aws::Vector<Aws::String>&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::move(value); }
    inline UpdateFeaturedResultsSetRequest& WithQueryTexts(const Aws::Vector<Aws::String>& value) { SetQueryTexts(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithQueryTexts(Aws::Vector<Aws::String>&& value) { SetQueryTexts(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& AddQueryTexts(const Aws::String& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }
    inline UpdateFeaturedResultsSetRequest& AddQueryTexts(Aws::String&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(std::move(value)); return *this; }
    inline UpdateFeaturedResultsSetRequest& AddQueryTexts(const char* value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<FeaturedDocument>& GetFeaturedDocuments() const{ return m_featuredDocuments; }
    inline bool FeaturedDocumentsHasBeenSet() const { return m_featuredDocumentsHasBeenSet; }
    inline void SetFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = value; }
    inline void SetFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = std::move(value); }
    inline UpdateFeaturedResultsSetRequest& WithFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { SetFeaturedDocuments(value); return *this;}
    inline UpdateFeaturedResultsSetRequest& WithFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { SetFeaturedDocuments(std::move(value)); return *this;}
    inline UpdateFeaturedResultsSetRequest& AddFeaturedDocuments(const FeaturedDocument& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(value); return *this; }
    inline UpdateFeaturedResultsSetRequest& AddFeaturedDocuments(FeaturedDocument&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_featuredResultsSetId;
    bool m_featuredResultsSetIdHasBeenSet = false;

    Aws::String m_featuredResultsSetName;
    bool m_featuredResultsSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FeaturedResultsSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryTexts;
    bool m_queryTextsHasBeenSet = false;

    Aws::Vector<FeaturedDocument> m_featuredDocuments;
    bool m_featuredDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
