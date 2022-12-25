/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DocumentAttributeValue.h>
#include <aws/kendra/model/FacetResult.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class FacetResult;

  /**
   * <p>Provides the count of documents that match a particular attribute when doing
   * a faceted search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeValueCountPair">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeValueCountPair
  {
  public:
    AWS_KENDRA_API DocumentAttributeValueCountPair();
    AWS_KENDRA_API DocumentAttributeValueCountPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttributeValueCountPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline const DocumentAttributeValue& GetDocumentAttributeValue() const{ return m_documentAttributeValue; }

    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline bool DocumentAttributeValueHasBeenSet() const { return m_documentAttributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline void SetDocumentAttributeValue(const DocumentAttributeValue& value) { m_documentAttributeValueHasBeenSet = true; m_documentAttributeValue = value; }

    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline void SetDocumentAttributeValue(DocumentAttributeValue&& value) { m_documentAttributeValueHasBeenSet = true; m_documentAttributeValue = std::move(value); }

    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline DocumentAttributeValueCountPair& WithDocumentAttributeValue(const DocumentAttributeValue& value) { SetDocumentAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute. For example, "HR".</p>
     */
    inline DocumentAttributeValueCountPair& WithDocumentAttributeValue(DocumentAttributeValue&& value) { SetDocumentAttributeValue(std::move(value)); return *this;}


    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of documents in the response that have the attribute value for the
     * key.</p>
     */
    inline DocumentAttributeValueCountPair& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline const Aws::Vector<FacetResult>& GetFacetResults() const{ return m_facetResults; }

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline bool FacetResultsHasBeenSet() const { return m_facetResultsHasBeenSet; }

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline void SetFacetResults(const Aws::Vector<FacetResult>& value) { m_facetResultsHasBeenSet = true; m_facetResults = value; }

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline void SetFacetResults(Aws::Vector<FacetResult>&& value) { m_facetResultsHasBeenSet = true; m_facetResults = std::move(value); }

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline DocumentAttributeValueCountPair& WithFacetResults(const Aws::Vector<FacetResult>& value) { SetFacetResults(value); return *this;}

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline DocumentAttributeValueCountPair& WithFacetResults(Aws::Vector<FacetResult>&& value) { SetFacetResults(std::move(value)); return *this;}

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline DocumentAttributeValueCountPair& AddFacetResults(const FacetResult& value) { m_facetResultsHasBeenSet = true; m_facetResults.push_back(value); return *this; }

    /**
     * <p>Contains the results of a document attribute that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p>
     */
    inline DocumentAttributeValueCountPair& AddFacetResults(FacetResult&& value) { m_facetResultsHasBeenSet = true; m_facetResults.push_back(std::move(value)); return *this; }

  private:

    DocumentAttributeValue m_documentAttributeValue;
    bool m_documentAttributeValueHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<FacetResult> m_facetResults;
    bool m_facetResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
