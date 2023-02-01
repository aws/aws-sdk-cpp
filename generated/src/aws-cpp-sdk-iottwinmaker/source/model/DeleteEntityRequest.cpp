/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DeleteEntityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteEntityRequest::DeleteEntityRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_isRecursive(false),
    m_isRecursiveHasBeenSet(false)
{
}

Aws::String DeleteEntityRequest::SerializePayload() const
{
  return {};
}

void DeleteEntityRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_isRecursiveHasBeenSet)
    {
      ss << m_isRecursive;
      uri.AddQueryStringParameter("isRecursive", ss.str());
      ss.str("");
    }

}



