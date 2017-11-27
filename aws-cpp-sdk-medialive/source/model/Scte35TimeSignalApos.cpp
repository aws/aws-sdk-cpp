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

#include <aws/medialive/model/Scte35TimeSignalApos.h>
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

Scte35TimeSignalApos::Scte35TimeSignalApos() : 
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_noRegionalBlackoutFlag(Scte35AposNoRegionalBlackoutBehavior::NOT_SET),
    m_noRegionalBlackoutFlagHasBeenSet(false),
    m_webDeliveryAllowedFlag(Scte35AposWebDeliveryAllowedBehavior::NOT_SET),
    m_webDeliveryAllowedFlagHasBeenSet(false)
{
}

Scte35TimeSignalApos::Scte35TimeSignalApos(const JsonValue& jsonValue) : 
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_noRegionalBlackoutFlag(Scte35AposNoRegionalBlackoutBehavior::NOT_SET),
    m_noRegionalBlackoutFlagHasBeenSet(false),
    m_webDeliveryAllowedFlag(Scte35AposWebDeliveryAllowedBehavior::NOT_SET),
    m_webDeliveryAllowedFlagHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35TimeSignalApos& Scte35TimeSignalApos::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("adAvailOffset"))
  {
    m_adAvailOffset = jsonValue.GetInteger("adAvailOffset");

    m_adAvailOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noRegionalBlackoutFlag"))
  {
    m_noRegionalBlackoutFlag = Scte35AposNoRegionalBlackoutBehaviorMapper::GetScte35AposNoRegionalBlackoutBehaviorForName(jsonValue.GetString("noRegionalBlackoutFlag"));

    m_noRegionalBlackoutFlagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webDeliveryAllowedFlag"))
  {
    m_webDeliveryAllowedFlag = Scte35AposWebDeliveryAllowedBehaviorMapper::GetScte35AposWebDeliveryAllowedBehaviorForName(jsonValue.GetString("webDeliveryAllowedFlag"));

    m_webDeliveryAllowedFlagHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35TimeSignalApos::Jsonize() const
{
  JsonValue payload;

  if(m_adAvailOffsetHasBeenSet)
  {
   payload.WithInteger("adAvailOffset", m_adAvailOffset);

  }

  if(m_noRegionalBlackoutFlagHasBeenSet)
  {
   payload.WithString("noRegionalBlackoutFlag", Scte35AposNoRegionalBlackoutBehaviorMapper::GetNameForScte35AposNoRegionalBlackoutBehavior(m_noRegionalBlackoutFlag));
  }

  if(m_webDeliveryAllowedFlagHasBeenSet)
  {
   payload.WithString("webDeliveryAllowedFlag", Scte35AposWebDeliveryAllowedBehaviorMapper::GetNameForScte35AposWebDeliveryAllowedBehavior(m_webDeliveryAllowedFlag));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
