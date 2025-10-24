﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/AssetModelPropertyBindingValueFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

AssetModelPropertyBindingValueFilter::AssetModelPropertyBindingValueFilter(JsonView jsonValue) { *this = jsonValue; }

AssetModelPropertyBindingValueFilter& AssetModelPropertyBindingValueFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("assetModelId")) {
    m_assetModelId = jsonValue.GetString("assetModelId");
    m_assetModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propertyId")) {
    m_propertyId = jsonValue.GetString("propertyId");
    m_propertyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetModelPropertyBindingValueFilter::Jsonize() const {
  JsonValue payload;

  if (m_assetModelIdHasBeenSet) {
    payload.WithString("assetModelId", m_assetModelId);
  }

  if (m_propertyIdHasBeenSet) {
    payload.WithString("propertyId", m_propertyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
