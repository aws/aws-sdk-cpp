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
   * <p>Information about a document attribute. You can use document attributes as
   * facets.</p> <p>For example, the document attribute or facet "Department"
   * includes the values "HR", "Engineering", and "Accounting". You can display these
   * values in the search results so that documents can be searched by
   * department.</p> <p>You can display up to 10 facet values per facet for a query.
   * If you want to increase this limit, contact <a
   * href="http://aws.amazon.com/contact-us/">Support</a>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Facet">AWS API
   * Reference</a></p>
   */
  class Facet
  {
  public:
    AWS_KENDRA_API Facet();
    AWS_KENDRA_API Facet(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Facet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const{ return m_documentAttributeKey; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(const Aws::String& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = value; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(Aws::String&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::move(value); }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(const char* value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey.assign(value); }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(const Aws::String& value) { SetDocumentAttributeKey(value); return *this;}

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(Aws::String&& value) { SetDocumentAttributeKey(std::move(value)); return *this;}

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(const char* value) { SetDocumentAttributeKey(value); return *this;}


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
    inline const Aws::Vector<Facet>& GetFacets() const{ return m_facets; }

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
    inline bool FacetsHasBeenSet() const { return m_facetsHasBeenSet; }

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
    inline void SetFacets(const Aws::Vector<Facet>& value) { m_facetsHasBeenSet = true; m_facets = value; }

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
    inline void SetFacets(Aws::Vector<Facet>&& value) { m_facetsHasBeenSet = true; m_facets = std::move(value); }

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
    inline Facet& WithFacets(const Aws::Vector<Facet>& value) { SetFacets(value); return *this;}

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
    inline Facet& WithFacets(Aws::Vector<Facet>&& value) { SetFacets(std::move(value)); return *this;}

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
    inline Facet& AddFacets(const Facet& value) { m_facetsHasBeenSet = true; m_facets.push_back(value); return *this; }

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
    inline Facet& AddFacets(Facet&& value) { m_facetsHasBeenSet = true; m_facets.push_back(std::move(value)); return *this; }


    /**
     * <p>Maximum number of facet values per facet. The default is 10. You can use this
     * to limit the number of facet values to less than 10. If you want to increase the
     * default, contact <a href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of facet values per facet. The default is 10. You can use this
     * to limit the number of facet values to less than 10. If you want to increase the
     * default, contact <a href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of facet values per facet. The default is 10. You can use this
     * to limit the number of facet values to less than 10. If you want to increase the
     * default, contact <a href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of facet values per facet. The default is 10. You can use this
     * to limit the number of facet values to less than 10. If you want to increase the
     * default, contact <a href="http://aws.amazon.com/contact-us/">Support</a>.</p>
     */
    inline Facet& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet = false;

    Aws::Vector<Facet> m_facets;
    bool m_facetsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
