/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BlueGreenUpdatePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

BlueGreenUpdatePolicy::BlueGreenUpdatePolicy() : 
    m_trafficRoutingConfigurationHasBeenSet(false),
    m_terminationWaitInSeconds(0),
    m_terminationWaitInSecondsHasBeenSet(false),
    m_maximumExecutionTimeoutInSeconds(0),
    m_maximumExecutionTimeoutInSecondsHasBeenSet(false)
{
}

BlueGreenUpdatePolicy::BlueGreenUpdatePolicy(JsonView jsonValue) : 
    m_trafficRoutingConfigurationHasBeenSet(false),
    m_terminationWaitInSeconds(0),
    m_terminationWaitInSecondsHasBeenSet(false),
    m_maximumExecutionTimeoutInSeconds(0),
    m_maximumExecutionTimeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

BlueGreenUpdatePolicy& BlueGreenUpdatePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrafficRoutingConfiguration"))
  {
    m_trafficRoutingConfiguration = jsonValue.GetObject("TrafficRoutingConfiguration");

    m_trafficRoutingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationWaitInSeconds"))
  {
    m_terminationWaitInSeconds = jsonValue.GetInteger("TerminationWaitInSeconds");

    m_terminationWaitInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumExecutionTimeoutInSeconds"))
  {
    m_maximumExecutionTimeoutInSeconds = jsonValue.GetInteger("MaximumExecutionTimeoutInSeconds");

    m_maximumExecutionTimeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue BlueGreenUpdatePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_trafficRoutingConfigurationHasBeenSet)
  {
   payload.WithObject("TrafficRoutingConfiguration", m_trafficRoutingConfiguration.Jsonize());

  }

  if(m_terminationWaitInSecondsHasBeenSet)
  {
   payload.WithInteger("TerminationWaitInSeconds", m_terminationWaitInSeconds);

  }

  if(m_maximumExecutionTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumExecutionTimeoutInSeconds", m_maximumExecutionTimeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
