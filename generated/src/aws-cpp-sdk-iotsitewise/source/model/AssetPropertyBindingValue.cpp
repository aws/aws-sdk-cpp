﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/AssetPropertyBindingValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

AssetPropertyBindingValue::AssetPropertyBindingValue(JsonView jsonValue) { *this = jsonValue; }

AssetPropertyBindingValue& AssetPropertyBindingValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetId")) {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propertyId")) {
    m_propertyId = jsonValue.GetString("propertyId");
    m_propertyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetPropertyBindingValue::Jsonize() const {
  JsonValue payload;

  if (m_assetIdHasBeenSet) {
    payload.WithString("assetId", m_assetId);
  }

  if (m_propertyIdHasBeenSet) {
    payload.WithString("propertyId", m_propertyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
