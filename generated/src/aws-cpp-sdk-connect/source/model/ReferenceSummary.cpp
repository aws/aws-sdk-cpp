/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ReferenceSummary::ReferenceSummary(JsonView jsonValue) { *this = jsonValue; }

ReferenceSummary& ReferenceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetObject("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attachment")) {
    m_attachment = jsonValue.GetObject("Attachment");
    m_attachmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EmailMessage")) {
    m_emailMessage = jsonValue.GetObject("EmailMessage");
    m_emailMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EmailMessageRedacted")) {
    m_emailMessageRedacted = jsonValue.GetObject("EmailMessageRedacted");
    m_emailMessageRedactedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EmailMessagePlainText")) {
    m_emailMessagePlainText = jsonValue.GetObject("EmailMessagePlainText");
    m_emailMessagePlainTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EmailMessagePlainTextRedacted")) {
    m_emailMessagePlainTextRedacted = jsonValue.GetObject("EmailMessagePlainTextRedacted");
    m_emailMessagePlainTextRedactedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("String")) {
    m_string = jsonValue.GetObject("String");
    m_stringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Number")) {
    m_number = jsonValue.GetObject("Number");
    m_numberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Date")) {
    m_date = jsonValue.GetObject("Date");
    m_dateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Email")) {
    m_email = jsonValue.GetObject("Email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactAnalysis")) {
    m_contactAnalysis = jsonValue.GetObject("ContactAnalysis");
    m_contactAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoicemailRecording")) {
    m_voicemailRecording = jsonValue.GetObject("VoicemailRecording");
    m_voicemailRecordingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoicemailRecordingRedacted")) {
    m_voicemailRecordingRedacted = jsonValue.GetObject("VoicemailRecordingRedacted");
    m_voicemailRecordingRedactedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoicemailAnalysis")) {
    m_voicemailAnalysis = jsonValue.GetObject("VoicemailAnalysis");
    m_voicemailAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoicemailAnalysisRedacted")) {
    m_voicemailAnalysisRedacted = jsonValue.GetObject("VoicemailAnalysisRedacted");
    m_voicemailAnalysisRedactedHasBeenSet = true;
  }
  return *this;
}

JsonValue ReferenceSummary::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithObject("Url", m_url.Jsonize());
  }

  if (m_attachmentHasBeenSet) {
    payload.WithObject("Attachment", m_attachment.Jsonize());
  }

  if (m_emailMessageHasBeenSet) {
    payload.WithObject("EmailMessage", m_emailMessage.Jsonize());
  }

  if (m_emailMessageRedactedHasBeenSet) {
    payload.WithObject("EmailMessageRedacted", m_emailMessageRedacted.Jsonize());
  }

  if (m_emailMessagePlainTextHasBeenSet) {
    payload.WithObject("EmailMessagePlainText", m_emailMessagePlainText.Jsonize());
  }

  if (m_emailMessagePlainTextRedactedHasBeenSet) {
    payload.WithObject("EmailMessagePlainTextRedacted", m_emailMessagePlainTextRedacted.Jsonize());
  }

  if (m_stringHasBeenSet) {
    payload.WithObject("String", m_string.Jsonize());
  }

  if (m_numberHasBeenSet) {
    payload.WithObject("Number", m_number.Jsonize());
  }

  if (m_dateHasBeenSet) {
    payload.WithObject("Date", m_date.Jsonize());
  }

  if (m_emailHasBeenSet) {
    payload.WithObject("Email", m_email.Jsonize());
  }

  if (m_contactAnalysisHasBeenSet) {
    payload.WithObject("ContactAnalysis", m_contactAnalysis.Jsonize());
  }

  if (m_voicemailRecordingHasBeenSet) {
    payload.WithObject("VoicemailRecording", m_voicemailRecording.Jsonize());
  }

  if (m_voicemailRecordingRedactedHasBeenSet) {
    payload.WithObject("VoicemailRecordingRedacted", m_voicemailRecordingRedacted.Jsonize());
  }

  if (m_voicemailAnalysisHasBeenSet) {
    payload.WithObject("VoicemailAnalysis", m_voicemailAnalysis.Jsonize());
  }

  if (m_voicemailAnalysisRedactedHasBeenSet) {
    payload.WithObject("VoicemailAnalysisRedacted", m_voicemailAnalysisRedacted.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
