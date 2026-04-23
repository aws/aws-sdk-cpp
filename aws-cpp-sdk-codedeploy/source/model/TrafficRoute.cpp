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

#include <aws/codedeploy/model/TrafficRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TrafficRoute::TrafficRoute() : 
    m_listenerArnsHasBeenSet(false)
{
}

TrafficRoute::TrafficRoute(JsonView jsonValue) : 
    m_listenerArnsHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficRoute& TrafficRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("listenerArns"))
  {
    Array<JsonView> listenerArnsJsonList = jsonValue.GetArray("listenerArns");
    for(unsigned listenerArnsIndex = 0; listenerArnsIndex < listenerArnsJsonList.GetLength(); ++listenerArnsIndex)
    {
      m_listenerArns.push_back(listenerArnsJsonList[listenerArnsIndex].AsString());
    }
    m_listenerArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficRoute::Jsonize() const
{
  JsonValue payload;

  if(m_listenerArnsHasBeenSet)
  {
   Array<JsonValue> listenerArnsJsonList(m_listenerArns.size());
   for(unsigned listenerArnsIndex = 0; listenerArnsIndex < listenerArnsJsonList.GetLength(); ++listenerArnsIndex)
   {
     listenerArnsJsonList[listenerArnsIndex].AsString(m_listenerArns[listenerArnsIndex]);
   }
   payload.WithArray("listenerArns", std::move(listenerArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
