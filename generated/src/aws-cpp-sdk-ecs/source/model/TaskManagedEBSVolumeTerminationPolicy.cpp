/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskManagedEBSVolumeTerminationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

TaskManagedEBSVolumeTerminationPolicy::TaskManagedEBSVolumeTerminationPolicy() : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
}

TaskManagedEBSVolumeTerminationPolicy::TaskManagedEBSVolumeTerminationPolicy(JsonView jsonValue) : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
  *this = jsonValue;
}

TaskManagedEBSVolumeTerminationPolicy& TaskManagedEBSVolumeTerminationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("deleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskManagedEBSVolumeTerminationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("deleteOnTermination", m_deleteOnTermination);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
