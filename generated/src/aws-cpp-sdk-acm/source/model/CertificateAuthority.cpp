/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateAuthority.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CertificateAuthority::CertificateAuthority(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthority& CertificateAuthority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PublicCertificateAuthority")) {
    m_publicCertificateAuthority = jsonValue.GetObject("PublicCertificateAuthority");
    m_publicCertificateAuthorityHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAuthority::Jsonize() const {
  JsonValue payload;

  if (m_publicCertificateAuthorityHasBeenSet) {
    payload.WithObject("PublicCertificateAuthority", m_publicCertificateAuthority.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
