/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Job.h>
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

Job::Job() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_executionPropertyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_defaultArgumentsHasBeenSet(false),
    m_nonOverridableArgumentsHasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_notificationPropertyHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_codeGenConfigurationNodesHasBeenSet(false),
    m_executionClass(ExecutionClass::NOT_SET),
    m_executionClassHasBeenSet(false),
    m_sourceControlDetailsHasBeenSet(false)
{
}

Job::Job(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_executionPropertyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_defaultArgumentsHasBeenSet(false),
    m_nonOverridableArgumentsHasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false),
    m_workerType(WorkerType::NOT_SET),
    m_workerTypeHasBeenSet(false),
    m_numberOfWorkers(0),
    m_numberOfWorkersHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false),
    m_notificationPropertyHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_codeGenConfigurationNodesHasBeenSet(false),
    m_executionClass(ExecutionClass::NOT_SET),
    m_executionClassHasBeenSet(false),
    m_sourceControlDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Job& Job::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

    m_logUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

    m_createdOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionProperty"))
  {
    m_executionProperty = jsonValue.GetObject("ExecutionProperty");

    m_executionPropertyHasBeenSet = true;
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

  if(jsonValue.ValueExists("NonOverridableArguments"))
  {
    Aws::Map<Aws::String, JsonView> nonOverridableArgumentsJsonMap = jsonValue.GetObject("NonOverridableArguments").GetAllObjects();
    for(auto& nonOverridableArgumentsItem : nonOverridableArgumentsJsonMap)
    {
      m_nonOverridableArguments[nonOverridableArgumentsItem.first] = nonOverridableArgumentsItem.second.AsString();
    }
    m_nonOverridableArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Connections"))
  {
    m_connections = jsonValue.GetObject("Connections");

    m_connectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");

    m_maxRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetDouble("MaxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerType"))
  {
    m_workerType = WorkerTypeMapper::GetWorkerTypeForName(jsonValue.GetString("WorkerType"));

    m_workerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfWorkers"))
  {
    m_numberOfWorkers = jsonValue.GetInteger("NumberOfWorkers");

    m_numberOfWorkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationProperty"))
  {
    m_notificationProperty = jsonValue.GetObject("NotificationProperty");

    m_notificationPropertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");

    m_glueVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeGenConfigurationNodes"))
  {
    Aws::Map<Aws::String, JsonView> codeGenConfigurationNodesJsonMap = jsonValue.GetObject("CodeGenConfigurationNodes").GetAllObjects();
    for(auto& codeGenConfigurationNodesItem : codeGenConfigurationNodesJsonMap)
    {
      m_codeGenConfigurationNodes[codeGenConfigurationNodesItem.first] = codeGenConfigurationNodesItem.second.AsObject();
    }
    m_codeGenConfigurationNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionClass"))
  {
    m_executionClass = ExecutionClassMapper::GetExecutionClassForName(jsonValue.GetString("ExecutionClass"));

    m_executionClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceControlDetails"))
  {
    m_sourceControlDetails = jsonValue.GetObject("SourceControlDetails");

    m_sourceControlDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Job::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_executionPropertyHasBeenSet)
  {
   payload.WithObject("ExecutionProperty", m_executionProperty.Jsonize());

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

  if(m_nonOverridableArgumentsHasBeenSet)
  {
   JsonValue nonOverridableArgumentsJsonMap;
   for(auto& nonOverridableArgumentsItem : m_nonOverridableArguments)
   {
     nonOverridableArgumentsJsonMap.WithString(nonOverridableArgumentsItem.first, nonOverridableArgumentsItem.second);
   }
   payload.WithObject("NonOverridableArguments", std::move(nonOverridableArgumentsJsonMap));

  }

  if(m_connectionsHasBeenSet)
  {
   payload.WithObject("Connections", m_connections.Jsonize());

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithDouble("MaxCapacity", m_maxCapacity);

  }

  if(m_workerTypeHasBeenSet)
  {
   payload.WithString("WorkerType", WorkerTypeMapper::GetNameForWorkerType(m_workerType));
  }

  if(m_numberOfWorkersHasBeenSet)
  {
   payload.WithInteger("NumberOfWorkers", m_numberOfWorkers);

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  if(m_notificationPropertyHasBeenSet)
  {
   payload.WithObject("NotificationProperty", m_notificationProperty.Jsonize());

  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_codeGenConfigurationNodesHasBeenSet)
  {
   JsonValue codeGenConfigurationNodesJsonMap;
   for(auto& codeGenConfigurationNodesItem : m_codeGenConfigurationNodes)
   {
     codeGenConfigurationNodesJsonMap.WithObject(codeGenConfigurationNodesItem.first, codeGenConfigurationNodesItem.second.Jsonize());
   }
   payload.WithObject("CodeGenConfigurationNodes", std::move(codeGenConfigurationNodesJsonMap));

  }

  if(m_executionClassHasBeenSet)
  {
   payload.WithString("ExecutionClass", ExecutionClassMapper::GetNameForExecutionClass(m_executionClass));
  }

  if(m_sourceControlDetailsHasBeenSet)
  {
   payload.WithObject("SourceControlDetails", m_sourceControlDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
