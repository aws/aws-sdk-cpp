/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisDateFilter.h>
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

CisDateFilter::CisDateFilter() : 
    m_earliestScanStartTimeHasBeenSet(false),
    m_latestScanStartTimeHasBeenSet(false)
{
}

CisDateFilter::CisDateFilter(JsonView jsonValue) : 
    m_earliestScanStartTimeHasBeenSet(false),
    m_latestScanStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CisDateFilter& CisDateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("earliestScanStartTime"))
  {
    m_earliestScanStartTime = jsonValue.GetDouble("earliestScanStartTime");

    m_earliestScanStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestScanStartTime"))
  {
    m_latestScanStartTime = jsonValue.GetDouble("latestScanStartTime");

    m_latestScanStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CisDateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_earliestScanStartTimeHasBeenSet)
  {
   payload.WithDouble("earliestScanStartTime", m_earliestScanStartTime.SecondsWithMSPrecision());
  }

  if(m_latestScanStartTimeHasBeenSet)
  {
   payload.WithDouble("latestScanStartTime", m_latestScanStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
