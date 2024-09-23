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

ConnectionInput::ConnectionInput() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_matchCriteriaHasBeenSet(false),
    m_connectionPropertiesHasBeenSet(false),
    m_athenaPropertiesHasBeenSet(false),
    m_physicalConnectionRequirementsHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false),
    m_validateCredentials(false),
    m_validateCredentialsHasBeenSet(false)
{
}

ConnectionInput::ConnectionInput(JsonView jsonValue)
  : ConnectionInput()
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

  if(jsonValue.ValueExists("AthenaProperties"))
  {
    Aws::Map<Aws::String, JsonView> athenaPropertiesJsonMap = jsonValue.GetObject("AthenaProperties").GetAllObjects();
    for(auto& athenaPropertiesItem : athenaPropertiesJsonMap)
    {
      m_athenaProperties[athenaPropertiesItem.first] = athenaPropertiesItem.second.AsString();
    }
    m_athenaPropertiesHasBeenSet = true;
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

  if(m_athenaPropertiesHasBeenSet)
  {
   JsonValue athenaPropertiesJsonMap;
   for(auto& athenaPropertiesItem : m_athenaProperties)
   {
     athenaPropertiesJsonMap.WithString(athenaPropertiesItem.first, athenaPropertiesItem.second);
   }
   payload.WithObject("AthenaProperties", std::move(athenaPropertiesJsonMap));

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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
