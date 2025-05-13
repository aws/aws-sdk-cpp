/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/MultiRegionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DSQL
{
namespace Model
{

MultiRegionProperties::MultiRegionProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

MultiRegionProperties& MultiRegionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("witnessRegion"))
  {
    m_witnessRegion = jsonValue.GetString("witnessRegion");
    m_witnessRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsString());
    }
    m_clustersHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiRegionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_witnessRegionHasBeenSet)
  {
   payload.WithString("witnessRegion", m_witnessRegion);

  }

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsString(m_clusters[clustersIndex]);
   }
   payload.WithArray("clusters", std::move(clustersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DSQL
} // namespace Aws
