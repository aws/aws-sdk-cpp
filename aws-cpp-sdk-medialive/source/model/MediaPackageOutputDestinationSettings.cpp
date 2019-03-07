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
