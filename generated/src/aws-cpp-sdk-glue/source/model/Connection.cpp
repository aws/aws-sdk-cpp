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

Connection::Connection() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_matchCriteriaHasBeenSet(false),
    m_connectionPropertiesHasBeenSet(false),
    m_physicalConnectionRequirementsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionType(ConnectionType::NOT_SET),
    m_connectionTypeHasBeenSet(false),
    m_matchCriteriaHasBeenSet(false),
    m_connectionPropertiesHasBeenSet(false),
    m_physicalConnectionRequirementsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
