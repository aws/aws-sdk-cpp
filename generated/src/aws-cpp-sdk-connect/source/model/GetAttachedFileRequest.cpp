/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetAttachedFileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAttachedFileRequest::GetAttachedFileRequest() : 
    m_instanceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_urlExpiryInSeconds(0),
    m_urlExpiryInSecondsHasBeenSet(false),
    m_associatedResourceArnHasBeenSet(false)
{
}

Aws::String GetAttachedFileRequest::SerializePayload() const
{
  return {};
}

void GetAttachedFileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_urlExpiryInSecondsHasBeenSet)
    {
      ss << m_urlExpiryInSeconds;
      uri.AddQueryStringParameter("urlExpiryInSeconds", ss.str());
      ss.str("");
    }

    if(m_associatedResourceArnHasBeenSet)
    {
      ss << m_associatedResourceArn;
      uri.AddQueryStringParameter("associatedResourceArn", ss.str());
      ss.str("");
    }

}



