/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanResultInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ScanResultInfo::ScanResultInfo(JsonView jsonValue) { *this = jsonValue; }

ScanResultInfo& ScanResultInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ScanResultStatus")) {
    m_scanResultStatus = ScanResultStatusMapper::GetScanResultStatusForName(jsonValue.GetString("ScanResultStatus"));
    m_scanResultStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanResultInfo::Jsonize() const {
  JsonValue payload;

  if (m_scanResultStatusHasBeenSet) {
    payload.WithString("ScanResultStatus", ScanResultStatusMapper::GetNameForScanResultStatus(m_scanResultStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
