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
    AWS_KENDRA_API FeaturedResultsSet();
    AWS_KENDRA_API FeaturedResultsSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetId() const{ return m_featuredResultsSetId; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline bool FeaturedResultsSetIdHasBeenSet() const { return m_featuredResultsSetIdHasBeenSet; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const Aws::String& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = value; }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(Aws::String&& value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId = std::move(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetId(const char* value) { m_featuredResultsSetIdHasBeenSet = true; m_featuredResultsSetId.assign(value); }

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetId(const Aws::String& value) { SetFeaturedResultsSetId(value); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetId(Aws::String&& value) { SetFeaturedResultsSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetId(const char* value) { SetFeaturedResultsSetId(value); return *this;}


    /**
     * <p>The name for the set of featured results.</p>
     */
    inline const Aws::String& GetFeaturedResultsSetName() const{ return m_featuredResultsSetName; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline bool FeaturedResultsSetNameHasBeenSet() const { return m_featuredResultsSetNameHasBeenSet; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const Aws::String& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = value; }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(Aws::String&& value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName = std::move(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline void SetFeaturedResultsSetName(const char* value) { m_featuredResultsSetNameHasBeenSet = true; m_featuredResultsSetName.assign(value); }

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetName(const Aws::String& value) { SetFeaturedResultsSetName(value); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetName(Aws::String&& value) { SetFeaturedResultsSetName(std::move(value)); return *this;}

    /**
     * <p>The name for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithFeaturedResultsSetName(const char* value) { SetFeaturedResultsSetName(value); return *this;}


    /**
     * <p>The description for the set of featured results.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the set of featured results.</p>
     */
    inline FeaturedResultsSet& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline FeaturedResultsSet& WithStatus(const FeaturedResultsSetStatus& value) { SetStatus(value); return *this;}

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
    inline FeaturedResultsSet& WithStatus(FeaturedResultsSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryTexts() const{ return m_queryTexts; }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline void SetQueryTexts(const Aws::Vector<Aws::String>& value) { m_queryTextsHasBeenSet = true; m_queryTexts = value; }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline void SetQueryTexts(Aws::Vector<Aws::String>&& value) { m_queryTextsHasBeenSet = true; m_queryTexts = std::move(value); }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline FeaturedResultsSet& WithQueryTexts(const Aws::Vector<Aws::String>& value) { SetQueryTexts(value); return *this;}

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline FeaturedResultsSet& WithQueryTexts(Aws::Vector<Aws::String>&& value) { SetQueryTexts(std::move(value)); return *this;}

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline FeaturedResultsSet& AddQueryTexts(const Aws::String& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline FeaturedResultsSet& AddQueryTexts(Aws::String&& value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of queries for featuring results.</p> <p>Specific queries are mapped
     * to specific documents for featuring in the results. If a query contains an exact
     * match, then one or more specific documents are featured in the results. The
     * exact match applies to the full query. For example, if you only specify
     * 'Kendra', queries such as 'How does kendra semantically rank results?' will not
     * render the featured results. Featured results are designed for specific queries,
     * rather than queries that are too broad in scope.</p>
     */
    inline FeaturedResultsSet& AddQueryTexts(const char* value) { m_queryTextsHasBeenSet = true; m_queryTexts.push_back(value); return *this; }


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
    inline const Aws::Vector<FeaturedDocument>& GetFeaturedDocuments() const{ return m_featuredDocuments; }

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
    inline bool FeaturedDocumentsHasBeenSet() const { return m_featuredDocumentsHasBeenSet; }

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
    inline void SetFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = value; }

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
    inline void SetFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments = std::move(value); }

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
    inline FeaturedResultsSet& WithFeaturedDocuments(const Aws::Vector<FeaturedDocument>& value) { SetFeaturedDocuments(value); return *this;}

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
    inline FeaturedResultsSet& WithFeaturedDocuments(Aws::Vector<FeaturedDocument>&& value) { SetFeaturedDocuments(std::move(value)); return *this;}

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
    inline FeaturedResultsSet& AddFeaturedDocuments(const FeaturedDocument& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(value); return *this; }

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
    inline FeaturedResultsSet& AddFeaturedDocuments(FeaturedDocument&& value) { m_featuredDocumentsHasBeenSet = true; m_featuredDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline long long GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(long long value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The Unix timestamp when the set of featured results was last updated.</p>
     */
    inline FeaturedResultsSet& WithLastUpdatedTimestamp(long long value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline long long GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline void SetCreationTimestamp(long long value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp when the set of featured results was created.</p>
     */
    inline FeaturedResultsSet& WithCreationTimestamp(long long value) { SetCreationTimestamp(value); return *this;}

  private:

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

    long long m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    long long m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
