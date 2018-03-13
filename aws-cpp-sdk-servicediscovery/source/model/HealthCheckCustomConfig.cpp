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

#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

HealthCheckCustomConfig::HealthCheckCustomConfig() : 
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
}

HealthCheckCustomConfig::HealthCheckCustomConfig(const JsonValue& jsonValue) : 
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckCustomConfig& HealthCheckCustomConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FailureThreshold"))
  {
    m_failureThreshold = jsonValue.GetInteger("FailureThreshold");

    m_failureThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckCustomConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failureThresholdHasBeenSet)
  {
   payload.WithInteger("FailureThreshold", m_failureThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
