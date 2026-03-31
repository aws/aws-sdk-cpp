/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CertificateMetadata::CertificateMetadata(JsonView jsonValue) { *this = jsonValue; }

CertificateMetadata& CertificateMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcmCertificateMetadata")) {
    m_acmCertificateMetadata = jsonValue.GetObject("AcmCertificateMetadata");
    m_acmCertificateMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateMetadata::Jsonize() const {
  JsonValue payload;

  if (m_acmCertificateMetadataHasBeenSet) {
    payload.WithObject("AcmCertificateMetadata", m_acmCertificateMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
