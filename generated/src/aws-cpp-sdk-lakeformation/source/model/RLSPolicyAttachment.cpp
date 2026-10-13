/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/RLSPolicyAttachment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

RLSPolicyAttachment::RLSPolicyAttachment(JsonView jsonValue) { *this = jsonValue; }

RLSPolicyAttachment& RLSPolicyAttachment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyName")) {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Principal")) {
    m_principal = jsonValue.GetObject("Principal");
    m_principalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Resource")) {
    m_resource = jsonValue.GetObject("Resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Condition")) {
    m_condition = jsonValue.GetObject("Condition");
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultRLSPolicy")) {
    m_defaultRLSPolicy = jsonValue.GetBool("DefaultRLSPolicy");
    m_defaultRLSPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue RLSPolicyAttachment::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("PolicyName", m_policyName);
  }

  if (m_principalHasBeenSet) {
    payload.WithObject("Principal", m_principal.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("Resource", m_resource.Jsonize());
  }

  if (m_conditionHasBeenSet) {
    payload.WithObject("Condition", m_condition.Jsonize());
  }

  if (m_defaultRLSPolicyHasBeenSet) {
    payload.WithBool("DefaultRLSPolicy", m_defaultRLSPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
