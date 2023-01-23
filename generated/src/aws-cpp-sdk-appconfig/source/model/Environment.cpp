/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

Environment::Environment() : 
    m_applicationIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(EnvironmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_monitorsHasBeenSet(false)
{
}

Environment::Environment(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(EnvironmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_monitorsHasBeenSet(false)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EnvironmentStateMapper::GetEnvironmentStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Monitors"))
  {
    Aws::Utils::Array<JsonView> monitorsJsonList = jsonValue.GetArray("Monitors");
    for(unsigned monitorsIndex = 0; monitorsIndex < monitorsJsonList.GetLength(); ++monitorsIndex)
    {
      m_monitors.push_back(monitorsJsonList[monitorsIndex].AsObject());
    }
    m_monitorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EnvironmentStateMapper::GetNameForEnvironmentState(m_state));
  }

  if(m_monitorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorsJsonList(m_monitors.size());
   for(unsigned monitorsIndex = 0; monitorsIndex < monitorsJsonList.GetLength(); ++monitorsIndex)
   {
     monitorsJsonList[monitorsIndex].AsObject(m_monitors[monitorsIndex].Jsonize());
   }
   payload.WithArray("Monitors", std::move(monitorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
