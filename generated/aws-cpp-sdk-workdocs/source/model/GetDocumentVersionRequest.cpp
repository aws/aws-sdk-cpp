/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetDocumentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDocumentVersionRequest::GetDocumentVersionRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_includeCustomMetadata(false),
    m_includeCustomMetadataHasBeenSet(false)
{
}

Aws::String GetDocumentVersionRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetDocumentVersionRequest::GetRequestSpecificHeaders() const
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

void GetDocumentVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fieldsHasBeenSet)
    {
      ss << m_fields;
      uri.AddQueryStringParameter("fields", ss.str());
      ss.str("");
    }

    if(m_includeCustomMetadataHasBeenSet)
    {
      ss << m_includeCustomMetadata;
      uri.AddQueryStringParameter("includeCustomMetadata", ss.str());
      ss.str("");
    }

}



