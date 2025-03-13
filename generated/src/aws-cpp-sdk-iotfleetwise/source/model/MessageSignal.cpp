/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/MessageSignal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

MessageSignal::MessageSignal(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageSignal& MessageSignal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicName"))
  {
    m_topicName = jsonValue.GetString("topicName");
    m_topicNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("structuredMessage"))
  {
    m_structuredMessage = jsonValue.GetObject("structuredMessage");
    m_structuredMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageSignal::Jsonize() const
{
  JsonValue payload;

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("topicName", m_topicName);

  }

  if(m_structuredMessageHasBeenSet)
  {
   payload.WithObject("structuredMessage", m_structuredMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
