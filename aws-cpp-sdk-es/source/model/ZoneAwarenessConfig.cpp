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

#include <aws/es/model/ZoneAwarenessConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ZoneAwarenessConfig::ZoneAwarenessConfig() : 
    m_availabilityZoneCount(0),
    m_availabilityZoneCountHasBeenSet(false)
{
}

ZoneAwarenessConfig::ZoneAwarenessConfig(JsonView jsonValue) : 
    m_availabilityZoneCount(0),
    m_availabilityZoneCountHasBeenSet(false)
{
  *this = jsonValue;
}

ZoneAwarenessConfig& ZoneAwarenessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZoneCount"))
  {
    m_availabilityZoneCount = jsonValue.GetInteger("AvailabilityZoneCount");

    m_availabilityZoneCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ZoneAwarenessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneCountHasBeenSet)
  {
   payload.WithInteger("AvailabilityZoneCount", m_availabilityZoneCount);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
