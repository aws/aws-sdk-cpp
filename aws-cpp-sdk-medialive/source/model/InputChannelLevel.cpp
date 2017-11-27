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

#include <aws/medialive/model/InputChannelLevel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputChannelLevel::InputChannelLevel() : 
    m_gain(0),
    m_gainHasBeenSet(false),
    m_inputChannel(0),
    m_inputChannelHasBeenSet(false)
{
}

InputChannelLevel::InputChannelLevel(const JsonValue& jsonValue) : 
    m_gain(0),
    m_gainHasBeenSet(false),
    m_inputChannel(0),
    m_inputChannelHasBeenSet(false)
{
  *this = jsonValue;
}

InputChannelLevel& InputChannelLevel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("gain"))
  {
    m_gain = jsonValue.GetInteger("gain");

    m_gainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputChannel"))
  {
    m_inputChannel = jsonValue.GetInteger("inputChannel");

    m_inputChannelHasBeenSet = true;
  }

  return *this;
}

JsonValue InputChannelLevel::Jsonize() const
{
  JsonValue payload;

  if(m_gainHasBeenSet)
  {
   payload.WithInteger("gain", m_gain);

  }

  if(m_inputChannelHasBeenSet)
  {
   payload.WithInteger("inputChannel", m_inputChannel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
