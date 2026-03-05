/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeAudioEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeAudioEvent::MedicalScribeAudioEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeAudioEvent& MedicalScribeAudioEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioChunk")) {
    m_audioChunk = HashingUtils::Base64Decode(jsonValue.GetString("audioChunk"));
    m_audioChunkHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeAudioEvent::Jsonize() const {
  JsonValue payload;

  if (m_audioChunkHasBeenSet) {
    payload.WithString("audioChunk", HashingUtils::Base64Encode(m_audioChunk));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
