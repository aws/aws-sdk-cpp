/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/TelephonyChannelSubtypeParameters.h>
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

TelephonyChannelSubtypeParameters::TelephonyChannelSubtypeParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

TelephonyChannelSubtypeParameters& TelephonyChannelSubtypeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("destinationPhoneNumber");
    m_destinationPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
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

JsonValue TelephonyChannelSubtypeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("destinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

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
