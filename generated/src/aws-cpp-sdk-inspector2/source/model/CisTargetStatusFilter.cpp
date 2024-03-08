/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisTargetStatusFilter::CisTargetStatusFilter() : 
    m_comparison(CisTargetStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisTargetStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
}

CisTargetStatusFilter::CisTargetStatusFilter(JsonView jsonValue) : 
    m_comparison(CisTargetStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisTargetStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CisTargetStatusFilter& CisTargetStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisTargetStatusComparisonMapper::GetCisTargetStatusComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = CisTargetStatusMapper::GetCisTargetStatusForName(jsonValue.GetString("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CisTargetStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisTargetStatusComparisonMapper::GetNameForCisTargetStatusComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisTargetStatusMapper::GetNameForCisTargetStatus(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
