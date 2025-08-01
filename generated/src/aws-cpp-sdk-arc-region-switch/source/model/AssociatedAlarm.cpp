/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/AssociatedAlarm.h>
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

AssociatedAlarm::AssociatedAlarm(JsonView jsonValue)
{
  *this = jsonValue;
}

AssociatedAlarm& AssociatedAlarm::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmType"))
  {
    m_alarmType = AlarmTypeMapper::GetAlarmTypeForName(jsonValue.GetString("alarmType"));
    m_alarmTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedAlarm::Jsonize() const
{
  JsonValue payload;

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  if(m_alarmTypeHasBeenSet)
  {
   payload.WithString("alarmType", AlarmTypeMapper::GetNameForAlarmType(m_alarmType));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
