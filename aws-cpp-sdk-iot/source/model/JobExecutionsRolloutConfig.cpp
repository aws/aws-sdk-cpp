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

#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobExecutionsRolloutConfig::JobExecutionsRolloutConfig() : 
    m_maximumPerMinute(0),
    m_maximumPerMinuteHasBeenSet(false)
{
}

JobExecutionsRolloutConfig::JobExecutionsRolloutConfig(const JsonValue& jsonValue) : 
    m_maximumPerMinute(0),
    m_maximumPerMinuteHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionsRolloutConfig& JobExecutionsRolloutConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("maximumPerMinute"))
  {
    m_maximumPerMinute = jsonValue.GetInteger("maximumPerMinute");

    m_maximumPerMinuteHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionsRolloutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maximumPerMinuteHasBeenSet)
  {
   payload.WithInteger("maximumPerMinute", m_maximumPerMinute);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
