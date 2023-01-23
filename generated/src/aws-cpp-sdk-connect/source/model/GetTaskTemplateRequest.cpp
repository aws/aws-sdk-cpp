/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetTaskTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetTaskTemplateRequest::GetTaskTemplateRequest() : 
    m_instanceIdHasBeenSet(false),
    m_taskTemplateIdHasBeenSet(false),
    m_snapshotVersionHasBeenSet(false)
{
}

Aws::String GetTaskTemplateRequest::SerializePayload() const
{
  return {};
}

void GetTaskTemplateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_snapshotVersionHasBeenSet)
    {
      ss << m_snapshotVersion;
      uri.AddQueryStringParameter("snapshotVersion", ss.str());
      ss.str("");
    }

}



