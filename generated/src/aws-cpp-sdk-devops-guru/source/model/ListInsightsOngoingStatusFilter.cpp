/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListInsightsOngoingStatusFilter.h>
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

ListInsightsOngoingStatusFilter::ListInsightsOngoingStatusFilter() : 
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ListInsightsOngoingStatusFilter::ListInsightsOngoingStatusFilter(JsonView jsonValue) : 
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ListInsightsOngoingStatusFilter& ListInsightsOngoingStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListInsightsOngoingStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
