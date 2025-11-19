/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/EbsSnapshotDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

EbsSnapshotDetails::EbsSnapshotDetails(JsonView jsonValue) { *this = jsonValue; }

EbsSnapshotDetails& EbsSnapshotDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("snapshotArn")) {
    m_snapshotArn = jsonValue.GetString("snapshotArn");
    m_snapshotArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EbsSnapshotDetails::Jsonize() const {
  JsonValue payload;

  if (m_snapshotArnHasBeenSet) {
    payload.WithString("snapshotArn", m_snapshotArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
