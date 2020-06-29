/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputChannelMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputChannelMapping::OutputChannelMapping() : 
    m_inputChannelsHasBeenSet(false)
{
}

OutputChannelMapping::OutputChannelMapping(JsonView jsonValue) : 
    m_inputChannelsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputChannelMapping& OutputChannelMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputChannels"))
  {
    Array<JsonView> inputChannelsJsonList = jsonValue.GetArray("inputChannels");
    for(unsigned inputChannelsIndex = 0; inputChannelsIndex < inputChannelsJsonList.GetLength(); ++inputChannelsIndex)
    {
      m_inputChannels.push_back(inputChannelsJsonList[inputChannelsIndex].AsInteger());
    }
    m_inputChannelsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputChannelMapping::Jsonize() const
{
  JsonValue payload;

  if(m_inputChannelsHasBeenSet)
  {
   Array<JsonValue> inputChannelsJsonList(m_inputChannels.size());
   for(unsigned inputChannelsIndex = 0; inputChannelsIndex < inputChannelsJsonList.GetLength(); ++inputChannelsIndex)
   {
     inputChannelsJsonList[inputChannelsIndex].AsInteger(m_inputChannels[inputChannelsIndex]);
   }
   payload.WithArray("inputChannels", std::move(inputChannelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
