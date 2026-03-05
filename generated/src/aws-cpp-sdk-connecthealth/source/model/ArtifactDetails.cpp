/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ArtifactDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

ArtifactDetails::ArtifactDetails(JsonView jsonValue) { *this = jsonValue; }

ArtifactDetails& ArtifactDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputLocation")) {
    m_outputLocation = jsonValue.GetString("outputLocation");
    m_outputLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PostStreamArtifactGenerationStatusMapper::GetPostStreamArtifactGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ArtifactDetails::Jsonize() const {
  JsonValue payload;

  if (m_outputLocationHasBeenSet) {
    payload.WithString("outputLocation", m_outputLocation);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PostStreamArtifactGenerationStatusMapper::GetNameForPostStreamArtifactGenerationStatus(m_status));
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("failureReason", m_failureReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
