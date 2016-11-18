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
#include <aws/devicefarm/model/CPU.h>
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

CPU::CPU() : 
    m_frequencyHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_clock(0.0),
    m_clockHasBeenSet(false)
{
}

CPU::CPU(const JsonValue& jsonValue) : 
    m_frequencyHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_clock(0.0),
    m_clockHasBeenSet(false)
{
  *this = jsonValue;
}

CPU& CPU::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = jsonValue.GetString("frequency");

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clock"))
  {
    m_clock = jsonValue.GetDouble("clock");

    m_clockHasBeenSet = true;
  }

  return *this;
}

JsonValue CPU::Jsonize() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", m_frequency);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", m_architecture);

  }

  if(m_clockHasBeenSet)
  {
   payload.WithDouble("clock", m_clock);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws