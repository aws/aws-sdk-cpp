/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceMinutes.h>
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

DeviceMinutes::DeviceMinutes() : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_metered(0.0),
    m_meteredHasBeenSet(false),
    m_unmetered(0.0),
    m_unmeteredHasBeenSet(false)
{
}

DeviceMinutes::DeviceMinutes(JsonView jsonValue) : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_metered(0.0),
    m_meteredHasBeenSet(false),
    m_unmetered(0.0),
    m_unmeteredHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceMinutes& DeviceMinutes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetDouble("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metered"))
  {
    m_metered = jsonValue.GetDouble("metered");

    m_meteredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unmetered"))
  {
    m_unmetered = jsonValue.GetDouble("unmetered");

    m_unmeteredHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceMinutes::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("total", m_total);

  }

  if(m_meteredHasBeenSet)
  {
   payload.WithDouble("metered", m_metered);

  }

  if(m_unmeteredHasBeenSet)
  {
   payload.WithDouble("unmetered", m_unmetered);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
