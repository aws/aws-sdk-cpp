/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

DeploymentConfiguration::DeploymentConfiguration() : 
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false)
{
}

DeploymentConfiguration::DeploymentConfiguration(const JsonValue& jsonValue) : 
    m_maximumPercent(0),
    m_maximumPercentHasBeenSet(false),
    m_minimumHealthyPercent(0),
    m_minimumHealthyPercentHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfiguration& DeploymentConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("maximumPercent"))
  {
    m_maximumPercent = jsonValue.GetInteger("maximumPercent");

    m_maximumPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumHealthyPercent"))
  {
    m_minimumHealthyPercent = jsonValue.GetInteger("minimumHealthyPercent");

    m_minimumHealthyPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maximumPercentHasBeenSet)
  {
   payload.WithInteger("maximumPercent", m_maximumPercent);

  }

  if(m_minimumHealthyPercentHasBeenSet)
  {
   payload.WithInteger("minimumHealthyPercent", m_minimumHealthyPercent);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws