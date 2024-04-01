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

QueueEnvironmentSummary::QueueEnvironmentSummary() : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueEnvironmentIdHasBeenSet(false)
{
}

QueueEnvironmentSummary::QueueEnvironmentSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueEnvironmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

QueueEnvironmentSummary& QueueEnvironmentSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("queueEnvironmentId"))
  {
    m_queueEnvironmentId = jsonValue.GetString("queueEnvironmentId");

    m_queueEnvironmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueEnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueEnvironmentIdHasBeenSet)
  {
   payload.WithString("queueEnvironmentId", m_queueEnvironmentId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
