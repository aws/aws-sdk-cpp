/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/TrailProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

TrailProperties::TrailProperties() : 
    m_cloudTrailArnHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_allRegions(false),
    m_allRegionsHasBeenSet(false)
{
}

TrailProperties::TrailProperties(JsonView jsonValue) : 
    m_cloudTrailArnHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_allRegions(false),
    m_allRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

TrailProperties& TrailProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudTrailArn"))
  {
    m_cloudTrailArn = jsonValue.GetString("cloudTrailArn");

    m_cloudTrailArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allRegions"))
  {
    m_allRegions = jsonValue.GetBool("allRegions");

    m_allRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrailProperties::Jsonize() const
{
  JsonValue payload;

  if(m_cloudTrailArnHasBeenSet)
  {
   payload.WithString("cloudTrailArn", m_cloudTrailArn);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_allRegionsHasBeenSet)
  {
   payload.WithBool("allRegions", m_allRegions);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
