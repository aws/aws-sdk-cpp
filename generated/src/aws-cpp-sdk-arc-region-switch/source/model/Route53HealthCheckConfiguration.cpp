/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Route53HealthCheckConfiguration.h>
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

Route53HealthCheckConfiguration::Route53HealthCheckConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

Route53HealthCheckConfiguration& Route53HealthCheckConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("crossAccountRole"))
  {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("recordSets"))
  {
    Aws::Utils::Array<JsonView> recordSetsJsonList = jsonValue.GetArray("recordSets");
    for(unsigned recordSetsIndex = 0; recordSetsIndex < recordSetsJsonList.GetLength(); ++recordSetsIndex)
    {
      m_recordSets.push_back(recordSetsJsonList[recordSetsIndex].AsObject());
    }
    m_recordSetsHasBeenSet = true;
  }
  return *this;
}

JsonValue Route53HealthCheckConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("hostedZoneId", m_hostedZoneId);

  }

  if(m_recordNameHasBeenSet)
  {
   payload.WithString("recordName", m_recordName);

  }

  if(m_recordSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordSetsJsonList(m_recordSets.size());
   for(unsigned recordSetsIndex = 0; recordSetsIndex < recordSetsJsonList.GetLength(); ++recordSetsIndex)
   {
     recordSetsJsonList[recordSetsIndex].AsObject(m_recordSets[recordSetsIndex].Jsonize());
   }
   payload.WithArray("recordSets", std::move(recordSetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
