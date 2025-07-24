/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetListingItemAdditionalAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetListingItemAdditionalAttributes::AssetListingItemAdditionalAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetListingItemAdditionalAttributes& AssetListingItemAdditionalAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forms"))
  {
    m_forms = jsonValue.GetString("forms");
    m_formsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestTimeSeriesDataPointForms"))
  {
    Aws::Utils::Array<JsonView> latestTimeSeriesDataPointFormsJsonList = jsonValue.GetArray("latestTimeSeriesDataPointForms");
    for(unsigned latestTimeSeriesDataPointFormsIndex = 0; latestTimeSeriesDataPointFormsIndex < latestTimeSeriesDataPointFormsJsonList.GetLength(); ++latestTimeSeriesDataPointFormsIndex)
    {
      m_latestTimeSeriesDataPointForms.push_back(latestTimeSeriesDataPointFormsJsonList[latestTimeSeriesDataPointFormsIndex].AsObject());
    }
    m_latestTimeSeriesDataPointFormsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchRationale"))
  {
    Aws::Utils::Array<JsonView> matchRationaleJsonList = jsonValue.GetArray("matchRationale");
    for(unsigned matchRationaleIndex = 0; matchRationaleIndex < matchRationaleJsonList.GetLength(); ++matchRationaleIndex)
    {
      m_matchRationale.push_back(matchRationaleJsonList[matchRationaleIndex].AsObject());
    }
    m_matchRationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetListingItemAdditionalAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_formsHasBeenSet)
  {
   payload.WithString("forms", m_forms);

  }

  if(m_latestTimeSeriesDataPointFormsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> latestTimeSeriesDataPointFormsJsonList(m_latestTimeSeriesDataPointForms.size());
   for(unsigned latestTimeSeriesDataPointFormsIndex = 0; latestTimeSeriesDataPointFormsIndex < latestTimeSeriesDataPointFormsJsonList.GetLength(); ++latestTimeSeriesDataPointFormsIndex)
   {
     latestTimeSeriesDataPointFormsJsonList[latestTimeSeriesDataPointFormsIndex].AsObject(m_latestTimeSeriesDataPointForms[latestTimeSeriesDataPointFormsIndex].Jsonize());
   }
   payload.WithArray("latestTimeSeriesDataPointForms", std::move(latestTimeSeriesDataPointFormsJsonList));

  }

  if(m_matchRationaleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchRationaleJsonList(m_matchRationale.size());
   for(unsigned matchRationaleIndex = 0; matchRationaleIndex < matchRationaleJsonList.GetLength(); ++matchRationaleIndex)
   {
     matchRationaleJsonList[matchRationaleIndex].AsObject(m_matchRationale[matchRationaleIndex].Jsonize());
   }
   payload.WithArray("matchRationale", std::move(matchRationaleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
