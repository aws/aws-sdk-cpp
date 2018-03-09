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

#include <aws/iot/model/ThingIndexingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ThingIndexingConfiguration::ThingIndexingConfiguration() : 
    m_thingIndexingMode(ThingIndexingMode::NOT_SET),
    m_thingIndexingModeHasBeenSet(false)
{
}

ThingIndexingConfiguration::ThingIndexingConfiguration(const JsonValue& jsonValue) : 
    m_thingIndexingMode(ThingIndexingMode::NOT_SET),
    m_thingIndexingModeHasBeenSet(false)
{
  *this = jsonValue;
}

ThingIndexingConfiguration& ThingIndexingConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("thingIndexingMode"))
  {
    m_thingIndexingMode = ThingIndexingModeMapper::GetThingIndexingModeForName(jsonValue.GetString("thingIndexingMode"));

    m_thingIndexingModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingIndexingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_thingIndexingModeHasBeenSet)
  {
   payload.WithString("thingIndexingMode", ThingIndexingModeMapper::GetNameForThingIndexingMode(m_thingIndexingMode));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
