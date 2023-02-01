/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteExtensionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteExtensionRequest::DeleteExtensionRequest() : 
    m_extensionIdentifierHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String DeleteExtensionRequest::SerializePayload() const
{
  return {};
}

void DeleteExtensionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionNumberHasBeenSet)
    {
      ss << m_versionNumber;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



