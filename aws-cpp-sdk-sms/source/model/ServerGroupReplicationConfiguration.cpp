/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerGroupReplicationConfiguration::ServerGroupReplicationConfiguration() : 
    m_serverGroupIdHasBeenSet(false),
    m_serverReplicationConfigurationsHasBeenSet(false)
{
}

ServerGroupReplicationConfiguration::ServerGroupReplicationConfiguration(JsonView jsonValue) : 
    m_serverGroupIdHasBeenSet(false),
    m_serverReplicationConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ServerGroupReplicationConfiguration& ServerGroupReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverGroupId"))
  {
    m_serverGroupId = jsonValue.GetString("serverGroupId");

    m_serverGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverReplicationConfigurations"))
  {
    Array<JsonView> serverReplicationConfigurationsJsonList = jsonValue.GetArray("serverReplicationConfigurations");
    for(unsigned serverReplicationConfigurationsIndex = 0; serverReplicationConfigurationsIndex < serverReplicationConfigurationsJsonList.GetLength(); ++serverReplicationConfigurationsIndex)
    {
      m_serverReplicationConfigurations.push_back(serverReplicationConfigurationsJsonList[serverReplicationConfigurationsIndex].AsObject());
    }
    m_serverReplicationConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerGroupReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverGroupIdHasBeenSet)
  {
   payload.WithString("serverGroupId", m_serverGroupId);

  }

  if(m_serverReplicationConfigurationsHasBeenSet)
  {
   Array<JsonValue> serverReplicationConfigurationsJsonList(m_serverReplicationConfigurations.size());
   for(unsigned serverReplicationConfigurationsIndex = 0; serverReplicationConfigurationsIndex < serverReplicationConfigurationsJsonList.GetLength(); ++serverReplicationConfigurationsIndex)
   {
     serverReplicationConfigurationsJsonList[serverReplicationConfigurationsIndex].AsObject(m_serverReplicationConfigurations[serverReplicationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverReplicationConfigurations", std::move(serverReplicationConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
