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

#include <aws/batch/model/NodeRangeProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

NodeRangeProperty::NodeRangeProperty() : 
    m_targetNodesHasBeenSet(false),
    m_containerHasBeenSet(false)
{
}

NodeRangeProperty::NodeRangeProperty(JsonView jsonValue) : 
    m_targetNodesHasBeenSet(false),
    m_containerHasBeenSet(false)
{
  *this = jsonValue;
}

NodeRangeProperty& NodeRangeProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetNodes"))
  {
    m_targetNodes = jsonValue.GetString("targetNodes");

    m_targetNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");

    m_containerHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeRangeProperty::Jsonize() const
{
  JsonValue payload;

  if(m_targetNodesHasBeenSet)
  {
   payload.WithString("targetNodes", m_targetNodes);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
