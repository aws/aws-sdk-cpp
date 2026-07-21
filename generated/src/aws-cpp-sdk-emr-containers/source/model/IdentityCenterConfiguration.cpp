/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/IdentityCenterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue) { *this = jsonValue; }

IdentityCenterConfiguration& IdentityCenterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableIdentityCenter")) {
    m_enableIdentityCenter = jsonValue.GetBool("enableIdentityCenter");
    m_enableIdentityCenterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identityCenterApplicationAssignmentRequired")) {
    m_identityCenterApplicationAssignmentRequired = jsonValue.GetBool("identityCenterApplicationAssignmentRequired");
    m_identityCenterApplicationAssignmentRequiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identityCenterInstanceARN")) {
    m_identityCenterInstanceARN = jsonValue.GetString("identityCenterInstanceARN");
    m_identityCenterInstanceARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emrIdentityCenterApplicationARN")) {
    m_emrIdentityCenterApplicationARN = jsonValue.GetString("emrIdentityCenterApplicationARN");
    m_emrIdentityCenterApplicationARNHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enableIdentityCenterHasBeenSet) {
    payload.WithBool("enableIdentityCenter", m_enableIdentityCenter);
  }

  if (m_identityCenterApplicationAssignmentRequiredHasBeenSet) {
    payload.WithBool("identityCenterApplicationAssignmentRequired", m_identityCenterApplicationAssignmentRequired);
  }

  if (m_identityCenterInstanceARNHasBeenSet) {
    payload.WithString("identityCenterInstanceARN", m_identityCenterInstanceARN);
  }

  if (m_emrIdentityCenterApplicationARNHasBeenSet) {
    payload.WithString("emrIdentityCenterApplicationARN", m_emrIdentityCenterApplicationARN);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
