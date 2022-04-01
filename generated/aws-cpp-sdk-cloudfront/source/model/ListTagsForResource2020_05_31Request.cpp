/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListTagsForResource2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTagsForResource2020_05_31Request::ListTagsForResource2020_05_31Request() : 
    m_resourceHasBeenSet(false)
{
}

Aws::String ListTagsForResource2020_05_31Request::SerializePayload() const
{
  return {};
}

void ListTagsForResource2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceHasBeenSet)
    {
      ss << m_resource;
      uri.AddQueryStringParameter("Resource", ss.str());
      ss.str("");
    }

}

