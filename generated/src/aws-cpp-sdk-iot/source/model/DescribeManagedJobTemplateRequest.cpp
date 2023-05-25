/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeManagedJobTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeManagedJobTemplateRequest::DescribeManagedJobTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
}

Aws::String DescribeManagedJobTemplateRequest::SerializePayload() const
{
  return {};
}

void DescribeManagedJobTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_templateVersionHasBeenSet)
    {
      ss << m_templateVersion;
      uri.AddQueryStringParameter("templateVersion", ss.str());
      ss.str("");
    }

}



