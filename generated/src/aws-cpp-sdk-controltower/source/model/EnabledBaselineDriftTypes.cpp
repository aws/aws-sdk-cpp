/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineDriftTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledBaselineDriftTypes::EnabledBaselineDriftTypes(JsonView jsonValue)
{
  *this = jsonValue;
}

EnabledBaselineDriftTypes& EnabledBaselineDriftTypes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inheritance"))
  {
    m_inheritance = jsonValue.GetObject("inheritance");
    m_inheritanceHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledBaselineDriftTypes::Jsonize() const
{
  JsonValue payload;

  if(m_inheritanceHasBeenSet)
  {
   payload.WithObject("inheritance", m_inheritance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
