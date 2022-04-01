/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetInAppTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetInAppTemplateRequest::GetInAppTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetInAppTemplateRequest::SerializePayload() const
{
  return {};
}

void GetInAppTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionHasBeenSet)
    {
      ss << m_version;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



