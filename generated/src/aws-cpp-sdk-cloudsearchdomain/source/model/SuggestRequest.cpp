/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  return {};
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



