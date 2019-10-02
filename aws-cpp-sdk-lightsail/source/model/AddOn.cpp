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

#include <aws/lightsail/model/AddOn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AddOn::AddOn() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_snapshotTimeOfDayHasBeenSet(false),
    m_nextSnapshotTimeOfDayHasBeenSet(false)
{
}

AddOn::AddOn(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_snapshotTimeOfDayHasBeenSet(false),
    m_nextSnapshotTimeOfDayHasBeenSet(false)
{
  *this = jsonValue;
}

AddOn& AddOn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotTimeOfDay"))
  {
    m_snapshotTimeOfDay = jsonValue.GetString("snapshotTimeOfDay");

    m_snapshotTimeOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextSnapshotTimeOfDay"))
  {
    m_nextSnapshotTimeOfDay = jsonValue.GetString("nextSnapshotTimeOfDay");

    m_nextSnapshotTimeOfDayHasBeenSet = true;
  }

  return *this;
}

JsonValue AddOn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_snapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("snapshotTimeOfDay", m_snapshotTimeOfDay);

  }

  if(m_nextSnapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("nextSnapshotTimeOfDay", m_nextSnapshotTimeOfDay);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
