/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageScanningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageScanningConfiguration::ImageScanningConfiguration() : 
    m_imageScanningEnabled(false),
    m_imageScanningEnabledHasBeenSet(false),
    m_ecrConfigurationHasBeenSet(false)
{
}

ImageScanningConfiguration::ImageScanningConfiguration(JsonView jsonValue) : 
    m_imageScanningEnabled(false),
    m_imageScanningEnabledHasBeenSet(false),
    m_ecrConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanningConfiguration& ImageScanningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageScanningEnabled"))
  {
    m_imageScanningEnabled = jsonValue.GetBool("imageScanningEnabled");

    m_imageScanningEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrConfiguration"))
  {
    m_ecrConfiguration = jsonValue.GetObject("ecrConfiguration");

    m_ecrConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageScanningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageScanningEnabledHasBeenSet)
  {
   payload.WithBool("imageScanningEnabled", m_imageScanningEnabled);

  }

  if(m_ecrConfigurationHasBeenSet)
  {
   payload.WithObject("ecrConfiguration", m_ecrConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
