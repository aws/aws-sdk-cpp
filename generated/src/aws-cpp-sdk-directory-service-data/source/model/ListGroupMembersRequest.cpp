/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/ListGroupMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListGroupMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_memberRealmHasBeenSet)
  {
   payload.WithString("MemberRealm", m_memberRealm);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_realmHasBeenSet)
  {
   payload.WithString("Realm", m_realm);

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  return payload.View().WriteReadable();
}

void ListGroupMembersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_directoryIdHasBeenSet)
    {
      ss << m_directoryId;
      uri.AddQueryStringParameter("DirectoryId", ss.str());
      ss.str("");
    }

}



