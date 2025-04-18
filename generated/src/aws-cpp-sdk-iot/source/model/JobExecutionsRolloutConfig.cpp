﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

JobExecutionsRolloutConfig::JobExecutionsRolloutConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

JobExecutionsRolloutConfig& JobExecutionsRolloutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maximumPerMinute"))
  {
    m_maximumPerMinute = jsonValue.GetInteger("maximumPerMinute");
    m_maximumPerMinuteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exponentialRate"))
  {
    m_exponentialRate = jsonValue.GetObject("exponentialRate");
    m_exponentialRateHasBeenSet = true;
  }
  return *this;
}

JsonValue JobExecutionsRolloutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maximumPerMinuteHasBeenSet)
  {
   payload.WithInteger("maximumPerMinute", m_maximumPerMinute);

  }

  if(m_exponentialRateHasBeenSet)
  {
   payload.WithObject("exponentialRate", m_exponentialRate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
