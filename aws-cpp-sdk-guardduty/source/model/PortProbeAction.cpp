/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

PortProbeAction::PortProbeAction(const JsonValue& jsonValue) : 
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_portProbeDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

PortProbeAction& PortProbeAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("blocked"))
  {
    m_blocked = jsonValue.GetBool("blocked");

    m_blockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portProbeDetails"))
  {
    Array<JsonValue> portProbeDetailsJsonList = jsonValue.GetArray("portProbeDetails");
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
   Array<JsonValue> portProbeDetailsJsonList(m_portProbeDetails.size());
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
