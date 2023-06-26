/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteBotVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteBotVersionRequest::DeleteBotVersionRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_skipResourceInUseCheck(false),
    m_skipResourceInUseCheckHasBeenSet(false)
{
}

Aws::String DeleteBotVersionRequest::SerializePayload() const
{
  return {};
}

void DeleteBotVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_skipResourceInUseCheckHasBeenSet)
    {
      ss << m_skipResourceInUseCheck;
      uri.AddQueryStringParameter("skipResourceInUseCheck", ss.str());
      ss.str("");
    }

}



