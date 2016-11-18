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

WriteRequest::WriteRequest(const JsonValue& jsonValue) : 
    m_putRequestHasBeenSet(false),
    m_deleteRequestHasBeenSet(false)
{
  *this = jsonValue;
}

WriteRequest& WriteRequest::operator =(const JsonValue& jsonValue)
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