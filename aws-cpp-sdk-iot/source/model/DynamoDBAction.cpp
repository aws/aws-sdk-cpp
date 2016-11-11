/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iot/model/DynamoDBAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DynamoDBAction::DynamoDBAction() : 
    m_tableNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_hashKeyFieldHasBeenSet(false),
    m_hashKeyValueHasBeenSet(false),
    m_hashKeyType(DynamoKeyType::NOT_SET),
    m_hashKeyTypeHasBeenSet(false),
    m_rangeKeyFieldHasBeenSet(false),
    m_rangeKeyValueHasBeenSet(false),
    m_rangeKeyType(DynamoKeyType::NOT_SET),
    m_rangeKeyTypeHasBeenSet(false),
    m_payloadFieldHasBeenSet(false)
{
}

DynamoDBAction::DynamoDBAction(const JsonValue& jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_hashKeyFieldHasBeenSet(false),
    m_hashKeyValueHasBeenSet(false),
    m_hashKeyType(DynamoKeyType::NOT_SET),
    m_hashKeyTypeHasBeenSet(false),
    m_rangeKeyFieldHasBeenSet(false),
    m_rangeKeyValueHasBeenSet(false),
    m_rangeKeyType(DynamoKeyType::NOT_SET),
    m_rangeKeyTypeHasBeenSet(false),
    m_payloadFieldHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBAction& DynamoDBAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");

    m_operationHasBeenSet = true;
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

  if(jsonValue.ValueExists("hashKeyType"))
  {
    m_hashKeyType = DynamoKeyTypeMapper::GetDynamoKeyTypeForName(jsonValue.GetString("hashKeyType"));

    m_hashKeyTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("rangeKeyType"))
  {
    m_rangeKeyType = DynamoKeyTypeMapper::GetDynamoKeyTypeForName(jsonValue.GetString("rangeKeyType"));

    m_rangeKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadField"))
  {
    m_payloadField = jsonValue.GetString("payloadField");

    m_payloadFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamoDBAction::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_hashKeyFieldHasBeenSet)
  {
   payload.WithString("hashKeyField", m_hashKeyField);

  }

  if(m_hashKeyValueHasBeenSet)
  {
   payload.WithString("hashKeyValue", m_hashKeyValue);

  }

  if(m_hashKeyTypeHasBeenSet)
  {
   payload.WithString("hashKeyType", DynamoKeyTypeMapper::GetNameForDynamoKeyType(m_hashKeyType));
  }

  if(m_rangeKeyFieldHasBeenSet)
  {
   payload.WithString("rangeKeyField", m_rangeKeyField);

  }

  if(m_rangeKeyValueHasBeenSet)
  {
   payload.WithString("rangeKeyValue", m_rangeKeyValue);

  }

  if(m_rangeKeyTypeHasBeenSet)
  {
   payload.WithString("rangeKeyType", DynamoKeyTypeMapper::GetNameForDynamoKeyType(m_rangeKeyType));
  }

  if(m_payloadFieldHasBeenSet)
  {
   payload.WithString("payloadField", m_payloadField);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws