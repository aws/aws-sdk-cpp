/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ActiveCertificateAuthority.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ActiveCertificateAuthority::ActiveCertificateAuthority(JsonView jsonValue) { *this = jsonValue; }

ActiveCertificateAuthority& ActiveCertificateAuthority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activatedBy")) {
    m_activatedBy = CertificateAuthorityActivatedByMapper::GetCertificateAuthorityActivatedByForName(jsonValue.GetString("activatedBy"));
    m_activatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue ActiveCertificateAuthority::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_activatedByHasBeenSet) {
    payload.WithString("activatedBy", CertificateAuthorityActivatedByMapper::GetNameForCertificateAuthorityActivatedBy(m_activatedBy));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
