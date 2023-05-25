/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/RemovePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

RemovePermissionRequest::RemovePermissionRequest() : 
    m_actionGroup(ActionGroup::NOT_SET),
    m_actionGroupHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String RemovePermissionRequest::SerializePayload() const
{
  return {};
}

void RemovePermissionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_revisionIdHasBeenSet)
    {
      ss << m_revisionId;
      uri.AddQueryStringParameter("revisionId", ss.str());
      ss.str("");
    }

}



