﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListEnvironmentProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEnvironmentProfilesRequest::ListEnvironmentProfilesRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_awsAccountRegionHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_environmentBlueprintIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_projectIdentifierHasBeenSet(false)
{
}

Aws::String ListEnvironmentProfilesRequest::SerializePayload() const
{
  return {};
}

void ListEnvironmentProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_awsAccountIdHasBeenSet)
    {
      ss << m_awsAccountId;
      uri.AddQueryStringParameter("awsAccountId", ss.str());
      ss.str("");
    }

    if(m_awsAccountRegionHasBeenSet)
    {
      ss << m_awsAccountRegion;
      uri.AddQueryStringParameter("awsAccountRegion", ss.str());
      ss.str("");
    }

    if(m_environmentBlueprintIdentifierHasBeenSet)
    {
      ss << m_environmentBlueprintIdentifier;
      uri.AddQueryStringParameter("environmentBlueprintIdentifier", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_projectIdentifierHasBeenSet)
    {
      ss << m_projectIdentifier;
      uri.AddQueryStringParameter("projectIdentifier", ss.str());
      ss.str("");
    }

}



