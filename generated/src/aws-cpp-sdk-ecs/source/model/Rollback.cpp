/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Rollback.h>
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

Rollback::Rollback(JsonView jsonValue)
{
  *this = jsonValue;
}

Rollback& Rollback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceRevisionArn"))
  {
    m_serviceRevisionArn = jsonValue.GetString("serviceRevisionArn");
    m_serviceRevisionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Rollback::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_serviceRevisionArnHasBeenSet)
  {
   payload.WithString("serviceRevisionArn", m_serviceRevisionArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
