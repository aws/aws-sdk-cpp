/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/TraceHeader.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

TraceHeader::TraceHeader(JsonView jsonValue) { *this = jsonValue; }

TraceHeader& TraceHeader::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("XAmznTraceId")) {
    m_xAmznTraceId = jsonValue.GetString("XAmznTraceId");
    m_xAmznTraceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceHeader::Jsonize() const {
  JsonValue payload;

  if (m_xAmznTraceIdHasBeenSet) {
    payload.WithString("XAmznTraceId", m_xAmznTraceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
