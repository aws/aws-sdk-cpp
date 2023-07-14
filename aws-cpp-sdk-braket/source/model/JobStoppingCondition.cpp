/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobStoppingCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

JobStoppingCondition::JobStoppingCondition() : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false)
{
}

JobStoppingCondition::JobStoppingCondition(JsonView jsonValue) : 
    m_maxRuntimeInSeconds(0),
    m_maxRuntimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

JobStoppingCondition& JobStoppingCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxRuntimeInSeconds"))
  {
    m_maxRuntimeInSeconds = jsonValue.GetInteger("maxRuntimeInSeconds");

    m_maxRuntimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobStoppingCondition::Jsonize() const
{
  JsonValue payload;

  if(m_maxRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("maxRuntimeInSeconds", m_maxRuntimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
