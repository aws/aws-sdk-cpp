/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/datazone/model/GetMetadataGenerationRunRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetMetadataGenerationRunRequest::SerializePayload() const { return {}; }

void GetMetadataGenerationRunRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_typeHasBeenSet) {
    ss << MetadataGenerationRunTypeMapper::GetNameForMetadataGenerationRunType(m_type);
    uri.AddQueryStringParameter("type", ss.str());
    ss.str("");
  }
}
