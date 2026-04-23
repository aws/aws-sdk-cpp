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

#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
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

ServerGroupLaunchConfiguration::ServerGroupLaunchConfiguration() : 
    m_serverGroupIdHasBeenSet(false),
    m_launchOrder(0),
    m_launchOrderHasBeenSet(false),
    m_serverLaunchConfigurationsHasBeenSet(false)
{
}

ServerGroupLaunchConfiguration::ServerGroupLaunchConfiguration(JsonView jsonValue) : 
    m_serverGroupIdHasBeenSet(false),
    m_launchOrder(0),
    m_launchOrderHasBeenSet(false),
    m_serverLaunchConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ServerGroupLaunchConfiguration& ServerGroupLaunchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverGroupId"))
  {
    m_serverGroupId = jsonValue.GetString("serverGroupId");

    m_serverGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchOrder"))
  {
    m_launchOrder = jsonValue.GetInteger("launchOrder");

    m_launchOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverLaunchConfigurations"))
  {
    Array<JsonView> serverLaunchConfigurationsJsonList = jsonValue.GetArray("serverLaunchConfigurations");
    for(unsigned serverLaunchConfigurationsIndex = 0; serverLaunchConfigurationsIndex < serverLaunchConfigurationsJsonList.GetLength(); ++serverLaunchConfigurationsIndex)
    {
      m_serverLaunchConfigurations.push_back(serverLaunchConfigurationsJsonList[serverLaunchConfigurationsIndex].AsObject());
    }
    m_serverLaunchConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerGroupLaunchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverGroupIdHasBeenSet)
  {
   payload.WithString("serverGroupId", m_serverGroupId);

  }

  if(m_launchOrderHasBeenSet)
  {
   payload.WithInteger("launchOrder", m_launchOrder);

  }

  if(m_serverLaunchConfigurationsHasBeenSet)
  {
   Array<JsonValue> serverLaunchConfigurationsJsonList(m_serverLaunchConfigurations.size());
   for(unsigned serverLaunchConfigurationsIndex = 0; serverLaunchConfigurationsIndex < serverLaunchConfigurationsJsonList.GetLength(); ++serverLaunchConfigurationsIndex)
   {
     serverLaunchConfigurationsJsonList[serverLaunchConfigurationsIndex].AsObject(m_serverLaunchConfigurations[serverLaunchConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverLaunchConfigurations", std::move(serverLaunchConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
