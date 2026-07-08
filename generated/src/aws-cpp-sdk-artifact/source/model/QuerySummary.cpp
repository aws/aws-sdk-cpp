/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/QuerySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

QuerySummary::QuerySummary(JsonView jsonValue) { *this = jsonValue; }

QuerySummary& QuerySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryIdentifier")) {
    m_queryIdentifier = jsonValue.GetInteger("queryIdentifier");
    m_queryIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("query")) {
    m_query = jsonValue.GetString("query");
    m_queryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("response")) {
    m_response = jsonValue.GetString("response");
    m_responseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reviewType")) {
    m_reviewType = ReviewTypeMapper::GetReviewTypeForName(jsonValue.GetString("reviewType"));
    m_reviewTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("citations")) {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = QueryStatusMessageMapper::GetQueryStatusMessageForName(jsonValue.GetString("statusMessage"));
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedResponseVersions")) {
    Aws::Utils::Array<JsonView> updatedResponseVersionsJsonList = jsonValue.GetArray("updatedResponseVersions");
    for (unsigned updatedResponseVersionsIndex = 0; updatedResponseVersionsIndex < updatedResponseVersionsJsonList.GetLength();
         ++updatedResponseVersionsIndex) {
      m_updatedResponseVersions.push_back(updatedResponseVersionsJsonList[updatedResponseVersionsIndex].AsObject());
    }
    m_updatedResponseVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue QuerySummary::Jsonize() const {
  JsonValue payload;

  if (m_queryIdentifierHasBeenSet) {
    payload.WithInteger("queryIdentifier", m_queryIdentifier);
  }

  if (m_queryHasBeenSet) {
    payload.WithString("query", m_query);
  }

  if (m_responseHasBeenSet) {
    payload.WithString("response", m_response);
  }

  if (m_reviewTypeHasBeenSet) {
    payload.WithString("reviewType", ReviewTypeMapper::GetNameForReviewType(m_reviewType));
  }

  if (m_citationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
    }
    payload.WithArray("citations", std::move(citationsJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", QueryStatusMapper::GetNameForQueryStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", QueryStatusMessageMapper::GetNameForQueryStatusMessage(m_statusMessage));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedResponseVersionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> updatedResponseVersionsJsonList(m_updatedResponseVersions.size());
    for (unsigned updatedResponseVersionsIndex = 0; updatedResponseVersionsIndex < updatedResponseVersionsJsonList.GetLength();
         ++updatedResponseVersionsIndex) {
      updatedResponseVersionsJsonList[updatedResponseVersionsIndex].AsObject(
          m_updatedResponseVersions[updatedResponseVersionsIndex].Jsonize());
    }
    payload.WithArray("updatedResponseVersions", std::move(updatedResponseVersionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
