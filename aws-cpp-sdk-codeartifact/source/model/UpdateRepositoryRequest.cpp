/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/UpdateRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateRepositoryRequest::UpdateRepositoryRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_upstreamsHasBeenSet(false)
{
}

Aws::String UpdateRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_upstreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> upstreamsJsonList(m_upstreams.size());
   for(unsigned upstreamsIndex = 0; upstreamsIndex < upstreamsJsonList.GetLength(); ++upstreamsIndex)
   {
     upstreamsJsonList[upstreamsIndex].AsObject(m_upstreams[upstreamsIndex].Jsonize());
   }
   payload.WithArray("upstreams", std::move(upstreamsJsonList));

  }

  return payload.View().WriteReadable();
}

void UpdateRepositoryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainHasBeenSet)
    {
      ss << m_domain;
      uri.AddQueryStringParameter("domain", ss.str());
      ss.str("");
    }

    if(m_domainOwnerHasBeenSet)
    {
      ss << m_domainOwner;
      uri.AddQueryStringParameter("domain-owner", ss.str());
      ss.str("");
    }

    if(m_repositoryHasBeenSet)
    {
      ss << m_repository;
      uri.AddQueryStringParameter("repository", ss.str());
      ss.str("");
    }

}



