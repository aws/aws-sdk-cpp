/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/SubmissionRequirement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {

SubmissionRequirement::SubmissionRequirement(JsonView jsonValue) { *this = jsonValue; }

SubmissionRequirement& SubmissionRequirement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue SubmissionRequirement::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
