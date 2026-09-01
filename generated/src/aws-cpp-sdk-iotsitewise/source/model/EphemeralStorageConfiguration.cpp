/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/EphemeralStorageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

EphemeralStorageConfiguration::EphemeralStorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

EphemeralStorageConfiguration& EphemeralStorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("storageClass")) {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("storageClass"));
    m_storageClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageSizeInGiB")) {
    m_storageSizeInGiB = jsonValue.GetInteger("storageSizeInGiB");
    m_storageSizeInGiBHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemeralStorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_storageClassHasBeenSet) {
    payload.WithString("storageClass", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if (m_storageSizeInGiBHasBeenSet) {
    payload.WithInteger("storageSizeInGiB", m_storageSizeInGiB);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
