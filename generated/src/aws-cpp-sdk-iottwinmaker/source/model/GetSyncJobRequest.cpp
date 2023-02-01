/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetSyncJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSyncJobRequest::GetSyncJobRequest() : 
    m_syncSourceHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String GetSyncJobRequest::SerializePayload() const
{
  return {};
}

void GetSyncJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workspaceIdHasBeenSet)
    {
      ss << m_workspaceId;
      uri.AddQueryStringParameter("workspace", ss.str());
      ss.str("");
    }

}



