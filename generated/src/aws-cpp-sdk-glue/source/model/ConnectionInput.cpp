/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionInput.h>
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

ConnectionInput::ConnectionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionInput& ConnectionInput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidateCredentials"))
  {
    m_validateCredentials = jsonValue.GetBool("ValidateCredentials");
    m_validateCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidateForComputeEnvironments"))
  {
    Aws::Utils::Array<JsonView> validateForComputeEnvironmentsJsonList = jsonValue.GetArray("ValidateForComputeEnvironments");
    for(unsigned validateForComputeEnvironmentsIndex = 0; validateForComputeEnvironmentsIndex < validateForComputeEnvironmentsJsonList.GetLength(); ++validateForComputeEnvironmentsIndex)
    {
      m_validateForComputeEnvironments.push_back(ComputeEnvironmentMapper::GetComputeEnvironmentForName(validateForComputeEnvironmentsJsonList[validateForComputeEnvironmentsIndex].AsString()));
    }
    m_validateForComputeEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionInput::Jsonize() const
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

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_validateCredentialsHasBeenSet)
  {
   payload.WithBool("ValidateCredentials", m_validateCredentials);

  }

  if(m_validateForComputeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validateForComputeEnvironmentsJsonList(m_validateForComputeEnvironments.size());
   for(unsigned validateForComputeEnvironmentsIndex = 0; validateForComputeEnvironmentsIndex < validateForComputeEnvironmentsJsonList.GetLength(); ++validateForComputeEnvironmentsIndex)
   {
     validateForComputeEnvironmentsJsonList[validateForComputeEnvironmentsIndex].AsString(ComputeEnvironmentMapper::GetNameForComputeEnvironment(m_validateForComputeEnvironments[validateForComputeEnvironmentsIndex]));
   }
   payload.WithArray("ValidateForComputeEnvironments", std::move(validateForComputeEnvironmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
