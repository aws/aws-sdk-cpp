/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmCertificateMetadataFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

AcmCertificateMetadataFilter::AcmCertificateMetadataFilter(JsonView jsonValue) { *this = jsonValue; }

AcmCertificateMetadataFilter& AcmCertificateMetadataFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RenewalStatus")) {
    m_renewalStatus = RenewalStatusMapper::GetRenewalStatusForName(jsonValue.GetString("RenewalStatus"));
    m_renewalStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InUse")) {
    m_inUse = jsonValue.GetBool("InUse");
    m_inUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Exported")) {
    m_exported = jsonValue.GetBool("Exported");
    m_exportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportOption")) {
    m_exportOption = CertificateExportMapper::GetCertificateExportForName(jsonValue.GetString("ExportOption"));
    m_exportOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedBy")) {
    m_managedBy = CertificateManagedByMapper::GetCertificateManagedByForName(jsonValue.GetString("ManagedBy"));
    m_managedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationMethod")) {
    m_validationMethod = ValidationMethodMapper::GetValidationMethodForName(jsonValue.GetString("ValidationMethod"));
    m_validationMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue AcmCertificateMetadataFilter::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if (m_renewalStatusHasBeenSet) {
    payload.WithString("RenewalStatus", RenewalStatusMapper::GetNameForRenewalStatus(m_renewalStatus));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if (m_inUseHasBeenSet) {
    payload.WithBool("InUse", m_inUse);
  }

  if (m_exportedHasBeenSet) {
    payload.WithBool("Exported", m_exported);
  }

  if (m_exportOptionHasBeenSet) {
    payload.WithString("ExportOption", CertificateExportMapper::GetNameForCertificateExport(m_exportOption));
  }

  if (m_managedByHasBeenSet) {
    payload.WithString("ManagedBy", CertificateManagedByMapper::GetNameForCertificateManagedBy(m_managedBy));
  }

  if (m_validationMethodHasBeenSet) {
    payload.WithString("ValidationMethod", ValidationMethodMapper::GetNameForValidationMethod(m_validationMethod));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
