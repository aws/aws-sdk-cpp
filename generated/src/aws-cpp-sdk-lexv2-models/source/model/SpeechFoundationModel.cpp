/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/SpeechFoundationModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

SpeechFoundationModel::SpeechFoundationModel(JsonView jsonValue) { *this = jsonValue; }

SpeechFoundationModel& SpeechFoundationModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelArn")) {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voiceId")) {
    m_voiceId = jsonValue.GetString("voiceId");
    m_voiceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SpeechFoundationModel::Jsonize() const {
  JsonValue payload;

  if (m_modelArnHasBeenSet) {
    payload.WithString("modelArn", m_modelArn);
  }

  if (m_voiceIdHasBeenSet) {
    payload.WithString("voiceId", m_voiceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
