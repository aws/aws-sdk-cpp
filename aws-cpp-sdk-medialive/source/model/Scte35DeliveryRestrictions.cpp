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

#include <aws/medialive/model/Scte35DeliveryRestrictions.h>
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

Scte35DeliveryRestrictions::Scte35DeliveryRestrictions() : 
    m_archiveAllowedFlag(Scte35ArchiveAllowedFlag::NOT_SET),
    m_archiveAllowedFlagHasBeenSet(false),
    m_deviceRestrictions(Scte35DeviceRestrictions::NOT_SET),
    m_deviceRestrictionsHasBeenSet(false),
    m_noRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag::NOT_SET),
    m_noRegionalBlackoutFlagHasBeenSet(false),
    m_webDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag::NOT_SET),
    m_webDeliveryAllowedFlagHasBeenSet(false)
{
}

Scte35DeliveryRestrictions::Scte35DeliveryRestrictions(JsonView jsonValue) : 
    m_archiveAllowedFlag(Scte35ArchiveAllowedFlag::NOT_SET),
    m_archiveAllowedFlagHasBeenSet(false),
    m_deviceRestrictions(Scte35DeviceRestrictions::NOT_SET),
    m_deviceRestrictionsHasBeenSet(false),
    m_noRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag::NOT_SET),
    m_noRegionalBlackoutFlagHasBeenSet(false),
    m_webDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag::NOT_SET),
    m_webDeliveryAllowedFlagHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35DeliveryRestrictions& Scte35DeliveryRestrictions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("archiveAllowedFlag"))
  {
    m_archiveAllowedFlag = Scte35ArchiveAllowedFlagMapper::GetScte35ArchiveAllowedFlagForName(jsonValue.GetString("archiveAllowedFlag"));

    m_archiveAllowedFlagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceRestrictions"))
  {
    m_deviceRestrictions = Scte35DeviceRestrictionsMapper::GetScte35DeviceRestrictionsForName(jsonValue.GetString("deviceRestrictions"));

    m_deviceRestrictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noRegionalBlackoutFlag"))
  {
    m_noRegionalBlackoutFlag = Scte35NoRegionalBlackoutFlagMapper::GetScte35NoRegionalBlackoutFlagForName(jsonValue.GetString("noRegionalBlackoutFlag"));

    m_noRegionalBlackoutFlagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webDeliveryAllowedFlag"))
  {
    m_webDeliveryAllowedFlag = Scte35WebDeliveryAllowedFlagMapper::GetScte35WebDeliveryAllowedFlagForName(jsonValue.GetString("webDeliveryAllowedFlag"));

    m_webDeliveryAllowedFlagHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35DeliveryRestrictions::Jsonize() const
{
  JsonValue payload;

  if(m_archiveAllowedFlagHasBeenSet)
  {
   payload.WithString("archiveAllowedFlag", Scte35ArchiveAllowedFlagMapper::GetNameForScte35ArchiveAllowedFlag(m_archiveAllowedFlag));
  }

  if(m_deviceRestrictionsHasBeenSet)
  {
   payload.WithString("deviceRestrictions", Scte35DeviceRestrictionsMapper::GetNameForScte35DeviceRestrictions(m_deviceRestrictions));
  }

  if(m_noRegionalBlackoutFlagHasBeenSet)
  {
   payload.WithString("noRegionalBlackoutFlag", Scte35NoRegionalBlackoutFlagMapper::GetNameForScte35NoRegionalBlackoutFlag(m_noRegionalBlackoutFlag));
  }

  if(m_webDeliveryAllowedFlagHasBeenSet)
  {
   payload.WithString("webDeliveryAllowedFlag", Scte35WebDeliveryAllowedFlagMapper::GetNameForScte35WebDeliveryAllowedFlag(m_webDeliveryAllowedFlag));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
