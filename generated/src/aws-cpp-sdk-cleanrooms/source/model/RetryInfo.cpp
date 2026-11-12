/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/RetryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

RetryInfo::RetryInfo(JsonView jsonValue) { *this = jsonValue; }

RetryInfo& RetryInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("retryable")) {
    m_retryable = jsonValue.GetBool("retryable");
    m_retryableHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryInfo::Jsonize() const {
  JsonValue payload;

  if (m_retryableHasBeenSet) {
    payload.WithBool("retryable", m_retryable);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
