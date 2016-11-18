/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DeviceMinutes::DeviceMinutes() : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_metered(0.0),
    m_meteredHasBeenSet(false),
    m_unmetered(0.0),
    m_unmeteredHasBeenSet(false)
{
}

DeviceMinutes::DeviceMinutes(const JsonValue& jsonValue) : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_metered(0.0),
    m_meteredHasBeenSet(false),
    m_unmetered(0.0),
    m_unmeteredHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceMinutes& DeviceMinutes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetDouble("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metered"))
  {
    m_metered = jsonValue.GetDouble("metered");

    m_meteredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unmetered"))
  {
    m_unmetered = jsonValue.GetDouble("unmetered");

    m_unmeteredHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceMinutes::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("total", m_total);

  }

  if(m_meteredHasBeenSet)
  {
   payload.WithDouble("metered", m_metered);

  }

  if(m_unmeteredHasBeenSet)
  {
   payload.WithDouble("unmetered", m_unmetered);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws