/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargetStatusReasonFilter.h>
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

CisTargetStatusReasonFilter::CisTargetStatusReasonFilter() : 
    m_comparison(CisTargetStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisTargetStatusReason::NOT_SET),
    m_valueHasBeenSet(false)
{
}

CisTargetStatusReasonFilter::CisTargetStatusReasonFilter(JsonView jsonValue) : 
    m_comparison(CisTargetStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisTargetStatusReason::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CisTargetStatusReasonFilter& CisTargetStatusReasonFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisTargetStatusComparisonMapper::GetCisTargetStatusComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = CisTargetStatusReasonMapper::GetCisTargetStatusReasonForName(jsonValue.GetString("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CisTargetStatusReasonFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisTargetStatusComparisonMapper::GetNameForCisTargetStatusComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisTargetStatusReasonMapper::GetNameForCisTargetStatusReason(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
