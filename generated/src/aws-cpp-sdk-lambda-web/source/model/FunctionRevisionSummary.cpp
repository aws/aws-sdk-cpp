/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/FunctionRevisionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

FunctionRevisionSummary::FunctionRevisionSummary(JsonView jsonValue) { *this = jsonValue; }

FunctionRevisionSummary& FunctionRevisionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("revisionArn")) {
    m_revisionArn = jsonValue.GetString("revisionArn");
    m_revisionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionId")) {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RevisionStateMapper::GetRevisionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionRevisionSummary::Jsonize() const {
  JsonValue payload;

  if (m_revisionArnHasBeenSet) {
    payload.WithString("revisionArn", m_revisionArn);
  }

  if (m_revisionIdHasBeenSet) {
    payload.WithString("revisionId", m_revisionId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RevisionStateMapper::GetNameForRevisionState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
