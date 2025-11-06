/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSuggestedAnswerTranscriptMillisecondOffsets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationSuggestedAnswerTranscriptMillisecondOffsets::EvaluationSuggestedAnswerTranscriptMillisecondOffsets(JsonView jsonValue) {
  *this = jsonValue;
}

EvaluationSuggestedAnswerTranscriptMillisecondOffsets& EvaluationSuggestedAnswerTranscriptMillisecondOffsets::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("BeginOffsetMillis")) {
    m_beginOffsetMillis = jsonValue.GetInteger("BeginOffsetMillis");
    m_beginOffsetMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationSuggestedAnswerTranscriptMillisecondOffsets::Jsonize() const {
  JsonValue payload;

  if (m_beginOffsetMillisHasBeenSet) {
    payload.WithInteger("BeginOffsetMillis", m_beginOffsetMillis);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
