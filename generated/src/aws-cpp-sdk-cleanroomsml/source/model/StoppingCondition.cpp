/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StoppingCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

StoppingCondition::StoppingCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

StoppingCondition& StoppingCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxRuntimeInSeconds"))
  {
    m_maxRuntimeInSeconds = jsonValue.GetInteger("maxRuntimeInSeconds");
    m_maxRuntimeInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue StoppingCondition::Jsonize() const
{
  JsonValue payload;

  if(m_maxRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("maxRuntimeInSeconds", m_maxRuntimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
