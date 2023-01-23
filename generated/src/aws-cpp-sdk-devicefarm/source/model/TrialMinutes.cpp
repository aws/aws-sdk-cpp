/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TrialMinutes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TrialMinutes::TrialMinutes() : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_remaining(0.0),
    m_remainingHasBeenSet(false)
{
}

TrialMinutes::TrialMinutes(JsonView jsonValue) : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_remaining(0.0),
    m_remainingHasBeenSet(false)
{
  *this = jsonValue;
}

TrialMinutes& TrialMinutes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetDouble("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remaining"))
  {
    m_remaining = jsonValue.GetDouble("remaining");

    m_remainingHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialMinutes::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("total", m_total);

  }

  if(m_remainingHasBeenSet)
  {
   payload.WithDouble("remaining", m_remaining);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
