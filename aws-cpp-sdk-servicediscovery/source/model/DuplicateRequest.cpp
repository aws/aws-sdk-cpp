/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/servicediscovery/model/DuplicateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DuplicateRequest::DuplicateRequest() : 
    m_messageHasBeenSet(false),
    m_duplicateOperationIdHasBeenSet(false)
{
}

DuplicateRequest::DuplicateRequest(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_duplicateOperationIdHasBeenSet(false)
{
  *this = jsonValue;
}

DuplicateRequest& DuplicateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DuplicateOperationId"))
  {
    m_duplicateOperationId = jsonValue.GetString("DuplicateOperationId");

    m_duplicateOperationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DuplicateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_duplicateOperationIdHasBeenSet)
  {
   payload.WithString("DuplicateOperationId", m_duplicateOperationId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
