/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AutonomousSystem.h>
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

AutonomousSystem::AutonomousSystem(JsonView jsonValue)
{
  *this = jsonValue;
}

AutonomousSystem& AutonomousSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("number"))
  {
    m_number = jsonValue.GetInteger("number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousSystem::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_numberHasBeenSet)
  {
   payload.WithInteger("number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
