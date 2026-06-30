/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteExperimentDefinitionRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteExperimentDefinitionRequest::SerializePayload() const { return {}; }

void DeleteExperimentDefinitionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_deleteTypeHasBeenSet) {
    ss << DeleteTypeMapper::GetNameForDeleteType(m_deleteType);
    uri.AddQueryStringParameter("delete_type", ss.str());
    ss.str("");
  }
}
