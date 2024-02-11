/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetListingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetListingRequest::GetListingRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_listingRevisionHasBeenSet(false)
{
}

Aws::String GetListingRequest::SerializePayload() const
{
  return {};
}

void GetListingRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_listingRevisionHasBeenSet)
    {
      ss << m_listingRevision;
      uri.AddQueryStringParameter("listingRevision", ss.str());
      ss.str("");
    }

}



