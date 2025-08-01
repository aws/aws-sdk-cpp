/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Route53HealthCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Route53HealthCheck::Route53HealthCheck(JsonView jsonValue)
{
  *this = jsonValue;
}

Route53HealthCheck& Route53HealthCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("hostedZoneId");
    m_hostedZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordName"))
  {
    m_recordName = jsonValue.GetString("recordName");
    m_recordNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("healthCheckId"))
  {
    m_healthCheckId = jsonValue.GetString("healthCheckId");
    m_healthCheckIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue Route53HealthCheck::Jsonize() const
{
  JsonValue payload;

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("hostedZoneId", m_hostedZoneId);

  }

  if(m_recordNameHasBeenSet)
  {
   payload.WithString("recordName", m_recordName);

  }

  if(m_healthCheckIdHasBeenSet)
  {
   payload.WithString("healthCheckId", m_healthCheckId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
