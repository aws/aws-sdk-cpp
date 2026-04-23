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

#include <aws/sms/model/ServerGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerGroup::ServerGroup() : 
    m_serverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverListHasBeenSet(false)
{
}

ServerGroup::ServerGroup(JsonView jsonValue) : 
    m_serverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverListHasBeenSet(false)
{
  *this = jsonValue;
}

ServerGroup& ServerGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverGroupId"))
  {
    m_serverGroupId = jsonValue.GetString("serverGroupId");

    m_serverGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverList"))
  {
    Array<JsonView> serverListJsonList = jsonValue.GetArray("serverList");
    for(unsigned serverListIndex = 0; serverListIndex < serverListJsonList.GetLength(); ++serverListIndex)
    {
      m_serverList.push_back(serverListJsonList[serverListIndex].AsObject());
    }
    m_serverListHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerGroup::Jsonize() const
{
  JsonValue payload;

  if(m_serverGroupIdHasBeenSet)
  {
   payload.WithString("serverGroupId", m_serverGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serverListHasBeenSet)
  {
   Array<JsonValue> serverListJsonList(m_serverList.size());
   for(unsigned serverListIndex = 0; serverListIndex < serverListJsonList.GetLength(); ++serverListIndex)
   {
     serverListJsonList[serverListIndex].AsObject(m_serverList[serverListIndex].Jsonize());
   }
   payload.WithArray("serverList", std::move(serverListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
