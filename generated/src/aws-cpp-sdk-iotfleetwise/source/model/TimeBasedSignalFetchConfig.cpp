/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimeBasedSignalFetchConfig.h>
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

TimeBasedSignalFetchConfig::TimeBasedSignalFetchConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeBasedSignalFetchConfig& TimeBasedSignalFetchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionFrequencyMs"))
  {
    m_executionFrequencyMs = jsonValue.GetInt64("executionFrequencyMs");
    m_executionFrequencyMsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeBasedSignalFetchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_executionFrequencyMsHasBeenSet)
  {
   payload.WithInt64("executionFrequencyMs", m_executionFrequencyMs);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
