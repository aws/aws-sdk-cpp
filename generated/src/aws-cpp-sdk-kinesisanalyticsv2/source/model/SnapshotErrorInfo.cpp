/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotErrorInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotErrorInfo::SnapshotErrorInfo(JsonView jsonValue) { *this = jsonValue; }

SnapshotErrorInfo& SnapshotErrorInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorString")) {
    m_errorString = jsonValue.GetString("ErrorString");
    m_errorStringHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotErrorInfo::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorStringHasBeenSet) {
    payload.WithString("ErrorString", m_errorString);
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
