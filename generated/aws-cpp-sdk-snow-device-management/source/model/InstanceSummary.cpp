/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/InstanceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

InstanceSummary::InstanceSummary() : 
    m_instanceHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

InstanceSummary::InstanceSummary(JsonView jsonValue) : 
    m_instanceHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSummary& InstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instance"))
  {
    m_instance = jsonValue.GetObject("instance");

    m_instanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("instance", m_instance.Jsonize());

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
