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

#include <aws/pinpoint-email/model/InboxPlacementTrackingOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

InboxPlacementTrackingOption::InboxPlacementTrackingOption() : 
    m_global(false),
    m_globalHasBeenSet(false),
    m_trackedIspsHasBeenSet(false)
{
}

InboxPlacementTrackingOption::InboxPlacementTrackingOption(JsonView jsonValue) : 
    m_global(false),
    m_globalHasBeenSet(false),
    m_trackedIspsHasBeenSet(false)
{
  *this = jsonValue;
}

InboxPlacementTrackingOption& InboxPlacementTrackingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Global"))
  {
    m_global = jsonValue.GetBool("Global");

    m_globalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrackedIsps"))
  {
    Array<JsonView> trackedIspsJsonList = jsonValue.GetArray("TrackedIsps");
    for(unsigned trackedIspsIndex = 0; trackedIspsIndex < trackedIspsJsonList.GetLength(); ++trackedIspsIndex)
    {
      m_trackedIsps.push_back(trackedIspsJsonList[trackedIspsIndex].AsString());
    }
    m_trackedIspsHasBeenSet = true;
  }

  return *this;
}

JsonValue InboxPlacementTrackingOption::Jsonize() const
{
  JsonValue payload;

  if(m_globalHasBeenSet)
  {
   payload.WithBool("Global", m_global);

  }

  if(m_trackedIspsHasBeenSet)
  {
   Array<JsonValue> trackedIspsJsonList(m_trackedIsps.size());
   for(unsigned trackedIspsIndex = 0; trackedIspsIndex < trackedIspsJsonList.GetLength(); ++trackedIspsIndex)
   {
     trackedIspsJsonList[trackedIspsIndex].AsString(m_trackedIsps[trackedIspsIndex]);
   }
   payload.WithArray("TrackedIsps", std::move(trackedIspsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
