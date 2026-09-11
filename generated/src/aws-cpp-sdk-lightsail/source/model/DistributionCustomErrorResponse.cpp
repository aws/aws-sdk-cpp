/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/DistributionCustomErrorResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

DistributionCustomErrorResponse::DistributionCustomErrorResponse(JsonView jsonValue) { *this = jsonValue; }

DistributionCustomErrorResponse& DistributionCustomErrorResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetInteger("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseCode")) {
    m_responseCode = jsonValue.GetString("responseCode");
    m_responseCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responsePagePath")) {
    m_responsePagePath = jsonValue.GetString("responsePagePath");
    m_responsePagePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCachingMinTTL")) {
    m_errorCachingMinTTL = jsonValue.GetInt64("errorCachingMinTTL");
    m_errorCachingMinTTLHasBeenSet = true;
  }
  return *this;
}

JsonValue DistributionCustomErrorResponse::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithInteger("errorCode", m_errorCode);
  }

  if (m_responseCodeHasBeenSet) {
    payload.WithString("responseCode", m_responseCode);
  }

  if (m_responsePagePathHasBeenSet) {
    payload.WithString("responsePagePath", m_responsePagePath);
  }

  if (m_errorCachingMinTTLHasBeenSet) {
    payload.WithInt64("errorCachingMinTTL", m_errorCachingMinTTL);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
