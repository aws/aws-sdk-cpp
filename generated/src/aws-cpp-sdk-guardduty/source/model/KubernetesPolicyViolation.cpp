/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/KubernetesPolicyViolation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

KubernetesPolicyViolation::KubernetesPolicyViolation(JsonView jsonValue) { *this = jsonValue; }

KubernetesPolicyViolation& KubernetesPolicyViolation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("violationType")) {
    m_violationType = jsonValue.GetString("violationType");
    m_violationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedResource")) {
    m_affectedResource = jsonValue.GetString("affectedResource");
    m_affectedResourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subject")) {
    m_subject = jsonValue.GetString("subject");
    m_subjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grantedAccess")) {
    m_grantedAccess = jsonValue.GetString("grantedAccess");
    m_grantedAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exposureVector")) {
    m_exposureVector = jsonValue.GetString("exposureVector");
    m_exposureVectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("misconfigurationImpact")) {
    m_misconfigurationImpact = jsonValue.GetString("misconfigurationImpact");
    m_misconfigurationImpactHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesPolicyViolation::Jsonize() const {
  JsonValue payload;

  if (m_violationTypeHasBeenSet) {
    payload.WithString("violationType", m_violationType);
  }

  if (m_affectedResourceHasBeenSet) {
    payload.WithString("affectedResource", m_affectedResource);
  }

  if (m_subjectHasBeenSet) {
    payload.WithString("subject", m_subject);
  }

  if (m_grantedAccessHasBeenSet) {
    payload.WithString("grantedAccess", m_grantedAccess);
  }

  if (m_exposureVectorHasBeenSet) {
    payload.WithString("exposureVector", m_exposureVector);
  }

  if (m_misconfigurationImpactHasBeenSet) {
    payload.WithString("misconfigurationImpact", m_misconfigurationImpact);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
