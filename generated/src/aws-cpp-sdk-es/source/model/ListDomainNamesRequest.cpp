/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListDomainNamesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDomainNamesRequest::ListDomainNamesRequest() : 
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false)
{
}

Aws::String ListDomainNamesRequest::SerializePayload() const
{
  return {};
}

void ListDomainNamesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_engineTypeHasBeenSet)
    {
      ss << EngineTypeMapper::GetNameForEngineType(m_engineType);
      uri.AddQueryStringParameter("engineType", ss.str());
      ss.str("");
    }

}



