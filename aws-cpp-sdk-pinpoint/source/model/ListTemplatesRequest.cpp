/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/ListTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTemplatesRequest::ListTemplatesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_templateTypeHasBeenSet(false)
{
}

Aws::String ListTemplatesRequest::SerializePayload() const
{
  return {};
}

void ListTemplatesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("page-size", ss.str());
      ss.str("");
    }

    if(m_prefixHasBeenSet)
    {
      ss << m_prefix;
      uri.AddQueryStringParameter("prefix", ss.str());
      ss.str("");
    }

    if(m_templateTypeHasBeenSet)
    {
      ss << m_templateType;
      uri.AddQueryStringParameter("template-type", ss.str());
      ss.str("");
    }

}



