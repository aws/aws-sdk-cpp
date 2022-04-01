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

PointInTimeRecoverySpecification::PointInTimeRecoverySpecification() : 
    m_pointInTimeRecoveryEnabled(false),
    m_pointInTimeRecoveryEnabledHasBeenSet(false)
{
}

PointInTimeRecoverySpecification::PointInTimeRecoverySpecification(JsonView jsonValue) : 
    m_pointInTimeRecoveryEnabled(false),
    m_pointInTimeRecoveryEnabledHasBeenSet(false)
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

  return *this;
}

JsonValue PointInTimeRecoverySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_pointInTimeRecoveryEnabledHasBeenSet)
  {
   payload.WithBool("PointInTimeRecoveryEnabled", m_pointInTimeRecoveryEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
