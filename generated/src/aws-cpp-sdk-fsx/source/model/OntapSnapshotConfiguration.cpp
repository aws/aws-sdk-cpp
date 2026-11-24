/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/OntapSnapshotConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

OntapSnapshotConfiguration::OntapSnapshotConfiguration(JsonView jsonValue) { *this = jsonValue; }

OntapSnapshotConfiguration& OntapSnapshotConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SizeInMegabytes")) {
    m_sizeInMegabytes = jsonValue.GetInt64("SizeInMegabytes");
    m_sizeInMegabytesHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("UUID")) {
    m_uUID = jsonValue.GetString("UUID");
    m_uUIDHasBeenSet = true;
  }
  return *this;
}

JsonValue OntapSnapshotConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sizeInMegabytesHasBeenSet) {
    payload.WithInt64("SizeInMegabytes", m_sizeInMegabytes);
  }

  if (m_snapmirrorLabelHasBeenSet) {
    payload.WithString("SnapmirrorLabel", m_snapmirrorLabel);
  }

  if (m_expiryTimeHasBeenSet) {
    payload.WithDouble("ExpiryTime", m_expiryTime.SecondsWithMSPrecision());
  }

  if (m_snaplockExpiryTimeHasBeenSet) {
    payload.WithDouble("SnaplockExpiryTime", m_snaplockExpiryTime.SecondsWithMSPrecision());
  }

  if (m_uUIDHasBeenSet) {
    payload.WithString("UUID", m_uUID);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
