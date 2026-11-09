/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/ImageScanningConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

ImageScanningConfiguration::ImageScanningConfiguration(JsonView jsonValue) { *this = jsonValue; }

ImageScanningConfiguration& ImageScanningConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageScanningEnabled")) {
    m_imageScanningEnabled = jsonValue.GetBool("imageScanningEnabled");
    m_imageScanningEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrConfiguration")) {
    m_ecrConfiguration = jsonValue.GetObject("ecrConfiguration");
    m_ecrConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageScanningTypes")) {
    Aws::Utils::Array<JsonView> imageScanningTypesJsonList = jsonValue.GetArray("imageScanningTypes");
    for (unsigned imageScanningTypesIndex = 0; imageScanningTypesIndex < imageScanningTypesJsonList.GetLength();
         ++imageScanningTypesIndex) {
      m_imageScanningTypes.push_back(
          ImageScanningTypeMapper::GetImageScanningTypeForName(imageScanningTypesJsonList[imageScanningTypesIndex].AsString()));
    }
    m_imageScanningTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanResultCondition")) {
    m_scanResultCondition = jsonValue.GetObject("scanResultCondition");
    m_scanResultConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageScanningConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_imageScanningEnabledHasBeenSet) {
    payload.WithBool("imageScanningEnabled", m_imageScanningEnabled);
  }

  if (m_ecrConfigurationHasBeenSet) {
    payload.WithObject("ecrConfiguration", m_ecrConfiguration.Jsonize());
  }

  if (m_imageScanningTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> imageScanningTypesJsonList(m_imageScanningTypes.size());
    for (unsigned imageScanningTypesIndex = 0; imageScanningTypesIndex < imageScanningTypesJsonList.GetLength();
         ++imageScanningTypesIndex) {
      imageScanningTypesJsonList[imageScanningTypesIndex].AsString(
          ImageScanningTypeMapper::GetNameForImageScanningType(m_imageScanningTypes[imageScanningTypesIndex]));
    }
    payload.WithArray("imageScanningTypes", std::move(imageScanningTypesJsonList));
  }

  if (m_scanResultConditionHasBeenSet) {
    payload.WithObject("scanResultCondition", m_scanResultCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
