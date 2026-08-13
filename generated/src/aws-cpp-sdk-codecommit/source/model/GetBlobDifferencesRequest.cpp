/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetBlobDifferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBlobDifferencesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_repositoryNameHasBeenSet) {
    payload.WithString("repositoryName", m_repositoryName);
  }

  if (m_afterBlobIdHasBeenSet) {
    payload.WithString("afterBlobId", m_afterBlobId);
  }

  if (m_beforeBlobIdHasBeenSet) {
    payload.WithString("beforeBlobId", m_beforeBlobId);
  }

  if (m_contextLinesHasBeenSet) {
    payload.WithInteger("contextLines", m_contextLines);
  }

  if (m_ignoreWhitespaceHasBeenSet) {
    payload.WithBool("ignoreWhitespace", m_ignoreWhitespace);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBlobDifferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetBlobDifferences"));
  return headers;
}
