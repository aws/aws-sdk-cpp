/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateOntapSnapshotConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

CreateOntapSnapshotConfiguration::CreateOntapSnapshotConfiguration(JsonView jsonValue) { *this = jsonValue; }

CreateOntapSnapshotConfiguration& CreateOntapSnapshotConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SnapmirrorLabel")) {
    m_snapmirrorLabel = jsonValue.GetString("SnapmirrorLabel");
    m_snapmirrorLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiryTime")) {
    m_expiryTime = jsonValue.GetDouble("ExpiryTime");
    m_expiryTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnaplockExpiryTime")) {
    m_snaplockExpiryTime = jsonValue.GetDouble("SnaplockExpiryTime");
    m_snaplockExpiryTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateOntapSnapshotConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_snapmirrorLabelHasBeenSet) {
    payload.WithString("SnapmirrorLabel", m_snapmirrorLabel);
  }

  if (m_expiryTimeHasBeenSet) {
    payload.WithDouble("ExpiryTime", m_expiryTime.SecondsWithMSPrecision());
  }

  if (m_snaplockExpiryTimeHasBeenSet) {
    payload.WithDouble("SnaplockExpiryTime", m_snaplockExpiryTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
