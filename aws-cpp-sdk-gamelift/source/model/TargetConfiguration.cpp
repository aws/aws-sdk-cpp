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

#include <aws/gamelift/model/TargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

TargetConfiguration::TargetConfiguration() : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
}

TargetConfiguration::TargetConfiguration(const JsonValue& jsonValue) : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

TargetConfiguration& TargetConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
