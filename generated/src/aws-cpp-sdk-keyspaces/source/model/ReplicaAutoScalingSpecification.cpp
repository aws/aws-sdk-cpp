/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ReplicaAutoScalingSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ReplicaAutoScalingSpecification::ReplicaAutoScalingSpecification() : 
    m_regionHasBeenSet(false),
    m_autoScalingSpecificationHasBeenSet(false)
{
}

ReplicaAutoScalingSpecification::ReplicaAutoScalingSpecification(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_autoScalingSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaAutoScalingSpecification& ReplicaAutoScalingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingSpecification"))
  {
    m_autoScalingSpecification = jsonValue.GetObject("autoScalingSpecification");

    m_autoScalingSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaAutoScalingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_autoScalingSpecificationHasBeenSet)
  {
   payload.WithObject("autoScalingSpecification", m_autoScalingSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
