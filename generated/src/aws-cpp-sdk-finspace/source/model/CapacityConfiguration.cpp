/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CapacityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

CapacityConfiguration::CapacityConfiguration() : 
    m_nodeTypeHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false)
{
}

CapacityConfiguration::CapacityConfiguration(JsonView jsonValue) : 
    m_nodeTypeHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityConfiguration& CapacityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeType"))
  {
    m_nodeType = jsonValue.GetString("nodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeCount"))
  {
    m_nodeCount = jsonValue.GetInteger("nodeCount");

    m_nodeCountHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("nodeType", m_nodeType);

  }

  if(m_nodeCountHasBeenSet)
  {
   payload.WithInteger("nodeCount", m_nodeCount);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
