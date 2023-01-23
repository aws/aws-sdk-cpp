/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DynamoDBAction.h>
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

DynamoDBAction::DynamoDBAction() : 
    m_hashKeyTypeHasBeenSet(false),
    m_hashKeyFieldHasBeenSet(false),
    m_hashKeyValueHasBeenSet(false),
    m_rangeKeyTypeHasBeenSet(false),
    m_rangeKeyFieldHasBeenSet(false),
    m_rangeKeyValueHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_payloadFieldHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

DynamoDBAction::DynamoDBAction(JsonView jsonValue) : 
    m_hashKeyTypeHasBeenSet(false),
    m_hashKeyFieldHasBeenSet(false),
    m_hashKeyValueHasBeenSet(false),
    m_rangeKeyTypeHasBeenSet(false),
    m_rangeKeyFieldHasBeenSet(false),
    m_rangeKeyValueHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_payloadFieldHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBAction& DynamoDBAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hashKeyType"))
  {
    m_hashKeyType = jsonValue.GetString("hashKeyType");

    m_hashKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hashKeyField"))
  {
    m_hashKeyField = jsonValue.GetString("hashKeyField");

    m_hashKeyFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hashKeyValue"))
  {
    m_hashKeyValue = jsonValue.GetString("hashKeyValue");

    m_hashKeyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rangeKeyType"))
  {
    m_rangeKeyType = jsonValue.GetString("rangeKeyType");

    m_rangeKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rangeKeyField"))
  {
    m_rangeKeyField = jsonValue.GetString("rangeKeyField");

    m_rangeKeyFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rangeKeyValue"))
  {
    m_rangeKeyValue = jsonValue.GetString("rangeKeyValue");

    m_rangeKeyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");

    m_operationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadField"))
  {
    m_payloadField = jsonValue.GetString("payloadField");

    m_payloadFieldHasBeenSet = true;
  }

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

JsonValue DynamoDBAction::Jsonize() const
{
  JsonValue payload;

  if(m_hashKeyTypeHasBeenSet)
  {
   payload.WithString("hashKeyType", m_hashKeyType);

  }

  if(m_hashKeyFieldHasBeenSet)
  {
   payload.WithString("hashKeyField", m_hashKeyField);

  }

  if(m_hashKeyValueHasBeenSet)
  {
   payload.WithString("hashKeyValue", m_hashKeyValue);

  }

  if(m_rangeKeyTypeHasBeenSet)
  {
   payload.WithString("rangeKeyType", m_rangeKeyType);

  }

  if(m_rangeKeyFieldHasBeenSet)
  {
   payload.WithString("rangeKeyField", m_rangeKeyField);

  }

  if(m_rangeKeyValueHasBeenSet)
  {
   payload.WithString("rangeKeyValue", m_rangeKeyValue);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_payloadFieldHasBeenSet)
  {
   payload.WithString("payloadField", m_payloadField);

  }

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
