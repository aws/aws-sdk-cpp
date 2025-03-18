/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/PeriodicStateTemplateUpdateStrategy.h>
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

PeriodicStateTemplateUpdateStrategy::PeriodicStateTemplateUpdateStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

PeriodicStateTemplateUpdateStrategy& PeriodicStateTemplateUpdateStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateTemplateUpdateRate"))
  {
    m_stateTemplateUpdateRate = jsonValue.GetObject("stateTemplateUpdateRate");
    m_stateTemplateUpdateRateHasBeenSet = true;
  }
  return *this;
}

JsonValue PeriodicStateTemplateUpdateStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_stateTemplateUpdateRateHasBeenSet)
  {
   payload.WithObject("stateTemplateUpdateRate", m_stateTemplateUpdateRate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
