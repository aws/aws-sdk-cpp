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
#include <aws/opsworks/model/ShutdownEventConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ShutdownEventConfiguration::ShutdownEventConfiguration() : 
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_delayUntilElbConnectionsDrained(false),
    m_delayUntilElbConnectionsDrainedHasBeenSet(false)
{
}

ShutdownEventConfiguration::ShutdownEventConfiguration(const JsonValue& jsonValue) : 
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_delayUntilElbConnectionsDrained(false),
    m_delayUntilElbConnectionsDrainedHasBeenSet(false)
{
  *this = jsonValue;
}

ShutdownEventConfiguration& ShutdownEventConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ExecutionTimeout"))
  {
    m_executionTimeout = jsonValue.GetInteger("ExecutionTimeout");

    m_executionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DelayUntilElbConnectionsDrained"))
  {
    m_delayUntilElbConnectionsDrained = jsonValue.GetBool("DelayUntilElbConnectionsDrained");

    m_delayUntilElbConnectionsDrainedHasBeenSet = true;
  }

  return *this;
}

JsonValue ShutdownEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeoutHasBeenSet)
  {
   payload.WithInteger("ExecutionTimeout", m_executionTimeout);

  }

  if(m_delayUntilElbConnectionsDrainedHasBeenSet)
  {
   payload.WithBool("DelayUntilElbConnectionsDrained", m_delayUntilElbConnectionsDrained);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws