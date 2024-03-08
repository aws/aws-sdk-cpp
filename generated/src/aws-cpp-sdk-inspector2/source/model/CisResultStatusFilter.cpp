/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisResultStatusFilter.h>
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

CisResultStatusFilter::CisResultStatusFilter() : 
    m_comparison(CisResultStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisResultStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
}

CisResultStatusFilter::CisResultStatusFilter(JsonView jsonValue) : 
    m_comparison(CisResultStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisResultStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CisResultStatusFilter& CisResultStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisResultStatusComparisonMapper::GetCisResultStatusComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = CisResultStatusMapper::GetCisResultStatusForName(jsonValue.GetString("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CisResultStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisResultStatusComparisonMapper::GetNameForCisResultStatusComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisResultStatusMapper::GetNameForCisResultStatus(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
