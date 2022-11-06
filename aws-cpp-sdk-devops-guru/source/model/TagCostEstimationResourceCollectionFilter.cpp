/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/TagCostEstimationResourceCollectionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

TagCostEstimationResourceCollectionFilter::TagCostEstimationResourceCollectionFilter() : 
    m_appBoundaryKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

TagCostEstimationResourceCollectionFilter::TagCostEstimationResourceCollectionFilter(JsonView jsonValue) : 
    m_appBoundaryKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
  *this = jsonValue;
}

TagCostEstimationResourceCollectionFilter& TagCostEstimationResourceCollectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppBoundaryKey"))
  {
    m_appBoundaryKey = jsonValue.GetString("AppBoundaryKey");

    m_appBoundaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValues"))
  {
    Aws::Utils::Array<JsonView> tagValuesJsonList = jsonValue.GetArray("TagValues");
    for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
    {
      m_tagValues.push_back(tagValuesJsonList[tagValuesIndex].AsString());
    }
    m_tagValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TagCostEstimationResourceCollectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_appBoundaryKeyHasBeenSet)
  {
   payload.WithString("AppBoundaryKey", m_appBoundaryKey);

  }

  if(m_tagValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesJsonList(m_tagValues.size());
   for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
   {
     tagValuesJsonList[tagValuesIndex].AsString(m_tagValues[tagValuesIndex]);
   }
   payload.WithArray("TagValues", std::move(tagValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
