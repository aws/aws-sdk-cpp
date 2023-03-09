/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PublishPackageVersionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PublishPackageVersionRequest::PublishPackageVersionRequest() : 
    m_domainHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetSHA256HasBeenSet(false),
    m_unfinished(false),
    m_unfinishedHasBeenSet(false)
{
}


void PublishPackageVersionRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_packageVersionHasBeenSet)
    {
      ss << m_packageVersion;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

    if(m_assetNameHasBeenSet)
    {
      ss << m_assetName;
      uri.AddQueryStringParameter("asset", ss.str());
      ss.str("");
    }

    if(m_unfinishedHasBeenSet)
    {
      ss << m_unfinished;
      uri.AddQueryStringParameter("unfinished", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection PublishPackageVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_assetSHA256HasBeenSet)
  {
    ss << m_assetSHA256;
    headers.emplace("x-amz-content-sha256",  ss.str());
    ss.str("");
  }

  return headers;

}
