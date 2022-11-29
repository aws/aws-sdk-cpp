/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FieldBasedTooltip.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FieldBasedTooltip::FieldBasedTooltip() : 
    m_aggregationVisibility(Visibility::NOT_SET),
    m_aggregationVisibilityHasBeenSet(false),
    m_tooltipTitleType(TooltipTitleType::NOT_SET),
    m_tooltipTitleTypeHasBeenSet(false),
    m_tooltipFieldsHasBeenSet(false)
{
}

FieldBasedTooltip::FieldBasedTooltip(JsonView jsonValue) : 
    m_aggregationVisibility(Visibility::NOT_SET),
    m_aggregationVisibilityHasBeenSet(false),
    m_tooltipTitleType(TooltipTitleType::NOT_SET),
    m_tooltipTitleTypeHasBeenSet(false),
    m_tooltipFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

FieldBasedTooltip& FieldBasedTooltip::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AggregationVisibility"))
  {
    m_aggregationVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("AggregationVisibility"));

    m_aggregationVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TooltipTitleType"))
  {
    m_tooltipTitleType = TooltipTitleTypeMapper::GetTooltipTitleTypeForName(jsonValue.GetString("TooltipTitleType"));

    m_tooltipTitleTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TooltipFields"))
  {
    Aws::Utils::Array<JsonView> tooltipFieldsJsonList = jsonValue.GetArray("TooltipFields");
    for(unsigned tooltipFieldsIndex = 0; tooltipFieldsIndex < tooltipFieldsJsonList.GetLength(); ++tooltipFieldsIndex)
    {
      m_tooltipFields.push_back(tooltipFieldsJsonList[tooltipFieldsIndex].AsObject());
    }
    m_tooltipFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldBasedTooltip::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationVisibilityHasBeenSet)
  {
   payload.WithString("AggregationVisibility", VisibilityMapper::GetNameForVisibility(m_aggregationVisibility));
  }

  if(m_tooltipTitleTypeHasBeenSet)
  {
   payload.WithString("TooltipTitleType", TooltipTitleTypeMapper::GetNameForTooltipTitleType(m_tooltipTitleType));
  }

  if(m_tooltipFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tooltipFieldsJsonList(m_tooltipFields.size());
   for(unsigned tooltipFieldsIndex = 0; tooltipFieldsIndex < tooltipFieldsJsonList.GetLength(); ++tooltipFieldsIndex)
   {
     tooltipFieldsJsonList[tooltipFieldsIndex].AsObject(m_tooltipFields[tooltipFieldsIndex].Jsonize());
   }
   payload.WithArray("TooltipFields", std::move(tooltipFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
