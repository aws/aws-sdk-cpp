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

#include <aws/mq/model/Configurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

Configurations::Configurations() : 
    m_currentHasBeenSet(false),
    m_historyHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
}

Configurations::Configurations(const JsonValue& jsonValue) : 
    m_currentHasBeenSet(false),
    m_historyHasBeenSet(false),
    m_pendingHasBeenSet(false)
{
  *this = jsonValue;
}

Configurations& Configurations::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("current"))
  {
    m_current = jsonValue.GetObject("current");

    m_currentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("history"))
  {
    Array<JsonValue> historyJsonList = jsonValue.GetArray("history");
    for(unsigned historyIndex = 0; historyIndex < historyJsonList.GetLength(); ++historyIndex)
    {
      m_history.push_back(historyJsonList[historyIndex].AsObject());
    }
    m_historyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pending"))
  {
    m_pending = jsonValue.GetObject("pending");

    m_pendingHasBeenSet = true;
  }

  return *this;
}

JsonValue Configurations::Jsonize() const
{
  JsonValue payload;

  if(m_currentHasBeenSet)
  {
   payload.WithObject("current", m_current.Jsonize());

  }

  if(m_historyHasBeenSet)
  {
   Array<JsonValue> historyJsonList(m_history.size());
   for(unsigned historyIndex = 0; historyIndex < historyJsonList.GetLength(); ++historyIndex)
   {
     historyJsonList[historyIndex].AsObject(m_history[historyIndex].Jsonize());
   }
   payload.WithArray("history", std::move(historyJsonList));

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithObject("pending", m_pending.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
