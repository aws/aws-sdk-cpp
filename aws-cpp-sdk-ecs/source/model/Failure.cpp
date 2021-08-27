/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Failure.h>
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

Failure::Failure() : 
    m_arnHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

Failure::Failure(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
  *this = jsonValue;
}

Failure& Failure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetString("detail");

    m_detailHasBeenSet = true;
  }

  return *this;
}

JsonValue Failure::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithString("detail", m_detail);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
