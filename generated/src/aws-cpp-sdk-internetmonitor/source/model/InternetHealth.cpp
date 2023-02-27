/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/InternetHealth.h>
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

InternetHealth::InternetHealth() : 
    m_availabilityHasBeenSet(false),
    m_performanceHasBeenSet(false)
{
}

InternetHealth::InternetHealth(JsonView jsonValue) : 
    m_availabilityHasBeenSet(false),
    m_performanceHasBeenSet(false)
{
  *this = jsonValue;
}

InternetHealth& InternetHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Availability"))
  {
    m_availability = jsonValue.GetObject("Availability");

    m_availabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Performance"))
  {
    m_performance = jsonValue.GetObject("Performance");

    m_performanceHasBeenSet = true;
  }

  return *this;
}

JsonValue InternetHealth::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityHasBeenSet)
  {
   payload.WithObject("Availability", m_availability.Jsonize());

  }

  if(m_performanceHasBeenSet)
  {
   payload.WithObject("Performance", m_performance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
