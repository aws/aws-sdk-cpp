/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteWorkspaceMediaRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteWorkspaceMediaRequest::SerializePayload() const { return {}; }

void DeleteWorkspaceMediaRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_mediaTypeHasBeenSet) {
    ss << MediaTypeMapper::GetNameForMediaType(m_mediaType);
    uri.AddQueryStringParameter("mediaType", ss.str());
    ss.str("");
  }
}
