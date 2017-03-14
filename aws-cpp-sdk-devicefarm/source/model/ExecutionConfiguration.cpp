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
#include <aws/devicefarm/model/ExecutionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

ExecutionConfiguration::ExecutionConfiguration() : 
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false)
{
}

ExecutionConfiguration::ExecutionConfiguration(const JsonValue& jsonValue) : 
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionConfiguration& ExecutionConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("jobTimeoutMinutes"))
  {
    m_jobTimeoutMinutes = jsonValue.GetInteger("jobTimeoutMinutes");

    m_jobTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("jobTimeoutMinutes", m_jobTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws