/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CIMDPolicySummaryType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

CIMDPolicySummaryType::CIMDPolicySummaryType(JsonView jsonValue) { *this = jsonValue; }

CIMDPolicySummaryType& CIMDPolicySummaryType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CIMDPolicyId")) {
    m_cIMDPolicyId = jsonValue.GetString("CIMDPolicyId");
    m_cIMDPolicyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyName")) {
    m_policyName = jsonValue.GetString("PolicyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CacheDuration")) {
    m_cacheDuration = jsonValue.GetInteger("CacheDuration");
    m_cacheDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationDate")) {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedDate")) {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue CIMDPolicySummaryType::Jsonize() const {
  JsonValue payload;

  if (m_cIMDPolicyIdHasBeenSet) {
    payload.WithString("CIMDPolicyId", m_cIMDPolicyId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("PolicyName", m_policyName);
  }

  if (m_cacheDurationHasBeenSet) {
    payload.WithInteger("CacheDuration", m_cacheDuration);
  }

  if (m_creationDateHasBeenSet) {
    payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if (m_lastModifiedDateHasBeenSet) {
    payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
