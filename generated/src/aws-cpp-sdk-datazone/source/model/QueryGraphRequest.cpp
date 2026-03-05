/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/datazone/model/QueryGraphRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String QueryGraphRequest::SerializePayload() const {
  JsonValue payload;

  if (m_matchHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchJsonList(m_match.size());
    for (unsigned matchIndex = 0; matchIndex < matchJsonList.GetLength(); ++matchIndex) {
      matchJsonList[matchIndex].AsObject(m_match[matchIndex].Jsonize());
    }
    payload.WithArray("match", std::move(matchJsonList));
  }

  if (m_additionalAttributesHasBeenSet) {
    payload.WithObject("additionalAttributes", m_additionalAttributes.Jsonize());
  }

  return payload.View().WriteReadable();
}

void QueryGraphRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
