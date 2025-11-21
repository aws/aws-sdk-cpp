/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ImageSigningStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ImageSigningStatus::ImageSigningStatus(JsonView jsonValue) { *this = jsonValue; }

ImageSigningStatus& ImageSigningStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("signingProfileArn")) {
    m_signingProfileArn = jsonValue.GetString("signingProfileArn");
    m_signingProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCode")) {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SigningStatusMapper::GetSigningStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSigningStatus::Jsonize() const {
  JsonValue payload;

  if (m_signingProfileArnHasBeenSet) {
    payload.WithString("signingProfileArn", m_signingProfileArn);
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("failureCode", m_failureCode);
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SigningStatusMapper::GetNameForSigningStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
