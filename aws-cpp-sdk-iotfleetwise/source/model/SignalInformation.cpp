/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

SignalInformation::SignalInformation() : 
    m_nameHasBeenSet(false),
    m_maxSampleCount(0),
    m_maxSampleCountHasBeenSet(false),
    m_minimumSamplingIntervalMs(0),
    m_minimumSamplingIntervalMsHasBeenSet(false)
{
}

SignalInformation::SignalInformation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_maxSampleCount(0),
    m_maxSampleCountHasBeenSet(false),
    m_minimumSamplingIntervalMs(0),
    m_minimumSamplingIntervalMsHasBeenSet(false)
{
  *this = jsonValue;
}

SignalInformation& SignalInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSampleCount"))
  {
    m_maxSampleCount = jsonValue.GetInt64("maxSampleCount");

    m_maxSampleCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumSamplingIntervalMs"))
  {
    m_minimumSamplingIntervalMs = jsonValue.GetInt64("minimumSamplingIntervalMs");

    m_minimumSamplingIntervalMsHasBeenSet = true;
  }

  return *this;
}

JsonValue SignalInformation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_maxSampleCountHasBeenSet)
  {
   payload.WithInt64("maxSampleCount", m_maxSampleCount);

  }

  if(m_minimumSamplingIntervalMsHasBeenSet)
  {
   payload.WithInt64("minimumSamplingIntervalMs", m_minimumSamplingIntervalMs);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
