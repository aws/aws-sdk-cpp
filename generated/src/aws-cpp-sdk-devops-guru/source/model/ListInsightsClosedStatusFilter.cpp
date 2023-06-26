/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListInsightsClosedStatusFilter.h>
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

ListInsightsClosedStatusFilter::ListInsightsClosedStatusFilter() : 
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false),
    m_endTimeRangeHasBeenSet(false)
{
}

ListInsightsClosedStatusFilter::ListInsightsClosedStatusFilter(JsonView jsonValue) : 
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false),
    m_endTimeRangeHasBeenSet(false)
{
  *this = jsonValue;
}

ListInsightsClosedStatusFilter& ListInsightsClosedStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimeRange"))
  {
    m_endTimeRange = jsonValue.GetObject("EndTimeRange");

    m_endTimeRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListInsightsClosedStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  if(m_endTimeRangeHasBeenSet)
  {
   payload.WithObject("EndTimeRange", m_endTimeRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
