/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelFlowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelFlowSummary::ChannelFlowSummary() : 
    m_channelFlowArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_processorsHasBeenSet(false)
{
}

ChannelFlowSummary::ChannelFlowSummary(JsonView jsonValue) : 
    m_channelFlowArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_processorsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelFlowSummary& ChannelFlowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelFlowArn"))
  {
    m_channelFlowArn = jsonValue.GetString("ChannelFlowArn");

    m_channelFlowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Processors"))
  {
    Aws::Utils::Array<JsonView> processorsJsonList = jsonValue.GetArray("Processors");
    for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
    {
      m_processors.push_back(processorsJsonList[processorsIndex].AsObject());
    }
    m_processorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelFlowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelFlowArnHasBeenSet)
  {
   payload.WithString("ChannelFlowArn", m_channelFlowArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_processorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processorsJsonList(m_processors.size());
   for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
   {
     processorsJsonList[processorsIndex].AsObject(m_processors[processorsIndex].Jsonize());
   }
   payload.WithArray("Processors", std::move(processorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
