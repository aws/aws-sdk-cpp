/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ScannedResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ScannedResourceDetails::ScannedResourceDetails(JsonView jsonValue) { *this = jsonValue; }

ScannedResourceDetails& ScannedResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ebsVolume")) {
    m_ebsVolume = jsonValue.GetObject("ebsVolume");
    m_ebsVolumeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ebsSnapshot")) {
    m_ebsSnapshot = jsonValue.GetObject("ebsSnapshot");
    m_ebsSnapshotHasBeenSet = true;
  }
  return *this;
}

JsonValue ScannedResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_ebsVolumeHasBeenSet) {
    payload.WithObject("ebsVolume", m_ebsVolume.Jsonize());
  }

  if (m_ebsSnapshotHasBeenSet) {
    payload.WithObject("ebsSnapshot", m_ebsSnapshot.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
