/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonTimestampsRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String JsonTimestampsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_normalHasBeenSet) {
    payload.WithDouble("normal", m_normal.SecondsWithMSPrecision());
  }

  if (m_dateTimeHasBeenSet) {
    payload.WithString("dateTime", m_dateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_dateTimeOnTargetHasBeenSet) {
    payload.WithString("dateTimeOnTarget", m_dateTimeOnTarget.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_epochSecondsHasBeenSet) {
    payload.WithDouble("epochSeconds", m_epochSeconds.SecondsWithMSPrecision());
  }

  if (m_epochSecondsOnTargetHasBeenSet) {
    payload.WithDouble("epochSecondsOnTarget", m_epochSecondsOnTarget.SecondsWithMSPrecision());
  }

  if (m_httpDateHasBeenSet) {
    payload.WithString("httpDate", m_httpDate.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if (m_httpDateOnTargetHasBeenSet) {
    payload.WithString("httpDateOnTarget", m_httpDateOnTarget.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection JsonTimestampsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
