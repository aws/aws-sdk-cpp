/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetFolderPathRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetFolderPathRequest::GetFolderPathRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String GetFolderPathRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetFolderPathRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetFolderPathRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_fieldsHasBeenSet)
    {
      ss << m_fields;
      uri.AddQueryStringParameter("fields", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

}



