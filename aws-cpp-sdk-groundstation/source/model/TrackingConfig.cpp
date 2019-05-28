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

#include <aws/groundstation/model/TrackingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

TrackingConfig::TrackingConfig() : 
    m_autotrack(Criticality::NOT_SET),
    m_autotrackHasBeenSet(false)
{
}

TrackingConfig::TrackingConfig(JsonView jsonValue) : 
    m_autotrack(Criticality::NOT_SET),
    m_autotrackHasBeenSet(false)
{
  *this = jsonValue;
}

TrackingConfig& TrackingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autotrack"))
  {
    m_autotrack = CriticalityMapper::GetCriticalityForName(jsonValue.GetString("autotrack"));

    m_autotrackHasBeenSet = true;
  }

  return *this;
}

JsonValue TrackingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autotrackHasBeenSet)
  {
   payload.WithString("autotrack", CriticalityMapper::GetNameForCriticality(m_autotrack));
  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
