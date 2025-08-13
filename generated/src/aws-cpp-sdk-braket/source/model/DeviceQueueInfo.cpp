/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceQueueInfo.h>
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

DeviceQueueInfo::DeviceQueueInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceQueueInfo& DeviceQueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queue"))
  {
    m_queue = QueueNameMapper::GetQueueNameForName(jsonValue.GetString("queue"));
    m_queueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueSize"))
  {
    m_queueSize = jsonValue.GetString("queueSize");
    m_queueSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queuePriority"))
  {
    m_queuePriority = QueuePriorityMapper::GetQueuePriorityForName(jsonValue.GetString("queuePriority"));
    m_queuePriorityHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceQueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", QueueNameMapper::GetNameForQueueName(m_queue));
  }

  if(m_queueSizeHasBeenSet)
  {
   payload.WithString("queueSize", m_queueSize);

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
