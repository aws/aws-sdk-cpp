/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListInsightsAnyStatusFilter.h>
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

ListInsightsAnyStatusFilter::ListInsightsAnyStatusFilter() : 
    m_startTimeRangeHasBeenSet(false),
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ListInsightsAnyStatusFilter::ListInsightsAnyStatusFilter(JsonView jsonValue) : 
    m_startTimeRangeHasBeenSet(false),
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ListInsightsAnyStatusFilter& ListInsightsAnyStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTimeRange"))
  {
    m_startTimeRange = jsonValue.GetObject("StartTimeRange");

    m_startTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListInsightsAnyStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeRangeHasBeenSet)
  {
   payload.WithObject("StartTimeRange", m_startTimeRange.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
