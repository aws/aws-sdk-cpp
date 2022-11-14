/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DeleteDocumentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteDocumentVersionRequest::DeleteDocumentVersionRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_deletePriorVersions(false),
    m_deletePriorVersionsHasBeenSet(false)
{
}

Aws::String DeleteDocumentVersionRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DeleteDocumentVersionRequest::GetRequestSpecificHeaders() const
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

void DeleteDocumentVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deletePriorVersionsHasBeenSet)
    {
      ss << m_deletePriorVersions;
      uri.AddQueryStringParameter("deletePriorVersions", ss.str());
      ss.str("");
    }

}



