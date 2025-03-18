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

SignalInformation::SignalInformation(JsonView jsonValue)
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
  if(jsonValue.ValueExists("dataPartitionId"))
  {
    m_dataPartitionId = jsonValue.GetString("dataPartitionId");
    m_dataPartitionIdHasBeenSet = true;
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

  if(m_dataPartitionIdHasBeenSet)
  {
   payload.WithString("dataPartitionId", m_dataPartitionId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
