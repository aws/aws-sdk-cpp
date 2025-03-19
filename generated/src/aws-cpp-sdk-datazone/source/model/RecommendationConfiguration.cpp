/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RecommendationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RecommendationConfiguration::RecommendationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendationConfiguration& RecommendationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableBusinessNameGeneration"))
  {
    m_enableBusinessNameGeneration = jsonValue.GetBool("enableBusinessNameGeneration");
    m_enableBusinessNameGenerationHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableBusinessNameGenerationHasBeenSet)
  {
   payload.WithBool("enableBusinessNameGeneration", m_enableBusinessNameGeneration);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
