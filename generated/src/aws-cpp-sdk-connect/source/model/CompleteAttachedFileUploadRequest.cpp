/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CompleteAttachedFileUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CompleteAttachedFileUploadRequest::CompleteAttachedFileUploadRequest() : 
    m_instanceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_associatedResourceArnHasBeenSet(false)
{
}

Aws::String CompleteAttachedFileUploadRequest::SerializePayload() const
{
  return {};
}

void CompleteAttachedFileUploadRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_associatedResourceArnHasBeenSet)
    {
      ss << m_associatedResourceArn;
      uri.AddQueryStringParameter("associatedResourceArn", ss.str());
      ss.str("");
    }

}



