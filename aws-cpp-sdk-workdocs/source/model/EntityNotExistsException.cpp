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

#include <aws/workdocs/model/EntityNotExistsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

EntityNotExistsException::EntityNotExistsException() : 
    m_messageHasBeenSet(false),
    m_entityIdsHasBeenSet(false)
{
}

EntityNotExistsException::EntityNotExistsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_entityIdsHasBeenSet(false)
{
  *this = jsonValue;
}

EntityNotExistsException& EntityNotExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityIds"))
  {
    Array<JsonView> entityIdsJsonList = jsonValue.GetArray("EntityIds");
    for(unsigned entityIdsIndex = 0; entityIdsIndex < entityIdsJsonList.GetLength(); ++entityIdsIndex)
    {
      m_entityIds.push_back(entityIdsJsonList[entityIdsIndex].AsString());
    }
    m_entityIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityNotExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_entityIdsHasBeenSet)
  {
   Array<JsonValue> entityIdsJsonList(m_entityIds.size());
   for(unsigned entityIdsIndex = 0; entityIdsIndex < entityIdsJsonList.GetLength(); ++entityIdsIndex)
   {
     entityIdsJsonList[entityIdsIndex].AsString(m_entityIds[entityIdsIndex]);
   }
   payload.WithArray("EntityIds", std::move(entityIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
