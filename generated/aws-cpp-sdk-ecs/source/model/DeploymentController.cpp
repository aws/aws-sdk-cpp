/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeploymentController.h>
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

DeploymentController::DeploymentController() : 
    m_type(DeploymentControllerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DeploymentController::DeploymentController(JsonView jsonValue) : 
    m_type(DeploymentControllerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentController& DeploymentController::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DeploymentControllerTypeMapper::GetDeploymentControllerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentController::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DeploymentControllerTypeMapper::GetNameForDeploymentControllerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
