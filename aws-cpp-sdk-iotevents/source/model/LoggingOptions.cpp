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

#include <aws/iotevents/model/LoggingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

LoggingOptions::LoggingOptions() : 
    m_roleArnHasBeenSet(false),
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_detectorDebugOptionsHasBeenSet(false)
{
}

LoggingOptions::LoggingOptions(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_level(LoggingLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_detectorDebugOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingOptions& LoggingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = LoggingLevelMapper::GetLoggingLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorDebugOptions"))
  {
    Array<JsonView> detectorDebugOptionsJsonList = jsonValue.GetArray("detectorDebugOptions");
    for(unsigned detectorDebugOptionsIndex = 0; detectorDebugOptionsIndex < detectorDebugOptionsJsonList.GetLength(); ++detectorDebugOptionsIndex)
    {
      m_detectorDebugOptions.push_back(detectorDebugOptionsJsonList[detectorDebugOptionsIndex].AsObject());
    }
    m_detectorDebugOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LoggingLevelMapper::GetNameForLoggingLevel(m_level));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_detectorDebugOptionsHasBeenSet)
  {
   Array<JsonValue> detectorDebugOptionsJsonList(m_detectorDebugOptions.size());
   for(unsigned detectorDebugOptionsIndex = 0; detectorDebugOptionsIndex < detectorDebugOptionsJsonList.GetLength(); ++detectorDebugOptionsIndex)
   {
     detectorDebugOptionsJsonList[detectorDebugOptionsIndex].AsObject(m_detectorDebugOptions[detectorDebugOptionsIndex].Jsonize());
   }
   payload.WithArray("detectorDebugOptions", std::move(detectorDebugOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
