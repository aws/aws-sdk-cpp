/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Compatibility.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Compatibility::Compatibility() : 
    m_clusterVersionHasBeenSet(false),
    m_platformVersionsHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false)
{
}

Compatibility::Compatibility(JsonView jsonValue) : 
    m_clusterVersionHasBeenSet(false),
    m_platformVersionsHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Compatibility& Compatibility::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterVersion"))
  {
    m_clusterVersion = jsonValue.GetString("clusterVersion");

    m_clusterVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersions"))
  {
    Aws::Utils::Array<JsonView> platformVersionsJsonList = jsonValue.GetArray("platformVersions");
    for(unsigned platformVersionsIndex = 0; platformVersionsIndex < platformVersionsJsonList.GetLength(); ++platformVersionsIndex)
    {
      m_platformVersions.push_back(platformVersionsJsonList[platformVersionsIndex].AsString());
    }
    m_platformVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultVersion"))
  {
    m_defaultVersion = jsonValue.GetBool("defaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Compatibility::Jsonize() const
{
  JsonValue payload;

  if(m_clusterVersionHasBeenSet)
  {
   payload.WithString("clusterVersion", m_clusterVersion);

  }

  if(m_platformVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformVersionsJsonList(m_platformVersions.size());
   for(unsigned platformVersionsIndex = 0; platformVersionsIndex < platformVersionsJsonList.GetLength(); ++platformVersionsIndex)
   {
     platformVersionsJsonList[platformVersionsIndex].AsString(m_platformVersions[platformVersionsIndex]);
   }
   payload.WithArray("platformVersions", std::move(platformVersionsJsonList));

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithBool("defaultVersion", m_defaultVersion);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
