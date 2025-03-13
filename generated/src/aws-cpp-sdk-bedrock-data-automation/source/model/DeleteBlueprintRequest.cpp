/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DeleteBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteBlueprintRequest::SerializePayload() const
{
  return {};
}

void DeleteBlueprintRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_blueprintVersionHasBeenSet)
    {
      ss << m_blueprintVersion;
      uri.AddQueryStringParameter("blueprintVersion", ss.str());
      ss.str("");
    }

}



