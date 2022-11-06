/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> entityIdsJsonList = jsonValue.GetArray("EntityIds");
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
   Aws::Utils::Array<JsonValue> entityIdsJsonList(m_entityIds.size());
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
