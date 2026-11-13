/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/LambdaFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

LambdaFunction::LambdaFunction(JsonView jsonValue) { *this = jsonValue; }

LambdaFunction& LambdaFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionName")) {
    m_functionName = jsonValue.GetString("functionName");
    m_functionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("functionVersion")) {
    m_functionVersion = jsonValue.GetString("functionVersion");
    m_functionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionId")) {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfigurationSummary")) {
    m_vpcConfigurationSummary = jsonValue.GetString("vpcConfigurationSummary");
    m_vpcConfigurationSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaFunction::Jsonize() const {
  JsonValue payload;

  if (m_functionNameHasBeenSet) {
    payload.WithString("functionName", m_functionName);
  }

  if (m_functionArnHasBeenSet) {
    payload.WithString("functionArn", m_functionArn);
  }

  if (m_functionVersionHasBeenSet) {
    payload.WithString("functionVersion", m_functionVersion);
  }

  if (m_roleHasBeenSet) {
    payload.WithString("role", m_role);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_revisionIdHasBeenSet) {
    payload.WithString("revisionId", m_revisionId);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_vpcConfigurationSummaryHasBeenSet) {
    payload.WithString("vpcConfigurationSummary", m_vpcConfigurationSummary);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
