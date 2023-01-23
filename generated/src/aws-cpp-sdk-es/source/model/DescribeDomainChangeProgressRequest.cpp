/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeDomainChangeProgressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeDomainChangeProgressRequest::DescribeDomainChangeProgressRequest() : 
    m_domainNameHasBeenSet(false),
    m_changeIdHasBeenSet(false)
{
}

Aws::String DescribeDomainChangeProgressRequest::SerializePayload() const
{
  return {};
}

void DescribeDomainChangeProgressRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_changeIdHasBeenSet)
    {
      ss << m_changeId;
      uri.AddQueryStringParameter("changeid", ss.str());
      ss.str("");
    }

}



