/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_displayableHasBeenSet(false)
{
}

Search::Search(JsonView jsonValue) : 
    m_facetable(false),
    m_facetableHasBeenSet(false),
    m_searchable(false),
    m_searchableHasBeenSet(false),
    m_displayable(false),
    m_displayableHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
