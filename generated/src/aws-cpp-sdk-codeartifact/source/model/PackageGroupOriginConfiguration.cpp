/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupOriginConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

PackageGroupOriginConfiguration::PackageGroupOriginConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageGroupOriginConfiguration& PackageGroupOriginConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("restrictions"))
  {
    Aws::Map<Aws::String, JsonView> restrictionsJsonMap = jsonValue.GetObject("restrictions").GetAllObjects();
    for(auto& restrictionsItem : restrictionsJsonMap)
    {
      m_restrictions[PackageGroupOriginRestrictionTypeMapper::GetPackageGroupOriginRestrictionTypeForName(restrictionsItem.first)] = restrictionsItem.second.AsObject();
    }
    m_restrictionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageGroupOriginConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_restrictionsHasBeenSet)
  {
   JsonValue restrictionsJsonMap;
   for(auto& restrictionsItem : m_restrictions)
   {
     restrictionsJsonMap.WithObject(PackageGroupOriginRestrictionTypeMapper::GetNameForPackageGroupOriginRestrictionType(restrictionsItem.first), restrictionsItem.second.Jsonize());
   }
   payload.WithObject("restrictions", std::move(restrictionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
