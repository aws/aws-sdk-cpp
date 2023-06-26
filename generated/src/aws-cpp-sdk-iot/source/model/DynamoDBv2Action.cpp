/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DynamoDBv2Action.h>
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

DynamoDBv2Action::DynamoDBv2Action() : 
    m_roleArnHasBeenSet(false),
    m_putItemHasBeenSet(false)
{
}

DynamoDBv2Action::DynamoDBv2Action(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_putItemHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBv2Action& DynamoDBv2Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("putItem"))
  {
    m_putItem = jsonValue.GetObject("putItem");

    m_putItemHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamoDBv2Action::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_putItemHasBeenSet)
  {
   payload.WithObject("putItem", m_putItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
