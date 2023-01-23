/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeAddonVersionsRequest::DescribeAddonVersionsRequest() : 
    m_kubernetesVersionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_addonNameHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_publishersHasBeenSet(false),
    m_ownersHasBeenSet(false)
{
}

Aws::String DescribeAddonVersionsRequest::SerializePayload() const
{
  return {};
}

void DescribeAddonVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_kubernetesVersionHasBeenSet)
    {
      ss << m_kubernetesVersion;
      uri.AddQueryStringParameter("kubernetesVersion", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_addonNameHasBeenSet)
    {
      ss << m_addonName;
      uri.AddQueryStringParameter("addonName", ss.str());
      ss.str("");
    }

    if(m_typesHasBeenSet)
    {
      for(const auto& item : m_types)
      {
        ss << item;
        uri.AddQueryStringParameter("types", ss.str());
        ss.str("");
      }
    }

    if(m_publishersHasBeenSet)
    {
      for(const auto& item : m_publishers)
      {
        ss << item;
        uri.AddQueryStringParameter("publishers", ss.str());
        ss.str("");
      }
    }

    if(m_ownersHasBeenSet)
    {
      for(const auto& item : m_owners)
      {
        ss << item;
        uri.AddQueryStringParameter("owners", ss.str());
        ss.str("");
      }
    }

}



