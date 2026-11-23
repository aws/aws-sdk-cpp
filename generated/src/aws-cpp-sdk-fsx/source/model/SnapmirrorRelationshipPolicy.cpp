/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorRelationshipPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorRelationshipPolicy::SnapmirrorRelationshipPolicy(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorRelationshipPolicy& SnapmirrorRelationshipPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PolicyId")) {
    m_policyId = jsonValue.GetString("PolicyId");
    m_policyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyName")) {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorRelationshipPolicy::Jsonize() const {
  JsonValue payload;

  if (m_policyIdHasBeenSet) {
    payload.WithString("PolicyId", m_policyId);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("PolicyName", m_policyName);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
