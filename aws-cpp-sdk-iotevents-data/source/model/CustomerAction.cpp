/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/CustomerAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

CustomerAction::CustomerAction() : 
    m_actionName(CustomerActionName::NOT_SET),
    m_actionNameHasBeenSet(false),
    m_snoozeActionConfigurationHasBeenSet(false),
    m_enableActionConfigurationHasBeenSet(false),
    m_disableActionConfigurationHasBeenSet(false),
    m_acknowledgeActionConfigurationHasBeenSet(false),
    m_resetActionConfigurationHasBeenSet(false)
{
}

CustomerAction::CustomerAction(JsonView jsonValue) : 
    m_actionName(CustomerActionName::NOT_SET),
    m_actionNameHasBeenSet(false),
    m_snoozeActionConfigurationHasBeenSet(false),
    m_enableActionConfigurationHasBeenSet(false),
    m_disableActionConfigurationHasBeenSet(false),
    m_acknowledgeActionConfigurationHasBeenSet(false),
    m_resetActionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerAction& CustomerAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = CustomerActionNameMapper::GetCustomerActionNameForName(jsonValue.GetString("actionName"));

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snoozeActionConfiguration"))
  {
    m_snoozeActionConfiguration = jsonValue.GetObject("snoozeActionConfiguration");

    m_snoozeActionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableActionConfiguration"))
  {
    m_enableActionConfiguration = jsonValue.GetObject("enableActionConfiguration");

    m_enableActionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disableActionConfiguration"))
  {
    m_disableActionConfiguration = jsonValue.GetObject("disableActionConfiguration");

    m_disableActionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acknowledgeActionConfiguration"))
  {
    m_acknowledgeActionConfiguration = jsonValue.GetObject("acknowledgeActionConfiguration");

    m_acknowledgeActionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resetActionConfiguration"))
  {
    m_resetActionConfiguration = jsonValue.GetObject("resetActionConfiguration");

    m_resetActionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", CustomerActionNameMapper::GetNameForCustomerActionName(m_actionName));
  }

  if(m_snoozeActionConfigurationHasBeenSet)
  {
   payload.WithObject("snoozeActionConfiguration", m_snoozeActionConfiguration.Jsonize());

  }

  if(m_enableActionConfigurationHasBeenSet)
  {
   payload.WithObject("enableActionConfiguration", m_enableActionConfiguration.Jsonize());

  }

  if(m_disableActionConfigurationHasBeenSet)
  {
   payload.WithObject("disableActionConfiguration", m_disableActionConfiguration.Jsonize());

  }

  if(m_acknowledgeActionConfigurationHasBeenSet)
  {
   payload.WithObject("acknowledgeActionConfiguration", m_acknowledgeActionConfiguration.Jsonize());

  }

  if(m_resetActionConfigurationHasBeenSet)
  {
   payload.WithObject("resetActionConfiguration", m_resetActionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
