/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MetricsConfigurationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

MetricsConfigurationPolicy::MetricsConfigurationPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricsConfigurationPolicy& MetricsConfigurationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("noiseLevel"))
  {
    m_noiseLevel = NoiseLevelTypeMapper::GetNoiseLevelTypeForName(jsonValue.GetString("noiseLevel"));
    m_noiseLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsConfigurationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_noiseLevelHasBeenSet)
  {
   payload.WithString("noiseLevel", NoiseLevelTypeMapper::GetNameForNoiseLevelType(m_noiseLevel));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
