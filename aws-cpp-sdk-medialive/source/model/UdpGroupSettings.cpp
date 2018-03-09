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

#include <aws/medialive/model/UdpGroupSettings.h>
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

UdpGroupSettings::UdpGroupSettings() : 
    m_inputLossAction(InputLossActionForUdpOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_timedMetadataId3Frame(UdpTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false)
{
}

UdpGroupSettings::UdpGroupSettings(const JsonValue& jsonValue) : 
    m_inputLossAction(InputLossActionForUdpOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_timedMetadataId3Frame(UdpTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false)
{
  *this = jsonValue;
}

UdpGroupSettings& UdpGroupSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForUdpOutMapper::GetInputLossActionForUdpOutForName(jsonValue.GetString("inputLossAction"));

    m_inputLossActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Frame"))
  {
    m_timedMetadataId3Frame = UdpTimedMetadataId3FrameMapper::GetUdpTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));

    m_timedMetadataId3FrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Period"))
  {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");

    m_timedMetadataId3PeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue UdpGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForUdpOutMapper::GetNameForInputLossActionForUdpOut(m_inputLossAction));
  }

  if(m_timedMetadataId3FrameHasBeenSet)
  {
   payload.WithString("timedMetadataId3Frame", UdpTimedMetadataId3FrameMapper::GetNameForUdpTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if(m_timedMetadataId3PeriodHasBeenSet)
  {
   payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
