/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionsList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConnectionsList::ConnectionsList() : 
    m_connectionsHasBeenSet(false)
{
}

ConnectionsList::ConnectionsList(JsonView jsonValue) : 
    m_connectionsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionsList& ConnectionsList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("Connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsString());
    }
    m_connectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionsList::Jsonize() const
{
  JsonValue payload;

  if(m_connectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionsJsonList(m_connections.size());
   for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
   {
     connectionsJsonList[connectionsIndex].AsString(m_connections[connectionsIndex]);
   }
   payload.WithArray("Connections", std::move(connectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
