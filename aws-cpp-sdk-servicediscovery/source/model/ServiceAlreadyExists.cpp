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

#include <aws/servicediscovery/model/ServiceAlreadyExists.h>
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

ServiceAlreadyExists::ServiceAlreadyExists() : 
    m_messageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

ServiceAlreadyExists::ServiceAlreadyExists(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceAlreadyExists& ServiceAlreadyExists::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceAlreadyExists::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
