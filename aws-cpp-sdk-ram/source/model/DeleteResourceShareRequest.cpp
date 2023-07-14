/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/DeleteResourceShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteResourceShareRequest::DeleteResourceShareRequest() : 
    m_resourceShareArnHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String DeleteResourceShareRequest::SerializePayload() const
{
  return {};
}

void DeleteResourceShareRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceShareArnHasBeenSet)
    {
      ss << m_resourceShareArn;
      uri.AddQueryStringParameter("resourceShareArn", ss.str());
      ss.str("");
    }

    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



