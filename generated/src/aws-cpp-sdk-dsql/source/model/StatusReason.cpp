/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/StatusReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {

StatusReason::StatusReason(JsonView jsonValue) { *this = jsonValue; }

StatusReason& StatusReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("error")) {
    m_error = StreamFailureErrorCodeMapper::GetStreamFailureErrorCodeForName(jsonValue.GetString("error"));
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusReason::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithString("error", StreamFailureErrorCodeMapper::GetNameForStreamFailureErrorCode(m_error));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
