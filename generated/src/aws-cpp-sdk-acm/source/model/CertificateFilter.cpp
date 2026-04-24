/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CertificateFilter::CertificateFilter(JsonView jsonValue) { *this = jsonValue; }

CertificateFilter& CertificateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CertificateArn")) {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("X509AttributeFilter")) {
    m_x509AttributeFilter = jsonValue.GetObject("X509AttributeFilter");
    m_x509AttributeFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcmCertificateMetadataFilter")) {
    m_acmCertificateMetadataFilter = jsonValue.GetObject("AcmCertificateMetadataFilter");
    m_acmCertificateMetadataFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateFilter::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_x509AttributeFilterHasBeenSet) {
    payload.WithObject("X509AttributeFilter", m_x509AttributeFilter.Jsonize());
  }

  if (m_acmCertificateMetadataFilterHasBeenSet) {
    payload.WithObject("AcmCertificateMetadataFilter", m_acmCertificateMetadataFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
