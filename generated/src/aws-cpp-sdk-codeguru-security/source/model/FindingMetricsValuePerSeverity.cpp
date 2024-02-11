/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

FindingMetricsValuePerSeverity::FindingMetricsValuePerSeverity() : 
    m_critical(0.0),
    m_criticalHasBeenSet(false),
    m_high(0.0),
    m_highHasBeenSet(false),
    m_info(0.0),
    m_infoHasBeenSet(false),
    m_low(0.0),
    m_lowHasBeenSet(false),
    m_medium(0.0),
    m_mediumHasBeenSet(false)
{
}

FindingMetricsValuePerSeverity::FindingMetricsValuePerSeverity(JsonView jsonValue) : 
    m_critical(0.0),
    m_criticalHasBeenSet(false),
    m_high(0.0),
    m_highHasBeenSet(false),
    m_info(0.0),
    m_infoHasBeenSet(false),
    m_low(0.0),
    m_lowHasBeenSet(false),
    m_medium(0.0),
    m_mediumHasBeenSet(false)
{
  *this = jsonValue;
}

FindingMetricsValuePerSeverity& FindingMetricsValuePerSeverity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("critical"))
  {
    m_critical = jsonValue.GetDouble("critical");

    m_criticalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("high"))
  {
    m_high = jsonValue.GetDouble("high");

    m_highHasBeenSet = true;
  }

  if(jsonValue.ValueExists("info"))
  {
    m_info = jsonValue.GetDouble("info");

    m_infoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("low"))
  {
    m_low = jsonValue.GetDouble("low");

    m_lowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("medium"))
  {
    m_medium = jsonValue.GetDouble("medium");

    m_mediumHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingMetricsValuePerSeverity::Jsonize() const
{
  JsonValue payload;

  if(m_criticalHasBeenSet)
  {
   payload.WithDouble("critical", m_critical);

  }

  if(m_highHasBeenSet)
  {
   payload.WithDouble("high", m_high);

  }

  if(m_infoHasBeenSet)
  {
   payload.WithDouble("info", m_info);

  }

  if(m_lowHasBeenSet)
  {
   payload.WithDouble("low", m_low);

  }

  if(m_mediumHasBeenSet)
  {
   payload.WithDouble("medium", m_medium);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
