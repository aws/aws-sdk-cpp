/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ProtectedTask.h>
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

ProtectedTask::ProtectedTask() : 
    m_taskArnHasBeenSet(false),
    m_protectionEnabled(false),
    m_protectionEnabledHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

ProtectedTask::ProtectedTask(JsonView jsonValue) : 
    m_taskArnHasBeenSet(false),
    m_protectionEnabled(false),
    m_protectionEnabledHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedTask& ProtectedTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protectionEnabled"))
  {
    m_protectionEnabled = jsonValue.GetBool("protectionEnabled");

    m_protectionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetDouble("expirationDate");

    m_expirationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedTask::Jsonize() const
{
  JsonValue payload;

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_protectionEnabledHasBeenSet)
  {
   payload.WithBool("protectionEnabled", m_protectionEnabled);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
