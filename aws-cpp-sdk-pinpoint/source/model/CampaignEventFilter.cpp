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

#include <aws/pinpoint/model/CampaignEventFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignEventFilter::CampaignEventFilter() : 
    m_dimensionsHasBeenSet(false),
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
}

CampaignEventFilter::CampaignEventFilter(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignEventFilter& CampaignEventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterType"))
  {
    m_filterType = FilterTypeMapper::GetFilterTypeForName(jsonValue.GetString("FilterType"));

    m_filterTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignEventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("FilterType", FilterTypeMapper::GetNameForFilterType(m_filterType));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
