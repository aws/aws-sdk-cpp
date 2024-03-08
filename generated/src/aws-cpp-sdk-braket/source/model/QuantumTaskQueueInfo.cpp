/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QuantumTaskQueueInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

QuantumTaskQueueInfo::QuantumTaskQueueInfo() : 
    m_messageHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_queue(QueueName::NOT_SET),
    m_queueHasBeenSet(false),
    m_queuePriority(QueuePriority::NOT_SET),
    m_queuePriorityHasBeenSet(false)
{
}

QuantumTaskQueueInfo::QuantumTaskQueueInfo(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_queue(QueueName::NOT_SET),
    m_queueHasBeenSet(false),
    m_queuePriority(QueuePriority::NOT_SET),
    m_queuePriorityHasBeenSet(false)
{
  *this = jsonValue;
}

QuantumTaskQueueInfo& QuantumTaskQueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetString("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queue"))
  {
    m_queue = QueueNameMapper::GetQueueNameForName(jsonValue.GetString("queue"));

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuePriority"))
  {
    m_queuePriority = QueuePriorityMapper::GetQueuePriorityForName(jsonValue.GetString("queuePriority"));

    m_queuePriorityHasBeenSet = true;
  }

  return *this;
}

JsonValue QuantumTaskQueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("position", m_position);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", QueueNameMapper::GetNameForQueueName(m_queue));
  }

  if(m_queuePriorityHasBeenSet)
  {
   payload.WithString("queuePriority", QueuePriorityMapper::GetNameForQueuePriority(m_queuePriority));
  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
