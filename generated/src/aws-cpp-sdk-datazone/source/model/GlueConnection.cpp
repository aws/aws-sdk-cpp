/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GlueConnection::GlueConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueConnection& GlueConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("athenaProperties"))
  {
    Aws::Map<Aws::String, JsonView> athenaPropertiesJsonMap = jsonValue.GetObject("athenaProperties").GetAllObjects();
    for(auto& athenaPropertiesItem : athenaPropertiesJsonMap)
    {
      m_athenaProperties[athenaPropertiesItem.first] = athenaPropertiesItem.second.AsString();
    }
    m_athenaPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compatibleComputeEnvironments"))
  {
    Aws::Utils::Array<JsonView> compatibleComputeEnvironmentsJsonList = jsonValue.GetArray("compatibleComputeEnvironments");
    for(unsigned compatibleComputeEnvironmentsIndex = 0; compatibleComputeEnvironmentsIndex < compatibleComputeEnvironmentsJsonList.GetLength(); ++compatibleComputeEnvironmentsIndex)
    {
      m_compatibleComputeEnvironments.push_back(ComputeEnvironmentsMapper::GetComputeEnvironmentsForName(compatibleComputeEnvironmentsJsonList[compatibleComputeEnvironmentsIndex].AsString()));
    }
    m_compatibleComputeEnvironmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("connectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[connectionPropertiesItem.first] = connectionPropertiesItem.second.AsString();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionSchemaVersion"))
  {
    m_connectionSchemaVersion = jsonValue.GetInteger("connectionSchemaVersion");
    m_connectionSchemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("connectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastConnectionValidationTime"))
  {
    m_lastConnectionValidationTime = jsonValue.GetDouble("lastConnectionValidationTime");
    m_lastConnectionValidationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchCriteria"))
  {
    Aws::Utils::Array<JsonView> matchCriteriaJsonList = jsonValue.GetArray("matchCriteria");
    for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
    {
      m_matchCriteria.push_back(matchCriteriaJsonList[matchCriteriaIndex].AsString());
    }
    m_matchCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("physicalConnectionRequirements"))
  {
    m_physicalConnectionRequirements = jsonValue.GetObject("physicalConnectionRequirements");
    m_physicalConnectionRequirementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pythonProperties"))
  {
    Aws::Map<Aws::String, JsonView> pythonPropertiesJsonMap = jsonValue.GetObject("pythonProperties").GetAllObjects();
    for(auto& pythonPropertiesItem : pythonPropertiesJsonMap)
    {
      m_pythonProperties[pythonPropertiesItem.first] = pythonPropertiesItem.second.AsString();
    }
    m_pythonPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sparkProperties"))
  {
    Aws::Map<Aws::String, JsonView> sparkPropertiesJsonMap = jsonValue.GetObject("sparkProperties").GetAllObjects();
    for(auto& sparkPropertiesItem : sparkPropertiesJsonMap)
    {
      m_sparkProperties[sparkPropertiesItem.first] = sparkPropertiesItem.second.AsString();
    }
    m_sparkPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueConnection::Jsonize() const
{
  JsonValue payload;

  if(m_athenaPropertiesHasBeenSet)
  {
   JsonValue athenaPropertiesJsonMap;
   for(auto& athenaPropertiesItem : m_athenaProperties)
   {
     athenaPropertiesJsonMap.WithString(athenaPropertiesItem.first, athenaPropertiesItem.second);
   }
   payload.WithObject("athenaProperties", std::move(athenaPropertiesJsonMap));

  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_compatibleComputeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibleComputeEnvironmentsJsonList(m_compatibleComputeEnvironments.size());
   for(unsigned compatibleComputeEnvironmentsIndex = 0; compatibleComputeEnvironmentsIndex < compatibleComputeEnvironmentsJsonList.GetLength(); ++compatibleComputeEnvironmentsIndex)
   {
     compatibleComputeEnvironmentsJsonList[compatibleComputeEnvironmentsIndex].AsString(ComputeEnvironmentsMapper::GetNameForComputeEnvironments(m_compatibleComputeEnvironments[compatibleComputeEnvironmentsIndex]));
   }
   payload.WithArray("compatibleComputeEnvironments", std::move(compatibleComputeEnvironmentsJsonList));

  }

  if(m_connectionPropertiesHasBeenSet)
  {
   JsonValue connectionPropertiesJsonMap;
   for(auto& connectionPropertiesItem : m_connectionProperties)
   {
     connectionPropertiesJsonMap.WithString(connectionPropertiesItem.first, connectionPropertiesItem.second);
   }
   payload.WithObject("connectionProperties", std::move(connectionPropertiesJsonMap));

  }

  if(m_connectionSchemaVersionHasBeenSet)
  {
   payload.WithInteger("connectionSchemaVersion", m_connectionSchemaVersion);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("connectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastConnectionValidationTimeHasBeenSet)
  {
   payload.WithDouble("lastConnectionValidationTime", m_lastConnectionValidationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_matchCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchCriteriaJsonList(m_matchCriteria.size());
   for(unsigned matchCriteriaIndex = 0; matchCriteriaIndex < matchCriteriaJsonList.GetLength(); ++matchCriteriaIndex)
   {
     matchCriteriaJsonList[matchCriteriaIndex].AsString(m_matchCriteria[matchCriteriaIndex]);
   }
   payload.WithArray("matchCriteria", std::move(matchCriteriaJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_physicalConnectionRequirementsHasBeenSet)
  {
   payload.WithObject("physicalConnectionRequirements", m_physicalConnectionRequirements.Jsonize());

  }

  if(m_pythonPropertiesHasBeenSet)
  {
   JsonValue pythonPropertiesJsonMap;
   for(auto& pythonPropertiesItem : m_pythonProperties)
   {
     pythonPropertiesJsonMap.WithString(pythonPropertiesItem.first, pythonPropertiesItem.second);
   }
   payload.WithObject("pythonProperties", std::move(pythonPropertiesJsonMap));

  }

  if(m_sparkPropertiesHasBeenSet)
  {
   JsonValue sparkPropertiesJsonMap;
   for(auto& sparkPropertiesItem : m_sparkProperties)
   {
     sparkPropertiesJsonMap.WithString(sparkPropertiesItem.first, sparkPropertiesItem.second);
   }
   payload.WithObject("sparkProperties", std::move(sparkPropertiesJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConnectionStatusMapper::GetNameForConnectionStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
