/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/WriteRequest.h>
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

WriteRequest::WriteRequest() : 
    m_putRequestHasBeenSet(false),
    m_deleteRequestHasBeenSet(false)
{
}

WriteRequest::WriteRequest(JsonView jsonValue) : 
    m_putRequestHasBeenSet(false),
    m_deleteRequestHasBeenSet(false)
{
  *this = jsonValue;
}

WriteRequest& WriteRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PutRequest"))
  {
    m_putRequest = jsonValue.GetObject("PutRequest");

    m_putRequestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteRequest"))
  {
    m_deleteRequest = jsonValue.GetObject("DeleteRequest");

    m_deleteRequestHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteRequest::Jsonize() const
{
  JsonValue payload;

  if(m_putRequestHasBeenSet)
  {
   payload.WithObject("PutRequest", m_putRequest.Jsonize());

  }

  if(m_deleteRequestHasBeenSet)
  {
   payload.WithObject("DeleteRequest", m_deleteRequest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
