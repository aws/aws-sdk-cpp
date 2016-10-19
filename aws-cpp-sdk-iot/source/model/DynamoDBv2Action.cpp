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

DynamoDBv2Action::DynamoDBv2Action(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_putItemHasBeenSet(false)
{
  *this = jsonValue;
}

DynamoDBv2Action& DynamoDBv2Action::operator =(const JsonValue& jsonValue)
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