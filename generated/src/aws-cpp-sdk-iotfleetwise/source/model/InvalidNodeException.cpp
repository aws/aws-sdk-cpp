/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/InvalidNodeException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

InvalidNodeException::InvalidNodeException() : 
    m_invalidNodesHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InvalidNodeException::InvalidNodeException(JsonView jsonValue) : 
    m_invalidNodesHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidNodeException& InvalidNodeException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invalidNodes"))
  {
    Aws::Utils::Array<JsonView> invalidNodesJsonList = jsonValue.GetArray("invalidNodes");
    for(unsigned invalidNodesIndex = 0; invalidNodesIndex < invalidNodesJsonList.GetLength(); ++invalidNodesIndex)
    {
      m_invalidNodes.push_back(invalidNodesJsonList[invalidNodesIndex].AsObject());
    }
    m_invalidNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidNodeException::Jsonize() const
{
  JsonValue payload;

  if(m_invalidNodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> invalidNodesJsonList(m_invalidNodes.size());
   for(unsigned invalidNodesIndex = 0; invalidNodesIndex < invalidNodesJsonList.GetLength(); ++invalidNodesIndex)
   {
     invalidNodesJsonList[invalidNodesIndex].AsObject(m_invalidNodes[invalidNodesIndex].Jsonize());
   }
   payload.WithArray("invalidNodes", std::move(invalidNodesJsonList));

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
