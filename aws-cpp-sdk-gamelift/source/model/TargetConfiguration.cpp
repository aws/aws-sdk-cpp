/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/TargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

TargetConfiguration::TargetConfiguration() : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
}

TargetConfiguration::TargetConfiguration(JsonView jsonValue) : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

TargetConfiguration& TargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
