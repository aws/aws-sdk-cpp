/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisFindingStatusFilter.h>
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

CisFindingStatusFilter::CisFindingStatusFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CisFindingStatusFilter& CisFindingStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisFindingStatusComparisonMapper::GetCisFindingStatusComparisonForName(jsonValue.GetString("comparison"));
    m_comparisonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = CisFindingStatusMapper::GetCisFindingStatusForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue CisFindingStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisFindingStatusComparisonMapper::GetNameForCisFindingStatusComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisFindingStatusMapper::GetNameForCisFindingStatus(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
