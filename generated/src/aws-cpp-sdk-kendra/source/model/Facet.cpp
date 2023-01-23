/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Facet.h>
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

Facet::Facet() : 
    m_documentAttributeKeyHasBeenSet(false),
    m_facetsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Facet::Facet(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false),
    m_facetsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

Facet& Facet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Facets"))
  {
    Aws::Utils::Array<JsonView> facetsJsonList = jsonValue.GetArray("Facets");
    for(unsigned facetsIndex = 0; facetsIndex < facetsJsonList.GetLength(); ++facetsIndex)
    {
      m_facets.push_back(facetsJsonList[facetsIndex].AsObject());
    }
    m_facetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue Facet::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  if(m_facetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> facetsJsonList(m_facets.size());
   for(unsigned facetsIndex = 0; facetsIndex < facetsJsonList.GetLength(); ++facetsIndex)
   {
     facetsJsonList[facetsIndex].AsObject(m_facets[facetsIndex].Jsonize());
   }
   payload.WithArray("Facets", std::move(facetsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
