/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ScannedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ScannedResource::ScannedResource(JsonView jsonValue) { *this = jsonValue; }

ScannedResource& ScannedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scannedResourceArn")) {
    m_scannedResourceArn = jsonValue.GetString("scannedResourceArn");
    m_scannedResourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scannedResourceType")) {
    m_scannedResourceType =
        MalwareProtectionResourceTypeMapper::GetMalwareProtectionResourceTypeForName(jsonValue.GetString("scannedResourceType"));
    m_scannedResourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scannedResourceStatus")) {
    m_scannedResourceStatus =
        MalwareProtectionScanStatusMapper::GetMalwareProtectionScanStatusForName(jsonValue.GetString("scannedResourceStatus"));
    m_scannedResourceStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanStatusReason")) {
    m_scanStatusReason = ScanStatusReasonMapper::GetScanStatusReasonForName(jsonValue.GetString("scanStatusReason"));
    m_scanStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceDetails")) {
    m_resourceDetails = jsonValue.GetObject("resourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScannedResource::Jsonize() const {
  JsonValue payload;

  if (m_scannedResourceArnHasBeenSet) {
    payload.WithString("scannedResourceArn", m_scannedResourceArn);
  }

  if (m_scannedResourceTypeHasBeenSet) {
    payload.WithString("scannedResourceType",
                       MalwareProtectionResourceTypeMapper::GetNameForMalwareProtectionResourceType(m_scannedResourceType));
  }

  if (m_scannedResourceStatusHasBeenSet) {
    payload.WithString("scannedResourceStatus",
                       MalwareProtectionScanStatusMapper::GetNameForMalwareProtectionScanStatus(m_scannedResourceStatus));
  }

  if (m_scanStatusReasonHasBeenSet) {
    payload.WithString("scanStatusReason", ScanStatusReasonMapper::GetNameForScanStatusReason(m_scanStatusReason));
  }

  if (m_resourceDetailsHasBeenSet) {
    payload.WithObject("resourceDetails", m_resourceDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
