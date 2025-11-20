/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/datazone/model/BatchGetAttributesMetadataRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String BatchGetAttributesMetadataRequest::SerializePayload() const { return {}; }

void BatchGetAttributesMetadataRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_attributeIdentifiersHasBeenSet) {
    for (const auto& item : m_attributeIdentifiers) {
      ss << item;
      uri.AddQueryStringParameter("attributeIdentifier", ss.str());
      ss.str("");
    }
  }

  if (m_entityRevisionHasBeenSet) {
    ss << m_entityRevision;
    uri.AddQueryStringParameter("entityRevision", ss.str());
    ss.str("");
  }
}
