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

OutputChannelMapping::OutputChannelMapping(const JsonValue& jsonValue) : 
    m_inputChannelsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputChannelMapping& OutputChannelMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("inputChannels"))
  {
    Array<JsonValue> inputChannelsJsonList = jsonValue.GetArray("inputChannels");
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
