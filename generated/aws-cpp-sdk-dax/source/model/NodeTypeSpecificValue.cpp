/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/NodeTypeSpecificValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

NodeTypeSpecificValue::NodeTypeSpecificValue() : 
    m_nodeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

NodeTypeSpecificValue::NodeTypeSpecificValue(JsonView jsonValue) : 
    m_nodeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

NodeTypeSpecificValue& NodeTypeSpecificValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeTypeSpecificValue::Jsonize() const
{
  JsonValue payload;

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
