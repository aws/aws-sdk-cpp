﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/TargetTrackingConfiguration.h>
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

TargetTrackingConfiguration::TargetTrackingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetTrackingConfiguration& TargetTrackingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");
    m_targetValueHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetTrackingConfiguration::Jsonize() const
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
