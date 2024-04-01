/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssumeQueueRoleForWorkerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssumeQueueRoleForWorkerRequest::AssumeQueueRoleForWorkerRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

Aws::String AssumeQueueRoleForWorkerRequest::SerializePayload() const
{
  return {};
}

void AssumeQueueRoleForWorkerRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_queueIdHasBeenSet)
    {
      ss << m_queueId;
      uri.AddQueryStringParameter("queueId", ss.str());
      ss.str("");
    }

}



