/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/model/SuggestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SuggestRequest::SuggestRequest() : 
    m_queryHasBeenSet(false),
    m_suggesterHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

Aws::String SuggestRequest::SerializePayload() const
{
  return "";
}

void SuggestRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_queryHasBeenSet)
    {
      ss << m_query;
      uri.AddQueryStringParameter("q", ss.str());
      ss.str("");
    }

    if(m_suggesterHasBeenSet)
    {
      ss << m_suggester;
      uri.AddQueryStringParameter("suggester", ss.str());
      ss.str("");
    }

    if(m_sizeHasBeenSet)
    {
      ss << m_size;
      uri.AddQueryStringParameter("size", ss.str());
      ss.str("");
    }

}


