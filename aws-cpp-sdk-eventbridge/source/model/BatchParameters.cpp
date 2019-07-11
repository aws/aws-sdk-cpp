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

#include <aws/eventbridge/model/BatchParameters.h>
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

BatchParameters::BatchParameters() : 
    m_jobDefinitionHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_arrayPropertiesHasBeenSet(false),
    m_retryStrategyHasBeenSet(false)
{
}

BatchParameters::BatchParameters(JsonView jsonValue) : 
    m_jobDefinitionHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_arrayPropertiesHasBeenSet(false),
    m_retryStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

BatchParameters& BatchParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobDefinition"))
  {
    m_jobDefinition = jsonValue.GetString("JobDefinition");

    m_jobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArrayProperties"))
  {
    m_arrayProperties = jsonValue.GetObject("ArrayProperties");

    m_arrayPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("RetryStrategy");

    m_retryStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchParameters::Jsonize() const
{
  JsonValue payload;

  if(m_jobDefinitionHasBeenSet)
  {
   payload.WithString("JobDefinition", m_jobDefinition);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_arrayPropertiesHasBeenSet)
  {
   payload.WithObject("ArrayProperties", m_arrayProperties.Jsonize());

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("RetryStrategy", m_retryStrategy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
