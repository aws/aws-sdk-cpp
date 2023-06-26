/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ComponentCandidate.h>
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

ComponentCandidate::ComponentCandidate() : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_versionRequirementsHasBeenSet(false)
{
}

ComponentCandidate::ComponentCandidate(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_versionRequirementsHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentCandidate& ComponentCandidate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("versionRequirements"))
  {
    Aws::Map<Aws::String, JsonView> versionRequirementsJsonMap = jsonValue.GetObject("versionRequirements").GetAllObjects();
    for(auto& versionRequirementsItem : versionRequirementsJsonMap)
    {
      m_versionRequirements[versionRequirementsItem.first] = versionRequirementsItem.second.AsString();
    }
    m_versionRequirementsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentCandidate::Jsonize() const
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

  if(m_versionRequirementsHasBeenSet)
  {
   JsonValue versionRequirementsJsonMap;
   for(auto& versionRequirementsItem : m_versionRequirements)
   {
     versionRequirementsJsonMap.WithString(versionRequirementsItem.first, versionRequirementsItem.second);
   }
   payload.WithObject("versionRequirements", std::move(versionRequirementsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
