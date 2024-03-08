/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CollapsedResultDetail.h>
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

CollapsedResultDetail::CollapsedResultDetail() : 
    m_documentAttributeHasBeenSet(false),
    m_expandedResultsHasBeenSet(false)
{
}

CollapsedResultDetail::CollapsedResultDetail(JsonView jsonValue) : 
    m_documentAttributeHasBeenSet(false),
    m_expandedResultsHasBeenSet(false)
{
  *this = jsonValue;
}

CollapsedResultDetail& CollapsedResultDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttribute"))
  {
    m_documentAttribute = jsonValue.GetObject("DocumentAttribute");

    m_documentAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpandedResults"))
  {
    Aws::Utils::Array<JsonView> expandedResultsJsonList = jsonValue.GetArray("ExpandedResults");
    for(unsigned expandedResultsIndex = 0; expandedResultsIndex < expandedResultsJsonList.GetLength(); ++expandedResultsIndex)
    {
      m_expandedResults.push_back(expandedResultsJsonList[expandedResultsIndex].AsObject());
    }
    m_expandedResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue CollapsedResultDetail::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeHasBeenSet)
  {
   payload.WithObject("DocumentAttribute", m_documentAttribute.Jsonize());

  }

  if(m_expandedResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expandedResultsJsonList(m_expandedResults.size());
   for(unsigned expandedResultsIndex = 0; expandedResultsIndex < expandedResultsJsonList.GetLength(); ++expandedResultsIndex)
   {
     expandedResultsJsonList[expandedResultsIndex].AsObject(m_expandedResults[expandedResultsIndex].Jsonize());
   }
   payload.WithArray("ExpandedResults", std::move(expandedResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
