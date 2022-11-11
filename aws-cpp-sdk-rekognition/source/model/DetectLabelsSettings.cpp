/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DetectLabelsSettings::DetectLabelsSettings() : 
    m_generalLabelsHasBeenSet(false),
    m_imagePropertiesHasBeenSet(false)
{
}

DetectLabelsSettings::DetectLabelsSettings(JsonView jsonValue) : 
    m_generalLabelsHasBeenSet(false),
    m_imagePropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DetectLabelsSettings& DetectLabelsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeneralLabels"))
  {
    m_generalLabels = jsonValue.GetObject("GeneralLabels");

    m_generalLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageProperties"))
  {
    m_imageProperties = jsonValue.GetObject("ImageProperties");

    m_imagePropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectLabelsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_generalLabelsHasBeenSet)
  {
   payload.WithObject("GeneralLabels", m_generalLabels.Jsonize());

  }

  if(m_imagePropertiesHasBeenSet)
  {
   payload.WithObject("ImageProperties", m_imageProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
