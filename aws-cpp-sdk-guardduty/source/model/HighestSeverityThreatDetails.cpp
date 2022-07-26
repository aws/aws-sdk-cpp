/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/HighestSeverityThreatDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

HighestSeverityThreatDetails::HighestSeverityThreatDetails() : 
    m_severityHasBeenSet(false),
    m_threatNameHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

HighestSeverityThreatDetails::HighestSeverityThreatDetails(JsonView jsonValue) : 
    m_severityHasBeenSet(false),
    m_threatNameHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

HighestSeverityThreatDetails& HighestSeverityThreatDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threatName"))
  {
    m_threatName = jsonValue.GetString("threatName");

    m_threatNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue HighestSeverityThreatDetails::Jsonize() const
{
  JsonValue payload;

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  if(m_threatNameHasBeenSet)
  {
   payload.WithString("threatName", m_threatName);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
