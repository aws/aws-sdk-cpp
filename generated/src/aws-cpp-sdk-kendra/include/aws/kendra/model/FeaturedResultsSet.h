/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FeaturedDocument.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A set of featured results that are displayed at the top of your search
   * results. Featured results are placed above all other results for certain
   * queries. If there's an exact match of a query, then one or more specific
   * documents are featured in the search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedResultsSet">AWS
   * API Reference</a></p>
   */
  class FeaturedResultsSet
  {
  public:
    AWS_KENDRA_API FeaturedResultsSet() = default;
    AWS_KENDRA_API FeaturedResultsSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const { return m_featuredResultsSetId; }
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }
    template<typename FeaturedResultsSetIdT = Aws::String>
    void SetFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::forward<FeaturedResultsSetIdT>(value); }
    template<typename FeaturedResultsSetIdT = Aws::String>
    FeaturedResultsSet& WithFeaturedResultsSetId(FeaturedResultsSetIdT&& value) { SetFeaturedResultsSetId(std::forward<FeaturedResultsSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const { return m_featuredResultsSetName; }
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }
    template<typename FeaturedResultsSetNameT = Aws::String>
    void SetFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::forward<FeaturedResultsSetNameT>(value); }
    template<typename FeaturedResultsSetNameT = Aws::String>
    FeaturedResultsSet& WithFeaturedResultsSetName(FeaturedResultsSetNameT&& value) { SetFeaturedResultsSetName(std::forward<FeaturedResultsSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FeaturedResultsSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline FeaturedResultsSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeaturedResultsSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FeaturedResultsSet& WithStatus(FeaturedResultsSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const { return m_queryTexts; }
    inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    void SetQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::forward<QueryTextsT>(value); }
    template<typename QueryTextsT = Aws::Vector<Aws::String>>
    FeaturedResultsSet& WithQueryTexts(QueryTextsT&& value) { SetQueryTexts(std::forward<QueryTextsT>(value)); return *this;}
    template<typename QueryTextsT = Aws::String>
    FeaturedResultsSet& AddQueryTexts(QueryTextsT&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.emplace_back(std::forward<QueryTextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of document IDs for the documents you want to feature at the top of
     * the search results page. You can use the <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Query.html">Query</a> API
     * to search for specific documents with their document IDs included in the result
     * items, or you can use the console.</p> <p>You can add up to four featured
     * documents. You can request to increase this limit by contacting <a
     * href="http://aws.amazon.com/contact-us/">Support</a>.</p> <p>Specific queries
     * are mapped to specific documents for featuring in the results. If a query
     * contains an exact match, then one or more specific documents are featured in the
     * results. The exact match applies to the full query. For example, if you only
     * specify 'Kendra', queries such as 'How does kendra semantically rank results?'
     * will not render the featured results. Featured results are designed for specific
     * queries, rather than queries that are too broad in scope.</p>
     */
    inline const Aws::Vector<FeaturedDocument>& GetFeaturedDocuments() const { return m_featuredDocuments; }
    inline bool FeaturedDocumentsHasBeenSet() const { return m_featuredDocumentsHasBeenSet; }
    template<typename FeaturedDocumentsT = Aws::Vector<FeaturedDocument>>
    void SetFeaturedDocuments(FeaturedDocumentsT&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = std::forward<FeaturedDocumentsT>(value); }
    template<typename FeaturedDocumentsT = Aws::Vector<FeaturedDocument>>
    FeaturedResultsSet& WithFeaturedDocuments(FeaturedDocumentsT&& value) { SetFeaturedDocuments(std::forward<FeaturedDocumentsT>(value)); return *this;}
    template<typename FeaturedDocumentsT = FeaturedDocument>
    FeaturedResultsSet& AddFeaturedDocuments(FeaturedDocumentsT&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.emplace_back(std::forward<FeaturedDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline long long GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(long long value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline FeaturedResultsSet& WithLastUpdatedTimestamp(long long value) { SetLastUpdatedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline long long GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(long long value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline FeaturedResultsSet& WithCreationTimestamp(long long value) { SetCreationTimestamp(value); return *this;}
    ///@}
  private:

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

    long long m_lastUpdatedTimestamp{0};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    long long m_creationTimestamp{0};
    bool m_creationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
