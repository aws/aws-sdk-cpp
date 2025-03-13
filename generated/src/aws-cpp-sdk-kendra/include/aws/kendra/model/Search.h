/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
   * <p>Provides information about how a custom index field is used during a
   * search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Search">AWS API
   * Reference</a></p>
   */
  class Search
  {
  public:
    AWS_KENDRA_API Search() = default;
    AWS_KENDRA_API Search(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Search& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that the field can be used to create search facets, a count of
     * results for each value in the field. The default is <code>false</code> .</p>
     */
    inline bool GetFacetable() const { return m_facetable; }
    inline bool FacetableHasBeenSet() const { return m_facetableHasBeenSet; }
    inline void SetFacetable(bool value) { m_facetableHasBeenSet = true; m_facetable = value; }
    inline Search& WithFacetable(bool value) { SetFacetable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the field is used in the search. If the
     * <code>Searchable</code> field is <code>true</code>, you can use relevance tuning
     * to manually tune how Amazon Kendra weights the field in the search. The default
     * is <code>true</code> for string fields and <code>false</code> for number and
     * date fields.</p>
     */
    inline bool GetSearchable() const { return m_searchable; }
    inline bool SearchableHasBeenSet() const { return m_searchableHasBeenSet; }
    inline void SetSearchable(bool value) { m_searchableHasBeenSet = true; m_searchable = value; }
    inline Search& WithSearchable(bool value) { SetSearchable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the field is returned in the query response. The default
     * is <code>true</code>.</p>
     */
    inline bool GetDisplayable() const { return m_displayable; }
    inline bool DisplayableHasBeenSet() const { return m_displayableHasBeenSet; }
    inline void SetDisplayable(bool value) { m_displayableHasBeenSet = true; m_displayable = value; }
    inline Search& WithDisplayable(bool value) { SetDisplayable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the field can be used to sort the results of a query. If
     * you specify sorting on a field that does not have <code>Sortable</code> set to
     * <code>true</code>, Amazon Kendra returns an exception. The default is
     * <code>false</code>.</p>
     */
    inline bool GetSortable() const { return m_sortable; }
    inline bool SortableHasBeenSet() const { return m_sortableHasBeenSet; }
    inline void SetSortable(bool value) { m_sortableHasBeenSet = true; m_sortable = value; }
    inline Search& WithSortable(bool value) { SetSortable(value); return *this;}
    ///@}
  private:

    bool m_facetable{false};
    bool m_facetableHasBeenSet = false;

    bool m_searchable{false};
    bool m_searchableHasBeenSet = false;

    bool m_displayable{false};
    bool m_displayableHasBeenSet = false;

    bool m_sortable{false};
    bool m_sortableHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
