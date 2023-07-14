/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteOTAUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteOTAUpdateRequest::DeleteOTAUpdateRequest() : 
    m_otaUpdateIdHasBeenSet(false),
    m_deleteStream(false),
    m_deleteStreamHasBeenSet(false),
    m_forceDeleteAWSJob(false),
    m_forceDeleteAWSJobHasBeenSet(false)
{
}

Aws::String DeleteOTAUpdateRequest::SerializePayload() const
{
  return {};
}

void DeleteOTAUpdateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deleteStreamHasBeenSet)
    {
      ss << m_deleteStream;
      uri.AddQueryStringParameter("deleteStream", ss.str());
      ss.str("");
    }

    if(m_forceDeleteAWSJobHasBeenSet)
    {
      ss << m_forceDeleteAWSJob;
      uri.AddQueryStringParameter("forceDeleteAWSJob", ss.str());
      ss.str("");
    }

}



