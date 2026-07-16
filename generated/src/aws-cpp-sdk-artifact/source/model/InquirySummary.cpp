/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquirySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

InquirySummary::InquirySummary(JsonView jsonValue) { *this = jsonValue; }

InquirySummary& InquirySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = InquiryStatusMapper::GetInquiryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = InquiryStatusMessageMapper::GetInquiryStatusMessageForName(jsonValue.GetString("statusMessage"));
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSource")) {
    m_inputSource = InputSourceMapper::GetInputSourceForName(jsonValue.GetString("inputSource"));
    m_inputSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue InquirySummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", InquiryStatusMapper::GetNameForInquiryStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", InquiryStatusMessageMapper::GetNameForInquiryStatusMessage(m_statusMessage));
  }

  if (m_inputSourceHasBeenSet) {
    payload.WithString("inputSource", InputSourceMapper::GetNameForInputSource(m_inputSource));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
