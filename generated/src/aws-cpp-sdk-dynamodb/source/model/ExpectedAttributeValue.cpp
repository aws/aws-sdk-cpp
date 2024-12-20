/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExpectedAttributeValue.h>
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

ExpectedAttributeValue::ExpectedAttributeValue() : 
    m_valueHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false)
{
}

ExpectedAttributeValue::ExpectedAttributeValue(JsonView jsonValue)
  : ExpectedAttributeValue()
{
  *this = jsonValue;
}

ExpectedAttributeValue& ExpectedAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exists"))
  {
    m_exists = jsonValue.GetBool("Exists");

    m_existsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpectedAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_existsHasBeenSet)
  {
   payload.WithBool("Exists", m_exists);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
