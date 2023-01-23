/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentAttributeValueCountPair.h>
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

DocumentAttributeValueCountPair::DocumentAttributeValueCountPair() : 
    m_documentAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_facetResultsHasBeenSet(false)
{
}

DocumentAttributeValueCountPair::DocumentAttributeValueCountPair(JsonView jsonValue) : 
    m_documentAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_facetResultsHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeValueCountPair& DocumentAttributeValueCountPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeValue"))
  {
    m_documentAttributeValue = jsonValue.GetObject("DocumentAttributeValue");

    m_documentAttributeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FacetResults"))
  {
    Aws::Utils::Array<JsonView> facetResultsJsonList = jsonValue.GetArray("FacetResults");
    for(unsigned facetResultsIndex = 0; facetResultsIndex < facetResultsJsonList.GetLength(); ++facetResultsIndex)
    {
      m_facetResults.push_back(facetResultsJsonList[facetResultsIndex].AsObject());
    }
    m_facetResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeValueCountPair::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeValueHasBeenSet)
  {
   payload.WithObject("DocumentAttributeValue", m_documentAttributeValue.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_facetResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> facetResultsJsonList(m_facetResults.size());
   for(unsigned facetResultsIndex = 0; facetResultsIndex < facetResultsJsonList.GetLength(); ++facetResultsIndex)
   {
     facetResultsJsonList[facetResultsIndex].AsObject(m_facetResults[facetResultsIndex].Jsonize());
   }
   payload.WithArray("FacetResults", std::move(facetResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
