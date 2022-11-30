/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

VectorEnrichmentJobConfig::VectorEnrichmentJobConfig() : 
    m_mapMatchingConfigHasBeenSet(false),
    m_reverseGeocodingConfigHasBeenSet(false)
{
}

VectorEnrichmentJobConfig::VectorEnrichmentJobConfig(JsonView jsonValue) : 
    m_mapMatchingConfigHasBeenSet(false),
    m_reverseGeocodingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobConfig& VectorEnrichmentJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MapMatchingConfig"))
  {
    m_mapMatchingConfig = jsonValue.GetObject("MapMatchingConfig");

    m_mapMatchingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReverseGeocodingConfig"))
  {
    m_reverseGeocodingConfig = jsonValue.GetObject("ReverseGeocodingConfig");

    m_reverseGeocodingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mapMatchingConfigHasBeenSet)
  {
   payload.WithObject("MapMatchingConfig", m_mapMatchingConfig.Jsonize());

  }

  if(m_reverseGeocodingConfigHasBeenSet)
  {
   payload.WithObject("ReverseGeocodingConfig", m_reverseGeocodingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
