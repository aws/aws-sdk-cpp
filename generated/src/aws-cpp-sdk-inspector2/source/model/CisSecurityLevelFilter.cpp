/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisSecurityLevelFilter.h>
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

CisSecurityLevelFilter::CisSecurityLevelFilter() : 
    m_comparison(CisSecurityLevelComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisSecurityLevel::NOT_SET),
    m_valueHasBeenSet(false)
{
}

CisSecurityLevelFilter::CisSecurityLevelFilter(JsonView jsonValue) : 
    m_comparison(CisSecurityLevelComparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_value(CisSecurityLevel::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CisSecurityLevelFilter& CisSecurityLevelFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparison"))
  {
    m_comparison = CisSecurityLevelComparisonMapper::GetCisSecurityLevelComparisonForName(jsonValue.GetString("comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = CisSecurityLevelMapper::GetCisSecurityLevelForName(jsonValue.GetString("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CisSecurityLevelFilter::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("comparison", CisSecurityLevelComparisonMapper::GetNameForCisSecurityLevelComparison(m_comparison));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", CisSecurityLevelMapper::GetNameForCisSecurityLevel(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
