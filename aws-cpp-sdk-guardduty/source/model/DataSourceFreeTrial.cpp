/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DataSourceFreeTrial.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

DataSourceFreeTrial::DataSourceFreeTrial() : 
    m_freeTrialDaysRemaining(0),
    m_freeTrialDaysRemainingHasBeenSet(false)
{
}

DataSourceFreeTrial::DataSourceFreeTrial(JsonView jsonValue) : 
    m_freeTrialDaysRemaining(0),
    m_freeTrialDaysRemainingHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceFreeTrial& DataSourceFreeTrial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("freeTrialDaysRemaining"))
  {
    m_freeTrialDaysRemaining = jsonValue.GetInteger("freeTrialDaysRemaining");

    m_freeTrialDaysRemainingHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceFreeTrial::Jsonize() const
{
  JsonValue payload;

  if(m_freeTrialDaysRemainingHasBeenSet)
  {
   payload.WithInteger("freeTrialDaysRemaining", m_freeTrialDaysRemaining);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
