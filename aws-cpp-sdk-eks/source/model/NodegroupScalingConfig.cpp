/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
