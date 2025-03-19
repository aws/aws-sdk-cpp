/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/RegionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

RegionConfiguration::RegionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RegionConfiguration& RegionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = ControlScopeMapper::GetControlScopeForName(jsonValue.GetString("Scope"));
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeployableRegions"))
  {
    Aws::Utils::Array<JsonView> deployableRegionsJsonList = jsonValue.GetArray("DeployableRegions");
    for(unsigned deployableRegionsIndex = 0; deployableRegionsIndex < deployableRegionsJsonList.GetLength(); ++deployableRegionsIndex)
    {
      m_deployableRegions.push_back(deployableRegionsJsonList[deployableRegionsIndex].AsString());
    }
    m_deployableRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RegionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ControlScopeMapper::GetNameForControlScope(m_scope));
  }

  if(m_deployableRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deployableRegionsJsonList(m_deployableRegions.size());
   for(unsigned deployableRegionsIndex = 0; deployableRegionsIndex < deployableRegionsJsonList.GetLength(); ++deployableRegionsIndex)
   {
     deployableRegionsJsonList[deployableRegionsIndex].AsString(m_deployableRegions[deployableRegionsIndex]);
   }
   payload.WithArray("DeployableRegions", std::move(deployableRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
