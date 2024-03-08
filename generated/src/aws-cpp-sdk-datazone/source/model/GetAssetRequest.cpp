/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAssetRequest::GetAssetRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

Aws::String GetAssetRequest::SerializePayload() const
{
  return {};
}

void GetAssetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_revisionHasBeenSet)
    {
      ss << m_revision;
      uri.AddQueryStringParameter("revision", ss.str());
      ss.str("");
    }

}



