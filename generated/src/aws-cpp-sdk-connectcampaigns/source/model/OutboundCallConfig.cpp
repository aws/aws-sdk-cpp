/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/OutboundCallConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

OutboundCallConfig::OutboundCallConfig() : 
    m_connectContactFlowIdHasBeenSet(false),
    m_connectSourcePhoneNumberHasBeenSet(false),
    m_connectQueueIdHasBeenSet(false),
    m_answerMachineDetectionConfigHasBeenSet(false)
{
}

OutboundCallConfig::OutboundCallConfig(JsonView jsonValue) : 
    m_connectContactFlowIdHasBeenSet(false),
    m_connectSourcePhoneNumberHasBeenSet(false),
    m_connectQueueIdHasBeenSet(false),
    m_answerMachineDetectionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

OutboundCallConfig& OutboundCallConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectContactFlowId"))
  {
    m_connectContactFlowId = jsonValue.GetString("connectContactFlowId");

    m_connectContactFlowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectSourcePhoneNumber"))
  {
    m_connectSourcePhoneNumber = jsonValue.GetString("connectSourcePhoneNumber");

    m_connectSourcePhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectQueueId"))
  {
    m_connectQueueId = jsonValue.GetString("connectQueueId");

    m_connectQueueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("answerMachineDetectionConfig"))
  {
    m_answerMachineDetectionConfig = jsonValue.GetObject("answerMachineDetectionConfig");

    m_answerMachineDetectionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue OutboundCallConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectContactFlowIdHasBeenSet)
  {
   payload.WithString("connectContactFlowId", m_connectContactFlowId);

  }

  if(m_connectSourcePhoneNumberHasBeenSet)
  {
   payload.WithString("connectSourcePhoneNumber", m_connectSourcePhoneNumber);

  }

  if(m_connectQueueIdHasBeenSet)
  {
   payload.WithString("connectQueueId", m_connectQueueId);

  }

  if(m_answerMachineDetectionConfigHasBeenSet)
  {
   payload.WithObject("answerMachineDetectionConfig", m_answerMachineDetectionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
