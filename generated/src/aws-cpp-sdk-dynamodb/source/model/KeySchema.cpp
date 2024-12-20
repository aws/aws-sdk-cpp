/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/KeySchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

KeySchema::KeySchema() : 
    m_hashKeyElementHasBeenSet(false),
    m_rangeKeyElementHasBeenSet(false)
{
}

KeySchema::KeySchema(JsonView jsonValue)
  : KeySchema()
{
  *this = jsonValue;
}

KeySchema& KeySchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HashKeyElement"))
  {
    m_hashKeyElement = jsonValue.GetObject("HashKeyElement");

    m_hashKeyElementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeKeyElement"))
  {
    m_rangeKeyElement = jsonValue.GetObject("RangeKeyElement");

    m_rangeKeyElementHasBeenSet = true;
  }

  return *this;
}

JsonValue KeySchema::Jsonize() const
{
  JsonValue payload;

  if(m_hashKeyElementHasBeenSet)
  {
   payload.WithObject("HashKeyElement", m_hashKeyElement.Jsonize());

  }

  if(m_rangeKeyElementHasBeenSet)
  {
   payload.WithObject("RangeKeyElement", m_rangeKeyElement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
