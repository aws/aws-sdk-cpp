/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListAuditFindingsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAuditFindingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_auditorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> auditorsJsonList(m_auditors.size());
    for (unsigned auditorsIndex = 0; auditorsIndex < auditorsJsonList.GetLength(); ++auditorsIndex) {
      auditorsJsonList[auditorsIndex].AsString(m_auditors[auditorsIndex]);
    }
    payload.WithArray("Auditors", std::move(auditorsJsonList));
  }

  if (m_auditTargetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> auditTargetsJsonList(m_auditTargets.size());
    for (unsigned auditTargetsIndex = 0; auditTargetsIndex < auditTargetsJsonList.GetLength(); ++auditTargetsIndex) {
      auditTargetsJsonList[auditTargetsIndex].AsObject(m_auditTargets[auditTargetsIndex].Jsonize());
    }
    payload.WithArray("AuditTargets", std::move(auditTargetsJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

void ListAuditFindingsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_startTimeHasBeenSet) {
    ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("StartTime", ss.str());
    ss.str("");
  }

  if (m_endTimeHasBeenSet) {
    ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("EndTime", ss.str());
    ss.str("");
  }
}
