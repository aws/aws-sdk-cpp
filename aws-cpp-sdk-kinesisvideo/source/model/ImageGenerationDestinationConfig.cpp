/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ImageGenerationDestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ImageGenerationDestinationConfig::ImageGenerationDestinationConfig() : 
    m_uriHasBeenSet(false),
    m_destinationRegionHasBeenSet(false)
{
}

ImageGenerationDestinationConfig::ImageGenerationDestinationConfig(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_destinationRegionHasBeenSet(false)
{
  *this = jsonValue;
}

ImageGenerationDestinationConfig& ImageGenerationDestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationRegion"))
  {
    m_destinationRegion = jsonValue.GetString("DestinationRegion");

    m_destinationRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageGenerationDestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("DestinationRegion", m_destinationRegion);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
