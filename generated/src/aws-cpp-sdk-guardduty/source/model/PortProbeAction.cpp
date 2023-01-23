/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PortProbeAction.h>
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

PortProbeAction::PortProbeAction() : 
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_portProbeDetailsHasBeenSet(false)
{
}

PortProbeAction::PortProbeAction(JsonView jsonValue) : 
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_portProbeDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

PortProbeAction& PortProbeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blocked"))
  {
    m_blocked = jsonValue.GetBool("blocked");

    m_blockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portProbeDetails"))
  {
    Aws::Utils::Array<JsonView> portProbeDetailsJsonList = jsonValue.GetArray("portProbeDetails");
    for(unsigned portProbeDetailsIndex = 0; portProbeDetailsIndex < portProbeDetailsJsonList.GetLength(); ++portProbeDetailsIndex)
    {
      m_portProbeDetails.push_back(portProbeDetailsJsonList[portProbeDetailsIndex].AsObject());
    }
    m_portProbeDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortProbeAction::Jsonize() const
{
  JsonValue payload;

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("blocked", m_blocked);

  }

  if(m_portProbeDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portProbeDetailsJsonList(m_portProbeDetails.size());
   for(unsigned portProbeDetailsIndex = 0; portProbeDetailsIndex < portProbeDetailsJsonList.GetLength(); ++portProbeDetailsIndex)
   {
     portProbeDetailsJsonList[portProbeDetailsIndex].AsObject(m_portProbeDetails[portProbeDetailsIndex].Jsonize());
   }
   payload.WithArray("portProbeDetails", std::move(portProbeDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
