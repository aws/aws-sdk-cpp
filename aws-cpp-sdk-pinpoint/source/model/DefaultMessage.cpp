﻿/*
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

#include <aws/pinpoint/model/DefaultMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

DefaultMessage::DefaultMessage() : 
    m_bodyHasBeenSet(false),
    m_substitutionsHasBeenSet(false)
{
}

DefaultMessage::DefaultMessage(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_substitutionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultMessage& DefaultMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Substitutions"))
  {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for(auto& substitutionsItem : substitutionsJsonMap)
    {
      Array<JsonView> listOf__stringJsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__stringList);
    }
    m_substitutionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_substitutionsHasBeenSet)
  {
   JsonValue substitutionsJsonMap;
   for(auto& substitutionsItem : m_substitutions)
   {
     Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
     }
     substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Substitutions", std::move(substitutionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
