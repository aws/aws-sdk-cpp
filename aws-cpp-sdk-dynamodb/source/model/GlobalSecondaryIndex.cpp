/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/GlobalSecondaryIndex.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GlobalSecondaryIndex::GlobalSecondaryIndex()
{
}

GlobalSecondaryIndex::GlobalSecondaryIndex(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

GlobalSecondaryIndex& GlobalSecondaryIndex::operator =(const JsonValue& jsonValue)
{
  m_indexName = jsonValue.GetString("IndexName");

  Array<JsonValue> keySchemaJsonList = jsonValue.GetArray("KeySchema");
  for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
  {
    m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
  }
  m_projection = jsonValue.GetObject("Projection");

  m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

  return *this;
}

JsonValue GlobalSecondaryIndex::Jsonize() const
{
  JsonValue payload;

  payload.WithString("IndexName", m_indexName);

  Array<JsonValue> keySchemaJsonList(m_keySchema.size());
  for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
  {
    keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
  }
  payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  payload.WithObject("Projection", m_projection.Jsonize());

  payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  return std::move(payload);
}