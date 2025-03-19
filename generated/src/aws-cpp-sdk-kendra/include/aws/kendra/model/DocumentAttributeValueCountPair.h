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
   * <p>Provides the count of documents that match a particular document attribute or
   * field when doing a faceted search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeValueCountPair">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeValueCountPair
  {
  public:
    AWS_KENDRA_API DocumentAttributeValueCountPair() = default;
    AWS_KENDRA_API DocumentAttributeValueCountPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttributeValueCountPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the attribute/field. For example, "HR".</p>
     */
    inline const DocumentAttributeValue& GetDocumentAttributeValue() const { return m_documentAttributeValue; }
    inline bool DocumentAttributeValueHasBeenSet() const { return m_documentAttributeValueHasBeenSet; }
    template<typename DocumentAttributeValueT = DocumentAttributeValue>
    void SetDocumentAttributeValue(DocumentAttributeValueT&& value) { m_documentAttributeValueHasBeenSet = true; m_documentAttributeValue = std::forward<DocumentAttributeValueT>(value); }
    template<typename DocumentAttributeValueT = DocumentAttributeValue>
    DocumentAttributeValueCountPair& WithDocumentAttributeValue(DocumentAttributeValueT&& value) { SetDocumentAttributeValue(std::forward<DocumentAttributeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents in the response that have the attribute/field value
     * for the key.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline DocumentAttributeValueCountPair& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the results of a document attribute/field that is a nested facet. A
     * <code>FacetResult</code> contains the counts for each facet nested within a
     * facet.</p> <p>For example, the document attribute or facet "Department" includes
     * a value called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. The counts for documents that belong to
     * "Frontend" and "Backend" within "Engineering" are returned for a query.</p> <p/>
     * <p/>
     */
    inline const Aws::Vector<FacetResult>& GetFacetResults() const { return m_facetResults; }
    inline bool FacetResultsHasBeenSet() const { return m_facetResultsHasBeenSet; }
    template<typename FacetResultsT = Aws::Vector<FacetResult>>
    void SetFacetResults(FacetResultsT&& value) { m_facetResultsHasBeenSet = true; m_facetResults = std::forward<FacetResultsT>(value); }
    template<typename FacetResultsT = Aws::Vector<FacetResult>>
    DocumentAttributeValueCountPair& WithFacetResults(FacetResultsT&& value) { SetFacetResults(std::forward<FacetResultsT>(value)); return *this;}
    template<typename FacetResultsT = FacetResult>
    DocumentAttributeValueCountPair& AddFacetResults(FacetResultsT&& value) { m_facetResultsHasBeenSet = true; m_facetResults.emplace_back(std::forward<FacetResultsT>(value)); return *this; }
    ///@}
  private:

    DocumentAttributeValue m_documentAttributeValue;
    bool m_documentAttributeValueHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<FacetResult> m_facetResults;
    bool m_facetResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
