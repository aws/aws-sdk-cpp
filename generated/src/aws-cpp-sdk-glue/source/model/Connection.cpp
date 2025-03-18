/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Connection.h>
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

Connection::Connection(JsonView jsonValue)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchCriteria"))
  {
    Aws::Utils::Array<JsonView> matchCriteriaJsonList = jsonValue.GetArray("MatchCriteria");
    for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
    {
      m_matchCriteria.push_back(matchCriteriaJsonList[matchCriteriaIndex].AsString());
    }
    m_matchCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("ConnectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[ConnectionPropertyKeyMapper::GetConnectionPropertyKeyForName(connectionPropertiesItem.first)] = connectionPropertiesItem.second.AsString();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SparkProperties"))
  {
    Aws::Map<Aws::String, JsonView> sparkPropertiesJsonMap = jsonValue.GetObject("SparkProperties").GetAllObjects();
    for(auto& sparkPropertiesItem : sparkPropertiesJsonMap)
    {
      m_sparkProperties[sparkPropertiesItem.first] = sparkPropertiesItem.second.AsString();
    }
    m_sparkPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AthenaProperties"))
  {
    Aws::Map<Aws::String, JsonView> athenaPropertiesJsonMap = jsonValue.GetObject("AthenaProperties").GetAllObjects();
    for(auto& athenaPropertiesItem : athenaPropertiesJsonMap)
    {
      m_athenaProperties[athenaPropertiesItem.first] = athenaPropertiesItem.second.AsString();
    }
    m_athenaPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PythonProperties"))
  {
    Aws::Map<Aws::String, JsonView> pythonPropertiesJsonMap = jsonValue.GetObject("PythonProperties").GetAllObjects();
    for(auto& pythonPropertiesItem : pythonPropertiesJsonMap)
    {
      m_pythonProperties[pythonPropertiesItem.first] = pythonPropertiesItem.second.AsString();
    }
    m_pythonPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhysicalConnectionRequirements"))
  {
    m_physicalConnectionRequirements = jsonValue.GetObject("PhysicalConnectionRequirements");
    m_physicalConnectionRequirementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastConnectionValidationTime"))
  {
    m_lastConnectionValidationTime = jsonValue.GetDouble("LastConnectionValidationTime");
    m_lastConnectionValidationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionSchemaVersion"))
  {
    m_connectionSchemaVersion = jsonValue.GetInteger("ConnectionSchemaVersion");
    m_connectionSchemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompatibleComputeEnvironments"))
  {
    Aws::Utils::Array<JsonView> compatibleComputeEnvironmentsJsonList = jsonValue.GetArray("CompatibleComputeEnvironments");
    for(unsigned compatibleComputeEnvironmentsIndex = 0; compatibleComputeEnvironmentsIndex < compatibleComputeEnvironmentsJsonList.GetLength(); ++compatibleComputeEnvironmentsIndex)
    {
      m_compatibleComputeEnvironments.push_back(ComputeEnvironmentMapper::GetComputeEnvironmentForName(compatibleComputeEnvironmentsJsonList[compatibleComputeEnvironmentsIndex].AsString()));
    }
    m_compatibleComputeEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue Connection::Jsonize() const
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

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_matchCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchCriteriaJsonList(m_matchCriteria.size());
   for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
   {
     matchCriteriaJsonList[matchCriteriaIndex].AsString(m_matchCriteria[matchCriteriaIndex]);
   }
   payload.WithArray("MatchCriteria", std::move(matchCriteriaJsonList));

  }

  if(m_connectionPropertiesHasBeenSet)
  {
   JsonValue connectionPropertiesJsonMap;
   for(auto& connectionPropertiesItem : m_connectionProperties)
   {
     connectionPropertiesJsonMap.WithString(ConnectionPropertyKeyMapper::GetNameForConnectionPropertyKey(connectionPropertiesItem.first), connectionPropertiesItem.second);
   }
   payload.WithObject("ConnectionProperties", std::move(connectionPropertiesJsonMap));

  }

  if(m_sparkPropertiesHasBeenSet)
  {
   JsonValue sparkPropertiesJsonMap;
   for(auto& sparkPropertiesItem : m_sparkProperties)
   {
     sparkPropertiesJsonMap.WithString(sparkPropertiesItem.first, sparkPropertiesItem.second);
   }
   payload.WithObject("SparkProperties", std::move(sparkPropertiesJsonMap));

  }

  if(m_athenaPropertiesHasBeenSet)
  {
   JsonValue athenaPropertiesJsonMap;
   for(auto& athenaPropertiesItem : m_athenaProperties)
   {
     athenaPropertiesJsonMap.WithString(athenaPropertiesItem.first, athenaPropertiesItem.second);
   }
   payload.WithObject("AthenaProperties", std::move(athenaPropertiesJsonMap));

  }

  if(m_pythonPropertiesHasBeenSet)
  {
   JsonValue pythonPropertiesJsonMap;
   for(auto& pythonPropertiesItem : m_pythonProperties)
   {
     pythonPropertiesJsonMap.WithString(pythonPropertiesItem.first, pythonPropertiesItem.second);
   }
   payload.WithObject("PythonProperties", std::move(pythonPropertiesJsonMap));

  }

  if(m_physicalConnectionRequirementsHasBeenSet)
  {
   payload.WithObject("PhysicalConnectionRequirements", m_physicalConnectionRequirements.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("LastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_lastConnectionValidationTimeHasBeenSet)
  {
   payload.WithDouble("LastConnectionValidationTime", m_lastConnectionValidationTime.SecondsWithMSPrecision());
  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_connectionSchemaVersionHasBeenSet)
  {
   payload.WithInteger("ConnectionSchemaVersion", m_connectionSchemaVersion);

  }

  if(m_compatibleComputeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibleComputeEnvironmentsJsonList(m_compatibleComputeEnvironments.size());
   for(unsigned compatibleComputeEnvironmentsIndex = 0; compatibleComputeEnvironmentsIndex < compatibleComputeEnvironmentsJsonList.GetLength(); ++compatibleComputeEnvironmentsIndex)
   {
     compatibleComputeEnvironmentsJsonList[compatibleComputeEnvironmentsIndex].AsString(ComputeEnvironmentMapper::GetNameForComputeEnvironment(m_compatibleComputeEnvironments[compatibleComputeEnvironmentsIndex]));
   }
   payload.WithArray("CompatibleComputeEnvironments", std::move(compatibleComputeEnvironmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
