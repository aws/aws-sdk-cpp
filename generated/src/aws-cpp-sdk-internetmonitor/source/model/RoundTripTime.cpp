/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/RoundTripTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

RoundTripTime::RoundTripTime() : 
    m_p50(0.0),
    m_p50HasBeenSet(false),
    m_p90(0.0),
    m_p90HasBeenSet(false),
    m_p95(0.0),
    m_p95HasBeenSet(false)
{
}

RoundTripTime::RoundTripTime(JsonView jsonValue) : 
    m_p50(0.0),
    m_p50HasBeenSet(false),
    m_p90(0.0),
    m_p90HasBeenSet(false),
    m_p95(0.0),
    m_p95HasBeenSet(false)
{
  *this = jsonValue;
}

RoundTripTime& RoundTripTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("P50"))
  {
    m_p50 = jsonValue.GetDouble("P50");

    m_p50HasBeenSet = true;
  }

  if(jsonValue.ValueExists("P90"))
  {
    m_p90 = jsonValue.GetDouble("P90");

    m_p90HasBeenSet = true;
  }

  if(jsonValue.ValueExists("P95"))
  {
    m_p95 = jsonValue.GetDouble("P95");

    m_p95HasBeenSet = true;
  }

  return *this;
}

JsonValue RoundTripTime::Jsonize() const
{
  JsonValue payload;

  if(m_p50HasBeenSet)
  {
   payload.WithDouble("P50", m_p50);

  }

  if(m_p90HasBeenSet)
  {
   payload.WithDouble("P90", m_p90);

  }

  if(m_p95HasBeenSet)
  {
   payload.WithDouble("P95", m_p95);

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
