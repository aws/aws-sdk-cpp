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
    AWS_KENDRA_API UpdateFeaturedResultsSetRequest() = default;

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
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    UpdateFeaturedResultsSetRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the set of featured results that you want to update.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const { return m_featuredResultsSetId; }
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }
    template<typename FeaturedResultsSetIdT = Aws::String>
    void SetFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::forward<FeaturedResultsSetIdT>(value); }
    template<typename FeaturedResultsSetIdT = Aws::String>
    UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { SetFeaturedResultsSetId(std::forward<FeaturedResultsSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const { return m_featuredResultsSetName; }
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }
    template<typename FeaturedResultsSetNameT = Aws::String>
    void SetFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::forward<FeaturedResultsSetNameT>(value); }
    template<typename FeaturedResultsSetNameT = Aws::String>
    UpdateFeaturedResultsSetRequest& WithFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { SetFeaturedResultsSetName(std::forward<FeaturedResultsSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFeaturedResultsSetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline FeaturedResultsSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeaturedResultsSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateFeaturedResultsSetRequest& WithStatus(FeaturedResultsSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of queries for featuring results. For more information on the list of
     * queries, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const { return m_queryTexts; }
    inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    void SetQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::forward<QueryTextsT>(value); }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    UpdateFeaturedResultsSetRequest& WithQueryTexts(QueryTextsT&& value) { SetQueryTexts(std::forward<QueryTextsT>(value)); return *this;}
    template<typename QueryTextsT = Aws::String>
    UpdateFeaturedResultsSetRequest& AddQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.emplace_back(std::forward<QueryTextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of document IDs for the documents you want to feature at the top of
     * the search results page. For more information on the list of featured documents,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_FeaturedResultsSet.html">FeaturedResultsSet</a>.</p>
     */
    inline const Aws::Vector<FeaturedDocument>& GetFeaturedDocuments() const { return m_featuredDocuments; }
    inline bool FeaturedDocumentsHasBeenSet() const { return m_featuredDocumentsHasBeenSet; }
    template<typename FeaturedDocumentsT = Aws::Vector<FeaturedDocument>>
    void SetFeaturedDocuments(FeaturedDocumentsT&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = std::forward<FeaturedDocumentsT>(value); }
    template<typename FeaturedDocumentsT = Aws::Vector<FeaturedDocument>>
    UpdateFeaturedResultsSetRequest& WithFeaturedDocuments(FeaturedDocumentsT&& value) { SetFeaturedDocuments(std::forward<FeaturedDocumentsT>(value)); return *this;}
    template<typename FeaturedDocumentsT = FeaturedDocument>
    UpdateFeaturedResultsSetRequest& AddFeaturedDocuments(FeaturedDocumentsT&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.emplace_back(std::forward<FeaturedDocumentsT>(value)); return *this; }
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

    FeaturedResultsSetStatus m_status{FeaturedResultsSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryTexts;
    bool m_queryTextsHasBeenSet = false;

    Aws::Vector<FeaturedDocument> m_featuredDocuments;
    bool m_featuredDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
