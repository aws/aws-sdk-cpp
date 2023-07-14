/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SqsAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

SqsAction::SqsAction() : 
    m_queueUrlHasBeenSet(false),
    m_useBase64(false),
    m_useBase64HasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

SqsAction::SqsAction(JsonView jsonValue) : 
    m_queueUrlHasBeenSet(false),
    m_useBase64(false),
    m_useBase64HasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

SqsAction& SqsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueUrl"))
  {
    m_queueUrl = jsonValue.GetString("queueUrl");

    m_queueUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useBase64"))
  {
    m_useBase64 = jsonValue.GetBool("useBase64");

    m_useBase64HasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue SqsAction::Jsonize() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("queueUrl", m_queueUrl);

  }

  if(m_useBase64HasBeenSet)
  {
   payload.WithBool("useBase64", m_useBase64);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("payload", m_payload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
