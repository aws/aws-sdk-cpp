/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/InstalledComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

InstalledComponent::InstalledComponent() : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_lifecycleState(InstalledComponentLifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_lifecycleStateDetailsHasBeenSet(false),
    m_isRoot(false),
    m_isRootHasBeenSet(false)
{
}

InstalledComponent::InstalledComponent(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_lifecycleState(InstalledComponentLifecycleState::NOT_SET),
    m_lifecycleStateHasBeenSet(false),
    m_lifecycleStateDetailsHasBeenSet(false),
    m_isRoot(false),
    m_isRootHasBeenSet(false)
{
  *this = jsonValue;
}

InstalledComponent& InstalledComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

    m_componentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleState"))
  {
    m_lifecycleState = InstalledComponentLifecycleStateMapper::GetInstalledComponentLifecycleStateForName(jsonValue.GetString("lifecycleState"));

    m_lifecycleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStateDetails"))
  {
    m_lifecycleStateDetails = jsonValue.GetString("lifecycleStateDetails");

    m_lifecycleStateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isRoot"))
  {
    m_isRoot = jsonValue.GetBool("isRoot");

    m_isRootHasBeenSet = true;
  }

  return *this;
}

JsonValue InstalledComponent::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentVersionHasBeenSet)
  {
   payload.WithString("componentVersion", m_componentVersion);

  }

  if(m_lifecycleStateHasBeenSet)
  {
   payload.WithString("lifecycleState", InstalledComponentLifecycleStateMapper::GetNameForInstalledComponentLifecycleState(m_lifecycleState));
  }

  if(m_lifecycleStateDetailsHasBeenSet)
  {
   payload.WithString("lifecycleStateDetails", m_lifecycleStateDetails);

  }

  if(m_isRootHasBeenSet)
  {
   payload.WithBool("isRoot", m_isRoot);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
