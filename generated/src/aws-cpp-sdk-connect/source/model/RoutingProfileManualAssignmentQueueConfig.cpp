/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingProfileManualAssignmentQueueConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RoutingProfileManualAssignmentQueueConfig::RoutingProfileManualAssignmentQueueConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingProfileManualAssignmentQueueConfig& RoutingProfileManualAssignmentQueueConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueueReference"))
  {
    m_queueReference = jsonValue.GetObject("QueueReference");
    m_queueReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingProfileManualAssignmentQueueConfig::Jsonize() const
{
  JsonValue payload;

  if(m_queueReferenceHasBeenSet)
  {
   payload.WithObject("QueueReference", m_queueReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
