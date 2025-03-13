/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/PointInTimeRecoverySpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

PointInTimeRecoverySpecification::PointInTimeRecoverySpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PointInTimeRecoverySpecification& PointInTimeRecoverySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PointInTimeRecoveryEnabled"))
  {
    m_pointInTimeRecoveryEnabled = jsonValue.GetBool("PointInTimeRecoveryEnabled");
    m_pointInTimeRecoveryEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryPeriodInDays"))
  {
    m_recoveryPeriodInDays = jsonValue.GetInteger("RecoveryPeriodInDays");
    m_recoveryPeriodInDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue PointInTimeRecoverySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_pointInTimeRecoveryEnabledHasBeenSet)
  {
   payload.WithBool("PointInTimeRecoveryEnabled", m_pointInTimeRecoveryEnabled);

  }

  if(m_recoveryPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("RecoveryPeriodInDays", m_recoveryPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
