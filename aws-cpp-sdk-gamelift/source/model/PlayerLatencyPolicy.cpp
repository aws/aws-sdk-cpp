/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

PlayerLatencyPolicy::PlayerLatencyPolicy(JsonView jsonValue) : 
    m_maximumIndividualPlayerLatencyMilliseconds(0),
    m_maximumIndividualPlayerLatencyMillisecondsHasBeenSet(false),
    m_policyDurationSeconds(0),
    m_policyDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

PlayerLatencyPolicy& PlayerLatencyPolicy::operator =(JsonView jsonValue)
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
