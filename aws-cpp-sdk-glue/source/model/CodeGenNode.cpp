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

#include <aws/glue/model/CodeGenNode.h>
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

CodeGenNode::CodeGenNode() : 
    m_idHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_lineNumber(0),
    m_lineNumberHasBeenSet(false)
{
}

CodeGenNode::CodeGenNode(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_lineNumber(0),
    m_lineNumberHasBeenSet(false)
{
  *this = jsonValue;
}

CodeGenNode& CodeGenNode::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Array<JsonValue> argsJsonList = jsonValue.GetArray("Args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsObject());
    }
    m_argsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineNumber"))
  {
    m_lineNumber = jsonValue.GetInteger("LineNumber");

    m_lineNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeGenNode::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_argsHasBeenSet)
  {
   Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsObject(m_args[argsIndex].Jsonize());
   }
   payload.WithArray("Args", std::move(argsJsonList));

  }

  if(m_lineNumberHasBeenSet)
  {
   payload.WithInteger("LineNumber", m_lineNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
