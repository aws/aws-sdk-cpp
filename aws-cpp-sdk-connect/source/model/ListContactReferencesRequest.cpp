/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactReferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListContactReferencesRequest::ListContactReferencesRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_referenceTypesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListContactReferencesRequest::SerializePayload() const
{
  return {};
}

void ListContactReferencesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_referenceTypesHasBeenSet)
    {
      for(const auto& item : m_referenceTypes)
      {
        ss << ReferenceTypeMapper::GetNameForReferenceType(item);
        uri.AddQueryStringParameter("referenceTypes", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



