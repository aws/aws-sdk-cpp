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

ConnectionsList::ConnectionsList(const JsonValue& jsonValue) : 
    m_connectionsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionsList& ConnectionsList::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Connections"))
  {
    Array<JsonValue> connectionsJsonList = jsonValue.GetArray("Connections");
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
   Array<JsonValue> connectionsJsonList(m_connections.size());
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
