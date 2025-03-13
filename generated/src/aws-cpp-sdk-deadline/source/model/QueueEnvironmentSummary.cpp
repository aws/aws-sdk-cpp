/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/QueueEnvironmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

QueueEnvironmentSummary::QueueEnvironmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

QueueEnvironmentSummary& QueueEnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueEnvironmentId"))
  {
    m_queueEnvironmentId = jsonValue.GetString("queueEnvironmentId");
    m_queueEnvironmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueEnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_queueEnvironmentIdHasBeenSet)
  {
   payload.WithString("queueEnvironmentId", m_queueEnvironmentId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
