/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPodSecurityContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

EksPodSecurityContext::EksPodSecurityContext(JsonView jsonValue) { *this = jsonValue; }

EksPodSecurityContext& EksPodSecurityContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runAsUser")) {
    m_runAsUser = jsonValue.GetInt64("runAsUser");
    m_runAsUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runAsGroup")) {
    m_runAsGroup = jsonValue.GetInt64("runAsGroup");
    m_runAsGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runAsNonRoot")) {
    m_runAsNonRoot = jsonValue.GetBool("runAsNonRoot");
    m_runAsNonRootHasBeenSet = true;
  }
  if (jsonValue.ValueExists("seccompProfile")) {
    m_seccompProfile = jsonValue.GetObject("seccompProfile");
    m_seccompProfileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fsGroup")) {
    m_fsGroup = jsonValue.GetInt64("fsGroup");
    m_fsGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue EksPodSecurityContext::Jsonize() const {
  JsonValue payload;

  if (m_runAsUserHasBeenSet) {
    payload.WithInt64("runAsUser", m_runAsUser);
  }

  if (m_runAsGroupHasBeenSet) {
    payload.WithInt64("runAsGroup", m_runAsGroup);
  }

  if (m_runAsNonRootHasBeenSet) {
    payload.WithBool("runAsNonRoot", m_runAsNonRoot);
  }

  if (m_seccompProfileHasBeenSet) {
    payload.WithObject("seccompProfile", m_seccompProfile.Jsonize());
  }

  if (m_fsGroupHasBeenSet) {
    payload.WithInt64("fsGroup", m_fsGroup);
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
