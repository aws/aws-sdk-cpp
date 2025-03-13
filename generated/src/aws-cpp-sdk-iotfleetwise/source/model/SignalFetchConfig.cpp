/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalFetchConfig.h>
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

SignalFetchConfig::SignalFetchConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SignalFetchConfig& SignalFetchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeBased"))
  {
    m_timeBased = jsonValue.GetObject("timeBased");
    m_timeBasedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionBased"))
  {
    m_conditionBased = jsonValue.GetObject("conditionBased");
    m_conditionBasedHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalFetchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_timeBasedHasBeenSet)
  {
   payload.WithObject("timeBased", m_timeBased.Jsonize());

  }

  if(m_conditionBasedHasBeenSet)
  {
   payload.WithObject("conditionBased", m_conditionBased.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
