/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateCustomMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateCustomMetadataRequest::CreateCustomMetadataRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_customMetadataHasBeenSet(false)
{
}

Aws::String CreateCustomMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customMetadataHasBeenSet)
  {
   JsonValue customMetadataJsonMap;
   for(auto& customMetadataItem : m_customMetadata)
   {
     customMetadataJsonMap.WithString(customMetadataItem.first, customMetadataItem.second);
   }
   payload.WithObject("CustomMetadata", std::move(customMetadataJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomMetadataRequest::GetRequestSpecificHeaders() const
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

void CreateCustomMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionIdHasBeenSet)
    {
      ss << m_versionId;
      uri.AddQueryStringParameter("versionid", ss.str());
      ss.str("");
    }

}



