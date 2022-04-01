/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/FirehoseAction.h>
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

FirehoseAction::FirehoseAction() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

FirehoseAction::FirehoseAction(JsonView jsonValue) : 
    m_deliveryStreamNameHasBeenSet(false),
    m_separatorHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseAction& FirehoseAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryStreamName"))
  {
    m_deliveryStreamName = jsonValue.GetString("deliveryStreamName");

    m_deliveryStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("separator"))
  {
    m_separator = jsonValue.GetString("separator");

    m_separatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseAction::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("deliveryStreamName", m_deliveryStreamName);

  }

  if(m_separatorHasBeenSet)
  {
   payload.WithString("separator", m_separator);

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
