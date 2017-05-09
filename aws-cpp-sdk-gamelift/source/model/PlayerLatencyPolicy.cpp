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

#include <aws/gamelift/model/PlayerLatencyPolicy.h>
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

PlayerLatencyPolicy::PlayerLatencyPolicy() : 
    m_maximumIndividualPlayerLatencyMilliseconds(0),
    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet(false),
    m_policyDurationSeconds(0),
    m_policyDurationSecondsHasBeenSet(false)
{
}

PlayerLatencyPolicy::PlayerLatencyPolicy(const JsonValue& jsonValue) : 
    m_maximumIndividualPlayerLatencyMilliseconds(0),
    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet(false),
    m_policyDurationSeconds(0),
    m_policyDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

PlayerLatencyPolicy& PlayerLatencyPolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MaximumIndividualPlayerLatencyMilliseconds"))
  {
    m_maximumIndividualPlayerLatencyMilliseconds = jsonValue.GetInteger("MaximumIndividualPlayerLatencyMilliseconds");

    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyDurationSeconds"))
  {
    m_policyDurationSeconds = jsonValue.GetInteger("PolicyDurationSeconds");

    m_policyDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue PlayerLatencyPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet)
  {
   payload.WithInteger("MaximumIndividualPlayerLatencyMilliseconds", m_maximumIndividualPlayerLatencyMilliseconds);

  }

  if(m_policyDurationSecondsHasBeenSet)
  {
   payload.WithInteger("PolicyDurationSeconds", m_policyDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws