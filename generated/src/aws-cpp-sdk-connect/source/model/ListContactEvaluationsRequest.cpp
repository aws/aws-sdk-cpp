/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactEvaluationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListContactEvaluationsRequest::ListContactEvaluationsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListContactEvaluationsRequest::SerializePayload() const
{
  return {};
}

void ListContactEvaluationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_contactIdHasBeenSet)
    {
      ss << m_contactId;
      uri.AddQueryStringParameter("contactId", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



