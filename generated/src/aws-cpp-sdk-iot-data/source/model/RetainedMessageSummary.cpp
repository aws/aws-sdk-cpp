/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/RetainedMessageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDataPlane
{
namespace Model
{

RetainedMessageSummary::RetainedMessageSummary() : 
    m_topicHasBeenSet(false),
    m_payloadSize(0),
    m_payloadSizeHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false)
{
}

RetainedMessageSummary::RetainedMessageSummary(JsonView jsonValue) : 
    m_topicHasBeenSet(false),
    m_payloadSize(0),
    m_payloadSizeHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RetainedMessageSummary& RetainedMessageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadSize"))
  {
    m_payloadSize = jsonValue.GetInt64("payloadSize");

    m_payloadSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qos"))
  {
    m_qos = jsonValue.GetInteger("qos");

    m_qosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RetainedMessageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_topicHasBeenSet)
  {
   payload.WithString("topic", m_topic);

  }

  if(m_payloadSizeHasBeenSet)
  {
   payload.WithInt64("payloadSize", m_payloadSize);

  }

  if(m_qosHasBeenSet)
  {
   payload.WithInteger("qos", m_qos);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("lastModifiedTime", m_lastModifiedTime);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
