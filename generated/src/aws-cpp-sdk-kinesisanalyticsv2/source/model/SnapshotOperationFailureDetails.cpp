/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationFailureDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotOperationFailureDetails::SnapshotOperationFailureDetails(JsonView jsonValue) { *this = jsonValue; }

SnapshotOperationFailureDetails& SnapshotOperationFailureDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ErrorInfo")) {
    m_errorInfo = jsonValue.GetObject("ErrorInfo");
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotOperationFailureDetails::Jsonize() const {
  JsonValue payload;

  if (m_errorInfoHasBeenSet) {
    payload.WithObject("ErrorInfo", m_errorInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
