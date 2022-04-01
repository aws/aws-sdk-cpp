/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteUtterancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteUtterancesRequest::DeleteUtterancesRequest() : 
    m_botIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String DeleteUtterancesRequest::SerializePayload() const
{
  return {};
}

void DeleteUtterancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_localeIdHasBeenSet)
    {
      ss << m_localeId;
      uri.AddQueryStringParameter("localeId", ss.str());
      ss.str("");
    }

    if(m_sessionIdHasBeenSet)
    {
      ss << m_sessionId;
      uri.AddQueryStringParameter("sessionId", ss.str());
      ss.str("");
    }

}



