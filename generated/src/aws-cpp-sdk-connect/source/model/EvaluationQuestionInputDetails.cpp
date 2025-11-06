/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationQuestionInputDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationQuestionInputDetails::EvaluationQuestionInputDetails(JsonView jsonValue) { *this = jsonValue; }

EvaluationQuestionInputDetails& EvaluationQuestionInputDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TranscriptType")) {
    m_transcriptType = EvaluationTranscriptTypeMapper::GetEvaluationTranscriptTypeForName(jsonValue.GetString("TranscriptType"));
    m_transcriptTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationQuestionInputDetails::Jsonize() const {
  JsonValue payload;

  if (m_transcriptTypeHasBeenSet) {
    payload.WithString("TranscriptType", EvaluationTranscriptTypeMapper::GetNameForEvaluationTranscriptType(m_transcriptType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
