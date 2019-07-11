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

#include <aws/eventbridge/model/EcsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

EcsParameters::EcsParameters() : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

EcsParameters::EcsParameters(JsonView jsonValue) : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_groupHasBeenSet(false)
{
  *this = jsonValue;
}

EcsParameters& EcsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("TaskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskCount"))
  {
    m_taskCount = jsonValue.GetInteger("TaskCount");

    m_taskCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("LaunchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("TaskDefinitionArn", m_taskDefinitionArn);

  }

  if(m_taskCountHasBeenSet)
  {
   payload.WithInteger("TaskCount", m_taskCount);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("LaunchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
