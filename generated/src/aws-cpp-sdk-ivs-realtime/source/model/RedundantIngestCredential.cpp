/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs-realtime/model/RedundantIngestCredential.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ivsrealtime {
namespace Model {

RedundantIngestCredential::RedundantIngestCredential(JsonView jsonValue) { *this = jsonValue; }

RedundantIngestCredential& RedundantIngestCredential::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("participantId")) {
    m_participantId = jsonValue.GetString("participantId");
    m_participantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamKey")) {
    m_streamKey = jsonValue.GetString("streamKey");
    m_streamKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue RedundantIngestCredential::Jsonize() const {
  JsonValue payload;

  if (m_participantIdHasBeenSet) {
    payload.WithString("participantId", m_participantId);
  }

  if (m_streamKeyHasBeenSet) {
    payload.WithString("streamKey", m_streamKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
