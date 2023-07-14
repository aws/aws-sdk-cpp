/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Ulimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Ulimit::Ulimit() : 
    m_name(UlimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
}

Ulimit::Ulimit(JsonView jsonValue) : 
    m_name(UlimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Ulimit& Ulimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = UlimitNameMapper::GetUlimitNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softLimit"))
  {
    m_softLimit = jsonValue.GetInteger("softLimit");

    m_softLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hardLimit"))
  {
    m_hardLimit = jsonValue.GetInteger("hardLimit");

    m_hardLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Ulimit::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", UlimitNameMapper::GetNameForUlimitName(m_name));
  }

  if(m_softLimitHasBeenSet)
  {
   payload.WithInteger("softLimit", m_softLimit);

  }

  if(m_hardLimitHasBeenSet)
  {
   payload.WithInteger("hardLimit", m_hardLimit);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
