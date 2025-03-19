/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/TelephonyOutboundConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

TelephonyOutboundConfig::TelephonyOutboundConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TelephonyOutboundConfig& TelephonyOutboundConfig::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("answerMachineDetectionConfig"))
  {
    m_answerMachineDetectionConfig = jsonValue.GetObject("answerMachineDetectionConfig");
    m_answerMachineDetectionConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue TelephonyOutboundConfig::Jsonize() const
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

  if(m_answerMachineDetectionConfigHasBeenSet)
  {
   payload.WithObject("answerMachineDetectionConfig", m_answerMachineDetectionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
