/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/LocalTimeZoneConfig.h>
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

LocalTimeZoneConfig::LocalTimeZoneConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

LocalTimeZoneConfig& LocalTimeZoneConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultTimeZone"))
  {
    m_defaultTimeZone = jsonValue.GetString("defaultTimeZone");
    m_defaultTimeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localTimeZoneDetection"))
  {
    Aws::Utils::Array<JsonView> localTimeZoneDetectionJsonList = jsonValue.GetArray("localTimeZoneDetection");
    for(unsigned localTimeZoneDetectionIndex = 0; localTimeZoneDetectionIndex < localTimeZoneDetectionJsonList.GetLength(); ++localTimeZoneDetectionIndex)
    {
      m_localTimeZoneDetection.push_back(LocalTimeZoneDetectionTypeMapper::GetLocalTimeZoneDetectionTypeForName(localTimeZoneDetectionJsonList[localTimeZoneDetectionIndex].AsString()));
    }
    m_localTimeZoneDetectionHasBeenSet = true;
  }
  return *this;
}

JsonValue LocalTimeZoneConfig::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTimeZoneHasBeenSet)
  {
   payload.WithString("defaultTimeZone", m_defaultTimeZone);

  }

  if(m_localTimeZoneDetectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localTimeZoneDetectionJsonList(m_localTimeZoneDetection.size());
   for(unsigned localTimeZoneDetectionIndex = 0; localTimeZoneDetectionIndex < localTimeZoneDetectionJsonList.GetLength(); ++localTimeZoneDetectionIndex)
   {
     localTimeZoneDetectionJsonList[localTimeZoneDetectionIndex].AsString(LocalTimeZoneDetectionTypeMapper::GetNameForLocalTimeZoneDetectionType(m_localTimeZoneDetection[localTimeZoneDetectionIndex]));
   }
   payload.WithArray("localTimeZoneDetection", std::move(localTimeZoneDetectionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
