/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/HybridJobQueueInfo.h>
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

HybridJobQueueInfo::HybridJobQueueInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridJobQueueInfo& HybridJobQueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queue"))
  {
    m_queue = QueueNameMapper::GetQueueNameForName(jsonValue.GetString("queue"));
    m_queueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetString("position");
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridJobQueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", QueueNameMapper::GetNameForQueueName(m_queue));
  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("position", m_position);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
