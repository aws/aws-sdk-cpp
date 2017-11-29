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

#include <aws/mq/model/BrokerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerSummary::BrokerSummary() : 
    m_brokerArnHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_brokerState(BrokerState::NOT_SET),
    m_brokerStateHasBeenSet(false),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_deploymentModeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false)
{
}

BrokerSummary::BrokerSummary(const JsonValue& jsonValue) : 
    m_brokerArnHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_brokerState(BrokerState::NOT_SET),
    m_brokerStateHasBeenSet(false),
    m_deploymentMode(DeploymentMode::NOT_SET),
    m_deploymentModeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerSummary& BrokerSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("brokerArn"))
  {
    m_brokerArn = jsonValue.GetString("brokerArn");

    m_brokerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

    m_brokerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerName"))
  {
    m_brokerName = jsonValue.GetString("brokerName");

    m_brokerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerState"))
  {
    m_brokerState = BrokerStateMapper::GetBrokerStateForName(jsonValue.GetString("brokerState"));

    m_brokerStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentMode"))
  {
    m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(jsonValue.GetString("deploymentMode"));

    m_deploymentModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

    m_hostInstanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_brokerArnHasBeenSet)
  {
   payload.WithString("brokerArn", m_brokerArn);

  }

  if(m_brokerIdHasBeenSet)
  {
   payload.WithString("brokerId", m_brokerId);

  }

  if(m_brokerNameHasBeenSet)
  {
   payload.WithString("brokerName", m_brokerName);

  }

  if(m_brokerStateHasBeenSet)
  {
   payload.WithString("brokerState", BrokerStateMapper::GetNameForBrokerState(m_brokerState));
  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("deploymentMode", DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode));
  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
