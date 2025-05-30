﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Secret.h>
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

Secret::Secret(JsonView jsonValue)
{
  *this = jsonValue;
}

Secret& Secret::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueFrom"))
  {
    m_valueFrom = jsonValue.GetString("valueFrom");
    m_valueFromHasBeenSet = true;
  }
  return *this;
}

JsonValue Secret::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valueFromHasBeenSet)
  {
   payload.WithString("valueFrom", m_valueFrom);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
