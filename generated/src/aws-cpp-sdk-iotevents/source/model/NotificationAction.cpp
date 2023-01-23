/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/NotificationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

NotificationAction::NotificationAction() : 
    m_actionHasBeenSet(false),
    m_smsConfigurationsHasBeenSet(false),
    m_emailConfigurationsHasBeenSet(false)
{
}

NotificationAction::NotificationAction(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_smsConfigurationsHasBeenSet(false),
    m_emailConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationAction& NotificationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smsConfigurations"))
  {
    Aws::Utils::Array<JsonView> smsConfigurationsJsonList = jsonValue.GetArray("smsConfigurations");
    for(unsigned smsConfigurationsIndex = 0; smsConfigurationsIndex < smsConfigurationsJsonList.GetLength(); ++smsConfigurationsIndex)
    {
      m_smsConfigurations.push_back(smsConfigurationsJsonList[smsConfigurationsIndex].AsObject());
    }
    m_smsConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailConfigurations"))
  {
    Aws::Utils::Array<JsonView> emailConfigurationsJsonList = jsonValue.GetArray("emailConfigurations");
    for(unsigned emailConfigurationsIndex = 0; emailConfigurationsIndex < emailConfigurationsJsonList.GetLength(); ++emailConfigurationsIndex)
    {
      m_emailConfigurations.push_back(emailConfigurationsJsonList[emailConfigurationsIndex].AsObject());
    }
    m_emailConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_smsConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> smsConfigurationsJsonList(m_smsConfigurations.size());
   for(unsigned smsConfigurationsIndex = 0; smsConfigurationsIndex < smsConfigurationsJsonList.GetLength(); ++smsConfigurationsIndex)
   {
     smsConfigurationsJsonList[smsConfigurationsIndex].AsObject(m_smsConfigurations[smsConfigurationsIndex].Jsonize());
   }
   payload.WithArray("smsConfigurations", std::move(smsConfigurationsJsonList));

  }

  if(m_emailConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emailConfigurationsJsonList(m_emailConfigurations.size());
   for(unsigned emailConfigurationsIndex = 0; emailConfigurationsIndex < emailConfigurationsJsonList.GetLength(); ++emailConfigurationsIndex)
   {
     emailConfigurationsJsonList[emailConfigurationsIndex].AsObject(m_emailConfigurations[emailConfigurationsIndex].Jsonize());
   }
   payload.WithArray("emailConfigurations", std::move(emailConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
