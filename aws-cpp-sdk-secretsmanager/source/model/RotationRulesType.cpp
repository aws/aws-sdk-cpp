/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/RotationRulesType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

RotationRulesType::RotationRulesType() : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
}

RotationRulesType::RotationRulesType(JsonView jsonValue) : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RotationRulesType& RotationRulesType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticallyAfterDays"))
  {
    m_automaticallyAfterDays = jsonValue.GetInt64("AutomaticallyAfterDays");

    m_automaticallyAfterDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RotationRulesType::Jsonize() const
{
  JsonValue payload;

  if(m_automaticallyAfterDaysHasBeenSet)
  {
   payload.WithInt64("AutomaticallyAfterDays", m_automaticallyAfterDays);

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
