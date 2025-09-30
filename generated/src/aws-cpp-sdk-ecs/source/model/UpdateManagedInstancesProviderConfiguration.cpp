/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateManagedInstancesProviderConfiguration.h>
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

UpdateManagedInstancesProviderConfiguration::UpdateManagedInstancesProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateManagedInstancesProviderConfiguration& UpdateManagedInstancesProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("infrastructureRoleArn"))
  {
    m_infrastructureRoleArn = jsonValue.GetString("infrastructureRoleArn");
    m_infrastructureRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceLaunchTemplate"))
  {
    m_instanceLaunchTemplate = jsonValue.GetObject("instanceLaunchTemplate");
    m_instanceLaunchTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propagateTags"))
  {
    m_propagateTags = PropagateMITagsMapper::GetPropagateMITagsForName(jsonValue.GetString("propagateTags"));
    m_propagateTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateManagedInstancesProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_infrastructureRoleArnHasBeenSet)
  {
   payload.WithString("infrastructureRoleArn", m_infrastructureRoleArn);

  }

  if(m_instanceLaunchTemplateHasBeenSet)
  {
   payload.WithObject("instanceLaunchTemplate", m_instanceLaunchTemplate.Jsonize());

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("propagateTags", PropagateMITagsMapper::GetNameForPropagateMITags(m_propagateTags));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
