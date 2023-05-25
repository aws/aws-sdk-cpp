/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteJobExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteJobExecutionRequest::DeleteJobExecutionRequest() : 
    m_jobIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
}

Aws::String DeleteJobExecutionRequest::SerializePayload() const
{
  return {};
}

void DeleteJobExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceHasBeenSet)
    {
      ss << m_force;
      uri.AddQueryStringParameter("force", ss.str());
      ss.str("");
    }

    if(m_namespaceIdHasBeenSet)
    {
      ss << m_namespaceId;
      uri.AddQueryStringParameter("namespaceId", ss.str());
      ss.str("");
    }

}



