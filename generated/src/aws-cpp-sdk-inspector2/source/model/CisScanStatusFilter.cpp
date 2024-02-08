/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanStatusFilter.h>
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

CisScanStatusFilter::CisScanStatusFilter() : 
    m_comparison(CisScanStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisScanStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
}

CisScanStatusFilter::CisScanStatusFilter(JsonView jsonValue) : 
    m_comparison(CisScanStatusComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisScanStatus::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CisScanStatusFilter& CisScanStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisScanStatusComparisonMapper::GetCisScanStatusComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = CisScanStatusMapper::GetCisScanStatusForName(jsonValue.GetString("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CisScanStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisScanStatusComparisonMapper::GetNameForCisScanStatusComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisScanStatusMapper::GetNameForCisScanStatus(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
