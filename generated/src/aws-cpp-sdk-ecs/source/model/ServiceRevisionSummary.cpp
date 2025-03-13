/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceRevisionSummary.h>
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

ServiceRevisionSummary::ServiceRevisionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceRevisionSummary& ServiceRevisionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestedTaskCount"))
  {
    m_requestedTaskCount = jsonValue.GetInteger("requestedTaskCount");
    m_requestedTaskCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runningTaskCount"))
  {
    m_runningTaskCount = jsonValue.GetInteger("runningTaskCount");
    m_runningTaskCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingTaskCount"))
  {
    m_pendingTaskCount = jsonValue.GetInteger("pendingTaskCount");
    m_pendingTaskCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceRevisionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_requestedTaskCountHasBeenSet)
  {
   payload.WithInteger("requestedTaskCount", m_requestedTaskCount);

  }

  if(m_runningTaskCountHasBeenSet)
  {
   payload.WithInteger("runningTaskCount", m_runningTaskCount);

  }

  if(m_pendingTaskCountHasBeenSet)
  {
   payload.WithInteger("pendingTaskCount", m_pendingTaskCount);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
