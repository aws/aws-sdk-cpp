/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalyReportedTimeRange.h>
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

AnomalyReportedTimeRange::AnomalyReportedTimeRange() : 
    m_openTimeHasBeenSet(false),
    m_closeTimeHasBeenSet(false)
{
}

AnomalyReportedTimeRange::AnomalyReportedTimeRange(JsonView jsonValue) : 
    m_openTimeHasBeenSet(false),
    m_closeTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyReportedTimeRange& AnomalyReportedTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpenTime"))
  {
    m_openTime = jsonValue.GetDouble("OpenTime");

    m_openTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloseTime"))
  {
    m_closeTime = jsonValue.GetDouble("CloseTime");

    m_closeTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyReportedTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_openTimeHasBeenSet)
  {
   payload.WithDouble("OpenTime", m_openTime.SecondsWithMSPrecision());
  }

  if(m_closeTimeHasBeenSet)
  {
   payload.WithDouble("CloseTime", m_closeTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
