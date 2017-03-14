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
#include <aws/events/model/EcsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

EcsParameters::EcsParameters() : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false)
{
}

EcsParameters::EcsParameters(const JsonValue& jsonValue) : 
    m_taskDefinitionArnHasBeenSet(false),
    m_taskCount(0),
    m_taskCountHasBeenSet(false)
{
  *this = jsonValue;
}

EcsParameters& EcsParameters::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws