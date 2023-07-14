/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CPU::CPU(JsonView jsonValue) : 
    m_frequencyHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_clock(0.0),
    m_clockHasBeenSet(false)
{
  *this = jsonValue;
}

CPU& CPU::operator =(JsonView jsonValue)
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
