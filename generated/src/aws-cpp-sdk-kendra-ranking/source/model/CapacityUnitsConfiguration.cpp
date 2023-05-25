/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/CapacityUnitsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

CapacityUnitsConfiguration::CapacityUnitsConfiguration() : 
    m_rescoreCapacityUnits(0),
    m_rescoreCapacityUnitsHasBeenSet(false)
{
}

CapacityUnitsConfiguration::CapacityUnitsConfiguration(JsonView jsonValue) : 
    m_rescoreCapacityUnits(0),
    m_rescoreCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityUnitsConfiguration& CapacityUnitsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RescoreCapacityUnits"))
  {
    m_rescoreCapacityUnits = jsonValue.GetInteger("RescoreCapacityUnits");

    m_rescoreCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityUnitsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rescoreCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("RescoreCapacityUnits", m_rescoreCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
