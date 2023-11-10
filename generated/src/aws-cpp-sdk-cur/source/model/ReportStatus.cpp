/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/ReportStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{

ReportStatus::ReportStatus() : 
    m_lastDeliveryHasBeenSet(false),
    m_lastStatus(LastStatus::NOT_SET),
    m_lastStatusHasBeenSet(false)
{
}

ReportStatus::ReportStatus(JsonView jsonValue) : 
    m_lastDeliveryHasBeenSet(false),
    m_lastStatus(LastStatus::NOT_SET),
    m_lastStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ReportStatus& ReportStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastDelivery"))
  {
    m_lastDelivery = jsonValue.GetString("lastDelivery");

    m_lastDeliveryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = LastStatusMapper::GetLastStatusForName(jsonValue.GetString("lastStatus"));

    m_lastStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportStatus::Jsonize() const
{
  JsonValue payload;

  if(m_lastDeliveryHasBeenSet)
  {
   payload.WithString("lastDelivery", m_lastDelivery);

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", LastStatusMapper::GetNameForLastStatus(m_lastStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
