/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentDependencyRequirement.h>
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

ComponentDependencyRequirement::ComponentDependencyRequirement() : 
    m_versionRequirementHasBeenSet(false),
    m_dependencyType(ComponentDependencyType::NOT_SET),
    m_dependencyTypeHasBeenSet(false)
{
}

ComponentDependencyRequirement::ComponentDependencyRequirement(JsonView jsonValue) : 
    m_versionRequirementHasBeenSet(false),
    m_dependencyType(ComponentDependencyType::NOT_SET),
    m_dependencyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentDependencyRequirement& ComponentDependencyRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("versionRequirement"))
  {
    m_versionRequirement = jsonValue.GetString("versionRequirement");

    m_versionRequirementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependencyType"))
  {
    m_dependencyType = ComponentDependencyTypeMapper::GetComponentDependencyTypeForName(jsonValue.GetString("dependencyType"));

    m_dependencyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentDependencyRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_versionRequirementHasBeenSet)
  {
   payload.WithString("versionRequirement", m_versionRequirement);

  }

  if(m_dependencyTypeHasBeenSet)
  {
   payload.WithString("dependencyType", ComponentDependencyTypeMapper::GetNameForComponentDependencyType(m_dependencyType));
  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
