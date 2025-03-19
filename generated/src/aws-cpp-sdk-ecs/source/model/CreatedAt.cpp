/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CreatedAt.h>
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

CreatedAt::CreatedAt(JsonView jsonValue)
{
  *this = jsonValue;
}

CreatedAt& CreatedAt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("before"))
  {
    m_before = jsonValue.GetDouble("before");
    m_beforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("after"))
  {
    m_after = jsonValue.GetDouble("after");
    m_afterHasBeenSet = true;
  }
  return *this;
}

JsonValue CreatedAt::Jsonize() const
{
  JsonValue payload;

  if(m_beforeHasBeenSet)
  {
   payload.WithDouble("before", m_before.SecondsWithMSPrecision());
  }

  if(m_afterHasBeenSet)
  {
   payload.WithDouble("after", m_after.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
