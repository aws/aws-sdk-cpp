/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaPackageOutputDestinationSettings.h>
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

MediaPackageOutputDestinationSettings::MediaPackageOutputDestinationSettings() : 
    m_channelIdHasBeenSet(false)
{
}

MediaPackageOutputDestinationSettings::MediaPackageOutputDestinationSettings(JsonView jsonValue) : 
    m_channelIdHasBeenSet(false)
{
  *this = jsonValue;
}

MediaPackageOutputDestinationSettings& MediaPackageOutputDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

    m_channelIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaPackageOutputDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
