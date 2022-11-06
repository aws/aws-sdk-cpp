/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> listenerArnsJsonList = jsonValue.GetArray("listenerArns");
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
   Aws::Utils::Array<JsonValue> listenerArnsJsonList(m_listenerArns.size());
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
