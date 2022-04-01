/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListPackageVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPackageVersionsRequest::ListPackageVersionsRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sortBy(PackageVersionSortType::NOT_SET),
    m_sortByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListPackageVersionsRequest::SerializePayload() const
{
  return {};
}

void ListPackageVersionsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_formatHasBeenSet)
    {
      ss << PackageFormatMapper::GetNameForPackageFormat(m_format);
      uri.AddQueryStringParameter("format", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_packageHasBeenSet)
    {
      ss << m_package;
      uri.AddQueryStringParameter("package", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_sortByHasBeenSet)
    {
      ss << PackageVersionSortTypeMapper::GetNameForPackageVersionSortType(m_sortBy);
      uri.AddQueryStringParameter("sortBy", ss.str());
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



