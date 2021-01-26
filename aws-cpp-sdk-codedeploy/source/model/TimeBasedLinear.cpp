/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TimeBasedLinear.h>
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

TimeBasedLinear::TimeBasedLinear() : 
    m_linearPercentage(0),
    m_linearPercentageHasBeenSet(false),
    m_linearInterval(0),
    m_linearIntervalHasBeenSet(false)
{
}

TimeBasedLinear::TimeBasedLinear(JsonView jsonValue) : 
    m_linearPercentage(0),
    m_linearPercentageHasBeenSet(false),
    m_linearInterval(0),
    m_linearIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedLinear& TimeBasedLinear::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("linearPercentage"))
  {
    m_linearPercentage = jsonValue.GetInteger("linearPercentage");

    m_linearPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linearInterval"))
  {
    m_linearInterval = jsonValue.GetInteger("linearInterval");

    m_linearIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedLinear::Jsonize() const
{
  JsonValue payload;

  if(m_linearPercentageHasBeenSet)
  {
   payload.WithInteger("linearPercentage", m_linearPercentage);

  }

  if(m_linearIntervalHasBeenSet)
  {
   payload.WithInteger("linearInterval", m_linearInterval);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
