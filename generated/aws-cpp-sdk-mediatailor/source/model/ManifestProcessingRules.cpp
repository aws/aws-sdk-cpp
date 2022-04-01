/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ManifestProcessingRules.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

ManifestProcessingRules::ManifestProcessingRules() : 
    m_adMarkerPassthroughHasBeenSet(false)
{
}

ManifestProcessingRules::ManifestProcessingRules(JsonView jsonValue) : 
    m_adMarkerPassthroughHasBeenSet(false)
{
  *this = jsonValue;
}

ManifestProcessingRules& ManifestProcessingRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdMarkerPassthrough"))
  {
    m_adMarkerPassthrough = jsonValue.GetObject("AdMarkerPassthrough");

    m_adMarkerPassthroughHasBeenSet = true;
  }

  return *this;
}

JsonValue ManifestProcessingRules::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkerPassthroughHasBeenSet)
  {
   payload.WithObject("AdMarkerPassthrough", m_adMarkerPassthrough.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
