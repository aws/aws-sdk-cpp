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

#include <aws/appmesh/model/WeightedTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

WeightedTarget::WeightedTarget() : 
    m_virtualNodeHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

WeightedTarget::WeightedTarget(JsonView jsonValue) : 
    m_virtualNodeHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

WeightedTarget& WeightedTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualNode"))
  {
    m_virtualNode = jsonValue.GetString("virtualNode");

    m_virtualNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue WeightedTarget::Jsonize() const
{
  JsonValue payload;

  if(m_virtualNodeHasBeenSet)
  {
   payload.WithString("virtualNode", m_virtualNode);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
