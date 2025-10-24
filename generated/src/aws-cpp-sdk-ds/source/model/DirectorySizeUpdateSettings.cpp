/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/DirectorySizeUpdateSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

DirectorySizeUpdateSettings::DirectorySizeUpdateSettings(JsonView jsonValue) { *this = jsonValue; }

DirectorySizeUpdateSettings& DirectorySizeUpdateSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DirectorySize")) {
    m_directorySize = DirectorySizeMapper::GetDirectorySizeForName(jsonValue.GetString("DirectorySize"));
    m_directorySizeHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectorySizeUpdateSettings::Jsonize() const {
  JsonValue payload;

  if (m_directorySizeHasBeenSet) {
    payload.WithString("DirectorySize", DirectorySizeMapper::GetNameForDirectorySize(m_directorySize));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
