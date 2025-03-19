/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  /**
   * <p>Information about a document attribute or field. You can use document
   * attributes as facets.</p> <p>For example, the document attribute or facet
   * "Department" includes the values "HR", "Engineering", and "Accounting". You can
   * display these values in the search results so that documents can be searched by
   * department.</p> <p>You can display up to 10 facet values per facet for a query.
   * If you want to increase this limit, contact <a
   * href="http://aws.amazon.com/contact-us/">Support</a>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Facet">AWS API
   * Reference</a></p>
   */
  class Facet
  {
  public:
    AWS_KENDRA_API Facet() = default;
    AWS_KENDRA_API Facet(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Facet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const { return m_documentAttributeKey; }
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }
    template<typename DocumentAttributeKeyT = Aws::String>
    void SetDocumentAttributeKey(DocumentAttributeKeyT&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::forward<DocumentAttributeKeyT>(value); }
    template<typename DocumentAttributeKeyT = Aws::String>
    Facet& WithDocumentAttributeKey(DocumentAttributeKeyT&& value) { SetDocumentAttributeKey(std::forward<DocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of document attributes that are nested facets within a facet.</p>
     * <p>For example, the document attribute or facet "Department" includes a value
     * called "Engineering". In addition, the document attribute or facet
     * "SubDepartment" includes the values "Frontend" and "Backend" for documents
     * assigned to "Engineering". You can display nested facets in the search results
     * so that documents can be searched not only by department but also by a sub
     * department within a department. This helps your users further narrow their
     * search.</p> <p>You can only have one nested facet within a facet. If you want to
     * increase this limit, contact <a
     * href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline const Aws::Vector<Facet>& GetFacets() const { return m_facets; }
    inline bool FacetsHasBeenSet() const { return m_facetsHasBeenSet; }
    template<typename FacetsT = Aws::Vector<Facet>>
    void SetFacets(FacetsT&& value) { m_facetsHasBeenSet = true; m_facets = std::forward<FacetsT>(value); }
    template<typename FacetsT = Aws::Vector<Facet>>
    Facet& WithFacets(FacetsT&& value) { SetFacets(std::forward<FacetsT>(value)); return *this;}
    template<typename FacetsT = Facet>
    Facet& AddFacets(FacetsT&& value) { m_facetsHasBeenSet = true; m_facets.emplace_back(std::forward<FacetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of facet values per facet. The default is 10. You can use this
     * to limit the number of facet values to less than 10. If you want to increase the
     * default, contact <a href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline Facet& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    Aws::Vector<Facet> m_facets;
    bool m_facetsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
