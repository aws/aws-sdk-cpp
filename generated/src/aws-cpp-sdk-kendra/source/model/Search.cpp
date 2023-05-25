/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Search.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Search::Search() : 
    m_facetable(false),
    m_facetableHasBeenSet(false),
    m_searchable(false),
    m_searchableHasBeenSet(false),
    m_displayable(false),
    m_displayableHasBeenSet(false),
    m_sortable(false),
    m_sortableHasBeenSet(false)
{
}

Search::Search(JsonView jsonValue) : 
    m_facetable(false),
    m_facetableHasBeenSet(false),
    m_searchable(false),
    m_searchableHasBeenSet(false),
    m_displayable(false),
    m_displayableHasBeenSet(false),
    m_sortable(false),
    m_sortableHasBeenSet(false)
{
  *this = jsonValue;
}

Search& Search::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Facetable"))
  {
    m_facetable = jsonValue.GetBool("Facetable");

    m_facetableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Searchable"))
  {
    m_searchable = jsonValue.GetBool("Searchable");

    m_searchableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Displayable"))
  {
    m_displayable = jsonValue.GetBool("Displayable");

    m_displayableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sortable"))
  {
    m_sortable = jsonValue.GetBool("Sortable");

    m_sortableHasBeenSet = true;
  }

  return *this;
}

JsonValue Search::Jsonize() const
{
  JsonValue payload;

  if(m_facetableHasBeenSet)
  {
   payload.WithBool("Facetable", m_facetable);

  }

  if(m_searchableHasBeenSet)
  {
   payload.WithBool("Searchable", m_searchable);

  }

  if(m_displayableHasBeenSet)
  {
   payload.WithBool("Displayable", m_displayable);

  }

  if(m_sortableHasBeenSet)
  {
   payload.WithBool("Sortable", m_sortable);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
