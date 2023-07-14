/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TimeBasedCanary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TimeBasedCanary::TimeBasedCanary() : 
    m_canaryPercentage(0),
    m_canaryPercentageHasBeenSet(false),
    m_canaryInterval(0),
    m_canaryIntervalHasBeenSet(false)
{
}

TimeBasedCanary::TimeBasedCanary(JsonView jsonValue) : 
    m_canaryPercentage(0),
    m_canaryPercentageHasBeenSet(false),
    m_canaryInterval(0),
    m_canaryIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedCanary& TimeBasedCanary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("canaryPercentage"))
  {
    m_canaryPercentage = jsonValue.GetInteger("canaryPercentage");

    m_canaryPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canaryInterval"))
  {
    m_canaryInterval = jsonValue.GetInteger("canaryInterval");

    m_canaryIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedCanary::Jsonize() const
{
  JsonValue payload;

  if(m_canaryPercentageHasBeenSet)
  {
   payload.WithInteger("canaryPercentage", m_canaryPercentage);

  }

  if(m_canaryIntervalHasBeenSet)
  {
   payload.WithInteger("canaryInterval", m_canaryInterval);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
