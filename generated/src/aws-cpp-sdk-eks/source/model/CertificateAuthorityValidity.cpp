/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CertificateAuthorityValidity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CertificateAuthorityValidity::CertificateAuthorityValidity(JsonView jsonValue) { *this = jsonValue; }

CertificateAuthorityValidity& CertificateAuthorityValidity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("notBefore")) {
    m_notBefore = jsonValue.GetDouble("notBefore");
    m_notBeforeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notAfter")) {
    m_notAfter = jsonValue.GetDouble("notAfter");
    m_notAfterHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateAuthorityValidity::Jsonize() const {
  JsonValue payload;

  if (m_notBeforeHasBeenSet) {
    payload.WithDouble("notBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if (m_notAfterHasBeenSet) {
    payload.WithDouble("notAfter", m_notAfter.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
