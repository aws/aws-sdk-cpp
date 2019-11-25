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

#include <aws/iotsecuretunneling/model/TimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

TimeoutConfig::TimeoutConfig() : 
    m_maxLifetimeTimeoutMinutes(0),
    m_maxLifetimeTimeoutMinutesHasBeenSet(false)
{
}

TimeoutConfig::TimeoutConfig(JsonView jsonValue) : 
    m_maxLifetimeTimeoutMinutes(0),
    m_maxLifetimeTimeoutMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

TimeoutConfig& TimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxLifetimeTimeoutMinutes"))
  {
    m_maxLifetimeTimeoutMinutes = jsonValue.GetInteger("maxLifetimeTimeoutMinutes");

    m_maxLifetimeTimeoutMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxLifetimeTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("maxLifetimeTimeoutMinutes", m_maxLifetimeTimeoutMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
