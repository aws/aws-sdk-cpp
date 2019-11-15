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

#include <aws/eks/model/NodegroupScalingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

NodegroupScalingConfig::NodegroupScalingConfig() : 
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredSize(0),
    m_desiredSizeHasBeenSet(false)
{
}

NodegroupScalingConfig::NodegroupScalingConfig(JsonView jsonValue) : 
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredSize(0),
    m_desiredSizeHasBeenSet(false)
{
  *this = jsonValue;
}

NodegroupScalingConfig& NodegroupScalingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minSize"))
  {
    m_minSize = jsonValue.GetInteger("minSize");

    m_minSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSize"))
  {
    m_maxSize = jsonValue.GetInteger("maxSize");

    m_maxSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredSize"))
  {
    m_desiredSize = jsonValue.GetInteger("desiredSize");

    m_desiredSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue NodegroupScalingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("minSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("maxSize", m_maxSize);

  }

  if(m_desiredSizeHasBeenSet)
  {
   payload.WithInteger("desiredSize", m_desiredSize);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
