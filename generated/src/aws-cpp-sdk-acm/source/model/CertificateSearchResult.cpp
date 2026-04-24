/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateSearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CertificateSearchResult::CertificateSearchResult(JsonView jsonValue) { *this = jsonValue; }

CertificateSearchResult& CertificateSearchResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CertificateArn")) {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("X509Attributes")) {
    m_x509Attributes = jsonValue.GetObject("X509Attributes");
    m_x509AttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateMetadata")) {
    m_certificateMetadata = jsonValue.GetObject("CertificateMetadata");
    m_certificateMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateSearchResult::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_x509AttributesHasBeenSet) {
    payload.WithObject("X509Attributes", m_x509Attributes.Jsonize());
  }

  if (m_certificateMetadataHasBeenSet) {
    payload.WithObject("CertificateMetadata", m_certificateMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
