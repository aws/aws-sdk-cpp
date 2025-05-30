﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListUsersRequest::SerializePayload() const
{
  return {};
}

void ListUsersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userEmailHasBeenSet)
    {
      ss << m_userEmail;
      uri.AddQueryStringParameter("user-email", ss.str());
      ss.str("");
    }

    if(m_userTypeHasBeenSet)
    {
      ss << UserTypeMapper::GetNameForUserType(m_userType);
      uri.AddQueryStringParameter("user-type", ss.str());
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



