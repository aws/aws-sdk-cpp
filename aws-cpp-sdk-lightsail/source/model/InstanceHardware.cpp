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

#include <aws/lightsail/model/InstanceHardware.h>
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

InstanceHardware::InstanceHardware() : 
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false)
{
}

InstanceHardware::InstanceHardware(const JsonValue& jsonValue) : 
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceHardware& InstanceHardware::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");

    m_cpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disks"))
  {
    Array<JsonValue> disksJsonList = jsonValue.GetArray("disks");
    for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
    {
      m_disks.push_back(disksJsonList[disksIndex].AsObject());
    }
    m_disksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");

    m_ramSizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceHardware::Jsonize() const
{
  JsonValue payload;

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_disksHasBeenSet)
  {
   Array<JsonValue> disksJsonList(m_disks.size());
   for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
   {
     disksJsonList[disksIndex].AsObject(m_disks[disksIndex].Jsonize());
   }
   payload.WithArray("disks", std::move(disksJsonList));

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws