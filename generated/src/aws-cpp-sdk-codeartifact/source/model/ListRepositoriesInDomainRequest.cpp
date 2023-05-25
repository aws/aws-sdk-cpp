/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListRepositoriesInDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRepositoriesInDomainRequest::ListRepositoriesInDomainRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_administratorAccountHasBeenSet(false),
    m_repositoryPrefixHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListRepositoriesInDomainRequest::SerializePayload() const
{
  return {};
}

void ListRepositoriesInDomainRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_administratorAccountHasBeenSet)
    {
      ss << m_administratorAccount;
      uri.AddQueryStringParameter("administrator-account", ss.str());
      ss.str("");
    }

    if(m_repositoryPrefixHasBeenSet)
    {
      ss << m_repositoryPrefix;
      uri.AddQueryStringParameter("repository-prefix", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

}



