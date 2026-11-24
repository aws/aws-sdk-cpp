/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrustedAccessResolutionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

TrustedAccessResolutionContext::TrustedAccessResolutionContext(JsonView jsonValue) { *this = jsonValue; }

TrustedAccessResolutionContext& TrustedAccessResolutionContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectArn")) {
    m_projectArn = jsonValue.GetString("projectArn");
    m_projectArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustedAccessResolutionContext::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_projectArnHasBeenSet) {
    payload.WithString("projectArn", m_projectArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
