/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetUtterancesViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetUtterancesViewRequest::GetUtterancesViewRequest() : 
    m_botNameHasBeenSet(false),
    m_botVersionsHasBeenSet(false),
    m_statusType(StatusType::NOT_SET),
    m_statusTypeHasBeenSet(false)
{
}

Aws::String GetUtterancesViewRequest::SerializePayload() const
{
  return {};
}

void GetUtterancesViewRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_botVersionsHasBeenSet)
    {
      for(const auto& item : m_botVersions)
      {
        ss << item;
        uri.AddQueryStringParameter("bot_versions", ss.str());
        ss.str("");
      }
    }

    if(m_statusTypeHasBeenSet)
    {
      ss << StatusTypeMapper::GetNameForStatusType(m_statusType);
      uri.AddQueryStringParameter("status_type", ss.str());
      ss.str("");
    }

}



