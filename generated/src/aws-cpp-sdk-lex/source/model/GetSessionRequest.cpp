/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/GetSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSessionRequest::GetSessionRequest() : 
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_checkpointLabelFilterHasBeenSet(false)
{
}

Aws::String GetSessionRequest::SerializePayload() const
{
  return {};
}

void GetSessionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_checkpointLabelFilterHasBeenSet)
    {
      ss << m_checkpointLabelFilter;
      uri.AddQueryStringParameter("checkpointLabelFilter", ss.str());
      ss.str("");
    }

}



