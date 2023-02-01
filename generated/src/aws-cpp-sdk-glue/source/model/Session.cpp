/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Session::Session() : 
    m_idHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_status(SessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_defaultArgumentsHasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_glueVersionHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_status(SessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_defaultArgumentsHasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_glueVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

    m_createdOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Command"))
  {
    m_command = jsonValue.GetObject("Command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultArguments"))
  {
    Aws::Map<Aws::String, JsonView> defaultArgumentsJsonMap = jsonValue.GetObject("DefaultArguments").GetAllObjects();
    for(auto& defaultArgumentsItem : defaultArgumentsJsonMap)
    {
      m_defaultArguments[defaultArgumentsItem.first] = defaultArgumentsItem.second.AsString();
    }
    m_defaultArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Connections"))
  {
    m_connections = jsonValue.GetObject("Connections");

    m_connectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Progress"))
  {
    m_progress = jsonValue.GetDouble("Progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetDouble("MaxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");

    m_glueVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("Command", m_command.Jsonize());

  }

  if(m_defaultArgumentsHasBeenSet)
  {
   JsonValue defaultArgumentsJsonMap;
   for(auto& defaultArgumentsItem : m_defaultArguments)
   {
     defaultArgumentsJsonMap.WithString(defaultArgumentsItem.first, defaultArgumentsItem.second);
   }
   payload.WithObject("DefaultArguments", std::move(defaultArgumentsJsonMap));

  }

  if(m_connectionsHasBeenSet)
  {
   payload.WithObject("Connections", m_connections.Jsonize());

  }

  if(m_progressHasBeenSet)
  {
   payload.WithDouble("Progress", m_progress);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
