/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FailedBatchAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

FailedBatchAssociationSummary::FailedBatchAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

FailedBatchAssociationSummary& FailedBatchAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedBatchAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
