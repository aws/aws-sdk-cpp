/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueConnectionInput.h>
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

GlueConnectionInput::GlueConnectionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueConnectionInput& GlueConnectionInput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("connectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("connectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[connectionPropertiesItem.first] = connectionPropertiesItem.second.AsString();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionType"))
  {
    m_connectionType = GlueConnectionTypeMapper::GetGlueConnectionTypeForName(jsonValue.GetString("connectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchCriteria"))
  {
    m_matchCriteria = jsonValue.GetString("matchCriteria");
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
  if(jsonValue.ValueExists("validateCredentials"))
  {
    m_validateCredentials = jsonValue.GetBool("validateCredentials");
    m_validateCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validateForComputeEnvironments"))
  {
    Aws::Utils::Array<JsonView> validateForComputeEnvironmentsJsonList = jsonValue.GetArray("validateForComputeEnvironments");
    for(unsigned validateForComputeEnvironmentsIndex = 0; validateForComputeEnvironmentsIndex < validateForComputeEnvironmentsJsonList.GetLength(); ++validateForComputeEnvironmentsIndex)
    {
      m_validateForComputeEnvironments.push_back(ComputeEnvironmentsMapper::GetComputeEnvironmentsForName(validateForComputeEnvironmentsJsonList[validateForComputeEnvironmentsIndex].AsString()));
    }
    m_validateForComputeEnvironmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueConnectionInput::Jsonize() const
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

  if(m_connectionPropertiesHasBeenSet)
  {
   JsonValue connectionPropertiesJsonMap;
   for(auto& connectionPropertiesItem : m_connectionProperties)
   {
     connectionPropertiesJsonMap.WithString(connectionPropertiesItem.first, connectionPropertiesItem.second);
   }
   payload.WithObject("connectionProperties", std::move(connectionPropertiesJsonMap));

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("connectionType", GlueConnectionTypeMapper::GetNameForGlueConnectionType(m_connectionType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_matchCriteriaHasBeenSet)
  {
   payload.WithString("matchCriteria", m_matchCriteria);

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

  if(m_validateCredentialsHasBeenSet)
  {
   payload.WithBool("validateCredentials", m_validateCredentials);

  }

  if(m_validateForComputeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validateForComputeEnvironmentsJsonList(m_validateForComputeEnvironments.size());
   for(unsigned validateForComputeEnvironmentsIndex = 0; validateForComputeEnvironmentsIndex < validateForComputeEnvironmentsJsonList.GetLength(); ++validateForComputeEnvironmentsIndex)
   {
     validateForComputeEnvironmentsJsonList[validateForComputeEnvironmentsIndex].AsString(ComputeEnvironmentsMapper::GetNameForComputeEnvironments(m_validateForComputeEnvironments[validateForComputeEnvironmentsIndex]));
   }
   payload.WithArray("validateForComputeEnvironments", std::move(validateForComputeEnvironmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
