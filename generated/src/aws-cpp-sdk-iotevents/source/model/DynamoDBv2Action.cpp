/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DynamoDBv2Action.h>
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

DynamoDBv2Action::DynamoDBv2Action() : 
    m_tableNameHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

DynamoDBv2Action::DynamoDBv2Action(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBv2Action& DynamoDBv2Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamoDBv2Action::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

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
