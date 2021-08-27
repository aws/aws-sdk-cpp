/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ComputeCapacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ComputeCapacity::ComputeCapacity() : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false)
{
}

ComputeCapacity::ComputeCapacity(JsonView jsonValue) : 
    m_desiredInstances(0),
    m_desiredInstancesHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeCapacity& ComputeCapacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredInstances"))
  {
    m_desiredInstances = jsonValue.GetInteger("DesiredInstances");

    m_desiredInstancesHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_desiredInstancesHasBeenSet)
  {
   payload.WithInteger("DesiredInstances", m_desiredInstances);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
