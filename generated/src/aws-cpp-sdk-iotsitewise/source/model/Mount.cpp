/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/Mount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

Mount::Mount(JsonView jsonValue) { *this = jsonValue; }

Mount& Mount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relativePath")) {
    m_relativePath = jsonValue.GetString("relativePath");
    m_relativePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageType")) {
    m_storageType = MountStorageTypeMapper::GetMountStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Mount::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_relativePathHasBeenSet) {
    payload.WithString("relativePath", m_relativePath);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_storageTypeHasBeenSet) {
    payload.WithString("storageType", MountStorageTypeMapper::GetNameForMountStorageType(m_storageType));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
