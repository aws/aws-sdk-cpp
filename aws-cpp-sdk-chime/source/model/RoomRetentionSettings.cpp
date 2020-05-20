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

#include <aws/chime/model/RoomRetentionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

RoomRetentionSettings::RoomRetentionSettings() : 
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false)
{
}

RoomRetentionSettings::RoomRetentionSettings(JsonView jsonValue) : 
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RoomRetentionSettings& RoomRetentionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");

    m_retentionDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RoomRetentionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("RetentionDays", m_retentionDays);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
