﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListChannelMembershipsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChannelMembershipsRequest::ListChannelMembershipsRequest() : 
    m_channelArnHasBeenSet(false),
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_chimeBearerHasBeenSet(false)
{
}

Aws::String ListChannelMembershipsRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListChannelMembershipsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_chimeBearerHasBeenSet)
  {
    ss << m_chimeBearer;
    headers.emplace("x-amz-chime-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}

void ListChannelMembershipsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_typeHasBeenSet)
    {
      ss << ChannelMembershipTypeMapper::GetNameForChannelMembershipType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
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



