/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteRequest.h>
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

DeleteRequest::DeleteRequest() : 
    m_keyHasBeenSet(false)
{
}

DeleteRequest::DeleteRequest(JsonView jsonValue)
  : DeleteRequest()
{
  *this = jsonValue;
}

DeleteRequest& DeleteRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetObject("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteRequest::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithObject("Key", m_key.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
